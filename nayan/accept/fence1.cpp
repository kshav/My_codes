#include<iostream>
using namespace std;
int main()
{
    float l;
    cin>>l;
    while(l!=0)
    {
     float d;
     d=(113*l*l)/710;
     printf("%.2f\n",d);
     cin>>l;
    }
    return 0;
}
