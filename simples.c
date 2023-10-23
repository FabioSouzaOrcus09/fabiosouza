#include <stdio.h>
int main(int argc, char  *argv[])
{

	char operacao;
	float num1, num2, resultado, opcao;
	opcao=1;
	while (opcao==1){


	printf("Digite a operacao (+, -, *, /: ");
	scanf("%s", &operacao);

	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);

	printf("Digite o segundo numero: ");
	scanf("%f", &num2);

	switch (operacao) {
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;

		case '*':
			resultado = num1 * num2;
			break;

		case '/':

			if (num2 !=0) { resultado = num1 / num2;
} else {
	printf("Erro: divisao por zero\n");
	printf("digite outro numero\n");
	scanf("%f", &num2);
}

break;

defalt:
}
printf("Resultdo: %.2f\n", resultado);

return 0;
}
}
