#pragma once
class Enemy
{
private://enum class

	enum class Phase
	{
		kApproach,
		kShot,
		kLeave
	};

public://�����o�֐�

	void Update();

private://�����o�֐��AUpdate�ŌĂԂ̂�private�ɂ��Ă�
	//�ڋ�
	void Approach();
	void Shot();

	//���E
	void Leave();

private:
	static void(Enemy::* FuncTable[])();
	Phase phase_ = Phase::kApproach;
	bool GameLoop = true;
};

