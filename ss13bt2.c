#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i;
	char character,character2;
	int choice;
	char str[1000];
	char strNew[1000]={};
	int size;
	do{
		int count=0;
		printf("\n		MENU\n");
		printf("1. nhap chuoi ki tu.\n");
		printf("2. in ra  chuoi vua nhap.\n");
		printf("3. nhap vao 1 ki tu dem so lan xuat hien trong chuoi\n");
		printf("4. nhap vao 2 ki thay the cac ki tu thu 2 bang ki tu thu nhat tu.\n");
		printf("5. nhap vao 2 ki tu va coa no ra khoi chuoi.\n");
		printf("6. thoat.\n");
		printf("lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				fflush(stdin);
				printf("hay nhap chuoi ki tu:");
				gets(str);
				
			break;
			case 2:
				printf("mang vua nhap:");
				puts(str);
			break;
			case 3:
				fflush(stdin);
				size = strlen(str);
				printf("nhap ki tu:");
				scanf("%c",&character);
				for(i=0;i<size;i++){
						if(str[i]==character){
							count++;
						}
					}
					printf("phan tu %c trong chuoi xuat hien %d lan",character,count);
			break;
			case 4:
				fflush(stdin);
				printf("nhap ki tu 1 va 2:");
				scanf("%c %c",&character,&character2);
				size = strlen(str);
				for(i=0;i<size;i++){
					if(str[i]==character2){
						str[i]=character;
					}
				}
				puts(str);
			
			break;
			case 5:
				fflush(stdin);
				printf("nhap ki tu:");
				scanf("%c",&character);
				size = strlen(str);
				for (i = 0; i < size; i++){
					if (str[i] == character){
						count++;
					}else{
						strNew[i-count] = str[i];
					}
				}
				puts(strNew);
			break;
			case 6:
				exit(0);
			break;
		}
	}while(0==0);
}
