#include<stdio.h>
#include<string.h>
struct Minh{
		char name[50];
		int age;
		char phone[15];
	};
int main(){
	struct Minh m[50];
	for(int i = 0;i<50;i++){
		printf("ban co id la %d\n",i+1);
		printf("moi ban nhap ten: ");
		scanf("%s",m[i].name);
		printf("moi ban nhap tuoi: ");
		scanf("%d",&m[i].age);
		getchar();
		printf("moi ban nhap so dien thoai: ");
		scanf("%s",m[i].phone);
	}
	printf("thong tin cua cac ban l� \n ");
	for(int i = 0;i<50;i++){
		printf("id cua ban la %d",i+1);
		printf("ten cua ban la %s\n",m[i].name);
		printf("tuoi la %d\n",m[i].age);
		printf("so dien thoai la %s\n",m[i].phone);
	}
	return 0;
}
