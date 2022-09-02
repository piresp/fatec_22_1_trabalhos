#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	char palavra[20], letra, lacuna[20], dica[30];
	int a, i, vida=7, acertos=0, v, pontos = 0;
	
	printf("Digite a palavra secreta: ");
	gets(palavra);
	printf("Digite a dica: ");
	gets(dica);
	system("cls");
	
	for(a=0; a<strlen(palavra); a++) lacuna[a]='_';
	while (vida>0){
		system("cls");
		bool acerto = false;
		
		gotoxy(0,0);
		printf("Dica: %s. \n", dica);
		gotoxy(30,0);
		printf("Quantidade de letras: %d. \n", strlen(palavra));
		gotoxy(70,0);
		printf("Vidas: %d. \n\n",vida);
		
		for (i=0; i<strlen(palavra); i++) {
			if (lacuna[i]=='\0'){
				printf("_");	
			}
			else printf("%c", lacuna[i]);
		}
		
		gotoxy(1,4);
		printf("\n\nDigite uma letra: \n");
		letra=getch();
		printf("%c \n", letra);
		
		for(a=0; a<strlen(palavra); a++) {
			if (palavra[a] == letra) {
				lacuna[a] = letra;
				acerto = true;
				acertos++;
			}
		}
		
		if(acerto == false) {
			printf("Voce errou a letra!\n ");
			vida--;
			Sleep(500);
		}
		
		if (acerto == true) {
			printf("\nVoce acertou uma letra! \n");
			Sleep(500);
		}
			
		if (acertos == strlen(palavra)){
			printf("\n\nParabens, voce venceu!");
			break;
		}
		
		if (strstr(palavra, lacuna)!=0) break;
		
	}
	
	if (vida<1) {
		printf("\n\nQue pena, você perdeu!");
	}
	else return 0;
	
	printf("Precione qualquer tecla para continuar...");
	getch();
	
	
	
}
