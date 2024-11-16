/*
�إߤ@�Ȧ�b�����O�A�����O�����T�Өp���ݩ�money (�s��ثe�s���`�B)�B�s��m�W�r��P�b�ḹ�X�A
�æ��T�Ӥ��Ψ�ƧY�d�ߦs�ھl�Bcheck()�B�s��deposit(double money) �P����withdrawal()�A
��Ыإߤ@�R�A�ݩʧQ�vratio �s��Ȧ�@�~���T�w�Q�v�A��l�Ȭ�1.05%�C
�b�᪫��إ߮������w�s���`�B�B�s��m�W�r��A�öüƵ��q�@�ձb��
*/
#include <iostream>
#include <random>
#include <string>
#include <set>
#include <ctime>

using namespace std;

const string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
random_device rd;
mt19937 generator(rd());
uniform_int_distribution<> distr(0, word.size() - 1);

class Account {
private:
    static double rate; // �R�A�ݩʧQ�vrate
    static int count;
    double money;
    string ID;
    string account;
    bool Delete;
public:
    Account(double m, string ID, string account);
    ~Account();
    void check(); // �s��ثe�s���`�B
    void deposit(double CashInput); // �s��
    void withdrawal(double Cash); // ����
    void DeleteAccount(bool D) { Delete = D; }
};

double Account::rate = 1.05; // ��l�Ȭ�1.05%�C
int Account::count = 0; // �b��ƶq

Account::Account(double m, string ID, string account) : money(m), ID(ID), account(account) { Account::count++; }
Account::~Account() {
    if (Delete == true) {
        cout << "�M�P" << ID << "���b��" << endl;
        Account::count--;
    }
}
void Account::check() { cout << "�ثe " << ID << " �l�B : " << money << "��" << endl; }
void Account::deposit(double CashInput) {
    money += CashInput;
    cout << "�s�� : " << CashInput << "���A�b�� " << account << " �l�B : " << money << "��" << endl;
}
void Account::withdrawal(double Cash) {
    if (Cash > money) cout << "�b�� " << account << " �l�B���� !" << endl;
    else {
        money -= Cash;
        cout << "���� : " << Cash << "���A�b�� " << account << " �l�B : " << money << "��" << endl;
    }
}

// �ͦ��ߤ@��?��r�Ŧ�
string generateAccount(set<string>& Account, int length = 10) {
    string account;
    do {
        account.clear();
        for (int i = 0; i < length; i++) {
            account += word[distr(generator)];
        }
    } while (Account.find(account) != Account.end());
    Account.insert(account);
    return account;
}

int main() {
    set<string> account;
    string account1 = generateAccount(account);
    Account Han(100000, "han", account1);
    Han.check();
    Han.deposit(4000);
    Han.withdrawal(850);
    Han.DeleteAccount(false);

    string account2 = generateAccount(account);
    Account An(5000, "an", account2);
    An.check();
    An.deposit(450);
    An.withdrawal(6000);
    An.DeleteAccount(false);
    return 0;
}
