#include <stdio.h>
#include <stdlib.h>

#define f(a,b,c)(a+b+c)*(a-b-c)

int main(void)
{
	
	float i,j,k;
	printf("�γo�Ӥ�{��(a+b+c)*(a-b-c)��X�A������\n");	
printf("�п�Ja,b,c�T�ӼƦr:");
scanf("%f%f%f",&i,&j,&k);
printf("�p�⵲�G��%f\n",f(i,j,k));

system("PAUSE");
return 0;	
}

