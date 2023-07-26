#pragma once

class Point2D
{
	int mX;
	int mY;

public:
	Point2D();
	Point2D(int x, int y);
	void Print();

	// ���� ģ�� �Լ�
	friend Point2D operator + (Point2D x, Point2D y);

	// �ɹ� �Լ�
	Point2D operator - (const Point2D& op)
	{
		return Point2D(this->mX - op.mX, this->mY - op.mY);
	}

	//���� ������
	// ���� ������ : ���� ģ�� �Լ�
	friend Point2D operator ++ (Point2D& arg1)
	{
		// ���� ��
		arg1.mX++;
		arg1.mY++;

		// ����
		return arg1;
	}

	// ���� ������ : ��� �Լ�
	const Point2D operator -- ()
	{
		mX--;
		mY--;
		return *this;
	}

	// ���� ������ : ���� ģ�� �Լ�
	friend const Point2D& operator++(Point2D& arg1, int v)
	{
		//���� ��
		Point2D temp(arg1.mX, arg1.mY);

		//����
		arg1.mX++;
		arg1.mY++;

		return temp;
	}
	// ���� ������ : ��� �Լ�
	const Point2D operator -- (int v)
	{
		Point2D temp(this->mX, this->mY);

		mX--;
		mY--;

		return temp;
	}


	// [] - member function
	int& operator[] (int index)
	{
		switch(index)
		{
		case 0:
			return mX;
			break;
		case 1:
			return mY;
			break;
		default:
			std::cerr << "index must be 0 or 1" << std::endl;
			break;
		}
		return mX;
	}

	int& operator[] (char index)
	{
		if (index == 'x')
		{
			return mX;
		}
		else if (index == 'y')
		{
			return mY;
		}
		else
		{
			std::cerr << "Index must be x or y" << std::endl;
			return mX;
		}
	}

	//����ȯ ������
	operator double()
	{
		return sqrt(mX * mX + mY * mY);
	}


	// �Լ� ȣ�� ������
	void operator () ()
	{
		mX = mY = 0;
	}
	void operator () (int x, int y)
	{
		mX = x;
		mY = y;
	}

	// ��Ʈ�� ������
	friend std::ostream& operator<< (std::ostream& os, Point2D pt)
	{
		os << "(" << pt.mX << "," << pt.mY << ")";
		return os;
	}
};

Point2D operator + (Point2D x, Point2D y);

