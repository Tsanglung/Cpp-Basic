/*
�إߤ@�Ӷ�Ρ]Circle�^���O�A���Ʀ����P�������:
�w�qprivate��Ʀ���radius�A�s��ꪺ�b�|�C
�w�q�إߪ̡]constructor�^��ơA�ó]�wradius����Ȭ�1�C
�w�qpublic�������set�Pget�A���O�Ψӳ]�w�P���oradius�ȡC
�w�qpublic�������perimeter�Parea�A���O�Ψӭp���P���P�ꭱ�n�C
���gmain() ��ơA����L��J��ƨæs�Jradius���A�M��p�����ܶ�P���P�ꭱ�n
*/
#include<iostream>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(){ radius = 1;}
    void set(int r); // �]�w r
    double get(); // ���o r
    double perimeter();   // ��P��
    double area();    //�ꭱ�n
};

void Circle::set(int r){ radius = r; }
double Circle::get(){ return radius;}
double Circle::perimeter(){ return 2 * radius * 3.14;}
double Circle::area(){ return radius * radius * 3.14;}

int main(){
    Circle C1;
    int radius;
    cout << "��J�b�| : ";
    cin >> radius;
    C1.set(radius);
    cout << "�b�| : " << C1.get() << endl;
    cout << "��P�� : " << C1.perimeter() << endl;
    cout << "�魱�n : " << C1.area() << endl;
}