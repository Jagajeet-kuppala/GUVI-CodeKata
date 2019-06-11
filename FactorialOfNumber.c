#include<stdio.h>
#include<stdlib.h>

int main(){
  unsigned long long int result=1;
  int input;
  scanf("%d",&input);
  if(input==0 || input==1)  printf("1");
  else if(input>1){
    while(input>1){
      result= result*(unsigned long long int)input;
      input--;
    }
  }
  else{ printf("0"); return 0;}
  printf("%d",result);
  return 0;
}
