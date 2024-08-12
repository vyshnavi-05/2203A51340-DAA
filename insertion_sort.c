#include<stdio.h>
void main()
{
	int i,j,a[10],key,size;
	printf("\n enter the size of array:");
	scanf("%d",&size);
	if(size>10)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter the array elements:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		// array before sorting
		printf("\n array before sorting:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
		
	// insertion sort
		for(i=1;i<size;i++)
		{
			key=a[i];
			j=i-1;
			while(j>=0&&a[j]>key)   // descending (<)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=key;
		}	
		// array after sorting
		printf("\n array after sorting:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
