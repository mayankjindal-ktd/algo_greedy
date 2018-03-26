# algo_greedy
#include<stdio.h>
void egyptianfraction(int,int);
int main()
{
  int nr,dr;
  printf("enter the numerator:");
  scanf("%d",&nr);
  printf("enter the denominator:");
  scanf("%d",&dr);
  
  egyptianfraction(nr,dr);
  return 0;	
}

void egyptianfraction(int nr,int dr)
{
	int n;
	if(nr==0 && dr==0)
	{
		return;
	}
	else if(dr%nr == 0)
	{
		printf("1/%d",dr/nr);
		return;
	}
	else if(nr%dr == 0)
	{
		printf("%d",nr/dr);
		return;
	}
	else if(nr > dr)
	{
		printf("%d+",nr/dr);
		egyptianfraction(nr%dr,dr);
		
	}
	else
	{
	 n = dr / nr + 1;
	 printf("1/%d+",n);
	 egyptianfraction(nr*n-dr,n*dr);
		
	}
}
