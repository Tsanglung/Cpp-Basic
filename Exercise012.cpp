/*
�ϥ��~�ӫإ߷s�����|���O�H�ק�push�Ppop���ƪ����D
*/
#include <iostream>
#include <cstdlib>
using namespace std;
class Stack{
protected:	
		 int* array;
		 int top, num;
public:
	Stack(int n) { num = n; top = 0; array = new int[num]; }
	~Stack() { delete[]array; cout << "�ʺA�t�m�O����w�M��" << endl; }
	void push(int var) { array[top] = var; top++; }
	void pop() { top--; cout << array[top] << endl; }
};

class StacSon :public Stack{
public:
	StacSon(int n) :Stack(n) { }
	void push(int var)
	{
		if (top < num) Stack::push(var);
		else { cout << "���|�w��" << endl; }
	}
	void pop()
	{
		if (top > 0) Stack::pop();
		else { cout << "���|�w��"; }
	}
};

int main()
{
	StacSon s(5);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	cout << endl;
}