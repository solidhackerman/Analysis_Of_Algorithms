#include<stdio.h>

void insertion_sort(int[],int);
int c=0;
int i,j;
void main()
{
	int arr[100],n,temp,i;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	insertion_sort(arr,n);
	printf("Sorted array : ");
	for(i=0;i<n;i++)
	printf("%d \n",arr[i]);
	printf("Value of count %d\n",c);
}

void insertion_sort(int arr[],int n)
{
	int temp;
	c++;
	for(i=1;i<n;i++)
	{
		c++;
		temp=arr[i];
		c++;
		j=i-1;
		c++;
		while(temp<arr[j]&&j>=0)
		{
			c++;
			arr[j+1]=arr[j];
			c++;
			j--;
			c++;
		}
		c++;
		arr[j+1]=temp;
		c++;
	}
	c++;
}
