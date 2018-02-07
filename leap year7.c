#include<stdio.h>
main()
{
	int a;
	printf("Enter the year");
	scanf("%d",&a);
	if(a%4==0)
	printf("%d Is a leap year",a);
	else
	printf("%d Is not an leap year",a);
	return 0;
}
