#include <stdio.h>

int main()
{
	int i ;
	int grade[5];
	
	for(i = 0; i < 5; i++) {
		printf("input value [%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int sum = 0;
	
	for(i = 0; i < 5; i++) {
		printf("grade[%i] = %i\n", i, *(grade+i));
		sum+= grade[i];
	}
	
	printf("average : %i", sum/5);
	
	return 0;
}
