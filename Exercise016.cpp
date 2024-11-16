/*
�إߤ@�h���~�Ӷ��h�G��¦���OShape����H���O�A
��Shape���O�l�ͥX�yBall���O�PCynlinder���O�A
Ball���O��nvol(): 4/3*3.14* r^3�A
Cynlinder���O��nvol():3.14* r^2*h�F
output���~����ơA�Ω����Ball�PCylinder��vol���
*/
#include<iostream>
#include<math.h>
#include <complex>
using namespace std;
class Shape{
protected:
    double radius;
public:
    Shape(){radius = 1;}
    void set(double r){radius = r;}
    virtual void vol() = 0;
};

class Ball:public Shape{
public:
    Ball(){}
    void vol(){ cout << "Ball ��n : " << (4 / 3) * 3.14 * pow(radius,3) << endl;}
};

class Cynlinder:public Shape{
private:
    double heigh;
public:
    Cynlinder(){}
    void set(double r,double h) {radius = r; heigh = h;}
    void vol(){ cout << "Cynlinder ��n : " << 3.14 * pow(radius,2) * heigh << endl;}
};

void output(Shape *radius){radius->vol();}

int main(){
    Ball B;
    Cynlinder C;
    B.set(3);
    C.set(2.3,5);
    output(&B);
    output(&C);
}