/*
�إߪ����骫��A���}�ݩʦ��������B�e�B��
��n�B���n���
*/
#include<iostream>
#include <cstdlib>
using namespace std;
class CBox
{
public:                          //�]�w�����}
	double L, W, H;  //�ݩ� ��,�e,��
	//�غc�l
	CBox(double lv, double bv, double hv) {L = lv; W = bv; H = hv;}
	 //��k �p����n
	double Volume() {return L * W * H;}
	//�p�⭱�n
	double area() {return 2 * (L * W + L * H + H * W);}
};

int main()
{
	CBox box(3, 2, 1); //�غc����box, �۰ʩI�s�غc�lCBox(double lv, double bv, double hv)     
	cout << endl << "volume of box=" << box.Volume() << endl;
	cout << endl << "area of box=" << box.area() << endl;
	system("pause"); return 0;
}
