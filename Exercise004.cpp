/*
�إߤ@�Ӯɶ��]Time�^���O�A���Ʀ����P�������:
�w�qprivate��Ʀ���hour�Bminute�Bsecond�A���O�s��ɡB���B��C
�w�q�إߪ̡]constructor�^��ơA�ó]�w�Ҧ���Ʀ�������Ȭ�0�C
�w�qpublic�������set�Pget�A�Ψӳ]�w�P���ohour�Bminute�Bsecond�ȡC
�w�qpublic�������addsec�Baddmin�Baddhr�A�W�[hour�Bminute�Bsecond�C
���g�@���X�ʵ{����ܮɶ��A�C�j1��(#include <Windows.h> ...   Sleep(1000);) �hsecond�[1�A�C�j60��hminute�[1�A�C�j60���hhour�[1�C
*/
#include<iostream>
#include<windows.h>
using namespace std;
class Time{
private:
    int hour,minute,second;
public:
    Time(){hour = minute = second = 0;}
    void set(int h,int m,int s){hour = h; minute = m; second = s;}
    void get(){cout << hour << " : " << minute << " : " << second;};
    void addhr();
    void addmin();
    void addsec();
};

void Time::addhr(){
    if(hour >= 0 && hour < 24) {
        if(minute == 60){
            minute = 0;
            hour++;
        }
    }
    else hour = 0;
}

void Time::addmin(){
    if(minute >= 0 && minute < 60) {
        if(second == 60){
            second = 0;
            minute++;
        }
    }
    else minute = 0;
}

void Time::addsec(){
    if(second >= 0 && second < 60)  second++;
    else second = 0;
}

int main(){
    Time T;
    T.set(0,0,0);
    while(true){
        Sleep(1000);
        system("cls");
        T.addsec();
        T.addmin();
        T.addhr();
        T.get();
    }
}