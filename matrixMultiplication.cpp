#include <stdio.h>

main() {
	
	int m1[10][10], m2[10][10], m3[10][10], m4[10][10], i, j, k, l1, l2, c1, c2, soma;

	// Ler ordem das matrizes 1 (l1 e C1)

	do {
		printf("\n Insira L1: ");
		scanf("%d", &l1);
	} while ((l1 < 2 || l1 > 10));

	do {
		printf("\n Insira C1: ");
		scanf("%d", &c1);
	} while ((c1 < 2 || c1 > 10));

	// Ler a matriz 1

	for(i=0; i<l1; i++)
		for(j=0; j<c1; j++) {
			printf("Matriz 1 [%d][%d]: ", i, j);
			scanf("%d", &m1[i][j]);
		}

	// Ler a ordem da matriz 2 (L2 e C2)

	do {
		printf("\n Insira L2: ");
		scanf("%d", &l2);

	} while ((l2 < 2 || l2 > 10));

	do {
		printf("\n Insira C2: ");
		scanf("%d", &c2);

	} while ((c2 < 2 || c2 > 10));

	// Ler a matriz 2

	for(i=0; i<l2; i++)
		for(j=0; j<c2; j++) {
			printf("Matriz 2 [%d][%d]: ", i, j);
			scanf("%d", &m2[i][j]);
		}

	// Exibir a matriz 1

	printf("\n\n Matriz 1 \n\n");
	for(i=0; i<l1; i++) {
		for(j=0; j<c1; j++)
			printf("%4d ", m1[i][j]);
		printf("\n");
	}

	// Exibir a matriz 2

	printf("\n\n Matriz 2 \n\n");
	for(i=0; i<l2; i++) {
		for(j=0; j<c2; j++)
			printf("%4d ", m2[i][j]);
		printf("\n");
	}

	// Verificar se é possivel gerar a matriz soma if ((l1 == l2) && (c1 == c2))

	if ((l1 == l2) && (c1 == c2)) {
		for(i=0; i<l1; i++)
			for(j=0; j<c1; j++) {
				m3[i][j] = m1[i][j] + m2[i][j];
			}

		printf("\n\n Matriz Soma \n\n");
		for(i=0; i<l2; i++) {
			for(j=0; j<c2; j++)
				printf("%4d ", m3[i][j]);

			printf("\n");
		}

	} else printf("\n\nNao e possivel somar matrizes de ordens diferentes");

	// verificar se é possível gerar a matriz multiplicaçao (c1 == l2) gerar a matriz multiplicacao e exibir matriz

	if (c1 == l2) {

		for(i=0; i<c1; i++)
			for(j=0; j<l1; j++)
				m4[i][j] = 0;

		for(i=0; i<c1; i++)
			for(j=0; j<c1; j++)
				for(k=0; k<c1; k++) {
					m4[i][j] = m4[i][j] + m1[i][k] * m2 [k][j];
				}

		printf("\n\n Matriz Multiplicacao \n\n");
		for(i=0; i<l1; i++) {
			for(j=0; j<c2; j++)
				printf("%3d ", m4[i][j]);
			printf("\n");
		}
	} else printf("Impossivel a criacao de uma matriz M4 multiplicacao");

}
