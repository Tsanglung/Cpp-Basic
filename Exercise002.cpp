/*
���F�B�z���w���ת��r��A�мg�@�D�{�����ϥΪ���L��J:
1.�r���`����
2.�@�Ӧr��(�r�ꤺ�i�����N�r��(�]�A�ťզr��)�A��Enter����
�A�g�@�Ө�ơA�N�r��ǤJ����Ƥ��A�Q�Ψ�ƭp��r�ꤤ�`�@���h�֭Ӫ��ԧB�Ʀr�P�^��r��(�]�A�j�p�g)�A����Ǧ^����
*/
//�r��ʺA�t�m
#include <iostream>
#include <cstdlib>
using namespace std;
void transfer(char[]);
int main()
{
	int n;
	cout << "�п�J�r��j�p:";
	cin >> n;
	char* p = new char[n + 1];
	cin.get();
	cout << "\n��J�r�ꤺ�e:";
	cin.getline(p, n + 1);
	transfer(p);
	cout << "\n�ഫ��,�r�ꤺ�e:";
	cout << p << endl;
	delete[]p;
	system("pause");

}

void transfer(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		if (islower(a[i]))//islower() �P�_�r���O�_���p�g
			a[i] = toupper(a[i]);//toupper() �N�p�g�r���ഫ���j�g
		else a[i] = tolower(a[i]);//tolower() �N�j�g�r���ഫ���p�g
		i++;
	}
}