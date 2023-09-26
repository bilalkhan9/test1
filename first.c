#include<stdio.h>
int main()
{
	int i,t,a=0;
	char order[50]; 

	while(1)
	{
	
		printf("Enter order");
		scanf("%s",&order);
		printf("%s",order);
	
		if (order=="iron")
		{
			printf("iron detected");
			i+=1;
			if (i==3)
			{
				printf("order out of purchase");
				break;
			}
		}
		
		else if(order=="ac")
		{
			a++;
			if (a==3)
			{
				prinf("order out of purchase");
				break;
			}
		}
			
		else if(order=="tv")
			{
		t++;
		
			if (t==3)
				{
		
		
				printf("order out of purchase");
				break;
				}
			}
			else
			{
		
				printf("enter next order");
			}
}
	return 0;
}
