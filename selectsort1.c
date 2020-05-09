#include<stdio.h>
#include<stdlib.h>

void selectsort(int arr[],int nlenght)
{
	
	int i,j;
	int ptemp;
	for(i = 0;i<nlenght-1;i++)
	{
		
				int pmax =arr[0] ;
				 ptemp = 0;
		for(j = 1;j<nlenght-i;j++)
		{

				if(pmax<arr[j])
				{
					pmax = arr[j];
					ptemp = j;
				}
				
		}
		if(nlenght-1-i!=ptemp)
		{
			arr[nlenght-i-1] = arr[nlenght-i-1]^arr[ptemp];
			arr[ptemp]  = arr[nlenght-i-1]^arr[ptemp];
			arr[nlenght-i-1] = arr[nlenght-i-1]^arr[ptemp];
		}
	}
	
	
	
}

void print(int arr[], int nlenght)
{
	int i;
	for(i = 0;i<nlenght;i++)
		{
		printf("%d   ",arr[i]);	
		}
	
	
}

int main()
{
	int arr[] = {8,3,5,1,4};
	selectsort(arr,sizeof(arr)/sizeof(arr[0]));

	print(arr,sizeof(arr)/sizeof(arr[0]));
	
return 0;
}
