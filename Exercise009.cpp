/*
���g�@C++�{���A����L��J�@�Ӧr��A��Ӧr��̴M��O�_�]�t"the"�A
�Y�O���A�ЦL�X"the" �b�r�ꤤ�X�{����m�C
*/
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main()
{
    string English,FindWord="the";
    int index = 0;
    getline(cin, English);
    while ((index = English.find(FindWord, index)) >= 0 && (index < English.length() ))
    {
        cout << index << endl;
        index++;
    }
    return 0;
}