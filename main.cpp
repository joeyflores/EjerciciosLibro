#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,temp;
    while(true){
        temp=b;
        b=a+b,a=temp;
        cout<<b<<endl;
    }
    return 0;
}
/*
Como la condicion es True el bucle es infinito,ademas hagarra valores negativos porque
se pasa de la cantidad de bits que usa el tipo de valor int.
*/
