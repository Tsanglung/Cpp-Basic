/*
�w�q�@�ӹB��]Calculate�^���O�A���Ʀ����P�������
(a)�w�qprivate��Ʀ���x�A�ΨӦs��B��ȡC
(b)�w�q�إߪ̡]constructor�^��ơA�ó]�wx����Ȭ�0�C
(c)�w�qpublic�������add�Bsub�Bmul�Pdiv�A�B�z�[�B��B���B���|�h�p��C
(d)���g�@���X�ʵ{���A����ܥ[�B��B���B���B��A�A��J�G�ƭȫ����ҿ�ܪ��B��ÿ�X�B�⵲
*/
#include<iostream>
using namespace std;
class Calcula{
private:
    double x;
public:
    Calcula(){ x = 0; }
    int add(double a, double b){return x = a + b;}
    int sub(double a, double b){return x = a - b ;}
    int mul(double a, double b){return x = a * b;}
    double div(double a, double b){return x = a / b;}
};

int main(){
    Calcula C;
    char sign;double a ,b;
    cout << "��ܥ|�h�B�� : ";
    cin >> sign;
    switch (sign)
    {
    case '+':
        cout << "Input two number : ";
        cin >> a >> b;
        cout << a << sign << b << " = " << C.add(a , b) <<endl;
        break;
    case '-':
        cout << "Input two number : ";
        cin >> a >> b;
        cout << a << sign << b << " = " << C.sub(a , b) <<endl;
        break;
    case '*':
        cout << "Input two number : ";
        cin >> a >> b;
        cout << a << sign << b << " = " << C.mul(a , b) <<endl;
        break;
    case '/':
        cout << "Input two number : ";
        cin >> a >> b;
        cout << a << sign << b << " = " << C.div(a , b) <<endl;
        break;
    default:
        break;
    }
}