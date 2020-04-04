#include<stdio.h>
int fibonacci(int);
int main(){
  int n;
  printf("Enter the number to which you want to dispay the fibonaci series: ");
  scanf("%d",&n);
  for (int i=1;i<=n;i++){
    printf("%d ",fibonacci(i));
  }
  return 0;
}
int fibonacci(int n){
  if(n==1||n==2){
    return 1;
  }
  else{
    return(fibonacci(n-1)+fibonacci(n-2));
  }
}
