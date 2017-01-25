#include<stdio.h>
#include<string.h>

void enc(){
char a[100];
	int i,x,key;
	printf("Enter the text\n");
	scanf("%s",a);
	printf("Enter the key\n");
	scanf("%d",&key);
	for(i=0;i<strlen(a);i++){
		x = ((int)a[i] - 97 + key)%26 + 97;
		printf("%c",(char)x);
	}

}
void dec(){
	char a[100];
	int i,x,key;
	printf("Enter the text\n");
	scanf("%s",a);
	printf("Enter the key\n");
	scanf("%d",&key);	
	for(i=0;i<strlen(a);i++){
		x = ((int)a[i] - 97 - key)%26 + 97;
		printf("%c",(char)x);
	}

}

void main(){
	int i;
	while(1){
		printf("\n1 Encrypt the program\n");
		printf("2 De-encrpt the program\n");
		printf("0 Exit\n");
		scanf("%d",&i);
		switch(i){
			case 1 :enc();
			break;
			case 2 :dec();
			break;
			case 0 :return ;
			break;
			default:printf("Wrong choice"); 
		}	
	}
}
