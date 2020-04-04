#include<stdio.h>
void TowerOfHanoi(int,char,char,char);
void main()
{
  int n;
  printf("Enter the numbers of Disks: \n");
  scanf("%d",&n);
  TowerOfHanoi(n,'A','B','C');
}

void TowerOfHanoi(int number,char source,char destination,char auxiliary)
{
  if(number>=1){
  TowerOfHanoi((number-1), source,auxiliary,destination); //(think it for one disk) first step when disk is going for source to auxiliary here source is source tower and destination is auxiliary tower
  printf("Moved: %c --> %c /n",source,destination);
  TowerOfHanoi((number-1),auxiliary,destination,source); //(think it for one disk) second step when disk is going for auxiliary to destination here source is auxiliary tower and destination is destination tower
  }
}
