#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char string[100000];
  scanf("%s",string);
  for(int i= strlen(string)-1; i>=0; i--) printf("%c",string[i]);
  return 0;
}
