/*
 ============================================================================
 Name        : Test.c
 Author      : Kaimo
 Description : C Programming Assignment #1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char ex_no,c1;
	int t1=0,t2=0;
	float f1,f2,f3;
	while(1){
		printf("Enter Ex_No: ");
		fflush(stdout);	fflush(stdin);
		scanf("%c",&ex_no);
		printf("###############################################\n");
		switch(ex_no){
			case('1'):
				printf("C Programming");
				fflush(stdout);
				break;
			case('2'):
				printf("Enter a integer: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&t1);
				printf("You entered: %d",t1);
				break;
			case('3'):
				printf("Enter two integers: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d %d",&t1,&t2);
				printf("Sum: %d",t1+t2);
			break;
			case('4'):
				printf("Enter two numbers: ");
				fflush(stdout);	fflush(stdin);
				scanf("%f %f",&f1,&f2);
				printf("Product: %f",f1*f2);
				break;
			case('5'):
				printf("Enter a character: ");
				fflush(stdout);	fflush(stdin);
				scanf("%c",&c1);
				printf("ASCII value of %c = %d",c1,c1);
				break;
			case('6'):
				printf("Enter value of a: ");
				fflush(stdout);
				scanf("%f",&f1);
				fflush(stdin);
				printf("Enter value of b: ");
				fflush(stdout);
				scanf("%f",&f2);
				fflush(stdin);
				f3 = f1;
				f1 = f2;
				f2 = f3;
				printf("After swapping, value of a = %f\n",f1);
				fflush(stdout);
				printf("After swapping, value of b = %f",f2);
				break;
			case('7'):
				printf("Enter value of a: ");
				fflush(stdout);
				scanf("%d",&t1);
				fflush(stdin);
				printf("Enter value of b: ");
				fflush(stdout);
				scanf("%d",&t2);
				fflush(stdin);
				t1 ^= t2;
				t2 ^= t1;
				t1 ^= t2;
				printf("After swapping, value of a = %d\n",t1);
				fflush(stdout);
				printf("After swapping, value of b = %d",t2);
				break;
			default:
				printf("Wrong Ex_No");
				return EXIT_SUCCESS;
				break;
		}
		printf("\n###############################################\n");
	}
}

