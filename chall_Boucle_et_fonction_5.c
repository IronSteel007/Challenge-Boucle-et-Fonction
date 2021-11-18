
int main()
 {
	int ADD(int A,int B)  // notre fonction 
		{
	return A+B;
		}
	int A,B,S; // add = addition  s = la somme
	printf("entrer A et B \n");
	scanf("%d %d",&A,&B);
	S=ADD(A,B);
	printf("resultat de %d + %d = %d ",A,B,S);
	
	return 0;
		}
