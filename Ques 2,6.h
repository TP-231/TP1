int ProdMat(){
	int mat1[2][2] = {{1 , 2},{3 , 4}}, mat2[2][2] = {{5 , 6},{7 , 8}}, mat3[2][2], i, j;
	
	
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				mat3[i][j] += mat1[i][k]*mat2[k][j];
			}
		}
	}
	for(i=0;i<2; i++){
		for(j=0;j<2;j++){
			printf("%d\t", mat3[i][j]);
		}
		printf("\n");
	}
}

int Median(){
	int index, compt;
	scanf("%d", &index);
	if(index % 2 == 0) compt = index/2;
	else compt = compt = (index / 2) + 1;
	printf("%d",compt);
}