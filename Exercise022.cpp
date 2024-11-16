/*
�إߤ@�ӽƼƥ|�h�B��]Complex�^���O�A���Ʀ����P������Ʀp�U
a)�w�qprivate��Ʀ���real�Bimaginary�s���ơB��Ƴ����C
b)�h����N�B��Ÿ�+�B-�B*�B/�A�Ӱ���Ƽƪ��|�h�B��C
c)�h����J�B��X�B��Ÿ�>>�B<<�A�ӿ�J�P��X�ƼƸ�ơC
d)���gmain() ��ơA����L��J�G���ƼơA����[�B��B���B�����X�C
*/
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    friend istream& operator>>(istream& is, Complex t){is >> t.real >> t.imaginary; return is;}
    friend ostream& operator<<(ostream& os, Complex t){os << t.real << " + "<< t.imaginary <<"i"; return os;}
private:
    double real,imaginary;
public:
    Complex(double r = 0, double i = 0) { real = r; imaginary = i; }//�غc�l
    Complex operator+(const Complex& t) { Complex Add; Add.real = real + t.real; Add.imaginary = imaginary + t.imaginary; return Add; }//�[
    Complex operator-(const Complex& t) { Complex Sub; Sub.real = real - t.real; Sub.imaginary = imaginary - t.imaginary; return Sub; }//��
    Complex operator*(const Complex& t)//��
    {
        Complex Mul;
        Mul.real = real * t.real - imaginary * t.imaginary;
        Mul.imaginary = real * t.imaginary + imaginary * t.real;
        return Mul;
    }
    Complex operator/(const Complex& t)//��
    {
        Complex Div;
        if((pow(t.real, 2) + pow(t.imaginary,2)) != 0){
            Div.real = ((real * t.real + imaginary * t.imaginary)) / (pow(t.real, 2) + pow(t.imaginary,2));
            Div.imaginary = ((imaginary * t.real) - (real * t.imaginary)) / (pow(t.real, 2) + pow(t.imaginary,2));
        }
        return Div;
    }
    bool operator==(const Complex& t){if(real == t.real && imaginary == t.imaginary) return true;else return false;}
    bool operator!=(const Complex& t){if(real != t.real || imaginary != t.imaginary) return true;else return false;}
};

int main(){
    int a,b,c,d;
    cout<<"Enter first complex number y in the form: a + bi:";
    cin >> a >> b;
    Complex A(a,b);
    cout<<"Enter first complex number y in the form: c + di:";
    cin >> c >> d;
    Complex B(c,d);

    if(A == B) cout << "complex A and B is Same complex" << endl;
    else cout << "complex A and B is not same" << endl;

    Complex C;
    C = A + B;
    cout << "(" << A << ") + (" << B << ") = " << C << endl;
    C = A - B;
    cout << "(" << A << ") - (" << B << ") = " << C << endl;
    C = A * B;
    cout << "(" << A << ") * (" << B << ") = " << C << endl;
    C = A / B;
    cout << "(" << A << ") / (" << B << ") = " << C << endl;
}