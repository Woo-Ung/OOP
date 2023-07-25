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
	const Point2D& operator -- (int v)
	{
		Point2D temp(this->mX, this->mY);

		mX--;
		mY--;

		return temp;
	}
};

Point2D operator + (Point2D x, Point2D y);