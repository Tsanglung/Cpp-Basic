#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin          // �w�q�������OCWin
{
protected:    char id;      // ��id�ŧi��protected�����A�ϱo���]�i�H�b�l���O�̨ϥ�
public:     CWin(char i) :id(i) {}
};
class CTextWin : public CWin
{
private:      char text[20];
public:
    CTextWin(char i,const char* tx) :CWin(i){strcpy_s(text, tx);}
    void show()
    {
        cout << "Window " << id << ": ";   // Ū�������O�̪��O�@����
        cout << "text = " << text << endl;
    }
};
int main()
{
    CTextWin txt('A', "Hello C++");
    txt.show();
    system("pause");
    return 0;
}
