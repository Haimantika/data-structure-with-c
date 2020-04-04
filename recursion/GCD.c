#include<stdio.h>
int GCD(int,int);
int main(){
  int a,b;
  printf("Enter the two valus of which you want to find GCD: ");
  scanf("%d %d",&a,&b);
  printf("The GCD is: %d\n",GCD(a,b));
  return 0;
}
int GCD(int a,int b){
  if(a%b == 0){
    return b;
  }
  if(b%a==0){
    return a;
  }
  if(a>b){
    return(GCD(a%b,b));
  }
  if(b>a){
    return(GCD(b%a,a));
  }
  else if(a==b){
    return a;
  }
}
