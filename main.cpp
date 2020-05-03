#include <iostream>

using namespace std;

int main()
{
    int n1;
    int x,y=0,z;
    cout<<"Ingrese su numero: ";cin>>n1;//121
    z=n1;

    while(n1!=0){
        x=n1%10;            //121%10=1  12%10=2         1%10=1
        y=(y*10)+x;         //0+1=1     (1*10)+2=12     (12*10)+1=121
        n1=n1/10;           //121/10=12  12/10=1        1/10=0
    }
    if(y==z){
        cout<<"si es palindrome"<<endl;
    }
    else{
        cout<<"no es palindrome"<<endl;
    }
    return 0;
}
