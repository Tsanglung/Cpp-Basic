//�]�p�@�����OClassA���t���public��Ƹ�Ʀ���numA�PnumB
/*�]�p�@�l���OClassB,�~�Ӧ�ClassA���O,
�å[�Jset_num()���,�Ψӳ]�w�q�����O�~�ӦӨӪ�����numA�PnumB,
�Pshow()���,�Ψ����numA�PnumB����
*/
//�b�D�{��main()�̫ŧiClassB���O���ܼ�bdata,
//�Q��set_num()��ƱNnumA�]�Ȭ�55, numB�]�Ȭ�88,
//�A�Hshow()�L�X��������
#include<iostream>
using namespace std;
class A{
public:
    int numA,numB;
};

class B:public A{
public:
    void set_num(int a,int b){numA = a; numB = b;}
    void show(){cout << "numA = " << numA << ", numB = " << numB<<endl;}
};

int main(){
    B bdata;
    bdata.set_num(55,88);
    bdata.show();
}