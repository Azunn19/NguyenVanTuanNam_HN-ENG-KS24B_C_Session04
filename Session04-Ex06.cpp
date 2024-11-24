#include<stdio.h>
int main(){
	int dauthang, cuoithang;
	printf("Hay nhap vao chi so cong to dien o dau thang: ");
	scanf("%d",&dauthang);
	printf("Hay nhap vao chi so cong to dien o cuoi thang: ");
	scanf("%d",&cuoithang);
	int sodien = cuoithang - dauthang;
	if(dauthang > 0 && cuoithang > dauthang){
		if(sodien < 50){
			int giadien = sodien*10000;
			printf("Tien dien tieu thu trong thang la: %d VND\n", giadien);
		}
		else if(sodien < 100){
			int giadien = sodien*15000;
			printf("Tien dien tieu thu trong thang la: %d VND\n", giadien);
		}
		else if(sodien < 150){
			int giadien = sodien*20000;
			printf("Tien dien tieu thu trong thang la: %d VND\n", giadien);
		}
		else if(sodien < 200){
			int giadien = sodien*25000;
			printf("Tien dien tieu thu trong thang la: %d VND\n", giadien);
		}
		else{
			int giadien = sodien*30000;
			printf("Tien dien tieu thu trong thang la: %d VND\n", giadien);
		}
	}
	else{
		printf("Du lieu nhap vao khong hop le");
	}
	
	return 0;
}
