/*
Joseph Problem : 
�H�̯��b�@�ӵ��ݳQ�B�M����l�̡C 
�p�Ʊq��餤�����w�I�}�l�A�êu���w��V��¶���i��C 
�b���L���w�ƶq���H����A�B�D�U�@�ӤH�C ��ѤU���H���ƸӹL�{�A
�q�U�@�ӤH�}�l�A�¦P�@��V���L�ۦP�ƶq���H�A����u�ѤU�@�ӤH�A�óQ����C
�Y�A���w�H�ơB�_�I�B��V�M�n���L���Ʀr�A��ܪ�l��餤����m�H�קK�Q�B�M�C
*/
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int J(int n)
{
	if (n == 1) return 1; //���j��������
	else if (n % 2 == 0) return 2 * J(n / 2) - 1;
	else return 2 * J(n / 2) + 1;
}

int main() {
    int n;
    cout << "�п�J�}�ǤH��:";
    while (cin >> n && n)
    {
        vector<int> v;
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        int  pos = 0; //�U�@�ӧR����vector index
        while (v.size() > 1) {
            pos = (pos + 1) % v.size(); //�ϯ�p������p��
            v.erase(v.begin() + pos);
        }
        cout << "�D���j���浲�G : " << endl;
        cout << "�s���̬�:" << v[0] << "��" << endl;
        cout << "�п�J�}�ǤH��:";

        cout << "���j���浲�G : " << endl;
        cout << "�s���̬�:" << J(n) << "��" << endl;
		cout << "�п�J�}�ǤH��:";
    }
}