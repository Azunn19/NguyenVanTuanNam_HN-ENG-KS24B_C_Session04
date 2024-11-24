#include<stdio.h>
int main(){
	int a, b, c, temp;
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	printf("Hay nhap so thu ba: ");
	scanf("%d",&c);
	if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
	printf("Day so tu nho den lon la %d, %d, %d", a, b, c);
	
    return 0;
}
