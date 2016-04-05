#include <stdio.h>
#include <stdlib.h>
int IsB2(int *array,int number)
{
        //Increment
        for(int i=0;i<number-1;i++)
        {
                if(array[i]>=array[i+1])
                {
                        perror("Not increment");
                        exit(EXIT_FAILURE);
                }
        }
	//
	int temp[((1+number-1)*(number-1)/2)+number];
        int n=0;
	//Enumerate
	for(int i=0;i<number;i++)
	{
		temp[n]=array[i];
		n++;
	}
	
	for(int i=0;i<number-1;i++)
	{
		for(int j=i+1;j<number;j++)
		{
			temp[n]=array[i]+array[j];
			n++;
		}	
	}
	//Search
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(temp[i]==temp[j])
			{
				return 1;
			}
		}
	}
       
	return 0;

}

int main()
{
	
        int N;
        int array[100];
	int count=1;
        while(scanf("%d",&N)!=EOF)
	{
        	for(int i=0;i<N;i++)
        	{
                	scanf("%d",&array[i]);
        	}
		if(IsB2(array,N))
		{
			printf("Case #%d: It is not a B2-Sequence.",count);
		}
		else
		{	
			printf("Case #%d: It is a B2-Sequence.",count);
		}
        	printf("\n");
		//printf("%d",IsB2(array,N));
        	count++;
	}
	return 0;
}
