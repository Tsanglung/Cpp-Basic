/*
�K��ѽX:�N�Ҧ����^��r��������(�u���j�g�B�z)
A->D�AB->E.....X->A�BY->B�BZ->C
*/
#include<iostream>
using namespace std;

class Encryption{
    friend istream& operator>>(istream& is,Encryption& E){cout << "��J���� : ";is >> E.plaintext; return is;}
    friend ostream& operator<<(ostream& os, Encryption& E){os << "�K�� : " << E.plaintext << endl; return os;}
private:
    string plaintext;//����
public:
    Encryption() {}
    void Encode(){
        for(int i = 0; i < plaintext.size(); i++){ //ASCII�X�B��
            if(this->plaintext[i] >= 65 && this->plaintext[i] < 88) this->plaintext[i] += 3;
            else this->plaintext[i] -= 23;
        }
    }
};

class Decryption{
    friend istream& operator>>(istream& is,Decryption& D){cout << "��J�K�� : "; is >> D.ciphertext; return is;}
    friend ostream& operator<<(ostream& os, Decryption& D){os << "���� : " << D.ciphertext << endl; return os;}
private:
    string ciphertext;//�K��
public:
    Decryption(){}
    void Decode(){
        for(int i = 0; i < ciphertext.size(); i++){ //ASCII�X�B��
            if(this->ciphertext[i] > 67 && this->ciphertext[i] <= 90) this->ciphertext[i] -= 3;
            else this->ciphertext[i] += 23;
        }
    }
};

int main(){
    Encryption E;
    cin >> E;
    E.Encode();
    cout << E;
    Decryption D;
    cin >> D;
    D.Decode();
    cout << D << endl;
}