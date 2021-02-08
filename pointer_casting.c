#include <stdio.h>
#include <stdlib.h>

int main(){

  int a = 0x42;
  int *p = &a;

  char *q = (char *) &a;

  printf("a=0x%08x\n",a);
  printf("\n");
  for(int i=0;i<sizeof(int);i++){
    printf("q[%d]=0x%02hhx\n",i,q[i]);
  }
  printf("\n");
  printf("(str) q: %s\n",q);
  printf("\n");

  printf("Life, universe, everything ... C\n");

    
}
