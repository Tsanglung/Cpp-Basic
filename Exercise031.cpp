#include <iostream>   
#include <cstdlib>
//catch�϶����h���A�����Ҧ��ҥ~
using namespace std;
int main()
{
    int array[10];

    try
    {
        for (int i = 0; i <= 10; i++)
        {
            if (i > 9)  throw "Index out of bound";  // �ߥX�r�ꫬ�A���ҥ~
            if (i * i > 60)
                throw i;                           // �ߥX��ƫ��A���ҥ~
            else
                array[i] = i * i;
        }
    }
    catch (const char* str)                      // �i�����r�ꫬ�A���ҥ~
    {
        cout << "������" << str << "�ҥ~..." << endl;
    }
    catch (int i)                                // �i������ƫ��A���ҥ~
    {
        cout << i << "������ȶW�L60�F" << endl;
    }
    catch (...)            // �i�������󫬺A���ҥ~
    {
        cout << "������ҥ~�F..." << endl;
    }
    system("pause");
    return 0;
}