// �ǻ��Ѽƨ��¦���O
#include <iostream>
#include <cstdlib>
using namespace std;
class Point
{
protected:
	int x, y;
public:
	Point(int n, int m) {	// Point �إߪ�
		x = n; y = m;
	}
	void showpoint() {
		cout << "p(" << x << ", " << y << ')' << endl;
	}
};
class Area : public Point
{
public:
	Area(int x, int y) : Point(x, y) {   // Area �إߪ�,�öǻ� x, y �Ѽƨ� Point
	}								void showarea() {
		cout << "length = " << x << "\twidth = " << y << "\tarea = " << x * y << endl;
	}
};
int main()
{
	Point p(3, 4);	// x=3, y=4
	Area a(5, 6);	// x=5, y=6
	cout << "�Q�ΰ�¦���O��������I�G";
	p.showpoint();	 // ��� p(3, 4)
	cout << endl;
	cout << "�Q�έl�����O������ܭ��n�G";
	a.showarea();	// ��� area = 12
	cout << endl;
	system("pause"); return 0;
}
