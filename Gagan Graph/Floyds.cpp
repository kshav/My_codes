#include <iostream>
#include <conio.h>
using namespace std;

int dist[5][5];
int pred[5][5];
struct node{
       int data;
       node *link;
}*p,*tmp,*start=NULL,*next;

void path(int s, int d)
{
     if (pred[s-1][d-1]!=d){
        path(s,pred[s-1][d-1]);
        path(pred[s-1][d-1],d);
     }
     else {
          if (start==NULL){
             p=new node;
             p->link=NULL;
             p->data=s;
             tmp=p;
             start=p;
                
             p=new node;
             p->link=NULL;
             p->data=d;
             tmp->link=p;
          }
          else{
               p=start;
               while (p->data!=s)
                     p=p->link;
               
               tmp=p;
               next=p->link;
               p=new node;
               p->link=NULL;
               p->data=pred[s-1][d-1];
               tmp->link=p;
               p->link=next;
          }
     }
}          

int main()
{
    
    int i,j,k; //for looping
    
    //Array initialisation
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            if (i!=j)
               dist[i][j]=2000;
            else
                dist[i][j]=0;
    
    dist[1][0]=3;
    dist[2][0]=10;
    dist[0][1]=3;
    dist[3][1]=5;
    dist[0][2]=10;
    dist[3][2]=6;
    dist[1][3]=5;
    dist[2][3]=6;
    dist[4][3]=4;
    dist[2][4]=15;
    dist[3][4]=4;
    
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            if (i==j)
               pred[i][j]=0;
            else
                pred[i][j]=j+1;
    
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
            cout << dist[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n";
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
            cout << pred[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n\n";
    //Initialization over
    
    for (k=0;k<5;k++){
        for (j=0;j<5;j++){
            for (i=0;i<5;i++){
                if (i!=k && j!=k && i!=j){
                         if (dist[i][j] > dist[i][k] + dist[k][j]){
                            dist[i][j]=dist[i][k]+dist[k][j];
                            pred[i][j]=k+1;
                         }
                }
            }
        }
    }
    
    cout << "Finally:\n\n";
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
            cout << dist[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n";
    
    for (i=0;i<5;i++){
        for (j=0;j<5;j++)
            cout << pred[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n\n";
    
    int src,des;
    cout << "Enter the source node: ";
    cin >> src;
    cout << "Enter the destination node: ";
    cin >> des;

    path(src,des);
    cout << "Path: ";
    
    p=start;
    while (p!=NULL){
          cout << p->data;
          p=p->link;
    }
    
    getch();
    return 0;
}
