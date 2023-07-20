#include <iostream>
#include "Player.h"

//class AirConditioner
//{
//	int mTemperature;
//
//public:
//	int GetTemperature() const //���⼭ const�� this�� ����Ŵ
//	{
//		return mTemperature;
//	}
//};

//const
//constant member function
//	this
//	��� ���� - ���� ������ �� ����
// 
//	��� ����
//	const int X{ 10 };
//	
//	��� �Ű�����
//	void Print(const int* x)
//	{	
//	}
//	int x;
//	x = 10;
//	Print(&x);
//	
//	��� ��ȯ��
//	const int* DoSomething()
//	{
//	}
//	
//	��� ��� �Լ�
//	class MyClass
//	{
//		int GetCount() const;
//	};

// 
//
//OOP
//	���� / �ൿ
//
//	Getter / Setter -> �Ӽ�(Property)
//		��� ������ �����, ������ ��� �Լ��� ����
//		-���� ���� ����� �Լ��� ���� ������ �ڵ�
//		-���� ó���� ����
//		-������ ����

//class Calendar
//{
//private:
//	int mMonth;
//
//public:
//	void SetMonth(std::string m)
//	{
//		// Dec -> 12;
//		mMonth = 12;
//	}
//
//	std::string GetMonth() const
//	{
//		// 1 - jan
//		// 2 - Feb
//		return "january";
//	}
//};
//
//int main()
//{
//	Player wolf;
//
//	wolf.GetAttack();
//
//	Player::Sword s1;
//	Player::Costume costume = Player::Costume::Summer;
//
//	AirConditioner myHouse;
//	myHouse.GetTemperature();
//}

//������(Constructor)& �Ҹ���(Destructor)
//
//int myInteger;
//myInteger = 1;
//
// uniform initializatoin
//int myInteger{ 1 };
//
//������ 
//	��ü�� �ν��Ͻ�ȭ�� �� �ڵ������� ȣ��Ǵ� Ư���� ��� �Լ�
//	-Ŭ������ ������ �̸� (��ҹ��� ��ġ)
//	-��ȯ Ÿ���� ���� (void�� ����)
//
//	MyClass()
//	MyClass(int,int)
//
//�Ҹ���
//	�ν��Ͻ��� �Ҹ�� �� �ڵ������� ȣ��Ǵ� Ư���� ��� �Լ�
//	-Ŭ������ ������ �̸�(��ҹ��� ��ġ)
//	-��ȯ Ÿ���� ����(void�� ����)
//	
//	- �Ű������� ����
//	- Ŭ���� �̸� �տ� ���ξ� ~(����ǥ, tilde)�� ����
//	
//	~MyClass();
//�����ڿ� �Ҹ��ڸ� ���������
//	-��� ���� �ʱ�ȭ
//	-�⺻�۾�



//class MyClass
//{
//public:
//	MyClass()
//	{
//		std::cout << "[������]" << std::endl;
//	}
//
//	~MyClass()
//	{
//		std::cout << "[�Ҹ���]" << std::endl;
//	}
//};
//
//int main()
//{
//	std::cout << "--- start ---" << std::endl;
//
//	MyClass c1;	
//		
//	MyClass* c2 = new MyClass;
//
//	delete c2;
//
//	std::cout << "--- end ---" << std::endl;
//}

//�⺻ ������(Default Constructor
//	�Ű������� ���� ������
//	Implicit Default Constructor
//		�����ڸ� �������� ������ �ڵ����� ��������� (�ƹ��͵� ����)

//���� �����ε� ����

//�� �⺻�����ڰ� �ִ���
//	POD(Plain Old Data) - C��� ��Ÿ���� ������ int float double struct {}
//		�ٸ� �޸𸮷� Ȥ�� �ٸ� ���(HDD, Network, Graphic...)���� ���簡 ����
//
//	�׷� ������ ������ -> C++�� Ŭ����
//		�Ͻ��� �⺻�����ڰ� �����ϸ� POD
//			-�ٸ� �����ڰ� ����

//class Monster
//{
//private:
//	int mHealth;
//	int mLevel;
//
//public:
//	//default constructor
//	/*Monster()
//	{
//		mHealth = 1;
//		mLevel = 1;
//	}*/
//
//	Monster(int level,int health)
//	{
//		mLevel = level;
//		mHealth = health;
//	}
//
//	Monster()
//	{
//		mLevel = mHealth = 0;
//		std::cout << "����" << std::endl;
//	}
//
//	Monster(int level)
//	{
//		mLevel = level;
//		mHealth = 0;
//	}
//
//	void Print()
//	{
//		std::cout << "Health :" << mHealth << std::endl;
//		std::cout << "Level :" << mLevel << std::endl;
//	}
//};
//
//class MyClass
//{
//public:
//	int mX;
//	int mY;
//
//	MyClass(int x, int y)
//	{
//		mX = x;
//		mY = y;
//		std::cout << "HELLO" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass c1{ 1,2 };
//
//	Monster m1;
//	Monster m2(1, 2);
//	Monster m3(1);
//
//	// uniform initialization
//	Monster m4{};
//	Monster m5{ 1,2 };
//	Monster m6{ 1 };
//
//	m1.Print();
//
//	std::cout << sizeof(Monster) << std::endl;
//}



//�����Ϸ� �̷�
//
//int main()
//{
//	int W = 2;		// copy initialization
//	int X(2);		// direct initialization
//	int Y{ 2 };		// uniform initialization
//	int z = { 2 };  // int z = int{2}; uniform copy initializtion
//
//	Monster m1 = Monster(2);     // copy initialization
//	Monster m2(10, 100);		 // direct initialization
//	Monster m3{ 10, 100 };		 // uniform initialization
//	Monster m4 = { 10,100 };	 // uniform copy initializtion
//}




//��� �ʱ�ȭ ����Ʈ(member initializer list)
//	< constructor > : <member - init1>, <member - init2> ...
//	{
//		[body]
//	}

//class Monster
//{
//private:
//	const int mHealth;
//	const int mLevel;
//public:
//	Monster(int level = 0, int health = 0) : mHealth( level ), mLevel{ health } // (),{} �Ѵ� ��
//	{		
//	}
//
//	void Print()
//	{
//		std::cout << "Health : " << mHealth << std::endl;
//		std::cout << "Level : " << mHealth << std::endl;
//	}
//};
//
//int main()
//{
//	Monster m1(10, 100);
//
//	m1.Print();
//}

//�븮(����) ������(Delegate Constructor)

	//<constructor> : <other-constructor>
	//{
	//}
	//: ǥ�⸦ ����ϹǷ� �븮������, ��� �ʱ�ȭ ����Ʈ �� �ϳ��� ��� ������

//class Point2D
//{
//private:
//	int mX;
//	int mY;
//
//public:
//	Point2D() : Point2D(0,0)
//	{
//		std::cout << "< �⺻������ >" << std::endl;
//	}
//	Point2D(int x, int y) : mX(x), mY(y)
//	{
//		std::cout << "< x,y������ >" << std::endl;
//	}
//	double Distance() const;
//	void Print() const;
//};
//
//int main()
//{
//	Point2D pt{};
//}

// ���� �迭
class MyArray
{
private:
	int* mArray;
	int mLength;

public:
	MyArray(int len) : mLength{ len }, mArray{ new int [len] {} }
	{
		//mArray = mew int [len] {};
	}

	~MyArray()
	{
		delete[] mArray;
	}
};

int main()
{
	MyArray array{ 100 };
}