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

public://メンバ関数

	void Update();

private://メンバ関数、Updateで呼ぶのでprivateにしてる
	//接近
	void Approach();
	void Shot();

	//離脱
	void Leave();

private:
	static void(Enemy::* FuncTable[])();
	Phase phase_ = Phase::kApproach;
	bool GameLoop = true;
};

