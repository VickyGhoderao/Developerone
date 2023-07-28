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
  printf("Enter a number including space:");
  scanf("%d %d",&a,&b);
  printf("Addition of two variable is:%d",a+b);
  

}