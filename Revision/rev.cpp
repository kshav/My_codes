#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main()
{
    char k[100];
    char *start,*end,*ptr;
    cout<<"Enter any sentence\n";
    cin.getline(k,100);
    int l;
    start=k; 
    l=strlen(k);
    cout<<l;
    for(start ;start<&k[l-1];start++)
    {
            if(*start==' '||*start=='\0')
            {
                       for( ptr=start-1;ptr>=0;ptr--)
                       {
                            end=ptr;
                            cout<<*end;
                            break;
                       }
                       break;
            }
            break;
            start++;
    }
    getch();
    return 0;
}
                       
                    
                        