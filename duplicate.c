#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * duplicate(char * s){
  int len = strlen(s);

  char * new_s = malloc(len+1); //+1 for null termination
  strcpy(new_s,s); //copy all the bytes into new_s

  return new_s;
}


int main(){

  char * s1 = "I love cs2113!";

  char * s2 = strdup(s1); //duplicate(s1);


  // s1 != s2 <- as in the pointer values do not equal
  // but strcmp(s1,s2) => 0  (as in the two strings are the same!)

  if(s1 != s2){
    printf("s1 does not equal s2\n");
  }

  if(strcmp(s1,s2) == 0){
    printf("They are the same string!\n");
    printf("s1=\"%s\"\n",s1);
    printf("s2=\"%s\"\n",s2);
  }

  free(s2);
  
}
