#include<iostream>
using namespace std;
//��H���O���i���ഫ
class DEC //10�i��
{
protected:
	int data;
public:
	DEC() { data = 0; }
	void set_data(int value) { data = value; }
	virtual void Transform() = 0 ; //{ cout << "data in decimal is :" << dec << data << endl; }
	/*virtual void Transform() {//������ƿ�X�i���ഫ
		cout << "data in decimal is :" << dec << data << endl;
	}*/
	void print() { cout << "data in dec is" << data << endl; }
};
class OCT :public DEC
{//8�i��
public:
	OCT() {}
	void Transform() {//������ƿ�X�i���ഫ
		cout << "data in oct is :" << oct << data << endl;
	}
};
class HEX :public DEC
{//16�i��
public:
	HEX() {}
	void Transform() {//������ƿ�X�i���ഫ
		cout << "data in hec is :" << hex << data << endl;
	}
};
void show_data(DEC* data) {
	data->Transform();
}
int main()
{
	//DEC d; //�̶i�� d //��H���O�L�k�إߪ���
	OCT o; //�K�i�쪫�� o
	HEX h; //�̤��i�쪫�� h
	int value;
	cout << "Enter an integer data:";
	cin >> value; //�]��J 100
	//d.set_data(value);
	o.set_data(value);
	h.set_data(value);
	//show_data(&d);//data in dec is 100
	show_data(&o);//��X "data in oct is 144"
	show_data(&h); //��X"data in hex is 64"
	system("pause"); return 0;
}