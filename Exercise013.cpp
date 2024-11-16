//Point�BCircle �P Cylinder �����~�����O
/*
(a) Point���O�G�O�@�ϧtradius����ܼơA���ΰϧt�G�ӰѼƪ�Point�إߪ̡Bsetpoint() ��ƱN��L��J��Ʀs�Jradius�Bgetradius () ��ƶǦ^radius�ȡC
(b) Circle���O�G�Hpublic���A�~��Point�A�O�@�ϧtarea()  const��ƭp��ꭱ�n�A���ΰϧt�G�Ѽƪ�Circle�إߪ̡Bgetarea() const��ƶǦ^area() �ȡC
(c) Cylinder���O�G�Hpublic���A�~��Circle���O�A�O�@�ϧtvolume()  const��ƻPheight����ܼơA���ΰϧt�T�Ѽƪ�Cylinder�إߪ̡Bsetheight () �Pgetheight () �]�w�P�Ǧ^height�ȡBgetvolume() const�Ǧ^volume() �ȡC
(d) �g�@main() ��ơA�����Q�Ϋإߪ̰_�lradius, height�ȡA�M��p��ÿ�Xradius, height�ȡBpi*radius^2���n�Pheight*pi*radius^2����n�C�A�Q����L��Jradius, height�ȡA�M��p��ÿ�X���n�P��n�C
(e) �N���D��Υ]�t�]Composition�^���s�]�p
*/
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
protected:	int radius;
public: 	Point(int r)
{
	radius = r;
}
	  void setradius(int r1) { radius = r1; }
	  int getradius() { return radius; }
};
class Circle : public Point
{
protected:	double area() { return 3.1415926 * pow(radius, 2); }
public:	Circle(int r2) : Point(radius)
{
	setradius(r2);
}
	  double getarea()
	  {
		  return area();
	  }
};
class Cylinder : public Circle
{
protected:	int height;
		 double volume() { return area() * height; }
public:	Cylinder(int r3, int h3) : Circle(radius)
{
	setradius(r3);	height = h3;
}
	  void setheight(int h3) { height = h3; }
	  int getheight() { return height; }
	  double getvolume() { return volume(); }
};
int main()
{
	Cylinder c1(5, 8);
	cout << "�b�| = " << c1.getradius() << " ����" << endl << "���� = " << c1.getheight() << " ����" << endl << "�ꭱ�n = " << c1.getarea() << " ���褽��" << endl << "��W���n = " << c1.getvolume() << " �ߤ褽��" << endl;
	int a, b;
	cout << "\n�п�J�b�|�P���G";
	cin >> a >> b;
	Cylinder c2(a, b);
	cout << "�b�| = " << c2.getradius() << " ����" << endl << "���� = " << c2.getheight() << " ����" << endl
		<< "�ꭱ�n = " << c2.getarea() << " ���褽��" << endl << "��W���n = " << c2.getvolume() << " �ߤ褽��" << endl;
	cout << endl;
	system("Pause");
	return 0;
}
