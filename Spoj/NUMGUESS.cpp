#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    char s[5];
    scanf("%d%d",&a,&b);
    printf("%d\n",(a+b)/2);
    fflush(stdout);
    scanf("%s",&s);
    while(s[0]!='W')
    {
                    if(s[0]=='L')
                    a=(a+b)/2+1;
                    else if(s[0]=='H')
                    b=(a+b)/2-1;
                    printf("%d\n",(a+b)/2);
                    fflush(stdout);
                    scanf("%s",&s);
    }
    return 0;
}
