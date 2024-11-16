//�����ѽ��l,���[�����c��, �A�[�W�C�x���ո˦���500��,  �����B���~�ӷ����]�p���l(Wheel)�Ψ��[(Frame)���ե�(Component)
//�çQ��static variable count�����w�զX���p�P�`��, 
#include <iostream>
#include <string>
using namespace std;
class Component {
protected:	
    string id;	double cost;
public:	
    Component(){}
    Component(const string n, double cost) 
    {
        cout << "call Component(string n, double cost)" << endl;  
        id = n; this->cost = cost; 
    }
    double getcost() { return cost; }
};
class Frame : public Component
{
public:	
    Frame(const string n, string t, double c) //�����᭱�{���X
    {
        id = n;
        type = t;
        cost = c;
    }
private:          
    string type;
};

class Wheel : public Component
{
public:	
    Wheel(const string n, int s, double c) //�����᭱�{���X
    {
        id = n;
        size = s;
        cost = c;
    }
private: 
    int size;
};
class Bicycle
{
public: 
      static int count;
      Bicycle(Wheel w1, Frame f1) :w(w1), f(f1) { count++; }
      void changeWheel(Wheel w2) { w = w2; }
      void changeFrame(Frame f2) { f = f2; }
      double getcost()  //�����᭱�{���X
      { 
          return w.getcost() + f.getcost() + 500; 
      }
private: 
      Wheel w; Frame f;
};
int Bicycle::count = 0;//�����w�զX���p�P�`��
int main()
{
    //���l����ؿ��,�`�N���l�ҬO����,�pw1�Y�]�t�e�����l
    Wheel w1("16�T", 16, 2000);
    Wheel w2("20�T", 20, 3000);
    //���[���T�ؿ��
    Frame f1("Giant", "iron", 2000);
    Frame f2("Merida", "iron", 3000);
    Frame f3("Argon 18", "alloy", 5000);
    //�զX�Ĥ@�x,���l��16�T,���[��a�P�g�٫����p�P
    Bicycle b1(w1, f1);
    cout << "�Ĥ@�x���欰:" << b1.getcost() << endl;
    //�զX�ĤG�x,���l��20�T,���[��a�P�g�٫����p�P
    Bicycle b2(w2, f1);
    cout << "�ĤG�x���欰:" << b2.getcost() << endl;
    //�Ĥ@�x����20�T�����l, �æC�L�X�󴫫᪺���l����
    b1.changeWheel(w2); cout << "�Ĥ@�x�����l�᪺���欰:" << b1.getcost() << endl;
    //�C�L�ثe��X���p�P�`��
    cout << "�ثe�`�@�դF:" << Bicycle::count << "�x�p�P\n";
    system("pause");
    return 0;
}
