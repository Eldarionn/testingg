#include<stdio.h>
int main()
{
	int subject1,subject2,subject3,subject4,subject5,sum;
	printf("enter your first subject marks\n");
	printf("enter your  second subject marks\n");
	printf("enter your third subject marks\n");
	printf("enter your fourth subject marks\n");
	printf("enter your fifth subject marks\n");
	scanf("%d%d%d%d%d",&subject1,&subject2,&subject3,&subject4,&subject5);
	sum=subject1+subject2+subject3+subject4+subject5;
	printf("your total marks is %d:",sum);
	if(sum<=375)
	{
		printf("sorry you are not eligible for joint entrance exam\n auakt me raho\n");
		
	}
	else if(sum>=375)
	{
	
		printf("you are eligible for joint entrance exam\n");
	}
	else if(sum<=500)
	{
		printf("invalid total total must be under 500\n");
	}
	else 
	{
		printf("invaid input please check your input\n");
	}
	return 0;
}
