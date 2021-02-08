#include <stdio.h>

int * add(int a, int b){
  int c = a + b;
  return &c;
} //What if I actually want to write a function that returns a new integer?!?

int * sub(int a, int b){
  int c = a - b;
  return &c;

}

int * newarray(int len){
  //return a new array of integers of the given length!!
  int a[len];

  return a;
    
}

int main(){

  int * p = add(10,20);
  int * q = sub(10,20);
  
  printf("*p=%d\n", *p);
  printf("*q=%d\n", *q);

}

  
