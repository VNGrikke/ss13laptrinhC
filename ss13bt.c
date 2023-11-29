#include<stdio.h>
#include<string.h>
int main(){
	int i;
	int choice;
	char str[1000];
	char strNew[1000]={};
	int size;
	do{
		int count=0;
		printf("\n		MENU\n");
		printf("1. nhap chuoi ki tu.\n");
		printf("2. in ra do dai va chuoi vua nhap.\n");
		printf("3. in ra chuoi dao nguoc.\n");
		printf("4. in ra so luong chu cai trong chuoi.\n");
		printf("5. in ra so luong chu so trong chuoi.\n");
		printf("6. in ra so luong ki tu dac biet trong chuoi.\n");
		printf("7. thoat.\n");
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
				size = strlen(str);
				printf("do dai cua chuoi:%d",strlen(str));
			break;
			case 3:
				size = strlen(str);
				for(i=0;i<size;i++){
						strNew[i]=str[size-1-i];
					}
					printf("chuoi dao nguoc:");
					puts(strNew);
			break;
			case 4:
				size = strlen(str);
				for(i=0;i<size;i++){
					if(str[i]>='a'&&str[i]<='z'){
						count++;
					}
				}printf("so luong chu cai co trong chuoi:%d",count);
			
			break;
			case 5:
				size = strlen(str);
				for (i = 0; i < size; i++){
					if (str[i] >= '0' && str[i] <= '9'){
						count += 1;
					}
				}
				printf("so ki tu chu so: %d", count);
			break;
			case 6:
				size = strlen(str);
				for (i = 0; i < size; i++){
					if ((str[i] < '0' || str[i] > '9') && (str[i] > 'z' || str[i] < 'a')){
						count += 1;
					}
				}
				printf("so ki tu dac biet: %d", count);
			break;
			case 7:
				exit(0);
			break;
		}
	}while(0==0);
}
