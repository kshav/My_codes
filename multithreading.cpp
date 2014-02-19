#include<iostream>
#include <STRING>

using namespace std;

#include "ou_thread.h"

using namespace openutils;

class MyThread : public Thread {
private:
    int m_nCount;
public:
    MyThread(int n,const char* nm) {
        Thread::setName(nm);
        m_nCount = n;
    }
    void run() {
        for(int i=0;i<m_nCount;i++) {
            cout << getName().c_str() << ":" << i << endl;
        }
    }
};

int main() {
    Thread *t1 = new MyThread(15,"Thread 01");
    Thread *t2 = new MyThread(10,"Thread 02");
    try {
        t1->start();
        t2->start();
        t1->stop();
        t2->stop();
    }catch(ThreadException ex) {
      printf("%s\n",ex.getMessage().c_str());
  } 
  delete t1;
  delete t2;
  system("pause");
  return 0;
