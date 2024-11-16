/*
�إ� Point ���O�A�p������ ��� x,y�y��
���}�������:�غc�l�B�h��+�B++�B��l
getxy() ���o�y�СBsetxy �]�w�y��
*/
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point();
	Point operator+(Point); //�h��+�G���B��l
	Point operator+(int);	//�h��+�G���B��l
	Point operator++();	//�h��+�@���B��l(�e�m�B��);
	void getxy();
	void setxy(int, int);
};
Point::Point() { x = 0; y = 0; }
Point Point::operator+(Point obj)
{
	Point t;
	t.x = x + obj.x;
	t.y = y + obj.y;
	return t;
}
Point Point::operator+(int n)
{
	Point t;
	t.x = x + n;
	t.y = y + n;
	return t;
}
Point Point::operator++()
{
	x = x + 1;
	y = y + 1;
	return *this;
}
void Point::getxy()
{
	cout << x << "," << y << endl;
}
void Point::setxy(int x1, int y1)
{
	x = x1 + 1;
	y = y1 + 1;
}
int main() {
	Point p1, p2, p3;
	p1.setxy(10, 20);
	cout << "P1�y��:";
	p1.getxy();
	p2.setxy(15, 23);
	cout << "P2�y��:";
	p2.getxy();
	p3.setxy(0, 0);
	cout << "P3�y��:";
	p3.getxy();
	p3 = p1 + p2;
	cout << "P3=(P1+P2)�y��:";
	p3.getxy();
	p3 = p3 + 6;
	cout << "P3+6��y��:";
	p3.getxy();
	++p3;
	cout << "P3+1��y�Юy��:";
	p3.getxy();
	system("pause");
	return EXIT_SUCCESS;
}