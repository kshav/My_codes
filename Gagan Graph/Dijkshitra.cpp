#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5][2];
    bool stat[5];
    int i,j,k; //for loops
    
    int dist[5][5];
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            if (i==j)
               dist[i][j]=0;
            else
                dist[i][j]=0;
                
    dist[0][1]=100;
    dist[0][2]=30;
    dist[1][2]=20;
    dist[2][3]=10;
    dist[2][4]=60;
    dist[3][1]=15;
    dist[3][4]=50;
    
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
            cout << dist[i][j] << "\t";
        cout << "\n";
    }
    
    for (i=0;i<5;i++)
        stat[i]=0;
    
    for (i=0;i<5;i++){
        j=1;
        arr[i][j]=0;
    }
    
    for (i=0;i<5;i++){
        j=0;
        arr[i][j]=2000;
    }
    arr[0][j]=0;
    
    cout << "\n\n";
    
    i=0;
    int n=0;
    int g=0;
    bool ct=0;
    int small;
    //stat[0]=1;
    while (/*!(stat[0]==stat[1]==stat[2]==stat[3]==stat[4]==1) || */n!=5){
          i=g;
          ct=0;
          for (j=0;j<5;j++){
            if (dist[i][j]!=0/* && stat[j]==0*/){
               if (ct==0){
                  small=dist[i][j];
                  ct=1;
                  g=j;
               }
               else if (small>dist[i][j] && ct==1){
                  small=dist[i][j];
                  g=j;
               }
               
               if (arr[j][0]>arr[i][0]+dist[i][j]){
                  arr[j][0]=arr[i][0] + dist[i][j];
                  arr[j][1] = i+1;
               }
               
               stat[i]=1;
            }
          }
          n++;
    }
    
    cout << "Node\tDist\tPred\tStatus\n";
    for (i=0;i<5;i++){
        cout << i+1 << "\t";
        cout << arr[i][0] << "\t";
        cout << arr[i][1] << "\t";
        cout << stat[i] << "\t";
        cout << "\n";
    }
        
    getch();
    return 0;
}
