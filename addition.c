#include <stdio.h>
void add();
int main()
{
  add();
}
void add(){
  int a,b;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter a number:");
  scanf("%d",&b);
  printf("Addition of two variable is:%d",a+b);

}