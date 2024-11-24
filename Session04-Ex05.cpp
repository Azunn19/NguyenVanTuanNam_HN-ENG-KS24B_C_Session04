#include<stdio.h>
int main(){
	int number_1, number_2, number_3;
	printf("Hay nhap 3 so nguyen: ");
	scanf("%d %d %d",&number_1, &number_2, &number_3);
	if(number_3 > number_1 && number_3 < number_2 || number_3 > number_2 && number_3 < number_1 ){
		printf("So thu 3 nam giua so thu nhat va so thu 2");
	}else{
		printf("So thu 3 khong nam giua so thu nhat va so thu 2");
	}
	
	return 0;
}
