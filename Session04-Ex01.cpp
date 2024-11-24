#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen can kiem tra: ");
	scanf("%d",&number);
	if(number > 0){
		printf("So vua nhap la so duong");
	}
	else{
		printf("So vua nhap la so am");
	}
	
	return 0;
}
