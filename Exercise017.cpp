/*
�إ�Point�BSquare�BCircle�BCylinder���O�A�����O�w�q�B��Ʀ����P������Ʀp�U�G
a)Point���O�G�O�@�ϧtr, h�G�Ӹ���ܼơA���ΰϧt�G�Ѽƪ�Point�إߪ̡Bsetpoint() ��ƱN��L��J�s�Jr,  h�BgetR() �PgetH() ��ƶǦ^r�ȻPh�ȡC
b)Square���O�G�Hpublic���A�~��Point�A�O�@�ϧtarea() const��ƭp�⥿��έ��n�A���ΰϧt�@�Ѽƪ�Square�إߪ̡BgetArea() const��ƶǦ^area() �ȡC
c)Circle���O�G�Hpublic���A�~��Point�A�O�@�ϧtarea()  const��ƭp��ꭱ�n�A���ΰϧt�@�Ѽƪ�Circle�إߪ̡BgetArea()  const��ƶǦ^area() �ȡC
d)Cylinder���O�G�Hpublic���A�~��Square�PCircle���O�A�O�@�ϧtvolume() const��ƻPheight����ܼơA���ΰϧt�G�Ѽƪ�Cylinder�إߪ̡BgetVolume() const��ƶǦ^��W�骺volume() �ȡC
�g�@main() ��ơA�����Q�Ϋإߪ̰_�lr, h�ȡA�M��p��ÿ�Xr, h�ȡB����έ��n�B��έ��n�B�P��W����n
*/
#include <iostream>
#include <cmath>
using namespace std;
class Point {// Point ���O
protected:
    double r, h;//�O�@�ϧtr, h�G�Ӹ���ܼ�
public:
    Point(double r = 0, double h = 0) : r(r), h(h) {}//�G�Ѽƪ�Point�إߪ�
    void setPoint(double r, double h) { this->r = r; this->h = h; }//�G�Ѽƪ�setpoint() ���
    double getR() const { return r; }
    double getH() const { return h; }
};

class Square : public Point {// Square ���O
protected:
    double area() const { return r * r; }
public:
    Square(double r) : Point(r, 0) {}
    double getArea() const { return area(); }
};

class Circle : public Point {// Circle ���O
protected:
    double area() const { return M_PI * r * r; }
public:
    Circle(double r) : Point(r, 0) {}
    double getArea() const { return area(); }
};

class Cylinder : public Square, public Circle {// Cylinder ���O
protected:
    double volume() const { return Circle::area() * height; }
    double height;
public:
    Cylinder(double r, double h) : Square(r), Circle(r), height(h) {}
    double getVolume() const { return volume(); }
};

int main() {
    double r, h;

    cout << "��J�b�| (r)�B���� (h): ";
    cin >> r >> h;
    // �ϥΫإߪ̰_�l r �M h ��
    Point p(r, h);
    Square s(r);
    Circle c(r);
    Cylinder cy(r, h);

    cout << "�b�| (r): " << p.getR() << ", ���� (h): " << p.getH() << endl;
    cout << "����έ��n: " << s.getArea() << endl;
    cout << "�ꭱ�n: " << c.getArea() << endl;
    cout << "��W����n: " << cy.getVolume() << endl;

    return 0;
}
