#include <iostream>
#include <conio.h>
using namespace std;

struct queue{
           char arr[20];
           int front;
           int rear;
}q;

void ins(char i)
{
     q.rear++;
     q.arr[q.rear]=i;
}

void rem()
{
     q.front++;
}

int main()
{
    int i,j,k;
    char seq[7]={'s','a','b','f','e','c','d'};
    
    //Construction of adjmatrix;
    bool adjmat[7][7];
    //1 col, 2 col
    for (i=0;i<=1;i++){
        adjmat[0][i]=0;
        adjmat[1][i]=0;
        adjmat[2][i]=1;
        adjmat[3][i]=0;
        adjmat[4][i]=1;
        adjmat[5][i]=0;
        adjmat[6][i]=0;
    }
    //3 col
    i=2;
        adjmat[0][i]=1;
        adjmat[1][i]=1;
        adjmat[2][i]=0;
        adjmat[3][i]=1;
        adjmat[4][i]=0;
        adjmat[5][i]=1;
        adjmat[6][i]=0;
    //4 col
    i=3;
        adjmat[0][i]=0;
        adjmat[1][i]=0;
        adjmat[2][i]=1;
        adjmat[3][i]=0;
        adjmat[4][i]=1;
        adjmat[5][i]=0;
        adjmat[6][i]=0;
    //5 col
    i=4;
        adjmat[0][i]=1;
        adjmat[1][i]=1;
        adjmat[2][i]=0;
        adjmat[3][i]=1;
        adjmat[4][i]=0;
        adjmat[5][i]=0;
        adjmat[6][i]=1;
    //6 col
    i=5;
        adjmat[0][i]=0;
        adjmat[1][i]=0;
        adjmat[2][i]=1;
        adjmat[3][i]=0;
        adjmat[4][i]=0;
        adjmat[5][i]=0;
        adjmat[6][i]=1;
    //7 col
    i=6;
        adjmat[0][i]=0;
        adjmat[1][i]=0;
        adjmat[2][i]=0;
        adjmat[3][i]=0;
        adjmat[4][i]=1;
        adjmat[5][i]=1;
        adjmat[6][i]=0;
    
    //contrucion over
    
    for (i=0;i<7;i++){
        for (j=0;j<7;j++)
            cout << adjmat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
    //
    
    //Intialise prerequiste arrays
    char color[7]={'g','w','w','w','w','w','w'};
    int d[7]={0,0,0,0,0,0,0};
    char pred[7]={'N','N','N','N','N','N','N'};
    
    for (i=0;i<7;i++)
        cout << color[i] << " ";
    cout << "\n";
    
    for (i=0;i<7;i++)
        cout << d[i] << " ";
    cout << "\n";

    for (i=0;i<7;i++)
        cout << pred[i] << " ";
    cout << "\n\n";
    
    q.front=0;
    q.rear=-1;
        
    ins('s');
    d[0]=0;
    
    //rem(q);
    //Initialization over
    
    //Bring it on
    int g,pred_n;
    while (q.rear>=q.front){
          for (i=0;i<7;i++)
             if (q.arr[q.front]==seq[i])
                break;
          color[i]='b';
          
          if (pred[i]=='N'){
             d[i]=0;
          }
          else{
               for (pred_n=0;pred_n<7;pred_n++)
                   if (pred[i]==seq[pred_n])
                      break;
                   d[i]=d[pred_n]+1;
          }
         
         rem();
         for (j=0;j<7;j++){
             if (adjmat[i][j]==1){
                 if (color[j]!='b'){
                    ins(seq[j]);
                    
                    //d[j]++;
                    color[j]='g';
                    pred[j]=seq[i];
                 }
             }
         }
    }
    
    cout << "Vertex:\t";
    for (i=0;i<7;i++)
        cout << seq[i] << " ";
    cout << "\n";
    
    cout << "Color:\t";
    for (i=0;i<7;i++)
        cout << color[i] << " ";
    cout << "\n";                

    cout << "Dist:\t";
    for (i=0;i<7;i++)
        cout << d[i] << " ";
    cout << "\n";
    
    cout << "Pred:\t";
    for (i=0;i<7;i++)
        cout << pred[i] << " ";
    cout << "\n";    
    
    getch();
    return 0;
}
