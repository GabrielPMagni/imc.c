#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[35];
	double peso, altura, resultado;
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Ol�, ");
	puts(nome);
	printf("Digite seu peso (kg): ");
	scanf("%lf", &peso);
	printf("Digite sua altura em metros: ");
	scanf("%lf", &altura);
	resultado = (peso/(altura*altura));
	printf("Seu IMC: %.1lf\n\n", resultado);
	mostrarResultados(resultado);
	system("PAUSE");
	return(0);
}

int mostrarResultados(double resultado){
	if(resultado<16.0){
		printf("Muito abaixo do peso ideal.\nPoss�veis consequ�ncias: Queda de cabelo, infertilidade, aus�ncia menstrual.\n");
	} else if(resultado<18.4){
		printf("Abaixo do peso ideal.\nPoss�veis consequ�ncias: Fadiga, stress, ansiedade.\n");
	} else if(resultado<24.9){
		printf("Dentro do peso ideal.\nPoss�veis consequ�ncias: Menor risco de doen�as card�acas e vasculares.\n");
	} else if(resultado<29.9){
		printf("Acima do peso ideal.\nPoss�veis consequ�ncias: Fadiga, m� circula��o, varizes.\n");
	} else if(resultado<34.9){
		printf("Obesidade Grau I.\nPoss�veis consequ�ncias: Diabetes, angina, infarto, aterosclerose.\n");
	} else if(resultado<40.0){
		printf("Obesidade Grau II.\nPoss�veis consequ�ncias: Apneia do sono, falta de ar.\n");
	} else {
		printf("Obesidade Grau III.\nPoss�veis consequ�ncias: Refluxo, dificuldade para se mover, escaras, diabetes, infarto, AVC.\n");
	}
	return(0);
}
