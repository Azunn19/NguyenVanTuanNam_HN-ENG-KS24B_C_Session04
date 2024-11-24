#include<stdio.h>
int main(){
	int nam;
	printf("Hay nhap vao nam muon kiem tra: ");
	scanf("%d",&nam);
    if(nam > 0){
    	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		    printf("Nam %d la nam nhuan", nam);
	    }
	    else{
		    printf("Nam %d khong phai nam nhuan", nam);
	    }
	}
	else{
		printf("Nam nhap vao khong hop le");
	}
	
	return 0;
}
