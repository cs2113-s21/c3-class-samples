#include <stdio.h>
#include <stdlib.h>

int * newarray(int len){
  int * p = malloc(len*sizeof(int));
  for(int i=0;i<len;i++){ p[i] = 0;}
  return p;
}

int * nearray2(int len){
  int * p = calloc(len, sizeof(int)); //this is the same as newarray above
  return p;
}

int main(){

  int * a = calloc(5,sizeof(int)); //newarray(5);

  for(int i=0;i<5;i++){
    a[i] = i*2;
  }

  for(int i=0;i<5;i++){
    printf("a[%d] = %d \n",i,a[i]);
  }

  free(a);

  //if we don't free a, then we have lost the old reference to the
  //array --- we can't use it anymore and we can't find it!
  //
  // THIS IS A MEMORY LEAK
  
  printf("\n");
      
  a = newarray(3);
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  printf("a[0] = %d, a[1] = %d, a[2] = %d\n",a[0],a[1],a[2]);

  free(a);
  
}
