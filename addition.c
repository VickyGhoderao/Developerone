#include <stdio.h>
int addition();
int main()
{
  addition();
}
int addition(){
  int a,b;
  printf("Enter a number include space:");
  scanf("%d %d",&a,&b);
  printf("Addition of two number is:%d",a+b);
}