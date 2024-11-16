/*
�إߤ@�Ӧr��B��]CString�^���O�A���Ʀ����P������Ʀp�U
a)�w�qprivate��Ʀ���str�A�ΨӦs��C���A�r��C
b)�h����N�B��Ÿ�+=�A�@���걵�G��C���A�r�ꪺ�B��Ÿ��C
c)�h����J�B��X�B��Ÿ�>>�B<<�A�ӿ�J�P��XC���A�r���ơC
d)���gmain() ��ơA����L��J�G���r���ơA�I�s�h��+= �B��Ÿ��A�N�G�Ӧr��걵�b�@�_�C
*/
#include<iostream>
using namespace std;
class CString{
    friend istream& operator>>(istream& is, CString& c);
    friend ostream& operator<<(ostream&os, const CString& c);
private:
    string str;
public:
    CString operator+=(const CString c);
};

istream &operator>>(istream& is, CString& c){is >> c.str; return is;}
ostream &operator<<(ostream& os,const CString& c){os << c.str <<endl; return os;}

CString CString::operator+=(const CString c){this->str += c.str; return *this;}

int main(){
    CString A,B;
    cout << "first string : ";
    cin >> A;
    cout << "second string : ";
    cin >> B;
    A += B;
    cout <<"�걵�� : ";
    cout << A << endl;
}


