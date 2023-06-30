//WAP to calculate the sum of only even numbers, 1 to 10.
void main()
{
	int x,sum=0;
	x=1;

	clrscr();
	printf("\nList of even numbers in betweem : 1 to 10.");
	while(x<=10)
	{
		if(x%2==0)
		{
			printf("\n%d",x);
			sum=sum+x;
		}
		x=x+1;
	}
	printf("\nSum of even numbers = %d",sum);

	getch();
}