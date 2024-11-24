#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen can kiem tra: ");
	scanf("%d",&number);
	if(number % 2 == 0){
		printf("So vua nhap la so chan");
	}
	else{
		printf("So vua nhap la so le");
	}
	
	return 0;
}
