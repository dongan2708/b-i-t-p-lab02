#include<stdio.h>
int main(){
	
	printf("kieu int: %d byte \n", (sizeof(int)));
	printf("nhap vao so nguyen :");
	scanf("%d");
	
// code tuong tu cho float,double, char, long int, long double.
    printf("kieu float: %f byte \n", (sizeof(float)));
	printf("nhap vao so thuc kieu float :");
	scanf("%f");
	printf("kieu double: %lf byte \n", (sizeof(double)));
	printf("nhap vao so thuc kieu double :");
	scanf("%lf");
	printf("kieu char : %c byte \n", (sizeof(char)));
	printf("nhap vao ky tu :");
	scanf("%c");
	printf("kieu long int: %li byte \n", (sizeof(long int)));
	printf("kieu long double: %Lf byte \n", (sizeof(long double)));
	
}
