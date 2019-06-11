#include<stdio.h>

int main(){
  unsigned long long int result=0;
  int input;
  scanf("%d",&input);
  if(input==0 || input==1)  printf("1");
  else{
    while(input>1){
      result= result*input;
      input--;
    }
  }
  printf("%llu",result);
  return 0;
}
