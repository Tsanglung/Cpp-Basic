/*
�]�p�@�p�ƾ����O�����@����ݩʭ�
�ΤU�C4�Ӥ�k�G
inc(int i):�N�p�ƾ����ȥ[i
dec(int i):�N�p�ƾ�����i
reset() :�N�p�ƾ������k0
print():�L�X�p�ƾ�����
�Q���~�ӭק�W�z�p�ƾ����O�]�p�X���W�B�U�����p�ƾ��A(����إ߮ɵ��w�����󤧤W���P�U���Ainc�Pdec�B��ɭY�ȶW�L�W�U���h���P����)�C
*/
#include <iostream>
#include <cstdlib>
using namespace std;
class counter
{
protected: 
    int value;
public: 
    counter(int n) { cout << "parent constructor is called\n"; value = n; }
    void inc(int i) { value += i; } //�N�p�ƾ����ȥ[ n
    void dec(int i) {value -= i;} //�N�p�ƾ����� n
    void reset() { value = 0; } //�N�p�ƾ������k0
    void print() { cout << "The value in counter is:" << value << endl; }
};
class limited_counter : public counter//�~��
{
public:
	limited_counter(int v, int u, int d):counter(v){
        cout << "son constructor is called\n"; 
        value = v;
        up = u; 
        down = d; 
    }
	void inc(int n) { if ((value + n <= up) && (value + n >= down)) value += n; }
    void dec(int n) { if ((value - n <= up) && (value - n >= down)) value -= n; }
private:
	int up, down;
};
int main()
{
	limited_counter a_counter(1, 8, -5);
	for (int i = 1; i <= 10; i++)
        a_counter.inc(i);
	a_counter.inc(-3); 
    a_counter.print();
	system("pause");
	return 0;
}
