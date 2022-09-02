#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Vez Jogador:
 	Computador gera um numero entre 1 e 100.
 	Repetir até o usuário acertar.
 	Dizer se o valor é maior ou menor do que o dito.
 	Contar quantidades de tentativas

Vez Maquina:
	Usuário insere um numero entre 1 e 100.
	Busca binária para achar o numero e mostrar tentativas.
	Dizer se acertou e se o valor é maior ou menor do que o dito.
	Contar numero de tentativas.

Exibir o placar, Mostrar o ganhador
*/

main() {
	int vet[100], i, j, aux=0, achou=0, inicio=1, meio, fim=99, nJ, nM, chute, qtdJ=0, qtdM=0;

	// Computador armazenando numero aleatório.
	srand(time(NULL));
	nM = rand()%100;

	if (nM == 0) {
		nM = 1;
	}

	// Começo do loop de tentativas do usuário.
	do {
		printf("\n Adivinhe um numero: ");
		scanf("%d",&chute);

		qtdJ++;

		if (chute == nM)
			printf("Acertou!");

		if (chute > nM)
			printf("\n Burrao, e menor...");

		else if (chute < nM)
			printf("\n Burrao, e maior...");


	} while (chute != nM);

	// Jogador deve inserir um numero válido.
	do {
		printf("\n Insira um numero entre 1 e 100: ");
		scanf("%d", &nJ);
	} while (nJ < 1 && nJ > 100);


	// Iniciando vetor de 100.
	for(i=1; i<=100; i++) {
		vet[i] = i;
	}

	// busca binária.
	meio = (inicio + fim) / 2;
	while(achou == 0) {
		if (vet[meio] == nJ) {

			printf("\nTentativa: %d", vet[meio]);
			printf("\nA Maquina acertou!\n\n");
			achou = 1;
		}

		else if(nJ < vet[meio]) {
			printf("\nTentativa: %d", vet[meio]);
			printf("\n\tMaquina burrona, e menor!\n");
			fim = meio - 1;
		}

		else {
			inicio = meio + 1;
			printf("\nTentativa: %d", vet[meio]);
			printf("\n\tMaquina burrona, e maior!\n");
		}

		meio = (inicio + fim) / 2;
		qtdM++;
	}

	// exibir placar

	printf("\n\n\t Numero do placar: Jogador %d vs Maquina %d.", qtdJ, qtdM);

	if (qtdJ == qtdM) {
		printf("\n\n\t Jogo Empatado!");
		return 0;
	}

	if (qtdJ < qtdM) printf("\n\n\t Jogador Ganhou! Nao e burrao!");

	else printf("\n\n\t Maquina Ganhou! Jogador burrao!");
}
