// http://www.cplusplus.com/doc/tutorial

#include <iostream>
#include <string>

using namespace std;


int fib(int num){
  if( num < 1){
    cout << "you entered [" << num << "]. Please enter a number greater than ]";
    return -1;
  }
  int a = 0;
  int b = 1;
  int holder = 0;
  while( num > 1){
    holder = b;
    b = a + b;
    a = holder;
    num--;
  }
  return b;
}

int refib(int num){
  if(num < 2) return num;
  else return refib(num - 1) + refib(num - 2);
}
int main()
{
  string h = "Hello World!\n";
  //std::cout =  print
  cout << h;
  cout << "Fibonocai Sequence\n";
  cout << fib(0) << "\n";
  cout << fib(1) << "\n";
  cout << fib(25) << "\n";
  cout << refib(0) << "\n";
  cout << fib(1) << "\n";
  cout << refib(25) << "\n";
  
  return(0);
}

