#include<stdio.h>
main()
{
      int test;
      scanf("%d",&test);
      long long int n;
      while(test--)
      {
                   scanf("%llu",&n);
                   if(n==1)
                   printf("poor conductor\n");
                   else
                   {
                   printf("%llu ",((n-2)/5)+1);
                   n=n%10;
                   switch(n)
                   {
                            case 1:{printf("W L\n");break;}
                            case 2:{printf("W L\n");break;}
                            case 3:{printf("A L\n");break;}
                            case 0:{printf("A L\n");break;}
                            case 4:{printf("A R\n");break;}
                            case 9:{printf("A R\n");break;}
                            case 5:{printf("M R\n");break;}
                            case 8:{printf("M R\n");break;}
                            case 6:{printf("W R\n");break;}
                            case 7:{printf("W R\n");break;}
                   }
                   }
      }
}
