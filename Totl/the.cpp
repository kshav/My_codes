#include <windows.h>
#include <process.h>
#include <iostream>
#include<conio.h>
using namespace std;

void Func1(void *);
void Func2(void *);

int main()
{
    int n;
    _beginthread(Func1,
                 0,
                 NULL);
    _beginthread(Func2,
                 0,
                 NULL);

    //Sleep(10000);
    cout << "Main exit" << endl;
    cin>>n;
    getch();
    return 0;
}

void Func1(void *P)
{
    int Count;

    for (Count = 1; Count < 11; Count++)
    {
        cout << "Func1 loop " << Count << endl;
    }
    return;
}

void Func2(void *P)
{
    int Count;

    for (Count = 10; Count > 0; Count--)
    {
        cout << "Func2 loop " << Count << endl;
    }
    return;
}
