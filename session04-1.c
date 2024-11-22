#include <stdio.h>

int main(){
	int num;
	printf("vui long nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if (num>0){
		printf("\ndo la so duong");
	}
	else if(num<0) {
	printf("\ndo la so am");
    } else{
    	printf("\ndo khong phai so duong hay am");
	}
	return 0;
}
