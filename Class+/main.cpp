#include <iostream>

//class MyClass
//{
//public:
//	int mValue1;
//};
//
//void f()
//{
//	static MyClass c1{1};
//
//	std::cout << c1.mValue1++ << std::endl;
//}
//
//int main()
//{
//	f();
//	f();
//	f();
//}

//class MyClass1
//{
//public:
//	static int mValue1; // 처음 한번만 초기화하고 그다음은 무시
//						// 인스턴스가 아닌 클래스에 속한 클래스 변수
//
//	void Print()
//	{
//		std::cout << mValue1 << std::endl;
//	}
//};
//
//int MyClass1::mValue1 = 0;
//
//int main()
//{
//	MyClass1 c1;
//	//c1.mValue1 = 1;
//	MyClass1::mValue1 = 1;
//	c1.Print();
//
//	MyClass1 c2;
//	//c2.mValue1 = 2;
//	MyClass1::mValue1 = 2;
//	c2.Print();
//
//}

//class Bullet
//{
//public:
//	static int sCount;
//	Bullet()
//	{
//		sCount++;
//		std::cout << "[+]" << sCount << std::endl;
//	}
//	~Bullet()
//	{
//		sCount--;
//		std::cout << "[-]" << sCount << std::endl;
//	}
//};
//
//int Bullet::sCount {};
//
//int main()
//{
//	Bullet b1;
//	for (int i = 0; i<1000; i++)
//	{
//		Bullet b2;
//		Bullet* p = new Bullet();
//	}
//}

//class MyClass2
//{
//public:
//	int mValue1;
//
//	static void Function();
//};
//
//void MyClass2::Function()
//{
//	std::cout << mValue1 << std::endl; //안됌
//}
//
//int main()
//{
//	MyClass2 c1;
//	MyClass2::Function();
//
//	MyClass2 c2;
//	MyClass2::Function();
//}

//friend
//	클래스나 함수에 붙여서 친구를 지정
//	- 친구는 나의 모든 벰버(private 포함)을 열람할 수 있음
//		- 내가(정보를 오픈할 쪽) 너를 친구로 지정하는 것만 가능
//		- 쌍방이 아님. A가 B를 친구로 지정해도 A는 B의 친구가 아님
//		- 친구의 친구는 친구가 아님

//	friend class
//	friend function
//			-friend global function
//			-friend member function

//class Sword
//{
//	friend class Player;
//
//private:
//	int mDamage;
//public:
//	Sword(int dmg) : mDamage(dmg) {}
//};
//
//class Player
//{
//public:
//	void AttackWith(Sword& sword)
//	{
//		std::cout << "칼을 휘둘러" << sword.mDamage << "만큼 피해를 주었다!" << std::endl;
//	}
//};
//
//int main()
//{
//	Sword muramasa{ 10 };
//	Player p1;
//	p1.AttackWith(muramasa);
//}

//class Sword
//{
//	friend void Upgrade(Sword& sword);
//private:
//	int mDamage;
//public:
//	Sword(int dmg) : mDamage(dmg) {}
//};
//
////전역 함수
//void Upgrade(Sword& sword)
//{
//	int oldDamage = sword.mDamage;
//	std::cout << oldDamage << " -> " << (sword.mDamage += sword.mDamage) << std::endl;
//}
//
//int main()
//{
//	Sword shortSword(1);
//
//	Upgrade(shortSword);
//}

//class Sword; //forward declaration
//
//class Player
//{
//public:
//	void AttackWith(Sword& sword);
//};
//
//class Sword
//{
//	friend void Player::AttackWith(Sword& sword);
//
//private:
//	int mDamage;
//public:
//	Sword(int dmg) : mDamage(dmg) {}
//};
//
//void Player::AttackWith(Sword& sword)
//{
//	std::cout << "칼을 휘둘러" << sword.mDamage << "만큼 피해를 주었다!" << std::endl;
//}
//
//int main()
//{
//	Sword muramasa{ 10 };
//	Player p1;
//	p1.AttackWith(muramasa);
//}

//연산자 오버로딩(operator overloading)
//
//	연산자 = 함수
//
//	a. 피연산자가 기본 타입이면 기본 연산
//	b. 피연산자가 클래스와 같은 사용자 정의 타입이면
//		- 연산자 오버로딩
//		- 기본 타입으로 시도
// 
//	전역 함수 버전의 연산자 오버로딩
//	멤버 함수 버전의 연산자 오버로딩
//		피연산자 중 하나가 this		

//r-value
//
//익명객체(anonymous object)

//class int
//{ 
//	int();
//	int(int x);
//}
//
//int square(int x)
//{
//	return x * x;
//}
//
//int main()
//{
//	int x{ 2 };
//	std::cout << Square(x) << std::endl;
//}

class MyInt
{
public:
	int mValue;

	MyInt() : mValue()
	{
		std::cout << "+[기본생성자]" << std::endl;
	}
	MyInt(int value) : mValue{value}
	{
		std::cout << "+[생성자] : " << value << std::endl;
	}
	~MyInt()
	{
		std::cout << "-[소멸자] : " << mValue << std::endl;
	}
};

MyInt operator + (MyInt op1, MyInt op2)
{
	return MyInt(op1.mValue + op2.mValue);
}

MyInt Square(MyInt val)
{
	return MyInt(val.mValue * val.mValue);
}

int main()
{
	MyInt x{ 2 }, y{ 3 };
	Square(x);
}
