#include <stdio.h>

int main(){
	int month;
	printf("vui long nhap thang: ");
	scanf("%d",&month);
	if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
	    printf("thang %d co 31 ngay",month);
    }else if (month==4||month==6||month==9||month==11){
    	printf("thang %d co 30 ngay",month);
	}else if (month==2){
		printf("thang 2 co 28 hoac 29 ngay");
	}else {
		printf("so nhap vao khong phai la mot thang trong nam");
	}
	return 0;
}
