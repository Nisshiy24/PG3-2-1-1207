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

public://ƒƒ“ƒoŠÖ”

	void Update();

private://ƒƒ“ƒoŠÖ”AUpdate‚ÅŒÄ‚Ô‚Ì‚Åprivate‚É‚µ‚Ä‚é
	//Ú‹ß
	void Approach();
	void Shot();

	//—£’E
	void Leave();

private:
	static void(Enemy::* FuncTable[])();
	Phase phase_ = Phase::kApproach;
	bool GameLoop = true;
};

