//�إ߶�W��(Cylinder)���O
#include<iostream>
using namespace std;
class Cylinder //��W�����O
{
private:
	double radius,heigh,PI=3.14;//�p������ �b�| �� ��P�v
public:
	Cylinder(double ,double ,double PI=3.14);
	double area();//���n
	double vol();//��n
	void print();//�b�|��X
};
Cylinder::Cylinder(double r,double h,double PI) 
{
	radius = r;
	heigh = h;
}
double Cylinder::area()
{
	return (2 * PI * radius * radius + 2 * PI * radius * heigh);
}
double Cylinder::vol()
{
	return (PI * radius * radius * heigh);
}
void Cylinder::print()
{
	cout << "��W��b�|:" << radius << endl;
}
void main()
{
	Cylinder object(10, 2);//�]�w��W��b�|10�A��2
	cout << "��W�魱�n:" << object.area() << endl;
	cout << "��W����n:" << object.vol() << endl;
	object.print();//�L�X�b�|
}