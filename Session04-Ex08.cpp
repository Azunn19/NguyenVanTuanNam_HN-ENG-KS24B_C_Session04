#include<stdio.h>
int main(){
	int a, b, c;
	printf("Hay nhap vao canh dau tien cua tam giac: ");
	scanf("%d",&a);
	printf("Hay nhap vao canh thu hai cua tam giac: ");
	scanf("%d",&b);
	printf("Hay nhap vao canh thu ba cua tam giac: ");
	scanf("%d",&c);
	if((a + b >c) && (a + c > b) && (b + c > a)){
		printf("%d %d %d la 3 canh tam giac", a, b, c);
	}
	else{
		printf("%d %d %d khong phai 3 canh tam giac", a, b, c);
	}
	
	return 0;
}
