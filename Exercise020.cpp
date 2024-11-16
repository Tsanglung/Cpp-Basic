#include <iostream>
#include <cstdlib>
using namespace std;
const int length=10;  //�]�w���|�̤j�Ŷ�
template<class S>
class Stack  //�w�q���|���O�d��
{          S array[length];     int top;
  public: Stack() {top=0;}
              void push(int obj); //�ŧi���J��ƨ�ƭ쫬
              void pop(); //�ŧi���^��ƨ�ƭ쫬
};
template<class S>
void Stack<S>::push(int obj)
{ if(top==length) {cout<<"���|���F!\n";} 
       else   {array[top]=obj;  top++;}
}
template<class S>
void  Stack<S>::pop()
{ if(top==0) {cout<<"���|�ŤF!\n";} 
    else {top--; cout<<array[top]<<endl;}
 }
int main()
{
    int i;
    Stack<int> iStack;
    iStack.push(10);
    iStack.push(20);
    iStack.push(30);
    for (i = 2; i >= 0; i--)
        iStack.pop();

    Stack<char> cStack;
    cStack.push('a');
    cStack.push('b');
    cStack.push('c');
    for (i = 2; i >= 0; i--)
        cStack.pop();
    cout << endl;
    system("pause"); return 0;
}
