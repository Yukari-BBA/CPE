#include <stdio.h>
#include <stdlib.h> 

int main(){
	int n,i,j,count,tmp;
	int max_count=0;
	int max_number;
	while(1)
	{
		scanf("%d%d",&i,&j);
//	printf("%d %d\n",i,j);
	
//	scanf("%d",&tmp);
//	
//	while(tmp!=1)
//	{
//		if(tmp%2!=0)
//		{
//			tmp=3*tmp+1;
//			count++;
//		}
//		else
//		{
//			tmp=tmp/2;
//			count++;
//		}
//	} 
//	count++;
//	printf("%d",count);

		if(i<j)
		{ 
			n =i;
			while(i<=j)
			{
				tmp = i;
				count = 0;
				while(tmp!=1)
				{
					if(tmp%2!=0)
					{
						tmp=3*tmp+1;
						count++;
					}
					else
					{
						tmp=tmp/2;
						count++;
					}
				} 
				count++;
				if(count>max_count)
				{
					max_count = count;
					max_number = i;
				}
				
				i ++;
			}
			printf("%d %d ",n,j);
			printf("%d\n",max_count);
		}
		else{
			n =j;
			while(i>=j)
			{
				tmp = j;
				count = 0;
				while(tmp!=1)
				{
					if(tmp%2!=0)
					{
						tmp=3*tmp+1;
						count++;
					}
					else
					{
						tmp=tmp/2;
						count++;
					}
				} 
				count++;
				if(count>max_count)
				{
					max_count = count;
					max_number = j;
				}
				
				j ++;
			}
			printf("%d %d ",i,n);
			printf("%d\n",max_count);
		}
		
	}
	
//	printf("%d",max_number);
//	printf("%d %d ",n,j);
//	printf("%d",max_count);
	
	
	return 0;
}
