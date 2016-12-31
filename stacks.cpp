#include<iostream>
using namespace std;
#define max 10

class stack
{
public:
    int a[max];
    int top;
    stack()
    {
        top=-1;
    }
void push();
void pop();
void display();
void leftspace();
void gettop();

};

void stack:: push()
{
    int val;
    cout<<"enter value to push in stack"<<endl;

    cin>>val;
    if(top==max-1)
    {
        cout<<"stack is overflow"<<endl;

    }

    else
    {
        top++;
        a[top]=val;
    }

}
void stack:: pop()
{
    int val;
    if(top==-1)
    {
        cout<<"stack is underflow"<<endl;

    }
    else{
        val=a[top--];
        cout<<val;
    }
}
void stack:: display()
{
    if(top==-1)
    {
        cout<<"stack is underflow"<<endl;

    }
    else
    {
       cout<<"elements are"<<endl;
for(int i=0;i<=top;i++)
{

    cout<<a[i]<<" "<<endl;
}

    }

}
void stack:: leftspace()
{

    cout<<endl<<"left space in stack is"<<(max-top)-1<<endl;
}


void stack:: gettop()
{
    cout<<"top is : "<<top<<endl;
}



int main()
{
             int ch;
    stack s;
    do
    {

    cout<<"please enter your choice "<<endl;
    cout<<"1. to push a value in stack"<<endl;
    cout<<"2. to pop a value from stack"<<endl;
    cout<<"3. to display values in stack"<<endl;
    cout<<"4. to display left space in stack"<<endl;
    cout<<"5. to display top of stack"<<endl;
    cout<<"0. to EXIT"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1: s.push();
        break;
       case 2: s.pop();
        break;
        case 3: s.display();
        break;
        case 4: s.leftspace();
        break;
                  case 5: s.gettop();
        break;

    }
    }while(ch!=0);



  return 0;
}

