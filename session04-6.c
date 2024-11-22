#include <stdio.h>

int main(){
	int old_index,new_index;
	printf("chi so cong to dien dau thang: ");
	scanf("%d",&old_index);
	printf("chi so cong to dien cuoi thang: ");
	scanf("%d",&new_index);
	int index=new_index-old_index;
	if(index>=0 &&index<50){
		printf("tien dien %d dong",index*10000);
	}else if(index<100){
		printf("tien dien %d dong",index*15000);
	}else if(index<150){
		printf("tien dien %d dong",index*20000);
	}else if(index<200){
		printf("tien dien %d dong",index*25000);
	}else{
		printf("tien dien %d dong",index*30000);
	}
	return 0;
}
