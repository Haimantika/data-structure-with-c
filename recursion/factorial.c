#include<stdio.h>
int factorial(int);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  int fact = factorial(n);
  printf("factorial of given %d is: %d \n",n,fact);
  return 0;
}
int factorial(int n)
{
  if(n>0){
    return(n*factorial(n-1));
  }
  else{
    return 1;
  }
}
