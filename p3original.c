#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int ans=0;
  for(int i=1;i<=n;i++)
  {
    ans+=i;
  }
  return ans;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",n,sum);
}
int main()
{
  int n, sum;
  n = input();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}