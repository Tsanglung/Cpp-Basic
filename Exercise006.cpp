/*
�إߤ@�өЫζU�����O, ���Ʀ����P������Ʀp�U:
(1) �w�qprivate ��Ʀ���loan,rate,year, ���O�s��U���`�B, �U�ڧQ�v�P�U�ڦ~��
(2) �w�q�غc�l���, �ó]�w�Ҧ���Ʀ�������Ȭ�0
(3) �w�qpublic �������set�Pget, �Ψӳ]�w�P���oloan, rate,year��
(4)�w�qpublic �������term, payement���O�p����O=(1+�~�Q�v/12)12*�~�ƻP��I�B=(�U���`�B*(�~�Q�v/12)*���O)/(���O-1)
(5)�b�D�{�����g�@�X�ʵ{��, ��Jloan,rate,year,�M����ܤ�I�BEx. Loan=1000000, rate=0.02, year=20 =>��I�B=5058.8
*/
#include<iostream>
#include<math.h>
using namespace std;
class HouseLoans{
private:
    int loan; double rate; int year;
public:
    HouseLoans(int l = 0,double r = 0,int y = 0):loan(l),rate(r),year(y){}
    void set(int l,double r, int y){loan = l; rate = r;year = y;};
    void get(){cout << "�U���`�B : " << loan << ",�U�ڧQ�v : " << rate << ",�U�ڦ~�� : " << year << endl;}
    double term();
    double payement();
};

double HouseLoans::term(){ return pow((1 + (rate / 12)) , (12 * year));}
double HouseLoans::payement(){ return ((loan * (rate / 12) * term())/(term()-1));}

int main(){
    int loan; double rate; int year;
    HouseLoans H;
    cout << "��J�U���`�B�B�U�ڧQ�v�B�U�ڦ~��:";
    cin >> loan >> rate >> year;
    H.set(loan,rate,year);
    H.get();
    cout << "���O : " << H.term() << " $ "<< endl;
    cout << "��I�B : " << H.payement() << " $ " << endl;
}