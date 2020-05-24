#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[35];
	double peso, altura, resultado;
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Olá, ");
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
		printf("Muito abaixo do peso ideal.\nPossíveis consequências: Queda de cabelo, infertilidade, ausência menstrual.\n");
	} else if(resultado<18.4){
		printf("Abaixo do peso ideal.\nPossíveis consequências: Fadiga, stress, ansiedade.\n");
	} else if(resultado<24.9){
		printf("Dentro do peso ideal.\nPossíveis consequências: Menor risco de doenças cardíacas e vasculares.\n");
	} else if(resultado<29.9){
		printf("Acima do peso ideal.\nPossíveis consequências: Fadiga, má circulação, varizes.\n");
	} else if(resultado<34.9){
		printf("Obesidade Grau I.\nPossíveis consequências: Diabetes, angina, infarto, aterosclerose.\n");
	} else if(resultado<40.0){
		printf("Obesidade Grau II.\nPossíveis consequências: Apneia do sono, falta de ar.\n");
	} else {
		printf("Obesidade Grau III.\nPossíveis consequências: Refluxo, dificuldade para se mover, escaras, diabetes, infarto, AVC.\n");
	}
	return(0);
}
