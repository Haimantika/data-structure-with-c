#include<stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *s,int start,int end){
  static int count;
  int j;
  if(start==end){
    count++;
    printf("%d. %c \n",count,s);
  }
  else{
    for(j=start;j<=end;j++){
      swap((s+start),(s+j));
      permutation(s,start+1,end);
      swap((s+start),(s+j));
    }
  }
}
main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permutation(str, 0, n-1);

}
