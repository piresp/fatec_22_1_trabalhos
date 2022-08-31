#include <stdio.h>

enum Year_months {
	Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro, Last
} month;

const char* months[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main(void) {
	printf("Meses do ano:");
	scanf("%d", &month);
	
	for(int i = 0; i < Dezembro; i++) {
		printf("%d - %s\n", i+1, months[i]);
	}
	
	printf("\nMes selecionado\n");
	printf("%d - %s\n", month, months[month]);
	
}
