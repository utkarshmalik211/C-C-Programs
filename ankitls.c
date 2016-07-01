#include <stdio.h>
int main(){
	int a,b,c,d;
	//scanf("%d",&a);
	a=12;
	printf("\n");
	
	c=1;
	d=a/2;
	b=(d*7);
	for(int i=1;i<=a/2+1;i++){

		for(int j=b;j>0;j--){
			printf(" ");
		}
		
		for(int j=0;j<c;j++){
			printf("Shivi  ");
		}

		for(int j=(b*2)-7;j>0;j--){
			printf(" ");
		}
		if(i==a/2+1){
			
			for(int j=1;j<c;j++){
			printf("Shivi  ");
			}

			}
			else
			{
				for(int j=0;j<c;j++){
					printf("Shivi  ");
				}
			}	
		printf("\n");
		for(int j=b;j>0;j--){
			printf(" ");
		}
		for(int j=0;j<c;j++){
			printf("Shivi  ");
		}

		for(int j=(b*2)-7;j>0;j--){
			printf(" ");
		}
		if(i==a/2+1){
			for(int j=1;j<c;j++){
			printf("Shivi  ");
			}
		}else{
			for(int j=0;j<c;j++){
				printf("Shivi  ");
			}
		}	
		printf("\n");
		c+=2;
		b-=7;
	}
	c=1+(a*2);
	b=0;
	//printf("%d %d\n",c,b);
	for(int i=a;i>=0;i--){
		for(int k=0;k<3;k++){
			for(int j=0;j<b;j++){
			printf(" ");
		}
		for(int j=c;j>0;j--){
			printf("Shivi  ");
		}
		printf("\n");
	}
		
		c-=2;
		b+=7;
	}
}