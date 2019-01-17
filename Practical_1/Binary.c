#include<stdio.h>
#define size 100
int c=0;
int binarys(int[],int,int);
void main()
{
	int arr[size],n,index=-1,key,i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter elements in array : ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the key to search : ");
        scanf("%d",&key);
	index=binarys(arr,n,key);
	if(index==-1)
	printf("Element not found!!!\n");
	else
	printf("Element found at position %d\n",index);
	printf("Value of count : %d\n",c);
}

int binarys(int arr[],int n,int key)
{
	int beg=0;
	c++;
	int end=n-1;
	c++;
	int mid;
	int flag=0;
	while(beg<=end)
	{
		c++;
		mid=(beg+end)/2;
		c++;
		if(arr[mid]==key)
		{
			c++;
			flag=1;
			c++;
			c++;
			break;
		}
		else if(arr[mid]<key)
		{
			c++;
			beg=mid+1;
			c++;
		}
		else
		{
			c++;
			end=mid-1;
			c++;
		}
	}
	c++;
	if(flag==1)
	{
		c++;
		c++;
		return mid;
	}
	else
	{
		c++;
		c++;
		return -1;
	}
}
