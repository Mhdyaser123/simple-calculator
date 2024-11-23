/*
 ============================================================================
 Name        : calc.c
 Author      : Mohammed Yaser
 Version     :
 Copyright   : © 2024 mohammed yaser. All Rights Reserved
 Description : Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,result;
	int option;
	setbuf(stdout,NULL);
	printf("A SIMPLE CALCULATOR\n");
	printf("-created by Yaser\n");
	printf("Enter 2 Numbers");
	scanf("%f%f",&num1,&num2);

	printf("please select any option from below\n");

	printf("1 for addition\n2 for subtraction\n3 for multiplication\n"
			"4 for division");
	scanf("%d",&option);

	if(option==1){
		result=num1+num2;
		printf("%f",result);
	}else if(option==2){
		result=num1-num2;
		printf("%f",result);
	}if(option==3){
		result=num1*num2;
		printf("%f",result);
	}if(option==4){
		result=num1/num2;
		printf("%f",result);
	}

	return EXIT_SUCCESS;
}
