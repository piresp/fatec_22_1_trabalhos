// Escrever um programa que leia uma matriz 5x5. Leia um n° de uma linha (entre 0-4). Calcular e exibir a soma da linha digitada. Exibir a matriz

#include <stdio.h>
main()

{
	int mat1[5][5], i, j, soma, lin;

	// leituira da matriz 1

	for(i=0; i<5; i++)
		for(j=0; j<5; j++) {
			printf("Matriz 1 [%d][%d]", i, j);
			scanf ("%d", &mat1[i][j]);
		}

	//Leitura da Linha
	do {
		printf("Digite a linha: ");
		scanf ("%d", &lin);
	} while ( (lin<0) || (lin > 4));

	// Lendo numero de uma linha

	for(j=0; j<5; j++)
		soma = soma + mat1[lin][j];

	// exibição das matrizes
	printf ("\n\n Matriz\n");
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)
			printf ("%3d  ", mat1[i][j]);
		printf("\n");
	}

	printf ("Soma dos elementos da linha 1 da Matriz: %d", soma);

}
