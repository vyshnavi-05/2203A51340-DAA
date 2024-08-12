//selection sort
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,a[10],size,min,pos;
	printf("\n enter the size of array:");
	scanf("%d",&size);
	if (size>10)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter the elements of array:");
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
		for(i=0;i<size-1;i++)
		{
			min=a[i];
			pos=i;
			for(j=i+1;j<size;j++)
			{
				if(min>a[j])
				{
					min=a[j];
					pos=j;
				}
				else
				min=min;
				
			}
			a[pos]=a[i];
			a[i]=min;
		}
		// array after sorting
		printf("\n array after sorting:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	
	}
}
