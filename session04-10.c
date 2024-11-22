#include <stdio.h>

int main(){
	int num1,num2,num3,fNum,sNum,thNum;
	printf("vui long nhap vao 3 so:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	fNum=num1<num2?num1:num2;
	fNum=fNum<num3?fNum:num3;
	thNum=num1>num2?num1:num2;
	thNum=thNum>num3?thNum:num3;
	if(num1!=fNum&&num1!=thNum){
		sNum=num1;
	}else if(num2!=fNum&&num2!=thNum){
		sNum=num2;
	}else{
		sNum=num3;
	}
	printf("sap xep: %d %d %d",fNum,sNum,thNum);
	return 0;
}
