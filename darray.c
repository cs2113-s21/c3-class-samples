#include <stdio.h>
#include <stdlib.h>

int main(){

  int darray[2][3] = {{0,1,2},
		      {3,4,5}};


  printf("**darray = %d\n", **darray);
		      
  printf("sizeof(darray)= %lu\n",sizeof(darray));

  printf("*((int *) darray) = %d\n", *((int *) darray));
  printf("*((int *) darray + 2) = %d\n", *((int *) darray+2));

  printf("\n");
  printf("   darray=%p\n",darray);
  printf("darray[0]=%p *(darray[0])=%d\n",darray[0], *darray[0]);
  printf("darray[1]=%p *(darray[1])=%d\n",darray[1],*darray[1]);
}
