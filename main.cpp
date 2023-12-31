#include <iostream>


//Procedural Programming(절차적 프로그래밍)
//	Procedure = function
//단점
// 호출스택
// 동일한 자료구조 타입을 매번 매개변수로 넘겨줘야 합니다.
//	-> 자료구조와 함수가 분리되어 있어서
//struct Stack
//{
//	int value;
//	Element* pTop;
//	};
//void Push(Stack& stack);

//Object Oriented Programming (OOP : 객체 지향 프로그래밍)
// -> 자료구조와 함수를 통합
//class Stack
//{
//	int value;
//	Element* pTop;
//
//	void Push();
//};

//Object(객체)
//현실 세계의 대상 하나 하나를 객체
// 상태(State)
// 행동(Behaviour)
// 
//	현실 세계의 오브젝트를 프로그래밍
// 
// Class 와 Instance
//	Class : Object를 상태와 행동으로 만드 추상적인 개념 - 타입
//			 상태		행동
//		c++	 맴버변수	맴버함수
//		c#	 필드		매서드
//		Java 
//  Instance : 추상적인 Class를 구체화 시킨 것 - 이름을 붙인 변수
// -----------------------------------------------
// 
// OOP 5가지 특징
// 
// 1. Object
// 2. Class
// 
// 3. Encapsulation(캡슐화)
// 4. Inheritance(상속)
// 5. Polymorphism(다형성)
//
// 캡슐화
//	가챠 캡슐 - 내용물을 숨기는 것
//  알약 캡슐 - 복용이 쉽다
// 
// 정보를 숨김(Information Hiding)
//		사용법을 쉽게
// 
// 상속
//	 Inheritance(상속)			Derivation(파생)
//	 Parent Class (부모 클래스)	Base Class (기반 클래스)
//	 Child Class (자식 클래스)	Dericed Class (파생 클래스)
//
// 
//  다형성
//		상황에 떄라 서로 다른 형태로 해석할 수 있다
//		상속과 관련

//class <이름> [: 부모]
//{
//	[접근제한자]
//	<멤버>
//	.
//	.
//	.
//};

//Access Modifier(접근 제한자)
//	public
//		공개
//		클래스 내부(맴버함수)/외부(인스턴스)에서 모두 사용이 가능
//	private
//		비공개
//		클래스 내부에서만 접근이 가능하고 외부(인스턴스)에서는 불가능
// 
//	protected
//
//클래스와 인스턴스
//
// struct Galaxy
// {
//		int color;
// };
// 
// int GetColor(Galaxy phone)
// {
//		return phone.color;
// }
// 
// Galaxy phone;
// GetColor(phone);
// 
// class Galaxy
// {
//		public:
//			int color;
// 
//			int GetColor()
//			{
//				return color;
//			{
//	};
// 
// Galaxy phone1;
// phone1.GetColor();
// 
//  암시적 오브젝트(Implicit Object)
//	Galaxy* this
//



//class Galaxy
//{
//	// state - member variable
//private:
//	char midelName[10];
//
//public:
//	int color;
//	int weight;
//
//	// behaviour - member function
//	void Phone()
//	{
//		this->color;
//		std::cout << "따르릉" << std::endl;
//	}
//	void Message()
//	{
//		std::cout << "메시지" << std::endl;
//	}		
//};
//
//int main()
//{
//	// Instantiate (인스턴스화)
//	Galaxy myPhone;
//
//	myPhone.color = 1;
//	myPhone.Phone();
//
//	Galaxy yourPhone;
//	yourPhone.color = 2;
//}

//class Computer
//{
//	private :
//		int power;
//		std::string mainboard;
//
//		void PrintPower()
//		{
//			std::cout << power << std::endl;
//		}
//
//	public :
//		int cost;
//		int color;
//
//		void PrintCost()
//		{
//			std::cout << cost << std::endl;
//		}
//};


// 클래스의 멤버함수 정의
//return-type <class-name>::<member-function>(parameters...)
//{
//}
//
//:: (=scope resolution operator)

//class Car
//{
//	// default access modifier : private
//public:
//	// state : member varaiable
//	int wheels;
//	int speed;
//	int weight;
//
//	//behaviour : member function
//	void Start();
//	void Drive();
//	void Parking();
//};
//
//void Car::Start()
//{
//	speed = 0;
//	std::cout << "Engine start!" << std::endl;
//}
//
//int main()
//{
//	// Car 클래스(type}를 i5 인스턴스화(Instance)
//	Car i5;
//
//	i5.wheels = 4;
//	i5.speed = 100;
//
//	i5.Start();
//}

//c++ 에서는 구조체는 모든 멤버가 public인 클래스와 동일
//	구조체 : 멤버 변수들만 존재
//	클래스 : 멤버 변수 + 멤버 함수

// 캡슐화(Capsulation)
//	정보은닉(informatio hiding)
//		보안
//		사용성
// 
//	다른 클래스, 구조제와 같은 타입정보들도 캡슐화

// 
//		class Dog
//		{
//			enum Color
//			{
//				WHITE = 0XFFFFFF,
//				BLACK = 0x101010
//			};
//			Color color;
//		};
// 
//		class Cat
//		{
// //		enum Color
//			{
//				WHITE = 0XF0F0F0,
//				BLACK = 0x000000
//			};
// 			Color color;
//		};
// 
//		Dog jhon;
//		jhon.color = WHITE;
// 
//		Cat nabi;
//		nabi.color = WHITE;
//
// Tip) 클래스 선언 정리
// 
//		1. 멤버 변수 / 멤버 함수를 구분해서  //추천
//		class MyClass
//		{
//		private:
//			int x;
//		public:
//			int y;
//		
//		private:
//			void f();
//		public:
//			void g();
//		};
// 
//		2. 접근 권한으로 구분
//		class MyClass
//		{
//		private:
//			int x;
//			void f();
// 
//		public:
//			int y;
//			void g();
//		}
// 
//