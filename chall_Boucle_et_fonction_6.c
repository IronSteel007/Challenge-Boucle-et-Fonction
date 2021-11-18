#include <stdio.h>
void echange(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	printf(  "apres l'echange :\n\na=%d et b=%d \n",a,b);	
}
int main() {
	int a,b;
	printf("donner a et b \n\n");
	scanf("%d %d",&a,&b);
	printf("\na=%d et b=%d \n\n",a,b),
	echange(a,b);	
	return 0;
}
