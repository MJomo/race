// CXPickupItem.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CXPickupItem.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UParticleSystem;
class USoundBase;
class ACXPlayerState;

/**
 *  Base class for all pickup items (Coin, Speed Buff, ...).
 *  Handles overlap detection, reward granting (via subclass), and
 *  the destroy VFX/SFX that plays for every connected client.
 *
 *  NetUpdateFrequency is set low (1) since these items are static
 *  and only need to notify clients when they spawn/are destroyed.
 */
UCLASS(Abstract)
class CX_API ACXPickupItem : public AActor
{
	GENERATED_BODY()

public:
	ACXPickupItem();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** 아이템 메쉬 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CX|Item", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> ItemMesh;

	/** 오버랩 감지용 콜리전 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CX|Item", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> CollisionSphere;

	/** 획득(파괴) 시 재생할 파티클 */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Item")
	TObjectPtr<UParticleSystem> PickupParticle;

	/** 획득(파괴) 시 재생할 사운드 */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Item")
	TObjectPtr<USoundBase> PickupSound;

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/** 실제 보상 지급 로직. 서브클래스(Coin / SpeedBuff)에서 구현한다. */
	virtual void GrantReward(ACXPlayerState* PlayerState) PURE_VIRTUAL(ACXPickupItem::GrantReward, );

	/** true면 게임이 Playing 상태일 때만 아이템을 획득할 수 있다. */
	UPROPERTY(EditAnywhere, Category = "CX|Item")
	bool bOnlyGrantWhilePlaying = true;

	/** 서버 전용: 이미 획득 처리된 아이템인지 (한 프레임에 여러 컴포넌트가 오버랩돼도 중복 지급되지 않도록) */
	bool bConsumed = false;
};
