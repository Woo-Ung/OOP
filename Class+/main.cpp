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
//	static int mValue1; // ó�� �ѹ��� �ʱ�ȭ�ϰ� �״����� ����
//						// �ν��Ͻ��� �ƴ� Ŭ������ ���� Ŭ���� ����
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
//	std::cout << mValue1 << std::endl; //�ȉ�
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
//	Ŭ������ �Լ��� �ٿ��� ģ���� ����
//	- ģ���� ���� ��� ����(private ����)�� ������ �� ����
//		- ����(������ ������ ��) �ʸ� ģ���� �����ϴ� �͸� ����
//		- �ֹ��� �ƴ�. A�� B�� ģ���� �����ص� A�� B�� ģ���� �ƴ�
//		- ģ���� ģ���� ģ���� �ƴ�

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
//		std::cout << "Į�� �ֵѷ�" << sword.mDamage << "��ŭ ���ظ� �־���!" << std::endl;
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
////���� �Լ�
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
//	std::cout << "Į�� �ֵѷ�" << sword.mDamage << "��ŭ ���ظ� �־���!" << std::endl;
//}
//
//int main()
//{
//	Sword muramasa{ 10 };
//	Player p1;
//	p1.AttackWith(muramasa);
//}

//������ �����ε�(operator overloading)
//
//	������ = �Լ�
//
//	a. �ǿ����ڰ� �⺻ Ÿ���̸� �⺻ ����
//	b. �ǿ����ڰ� Ŭ������ ���� ����� ���� Ÿ���̸�
//		- ������ �����ε�
//		- �⺻ Ÿ������ �õ�
// 
//	���� �Լ� ������ ������ �����ε�
//	��� �Լ� ������ ������ �����ε�
//		�ǿ����� �� �ϳ��� this		

//r-value
//
//�͸�ü(anonymous object)

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

//class MyInt
//{
//public:
//	int mValue;
//
//	MyInt() : mValue()
//	{
//		std::cout << "+[�⺻������]" << std::endl;
//	}
//	MyInt(int value) : mValue{value}
//	{
//		std::cout << "+[������] : " << value << std::endl;
//	}
//	~MyInt()
//	{
//		std::cout << "-[�Ҹ���] : " << mValue << std::endl;
//	}
//};
//
//MyInt operator + (MyInt op1, MyInt op2)
//{
//	return MyInt(op1.mValue + op2.mValue);
//}
//
//MyInt Square(MyInt val)
//{
//	return MyInt(val.mValue * val.mValue);
//}
//
//int main()
//{
//	MyInt x{ 2 }, y{ 3 };
//	Square(x);
//}

//type casting
//
//����� ����ȯ
//
//int myInteger = 1;
//float myFloat = operator int(myInteger);

// () - Funtion Call Operator

//Functor = Function + Object �Լ� ��ü

//Stream Operator
//	Point2D pt;
//	std::cout << pt;
//	��� �Լ� X (std::cout Ŭ������)
//	

//����(Copy)
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	MyClass(int x) : mValue(x)
//	{
//	}
//};
//
//int main()
//{
//	int y1 = 5;		//����(����) �ʱ�ȭ
//	int y2(5);		//���� �ʱ�ȭ
//	int y3{ 5 };	//������ �ʱ�ȭ
//
//	MyClass x1 = 5;	//����(����) �ʱ�ȭ
//	// ��= MyClass x1 = MyClass(5);
//
//	MyClass x2(5);	//���� �ʱ�ȭ
//	MyClass x3{ 5 };//������ �ʱ�ȭ
//}

//���� ������

//class MyClass
//{
//	int mValue;
//public:
//	MyClass(int x) : mValue(x)
//	{
//		std::cout << "�Ϲ� ������" << std::endl;
//	}
//	MyClass(const MyClass& target)
//	{
//		mValue = target.mValue;
//		std::cout << "���� ������" << std::endl;
//	}
//	~MyClass()
//	{
//		std::cout << "[-]" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass c1(1);
//	MyClass c2(c1);
//
//	std::cout << "-----------" << std::endl;
//
//	MyClass c3( MyClass(1) );
//}
//
//Shallow Copy vs Deep Copy
//
//class Dog
//{
//};
//
//class DogHouse
//{
//	Dog* pOwner;
//
//	DogHouse(const DogHouse& from)
//	{
//		// shallow copy
//		//pOwner = from.pOwner;
//
//		//Deep copy
//		pOwner = new Dog(*from.pOwner);
//	}
//};
//
//Dog happy;
//
//DogHouse home(happy);




//Relationship
//
//is-part-of	: Composition
//has-a		: Aggregation
//use-a		: Asscociation
//is-a		: Generalization / Specialization


//���� is-part-of ��
//
//������ ���� ������� �� �ϳ�
//	- ��� ���� ������ �ϳ�
//������ �ѹ��� �ϳ��� �������� ž��
//	- car �ν��Ͻ��� ���� Engine�� ����
//������ ���� ���� ������
//	- car �ν��Ͻ��� �����ɶ�, �Ҹ�� �� ���� engine ������
//������ ������ ���� ��
//	-Engine������ car�� ������ ������ ����

//class Engine
//{
//	int mHorsePower;
//	int mTorque;
//	int mZero100;
//};
//
//class Car
//{
//	Engine mEngine;
//	Body mBody;
//};


//�� has-a Ÿ�̾� // ������ �ɹ� ����
//
//Ÿ�̾�� ���� �Ϻ� ���
//Ÿ�̾�� ���� �ڵ����� ������ �� ����
//Ÿ�̾�� ������ ���� ���� ���� ����
//Ÿ�̾�� ������ ��
//
//class Tire
//{
//	int mWheelSize;
//};
//
//class Car
//{
//	Tire* mpTire;
//};
//
//Tire t1 = new Tire;
//Car car1;
//car1.mpTire = t1;
//////
//delete t1;


//������ use-a �� // ��� ������ ���� -> �Լ� �Ű����� ������
//
//���� �����ڿ� ������ ����
//���� ���� �����ڰ� ��밡��
//���� �����ڿ� ���� �� ���� �ƴ� ����
//���� �����ڸ� ��, �˼���
//
//class Driver
//{
//
//};
//
//class Car
//{
//	//Driver* pDriver;
//	void DriveBy(Driver* pDriver);
//};
//
//���(�Ļ�) Inheritanve/Derivation
//
//Derivation		Ingeritance
//Base Class		Parent Class		Super Class
//Derived Class	Child Class			Sub Class
//
//C++ ����
//	class <child-class> : [virtual] [access-modifier] <parent-class>, ...

//Parent		pulic���		protected���		private���
//public		public			protected			private
//protected		protected		protected			private
//private		���ٺҰ�		���ٺҰ�			���ٺҰ�

//class MyParent
//{
//private:
//	int mPrivate;
//public:
//	int mPublic;
//protected:
//	int Protected; // private + �ڽĵ鿡�� ���
//};
//
//class MyChild : public MyParent
//{
//	void DoSomething()
//	{
//		this->mPublic;
//		this->Protected;
//	}
//
//};
//
//int main()
//{
//	MyChild c;
//
//	c.mPublic;
//}