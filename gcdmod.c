#include<stdio.h>
int gcd(int a, int b)
{
  if(b==0)
  return a;
  else
  return gcd(b, a%b);
 }
 
 int main()
 {
  int a,b;
  printf("Enter the two numbers: ");
  scanf("%d %d", &a,&b);
  printf("GCD of the two numbers is: %d ", gcd(a,b));
  return 0;
 }
