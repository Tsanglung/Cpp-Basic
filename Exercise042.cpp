/*
�~��o��{��
�إ� Employee ����BManager�BEngineer�~�� Employee
Employee ����O�@�ݩʦ��� salary�Bhour�Brate�Bname
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Employee
{
protected:
	int salary,Hour,Rate; string name;
public:	
	Employee() { salary = 0; }
	Employee(const char* name, string employeeType) { this->name = name; }
	virtual void printname() { cout << name << "," << salary << endl; };
};
class Manager : public Employee
{//�g�z���O
protected:
	
public:	
	Manager() {}
	Manager(const char* name,string employeeType) {
		this->name = name; 
		if (employeeType == "manager") salary = 4000;
		else if (employeeType == "engineer") salary = 3500;
		else salary = (Hour * Rate) / 2;
	}	
	void printname() { cout << name << "," << salary << endl; };
};
class Engineer : public Employee
{//�u�{�v���O
protected:
	
public:	
	Engineer() {};
	Engineer(const char* name, string employeeType){ 
		this->name = name; 
		if (employeeType == "manager") salary = 4000;
		else if (employeeType == "engineer") salary = 3500;
		else salary = (Hour * Rate) / 2;
	}
	void printname() { cout << name << "," << salary << endl; };
};
class MyEmployee :public Employee
{//�~�����O
protected:
	string Tname;//�~�Ҧb�x�W�r
	int Hour, Rate;// �ɼ�,���~
public:
	MyEmployee(){}
	MyEmployee(const char *name,const char *Tname, string employeeType,int h,int r)
	{
		this->name = name;
		this->Tname = Tname;
		this->Hour = h;
		this->Rate = r;
		if (employeeType == "manager") salary = 4000;
		else if (employeeType == "engineer") salary = 3500;
		else salary = (Hour * Rate) / 2;
	}
	void printname() { cout << name << '(' << Tname << ')' << "," << salary << endl; }
};

int main()
{
	Manager    A1("John","manager");
	Engineer   A2("Hank","engineer");
	MyEmployee A3("OYeeBee","Willy","myemployee",360,200);
	Employee* array[10];//�ϥΪ������, �F���h��
	array[0] = &A1;
	array[1] = &A2;
	array[2] = &A3;
	for (int i = 0; i < 3; i++) {
		array[i]->printname();
		cout << '\n';
	}
}
