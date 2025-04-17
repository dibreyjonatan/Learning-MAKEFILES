#include "math_lib.h"
#include "utils.h"

int main(){
  message();
  int x ;
  printf("please enter an integer : ");
  scanf("%d",&x);
  if(even_odd(x)){
    printf("%d is an odd number \n",x);
  }else{
    printf("%d is an even number \n",x);
  }

}