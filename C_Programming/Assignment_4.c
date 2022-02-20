/*
 ============================================================================
 Name        : Test.c
 Author      : Kaimo
 Description : C Programming Assignment #3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex_1(int A,int B){
	printf("Prime Numbers Between %d and %d are:",A,B);
	for(int i=A;i<=B;i++){
		if(i<2)continue;
		int isPrime = 1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){isPrime = 0;break;}
		}
		if(isPrime)printf("%d ",i);
	}
	return 1;
}

int ex_2(int num){

	if(num == 1)return 1;
	else{
		return num * ex_2(num-1);
	}
}

void ex_3(char* str){
	if(*str == 0)return;
	else{
		ex_3(str+1);
		printf("%c",*str);
	}
}

int ex_4(int b,int p){

	if(p == 1)return b;
	else if(p == 0)return 1;
	else if(p < 0)return -1;
	else{
		return b * ex_4(b,p-1);
	}
}

int main(void) {
	char ex_no;
	while(1){
			printf("Enter Ex_No: ");
			fflush(stdout);	fflush(stdin);
			scanf("%c",&ex_no);
			printf("###############################################\n");
			switch(ex_no){
				int a,b,r;
				char str[20];
				case('1'):
					printf("Enter two numbers(intervals): ");
					fflush(stdout);
					scanf("%d %d",&a,&b);
					ex_1(a,b);
					break;
				case('2'):
					printf("Enter an positive integer: ");
					fflush(stdout);
					scanf("%d",&a);
					printf("Factorial of %d = %d",a,ex_2(a));
					break;
				case('3'):
					printf("Enter a sentence: ");
					fflush(stdout); fflush(stdin);
					gets(str);
					ex_3(str);
					break;
				case('4'):
					printf("Enter base number: ");
					fflush(stdout);
					scanf("%d",&a);
					printf("Enter power number(positive integer): ");
					fflush(stdout);
					scanf("%d",&b);
					r = ex_4(a,b);
					(r == -1)? printf("Negative Power Entererd!"):printf("%d^%d = %d",a,b,r);
					break;
				default:
					printf("Wrong Ex_No");
					return EXIT_SUCCESS;
					break;
			}
			printf("\n###############################################\n");
		}
}







