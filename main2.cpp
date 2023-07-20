#include <iostream>
#include "Player.h"

//class AirConditioner
//{
//	int mTemperature;
//
//public:
//	int GetTemperature() const //여기서 const는 this를 가리킴
//	{
//		return mTemperature;
//	}
//};

//const
//constant member function
//	this
//	상수 변수 - 값을 수정할 수 없음
// 
//	상수 변수
//	const int X{ 10 };
//	
//	상수 매개변수
//	void Print(const int* x)
//	{	
//	}
//	int x;
//	x = 10;
//	Print(&x);
//	
//	상수 반환값
//	const int* DoSomething()
//	{
//	}
//	
//	상수 멤버 함수
//	class MyClass
//	{
//		int GetCount() const;
//	};

// 
//
//OOP
//	상태 / 행동
//
//	Getter / Setter -> 속성(Property)
//		멤버 변수를 숨기고, 접근을 멤버 함수로 수행
//		-내부 값은 숨기고 함수만 노출 안전한 코딩
//		-예외 처리도 가능
//		-가공이 가능

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

//생성자(Constructor)& 소멸자(Destructor)
//
//int myInteger;
//myInteger = 1;
//
// uniform initializatoin
//int myInteger{ 1 };
//
//생성자 
//	객체가 인스턴스화될 때 자동적으로 호출되는 특별한 멤버 함수
//	-클래스와 동일한 이름 (대소문자 일치)
//	-반환 타입이 없음 (void도 없음)
//
//	MyClass()
//	MyClass(int,int)
//
//소멸자
//	인스턴스가 소멸될 떄 자동적으로 호출되는 특별한 멤버 함수
//	-클래스와 동일한 이름(대소물자 일치)
//	-반환 타입이 없음(void도 없음)
//	
//	- 매개변수도 없음
//	- 클래스 이름 앞에 접두어 ~(물결표, tilde)가 붙음
//	
//	~MyClass();
//생성자와 소멸자를 만들었느냐
//	-멤버 변수 초기화
//	-기본작업



//class MyClass
//{
//public:
//	MyClass()
//	{
//		std::cout << "[생성자]" << std::endl;
//	}
//
//	~MyClass()
//	{
//		std::cout << "[소멸자]" << std::endl;
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

//기본 생성자(Default Constructor
//	매개변수가 없는 생성자
//	Implicit Default Constructor
//		생성자를 제공하지 않으면 자동으로 만들어지는 (아무것도 안함)

//생성 오버로딩 가능

//왜 기본생성자가 있느냐
//	POD(Plain Old Data) - C언어 스타일의 데이터 int float double struct {}
//		다른 메모리로 혹은 다른 대상(HDD, Network, Graphic...)으로 복사가 쉬움
//
//	그럼 복잡한 데이터 -> C++의 클래스
//		암시적 기본생성자가 존재하면 POD
//			-다른 생성자가 없음

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
//		std::cout << "여기" << std::endl;
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



//컴파일러 이론
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




//멤버 초기화 리스트(member initializer list)
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
//	Monster(int level = 0, int health = 0) : mHealth( level ), mLevel{ health } // (),{} 둘다 됌
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

//대리(위임) 생성자(Delegate Constructor)

	//<constructor> : <other-constructor>
	//{
	//}
	//: 표기를 사용하므로 대리생성자, 멤버 초기화 리스트 중 하나만 사용 가능함

//class Point2D
//{
//private:
//	int mX;
//	int mY;
//
//public:
//	Point2D() : Point2D(0,0)
//	{
//		std::cout << "< 기본생성자 >" << std::endl;
//	}
//	Point2D(int x, int y) : mX(x), mY(y)
//	{
//		std::cout << "< x,y생성자 >" << std::endl;
//	}
//	double Distance() const;
//	void Print() const;
//};
//
//int main()
//{
//	Point2D pt{};
//}

// 동적 배열
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