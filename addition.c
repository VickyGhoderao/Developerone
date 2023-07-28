#include <stdio.h>
int add();
int main()
{
  /*i have added varible tos*/
  int a;
  a=add();
}
int add(){
  int a,b;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter a number:");
  scanf("%d",&b);
  printf("Addition of two variable is:%d",a+b);

}