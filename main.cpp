#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout<<"Ingrese la longitud de su cuadrado: ";cin>>n1;


    for(int i=1;i<=n1;i++){

        for(int j=1;j<=n1;j++){
            if(i==1||i==n1||j==1||j==n1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
