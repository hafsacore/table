#include <iostream>

using namespace std;

int main()
{
    int num, prod;
    
    cout<<"Enter a number:";
    
    cin>>num;
    
    cout<<"\nthe table of " << num << " is:\n";
    
    cout<<"--------------------------------\n";
    
    for(int i=1;i<=10;i++)
    {
        prod=num*i;
        
        cout<<num <<"*" <<i <<"=" <<num*i <<"\n\n";
    }

    return 0;
}