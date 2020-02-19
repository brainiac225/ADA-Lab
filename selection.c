#include <stdio.h>
#include <time.h>

void Selection_Sort(int A[],int n)
{
	int i,j;
	int min,temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(A[min]>A[j])
			min = j;
		}
		temp = A[min];
		A[min] = A[i];
		A[i] = temp;
	}
	printf("\nSorted Array Using Selction Sort is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}

int main()
{
	int A[1000],i;
	int n;
	clock_t start, end;
    	double time_required;
	printf("\n*** Selection Sort ***: ");
	
	printf("\nEnter The Size Of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : \n",n);
        for(i=0;i<n;i++)
       {
	scanf("%d",&A[i]);
	}
	start = clock();
	Selection_Sort(A,n);     
	end = clock();
     	time_required = ((double) (end - start)) / CLOCKS_PER_SEC;
     	printf("\nTime Taken For Sorting %d Elements is : %f\n",n,time_required);
     	return 0;				  
	}

