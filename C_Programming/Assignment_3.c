/*
 ============================================================================
 Name        : Test.c
 Author      : Kaimo
 Description : C Programming Assignment #3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char ex_no;
	float temp[50];
	int no,no2,c,cc;
	float a[2][2],b[2][2];
	char str[20];
	while(1){
		printf("Enter Ex_No: ");
		fflush(stdout);	fflush(stdin);
		scanf("%c",&ex_no);
		printf("###############################################\n");
		switch(ex_no){
			case('1'):
				printf("Enter the elements of 1st matrix\nEnter a11: ");
				fflush(stdout);	fflush(stdin);
				scanf("%f",&a[0][0]);
				printf("Enter a12: ");
				fflush(stdout);
				scanf("%f",&a[0][1]);
				printf("Enter a21: ");
				fflush(stdout);
				scanf("%f",&a[1][0]);
				printf("Enter a22: ");
				fflush(stdout);
				scanf("%f",&a[1][1]);
				printf("Enter the elements of 2nd matrix\nEnter b11: ");
				fflush(stdout);
				scanf("%f",&b[0][0]);
				printf("Enter b12: ");
				fflush(stdout);
				scanf("%f",&b[0][1]);
				printf("Enter b21: ");
				fflush(stdout);
				scanf("%f",&b[1][0]);
				printf("Enter b22: ");
				fflush(stdout);
				scanf("%f",&b[1][1]);
				printf("Sum Of Matrix:\n%.1f\t%.1f\n%.1f\t%.1f",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);
				break;
			case('2'):
				printf("Enter the numbers of data: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&no);
				float avg = 0;
				for(c=0;c<no;c++){
					printf("Enter number: ");
					fflush(stdout);	fflush(stdin);
					scanf("%f",temp+c);
					avg+=temp[c];
				}
				avg/=no;
				printf("Average = %.2f",avg);
				break;
			case('3'):
				printf("Enter rows and column of matrix: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d %d",&no,&no2);
				printf("Enter elements of matrix:\n");
				for(c=0;c<no;c++){
					for(cc=0;cc<no2;cc++){
						printf("Enter element a%d%d: ",c+1,cc+1);
						fflush(stdout);	fflush(stdin);
						scanf("%f",temp+c*no2+cc);
					}
				}
				printf("\nEntered Matrix:\n");
				for(c=0;c<no;c++){
					for(cc=0;cc<no2;cc++){
						printf("%.1f\t",temp[c*no2+cc]);
					}
					printf("\n\n");
				}
				printf("\nTranspose of Matrix:\n");
				for(c=0;c<no2;c++){
					for(cc=0;cc<no;cc++){
						printf("%.1f\t",temp[cc*no2+c]);
					}
					printf("\n\n");
				}
				break;
			case('4'):
				printf("Enter no of elements: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&no);
				for(c=0;c<no;c++){
					scanf("%f",temp+c);
				}
				printf("Enter the element to be inserted: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&no2);
				printf("Enter the location: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&c);
				for(int i=no-1;i>=c-1;i--)
					temp[i+1]=temp[i];
				temp[c-1]=no2;
				for(c=0;c<no+1;c++){
					printf("%d\t",(int)temp[c]);
				}
				break;
			case('5'):
				printf("Enter no of elements: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&no);
				for(c=0;c<no;c++){
					scanf("%f",temp+c);
				}
				printf("Enter the element to be searched: ");
				fflush(stdout);	fflush(stdin);
				scanf("%d",&no2);
				for(c=0;c<no;c++){
					if((int)temp[c]==no2)break;
				}
				(c!=no)? printf("Number found at the location = %d",c+1):printf("Number is not found");
				break;
			case('6'):
				printf("Enter a string: ");
				fflush(stdout);	fflush(stdin);
				gets(str);
				printf("Enter a character to find frequency: ");
				char tt;
				fflush(stdout);	fflush(stdin);
				scanf("%c",&tt);
				cc=0;
				for(c=0;str[c];c++)if(str[c]==tt)cc++;
				printf("Frequency of %c = %d",tt,cc);
				break;
			case('7'):
				printf("Enter a string: ");
				fflush(stdout);	fflush(stdin);
				gets(str);
				for(c=0;str[c];c++);
				printf("Length of string: %d",c);
				break;
			case('8'):
				printf("Enter a string: ");
				fflush(stdout);	fflush(stdin);
				gets(str);
				printf("Reverse string is: ");
				for(c=0;str[c];c++);
				for(;c>=0;c--)printf("%c",str[c]);
				break;
			default:
				printf("Wrong Ex_No");
				return EXIT_SUCCESS;
				break;
		}
		printf("\n###############################################\n");
	}
}

