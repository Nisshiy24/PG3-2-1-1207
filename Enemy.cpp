#include "Enemy.h"
#include <stdio.h>


void(Enemy::* Enemy::FuncTable[])() = {
	&Enemy::Approach,
	& Enemy::Shot,
	&Enemy::Leave
	
};





void Enemy::Update() {
	(this->*FuncTable[static_cast<size_t>(phase_)])();
}


void Enemy::Approach()
{
	printf("�ڋ�");
	phase_ = Phase::kShot;

}


void Enemy::Shot()
{

	printf("�ˌ�");
	phase_ = Phase::kLeave;
}


void Enemy::Leave()
{
	printf("���E");

}
