//�אּ�p���ݩ�
#include<iostream>
#include <cstdlib>
using namespace std;
class CBox
{
public:
	CBox(double lv, double bv = 1, double hv = 1);//3�޼ƫغc�l
	CBox();//�w�]�غc�l
	~CBox() { cout << "destructor called \n"; }//�Ѻc�l
	double Volume();
	double area();
private:double m_Length, m_Breadth, m_Height;//�p���ݩ� ���B�e�B��
};
CBox::CBox()
{
	cout << endl << "Default constructor called.";
}

CBox::CBox(double lv, double bv, double hv)
{
	cout << endl << "Constructor called.";
	m_Length = lv;  m_Breadth = bv;  m_Height = hv;
}
double CBox::Volume()//��n
{
	return (m_Length * m_Breadth * m_Height);
}
double CBox::area()//���n
{
	return (m_Length * m_Breadth + m_Breadth * m_Height + m_Length * m_Height) * 2;
}
int main()
{
	CBox box1(2.2, 1.1, 2); CBox box2;
	double boxvolume = box1.Volume();
	double boxarea = box1.area();
	cout << endl << "volume of box1=" << boxvolume;
	cout << endl << "area of box1=" << boxarea;
	cout << endl << "volume of box2=" << box2.Volume();
	cout << endl << "area of box2=" << box2.area() << endl;
	system("pause"); return 0;
}
