/**
���g�@inline���bool primeQ(int n)�A�ΨӧP�O���n�O�_����ơC
�Y�O�A�h�Ǧ^true�A�_�h�Ǧ^false�A�æb�D�{�����Q�Φ���Ƨ�X�p��100���Ҧ���ơC
**/
#include <iostream>
#include <cstdlib>
using namespace std;
inline bool PrimeQ(int n)
{
	int counter = 0;
	for (int i = n; i > 0; i--) {
		if (n % i == 0) counter++;
	}
	if (counter == 2)return true;
	else return false;
}

int main()
{
	int n;

	cout << "��J�@���:";
	cin >> n;

	if (PrimeQ(n))cout << n << "�O���" << endl;
	else cout << n << "���O���" << endl;

	int PrimeArray[101]; int counter = 0;
	int NotPrimeArray[101]; int Notcounter = 0;
	for (int i = 1; i <= 100; i++) {
		if (PrimeQ(i)) {
			PrimeArray[counter++] = i;
		}
		else {
			NotPrimeArray[Notcounter++] = i;
		}
	}
	cout << "���: " ;
	for (int i_counter = 0; i_counter < counter; i_counter++) {
		cout << PrimeArray[i_counter] << ' ';
	}
	cout << endl;
	cout << "�D���: " ;
	for (int i_counter = 0; i_counter < Notcounter; i_counter++) {
		cout << NotPrimeArray[i_counter] << ' ';
	}
	
	system("pause");
	return 0;
}