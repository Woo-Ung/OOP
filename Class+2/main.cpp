#include <iostream>
//Overloading
//�Լ��� �̸��� ���� �Ű������� �ٸ� �Լ���

//Overriding
//	�ڽ� ����Լ� �������̵�
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
//		std::cout << "���⸦ ���´�" << std::endl;
//	}
//};
//
//class Warrior : public Player
//{
//public:
//	void Attack()
//	{
//		Player::Attack();
//		std::cout << "����� Į�� �ֵѷ���" << std::endl;
//	}
//};
//
//class Wizard : public Player
//{
//public:
//	void Attack()
//	{
//		Player::Attack();
//		std::cout << "������� �ֹ��� �ܿ���" << std::endl;
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

//������(Polymorphism)
//Ŭ������ ��Ӱ� �����Ϳ� ���ؼ� ��������� ����
//	is-a
//	typecast�� �ڽ� ������ ������� ��
//	***�θ��� �Ҹ��ڴ� �ݵ�� ����Ҹ���

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
//���� �Լ�(virtual function)
//	�ڽ��� �������̵��� ���� ����ϴ� �Լ�
//	�Լ� ����(bind)�� Runtime���� ���� (���� �� �Ҵ�ǰų� �ϴ� �޸�)

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
//		std::cout << "���⸦ ���´�" << std::endl;
//	}
//};
//
//class Warrior : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "����� Į�� �ֵѷ���" << std::endl;
//	}
//};
//
//class Wizard : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "������� �ֹ��� �ܿ���" << std::endl;
//	}
//};
//
//class Ranger : public Player
//{
//public:
//	void Attack() override
//	{
//		std::cout << "�ü��� Ȱ������ ����" << std::endl;
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
//��=Early Binding		Late Binding
//��=Static Binding		Dynamic Binding

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