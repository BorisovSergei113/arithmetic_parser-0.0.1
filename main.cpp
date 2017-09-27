#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    
    char op1;
    char op2;
    
    cin>> a >> op1;
    
    if ((op1=='<')||(op1=='>'))
    {
        cin>>op2>>b;
        
    }
    
    else
    {
        cin>>b;
    }
    
    if (op1=='+')
    {
        cout <<"a+b = "<< a+b<< '\n' ;
    }
    else if (op1=='-')
    {
        cout<< "a-b = "<< a-b<< '\n';
    }
    else if (op1=='*')
        {
        cout<<"a*b = "<< a*b<< '\n';
}
else if (op1=='/')
{
    cout << "a/b = "<<(double)a/b<< '\n';
}

else if (op1=='%')
{
    cout << "a%b = "<< a%b<< '\n';
}
else if (op1=='&')
{
    cout <<"a&b = " << (a & b)<< '\n';
}
else if (op1=='|')
{
    cout << "a|b = " <<( a|b)<< '\n';
}
else if (op1=='^')
{
    cout << "aˆb = "<< (a^b)<< '\n';
}
else if ((op1=='<')&&(op2=='<'))
{
    cout << "a<<b = "<<(a<<b)<< '\n';
}
else if ((op1=='>')&&(op2=='>'))
{
    cout << "a>>b = "<<(a>>b)<< '\n';
}
else
{
    return 0 ;
    
}
    
cin.get();
    
return 0;
}
