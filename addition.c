#include <stdio.h>
void add();
int main()
{
  add();
}
void add(){
  int a,b;
  printf("Enter a two number:");
  scanf("%d %d",&a,&b);
  printf("addition of two number is:%d",a+b);
}