#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string English, temp;
	getline(cin,English);
	for (int i = 0; i < English.length(); i++) 
	{
		if (isalpha(English[i]) == 0) //isalpha()�P�_�O�_���^��r���A�O�h�^�ǫD0�ȡA�_�h�Ǧ^0
		{
			English[i] = ' ';
		}
		if (islower(English[i])) //islower()�P�_�O�_���p�g �O�h�Ǧ^1�A�_�h�Ǧ^0
		{
			English[i] = toupper(English[i]);//�p�g��j�g
		}
	}
	stringstream EnglishWord(English);//�N�r��A�H�Ů����
	while (EnglishWord >> temp) {
		cout << temp << endl;
	}
}