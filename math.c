#include <stdio.h>


int add(int a, int b){
  int c = a+b;
  return c;
}

int sub(int a, int b){
  int c = add(a,-b);
  return c;  
}

int mult(int a, int b){

  int c=0;
  for(int i=0;i<b;i++){
    c = add(c,a);
  }
  return c;
}

int main(){
  int c = mult(10,20);

  printf("%d\n",c);

}
