#include<iostream>
using namespace std;

int main()
{   int k;
    float bal,withdraw;
    cout<<"\nEnter account balance: ";
    cin>>bal;
    cout<<"\nEnter the amount to withdraw: ";
    cin>>withdraw;
    k=withdraw;
    if( k!=withdraw)
    cout<<"Transaction Failed: Withdrawl amount is not a multiple of 5";
    else if( (k)%5 != 0 && k==withdraw)
    cout<<"Transaction Failed: Withdrawl amount is not a multiple of 5";
    else if(withdraw+0.5 > bal)
    cout<<"Transaction Failed: Withdrawl amount is greater than balance left";
    else
    {
      cout<<"\nSuccessful Transaction";
      cout<<"\nBal left = "<<bal-withdraw-0.5;
      cout<<"\nAmount Withdrawn = "<<(withdraw + 0.5); 
    }
    cout<<"\n";
    system("pause");
    return 0;
}                
