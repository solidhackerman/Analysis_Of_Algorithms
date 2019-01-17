#include<stdio.h>

int c=0;
int i,j;
void selectionSort(int[],int);
void main()
{
	int arr[100],n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	selectionSort(arr,n);
	printf("Sorted array : ");
	for(i=0;i<n;i++)
	printf("%d \n",arr[i]);
	printf("Value of count : %d\n",c);
}

void selectionSort(int arr[],int n)
{
	int temp,min_index;
	c++;
	c++;
	for(i=0;i<n-1;i++)
	{
		c++;
		min_index=i;
		c++;
		for(j=i+1;j<n;j++)
		{
			c++;
			if(arr[j]<arr[min_index])
			{
				c++;
				min_index=j;
				c++;
			}
			else	
			c++;
		}
		c++;
		temp=arr[i]; c++;
		arr[i]=arr[min_index]; c++;
		arr[min_index]=temp; c++;
	}
	c++;
}
