#include<stdio.h>
#include<string.h>
main()
{
    char a[100000];
    int l,q,i,count,k=1;
    while( scanf("%s",a)!= EOF ){
    
    l=strlen(a);q=0;count=0;
    i=0;
    for(;i<l;i++){
    if(q==0){
    if(a[i]=='1'){
    count++;
    q=1;}}
    else
    {
    if(a[i]=='0'){
    count++;
    q=0;
    }
    }
    }
    printf("Game #%d: %d\n",k++,count);}
}
