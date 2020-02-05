#include<stdio.h>
int gcd(int a, int b)
{
  if(a==0)
  return b;
  if(b==0)
  return a;
  if(a==b)
  return a;
  if(a>b)
  return gcd(a-b,b);
  else
  return (b-a,a);
 }
 
 int main()
 {
  int a,b;
  printf("Enter the two numbers: ");
  scanf("%d %d", &a,&b);
  printf("GCD of the two numbers is: %d ", gcd(a,b));
  return 0;
 }
