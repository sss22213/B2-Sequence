#include <stdio.h>
#include <stdlib.h>
int IsB2(int *array,int number)
{
	//Increment
	for(int i=0;i<number-1;i++)
	{
		if(array[i]>array[i+1])
		{
			perror("Not increment");
			exit(EXIT_FAILURE);
		}
	}
	//B2 check
	for(int i=0;i<number-2;i++)
        {
		for(int j=i+1;j<number-1;j++)
		{
			for(int k=j+1;k<number;k++)
			{
				if(array[i]+array[j]==array[k])
				{
					return 1;
				}	
			}			
		}
        }
	return 0;
	
}

int main()
{
	int N;	
	int array[100];
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("%d",IsB2(array,N));	
	return 0;
}
