#include<iostream
#include<fstream>
using namespace std;


int main()
{     ofstream myfi;
    //int c=rand()%100;
    for(char i=0;i<50;i++)
    {      ofstream myfi;
            char c=i; 
            myfi.open("c.txt");
            myfi << "Writing this to a file./n";
    }
    system("pause");
    return 0;
}
