#include <iostream>
//Overloading
//함수의 이름은 같고 매개변수가 다른 함수들

//Overriding
//	자식 멤버함수 오버라이딩
//class Parent
//{
//public:
//	void Function()
//	{
//		std::cout << "Parent::Function" << std::endl;
//	}
//};
//
//class Child : public Parent
//{
//public:
//	void Function()
//	{
//		std::cout << "Child::Function" << std::endl;
//	}
//};
//
//int main()
//{
//	Parent p;
//	p.Function();
//
//	Child c;
//	c.Function();
//}
//
///////////////////////////////////////////////////////////
//
//class Player
//{
//public:
//	void Attack()
//	{		
//		std::cout << "무기를 꺼냈다" << std::endl;
//	}
//};
//
//class Warrior : public Player
//{
//public:
//	void Attack()
//	{
//		Player::Attack();
//		std::cout << "전사는 칼을 휘둘렀다" << std::endl;
//	}
//};
//
//class Wizard : public Player
//{
//public:
//	void Attack()
//	{
//		Player::Attack();
//		std::cout << "마법사는 주문을 외웠다" << std::endl;
//	}
//};
////////////////////////////////////////////////////////////////
//class ClassA
//{
//public:
//	void f(int i)
//	{
//		std::cout << "ClassA::f(int)" << std::endl;
//	}
//	void f(float f, int i)
//	{
//		std::cout << "ClassA::f(float, int)" << std::endl;
//	}
//};
//
//class ClassB : public ClassA
//{
//public:
//	void f(int i)
//	{
//		std::cout << "ClassB::f(int)" << std::endl;
//	}
//
//	void f(float f, int i)
//	{
//		std::cout << "ClassB::f(float, int)" << std::endl;
//	}
//};
//
//int main()
//{
//	ClassB c1;	
//	c1.f(1);
//	c1.f(1.1f, 1);
//
//	//c1.ClassA::f(1.1f, 1);
//}

///////////////////////////////////////////////////

//다형성(Polymorphism)
//클래스의 상속과 포인터에 의해서 만들어지는 개념
//	is-a
//	typecast는 자식 정보가 사라지는 것
//	***부모의 소멸자는 반드시 가상소멸자

//class Player
//{
//public:
//	
//};
//
//class Warrior : public Player
//{
//public:
//};
//
//class Wizard : public Player
//{
//public:
//};
//
//class Thief : public Player
//{
//public:
//	
//};
//
//class Necromancer : public Player
//{
//public:
//
//};
//
//void Attack(Player* from, Player* to)
//{
//
//}
//
//int main()
//{
//	Warrior p1, p2;
//	Thief p3;
//	Wizard p4;
//	Necromancer p5;
//
//	Attack(&p1, &p2);
//}

////////////////////////////////
//가상 함수(virtual function)
//	자식이 오버라이딩할 것을 기대하는 함수
//	함수 연결(bind)을 Runtime으로 보류 (동적 을 할당되거나 하는 메모리)

//class ClassA
//{
//	//virtual
//	void f();
//};
//
//class ClassB : ClassA
//{
//	//overriding
//	void f();
//};
//------------------------------

//class Parent
//{
//public:
//	void f1()
//	{
//		std::cout << "Parent::f1()" << std::endl;
//	}
//	void f2()
//	{
//		std::cout << "Parent::f2()" << std::endl;
//	}
//};
//
//class Child : public Parent
//{
//public:
//	void f1()
//	{
//		std::cout << "Child::f1()" << std::endl;
//	}
//	virtual void f2()
//	{
//		std::cout << "Child::f2()" << std::endl;
//	}
//};
//
//int main()
//{
//	Parent* parent = new Parent;
//	Child* child = new Child;
//
//	parent->f1();
//	parent->f2();
//	child->f1();
//	child->f2();
//
//	std::cout << "--------------------" << std::endl;
//
//	Parent* p = child;
//
//	p->f1();
//	p->f2();
//}

///////////////////////////////////////////////////////

//class Player
//{
//public:
//	virtual void Attack()
//	{		
//		std::cout << "무기를 꺼냈다" << std::endl;
//	}
//};
//
//class Warrior : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "전사는 칼을 휘둘렀다" << std::endl;
//	}
//};
//
//class Wizard : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "마법사는 주문을 외웠다" << std::endl;
//	}
//};
//
//class Ranger : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "궁수는 활시위를 당겼다" << std::endl;
//	}
//};
//
//int main()
//{
//	Player* p1 = new Warrior;
//	Player* p2 = new Wizard;
//
//	p1->Attack();
//	p2->Attack();
//}
//
//int main()
//{
//	Player* party[5]
//	{
//		new Warrior,
//		new Wizard,
//		new Ranger,
//		new Warrior,
//		new Ranger
//	};
//
//	for (int i = 0; i < 5;i++)
//	{
//		party[i]->Attack();
//	}
//}

//Compiletime Binding		Runtime Binding
//ㄴ=Early Binding		Late Binding
//ㄴ=Static Binding		Dynamic Binding

class Parent
{
public:
	Parent()
	{
	}

	Parent(const Parent& from)
	{
	}

	virtual Parent* Clone();
};

class Child : public Parent
{
public:
	Child() {}

	Child(const Child& from)
	{
	}

	Parent* Clone() override
	{
	}
};

int main()
{
	Parent* p = new Child;

	Parent* p1(p);
}