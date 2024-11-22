#include <stdio.h>

int main(){
	int num1,num2,num3;
	printf("vui long nhap vao 3 so: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num3>num1&&num3<num2||num3<num1&&num3>num2){
		printf("so %d nam trong khoang %d va %d",num3,num1,num2);
	}else{
		printf("so %d khong nam trong khoang %d va %d",num3,num1,num2);
		}
	return 0;
}
