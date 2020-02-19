#include<stdio.h>
#include <time.h>

void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
void bubsort(int a[],int n)
{
 int i,j;
 for(i=0;i<n-2;i++)
 {
  for(j=i+1;j<n-1;j++)
  {
   if(a[j]<a[i])
   swap(&a[j],&a[i]);
  }
 }
} 
void klargest(int a[],int n,int k)
{
 int i;
 printf("Largest elements");
 for(i=n-1;i>n-k-1;i--)
 {
  printf(" %d ",a[i]);
 }
}
int main()
{
 clock_t start_t, end_t, total_t;
 int n=5;
 int k=3;
 int ch;
 int a[]={54,32,45,21,67};
 start_t = clock();
 bubsort(a,n);
 klargest(a,n,k);
 end_t = clock();
 total_t = end_t - start_t;
 printf("Total time taken by CPU: %ld \n", total_t  );
 return 0;
}   
