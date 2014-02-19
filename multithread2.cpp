#include <windows.h>
#include <process.h>
#include <iostream>
#include "Event.h"

using namespace std;

void Func1(void *);
void Func2(void *);

Event st; //Create an event

int main()
{
  HANDLE hThreads[2];

  //Create two threads and start them
  hThreads[0] = (HANDLE)_beginthread(Func1, 0, NULL);
  hThreads[1] = (HANDLE)_beginthread(Func2, 0, NULL);

  //Makes sure that both the threads have finished before going further
  WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);

  cout << "Main exit" << endl;
  return 0;
}

void Func1(void *P)
{
  int Count = 0;

  for (;;)
  {
    st.Wait();
    do //This loop will only start when Event is triggered
    {
      cout<<"Func1: Count = "<<Count++<<endl;
    }while(Count < 10);
    return;
  }

  return;
}

void Func2(void *P)
{
  for(int i = 0; i < 10; i++)
  {
    cout<<"Func2: i = "<<i<<endl;
  }
  //Release the event so Thread1 (Func1) can start
  st.Release();
  return;
