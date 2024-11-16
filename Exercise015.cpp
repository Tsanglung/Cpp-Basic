/*
���P���q���O
���]��A��X�@�ջ���10000���ӫ~����o10%�S��(�Y1000��)�A
�A�����ݤW�u(���]�W�r�sjohn)�]�|�]����o�A�S�Ҥ�10%(�Y100��)�A
��john�����ݤW�umary�]�|�]����ojohn�S�Ҥ�10%(�Y10��)�A
�����H������
*/
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
class Employee
{
public:
	double total_bonus = 0; 
	char ID[10];
	Employee* boss;
	Employee(const char* ID) { strcpy_s(this->ID, 10, ID); }
	Employee(const char* ID, Employee* boss)
	{
		strcpy_s(this->ID, 10, ID);
		this->boss = boss;	
	}
	void addBonus(double value) //�b���p��P��u�W�U�h�H�������� (���]�Ҭ�10%)
	{
		if (ID[2] == 52) {
			total_bonus += value * 0.1;
			boss->total_bonus += value * pow(0.1,2);
			boss->boss->total_bonus += value * pow(0.1,3);
			boss->boss->boss->total_bonus += value * pow(0.1,4);
		}
		else if (ID[2] == 51) {
			total_bonus += value * 0.1;
			boss->total_bonus += value * pow(0.1, 2);
			boss->boss->total_bonus += value * pow(0.1, 3);
		}
		else if (ID[2] == 50) {
			total_bonus += value * 0.1;
			boss->total_bonus += value * pow(0.1, 2);
		}
		else if(ID[2] == 49) {
			total_bonus += value * 0.1; 
		}
	}
	double getBonus() { return total_bonus; }
	char* getID() { return ID; }
	char* getBoss() { return boss->getID(); }
};
int main()
{
	Employee a1("001");
	Employee a2("002", &a1);
	Employee a3("003", &a2);
	Employee a4("004", &a3);
	a4.addBonus(10000);
	a2.addBonus(20000);
	cout << a1.getID() << ",bonus is " << a1.getBonus() << endl <<
			a2.getID() << ":boss is " << a2.getBoss() << ",bonus is " << a2.getBonus() << endl <<
			a3.getID() << ":boss is " << a3.getBoss() << ",bonus is " << a3.getBonus() << endl <<
			a4.getID() << ":boss is " << a4.getBoss() << ",bonus is " << a4.getBonus() << endl;
	system("pause");
}