#include<stdio.h>
int main(){
	float a, h;
	printf("Hay nhap vao do dai canh: ");
	scanf("%f",&a);
	printf("Hay nhap vao chieu cao cua tam giac: ");
	scanf("%f",&h);
	float S = 0.5*a*h;
	printf("Dien tich cua tam giac la %.2f",S);
	
	return 0;
}
