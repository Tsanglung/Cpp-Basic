// �h���~��
#include <iostream>
#include <cstdlib>
using namespace std;
class PointXY
{
protected:	int x, y;
public:      void setxy(int n, int m) { x = n; y = m; }                  PointXY(int n, int m) { cout << "�I�sPointXY �غc�l\n"; x = n; y = m; }
};
class PointZ
{
protected:	int z;
public:	void setz(int o) { z = o; }
	  PointZ(int  o) { cout << "�I�sPointZ �غc�l\n"; z = o; }
};
class Cube : public PointXY, public PointZ		// �H public �~�� PointXY ���O,�H public �~�� PointZ ���O
{
public:          void showxy() { cout << "�����y�� : p(" << x << ", " << y << ") " << endl; }
	  void showxyz() { cout << "�Ŷ��y�� : s(" << x << ", " << y << ", " << z << ") " << endl; }
	  void showarea() { cout << "���n = " << x * y << endl; }
	  void showcube() { cout << "��n = " << x * y * z << endl; }
	  Cube(int a, int b, int c) : PointXY(a, b), PointZ(c) { cout << "�I�sCube �غc�l\n"; }

};
int main()
{
	Cube p(1, 2, 3);
	//p.setxy(2,5);	// �����I�s��¦���O1����
	p.showxy();	// �����I�s�l�����O����
	p.showarea();	// �����I�s�l�����O����
	cout << endl;
	//p.setz(8);	// �����I�s��¦���O2����
	p.showxyz();	// �����I�s�l�����O����
	p.showcube();	// �����I�s�l�����O����
	cout << endl;
	system("pause"); return 0;
}
