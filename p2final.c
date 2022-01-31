#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  {
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int l)
{
  printf("The largest number in the given input is: %d", l);
}
int main()
{
  printf("Start Of The Program:\n");
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(l);
  printf("\nEnd Of Program: ");
  return 0;
}