#include <iostream>
#include <process.h>
#include <windows.h>
#include <conio.h>
using namespace std;

void hello( void* number)
{
  cout<<"Hello ";
  _endthread();
}
void world(void* number)
{
cout<<"World ";
_endthread();
}
int main(int argc, char *argv[])
{
    int i=0,n,k;
    HANDLE handle;
    cin>>n>>k;
    if(k%2==0)
    {
     for(i=0;i<n;i++)
     {
    handle=(HANDLE)	_beginthread( hello, 0, (void*)&i);
    WaitForSingleObject(handle,INFINITE);
    handle=(HANDLE)	_beginthread( world, 0, (void*)&i);
    WaitForSingleObject(handle,INFINITE);
    }
    }
     else
    {
     for(i=0;i<n;i++)
     {
    handle=(HANDLE)	_beginthread(world, 0, (void*)&i);
    WaitForSingleObject(handle,INFINITE);
    handle=(HANDLE)	_beginthread( hello, 0, (void*)&i);
    WaitForSingleObject(handle,INFINITE);
    }
    }
    getch();
    return 0;
}
