#pragma once

class Player
{
public:
	class Sword
	{
		int mPrice;
		int mAttack;
	};

	enum Costume
	{
		Hunter = 1,
		Summer = 2,
		Winter = 3
	};

private:
	int mHealth;
	int mAttack;
	
public:
	void Walk();
	void Run();
	void Jump();

public:
	int GetAttack()
	{
		if (mAttack < 0)
		{
			std::cerr << "Something Wrong!" << std::endl;
		}

		// ���� ���� + ��� ����
		int factor = 1;

		return mAttack * factor;		
	}
};