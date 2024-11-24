#include<stdio.h>
int main(){
	int thang;
	printf("Hay nhap vao so thang: ");
	scanf("%d",&thang);
	switch (thang){
		case 1:
			printf("Thang 1 co 31 ngay\n");
			break;
		case 2:
			printf("Thang 2 co 29 ngay\n");
			break;
		case 3:
			printf("Thang 3 co 31 ngay\n");
			break;
		case 4:
			printf("Thang 4 co 30 ngay\n");
			break;
		case 5:
			printf("Thang 5 co 31 ngay\n");
			break;
		case 6:
			printf("Thang 6 co 30 ngay\n");
			break;
		case 7:
			printf("Thang 7 co 31 ngay\n");
			break;
		case 8:
			printf("Thang 8 co 31 ngay\n");
			break;
		case 9:
			printf("Thang 9 co 30 ngay\n");
			break;
		case 10:
			printf("Thang 10 co 31 ngay\n");
			break;
		case 11:
			printf("Thang 11 co 30 ngay\n");
			break;
		case 12:
			printf("Thang 12 co 31 ngay\n");
			break;
		default:
			printf("Thang nhap vao khong hop le\n");	
    }
    
    return 0;
}
