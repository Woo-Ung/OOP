#include <iostream>


//Procedural Programming(������ ���α׷���)
//	Procedure = function
//����
// ȣ�⽺��
// ������ �ڷᱸ�� Ÿ���� �Ź� �Ű������� �Ѱ���� �մϴ�.
//	-> �ڷᱸ���� �Լ��� �и��Ǿ� �־
//struct Stack
//{
//	int value;
//	Element* pTop;
//	};
//void Push(Stack& stack);

//Object Oriented Programming (OOP : ��ü ���� ���α׷���)
// -> �ڷᱸ���� �Լ��� ����
//class Stack
//{
//	int value;
//	Element* pTop;
//
//	void Push();
//};

//Object(��ü)
//���� ������ ��� �ϳ� �ϳ��� ��ü
// ����(State)
// �ൿ(Behaviour)
// 
//	���� ������ ������Ʈ�� ���α׷���
// 
// Class �� Instance
//	Class : Object�� ���¿� �ൿ���� ���� �߻����� ���� - Ÿ��
//			 ����		�ൿ
//		c++	 �ɹ�����	�ɹ��Լ�
//		c#	 �ʵ�		�ż���
//		Java 
//  Instance : �߻����� Class�� ��üȭ ��Ų �� - �̸��� ���� ����
// -----------------------------------------------
// 
// OOP 5���� Ư¡
// 
// 1. Object
// 2. Class
// 
// 3. Encapsulation(ĸ��ȭ)
// 4. Inheritance(���)
// 5. Polymorphism(������)
//
// ĸ��ȭ
//	��í ĸ�� - ���빰�� ����� ��
//  �˾� ĸ�� - ������ ����
// 
// ������ ����(Information Hiding)
//		������ ����
// 
// ���
//	 Inheritance(���)			Derivation(�Ļ�)
//	 Parent Class (�θ� Ŭ����)	Base Class (��� Ŭ����)
//	 Child Class (�ڽ� Ŭ����)	Dericed Class (�Ļ� Ŭ����)
//
// 
//  ������
//		��Ȳ�� ���� ���� �ٸ� ���·� �ؼ��� �� �ִ�
//		��Ӱ� ����

//class <�̸�> [: �θ�]
//{
//	[����������]
//	<���>
//	.
//	.
//	.
//};

//Access Modifier(���� ������)
//	public
//		����
//		Ŭ���� ����(�ɹ��Լ�)/�ܺ�(�ν��Ͻ�)���� ��� ����� ����
//	private
//		�����
//		Ŭ���� ���ο����� ������ �����ϰ� �ܺ�(�ν��Ͻ�)������ �Ұ���
// 
//	protected
//
//Ŭ������ �ν��Ͻ�
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
//  �Ͻ��� ������Ʈ(Implicit Object)
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
//		std::cout << "������" << std::endl;
//	}
//	void Message()
//	{
//		std::cout << "�޽���" << std::endl;
//	}		
//};
//
//int main()
//{
//	// Instantiate (�ν��Ͻ�ȭ)
//	Galaxy myPhone;
//
//	myPhone.color = 1;
//	myPhone.Phone();
//
//	Galaxy yourPhone;
//	yourPhone.color = 2;
//}

class Computer
{
	private :
		int power;
		std::string mainboard;

		void PrintPower()
		{
			std::cout << power << std::endl;
		}

	public :
		int cost;
		int color;

		void PrintCost()
		{
			std::cout << cost << std::endl;
		}
};