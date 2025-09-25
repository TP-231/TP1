#include <stdio.h>

// fonction de la multiplication par incrementation

int MulIncr(){
	int a,b;
	int rslt=0; 
	
	printf ("entrer la valeur de a\n");
	scanf  ("%d",&a);
	printf ("entrer la valeur de b\n");
	scanf  ("%d",&b);
	
	for(int i=1;i<= b ;i++){
		
		for(int j=1;j<= a ;j++){
			rslt+=1;
		}
	}

	printf(" la multiplication de %d par %d est %d",a,b,rslt);
	 
	 return rslt ;	
}
