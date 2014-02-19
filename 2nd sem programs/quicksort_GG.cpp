#include <iostream>
#include <conio.h>
using namespace std;

int arr[10];

int quic(int p,int q)
{
    int key=arr[q],ct=p;
    int i;
    
    for (i=p;i<q;i++){
        if (arr[i]<key){
           //arr[ct]=arr[i];
           swap(arr[ct],arr[i]);
           ct++;
        }
    }
    swap(arr[q],arr[ct]);
    
    return ct;
}
             
void qs(int p,int q)
{
     if (p<q){
             int r;
             r=quic(p,q);
             qs(p,r-1);
             qs(r+1,q);
     }
}

int main()
{
    int i;
    srand(time(0));
    for (i=0;i<10;i++){
        arr[i]=rand()%100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    int p=0,q=9;
    
    qs(0,9);
    
    for (i=0;i<10;i++){
    //    arr[i]=rand()%100;
        cout << arr[i] << " ";
    }    
    
    getch();
    return 0;
}
