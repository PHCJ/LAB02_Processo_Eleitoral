/*************************************/
/* Aluno1: Bruna Ciriaco Benedito */
/* Aluno2: Fernanda Gon�alves Lima */
/* Aluno3: Jo�o Pedro Oliveira Gon�alves */
/* Aluno4: Paulo Henrique Cardoso de Jesus */
/* Aluno4: Vicente Santos Gon�alves */

/* Algoritmo e L�gica de Programa��o */
/* Prof. Eliane */
/*************************************/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int eleitores=4, i=1;
	char controle, prefeito[2], vereador[2];
	//1.1 Abrir uma urna eletr�nica com os dados de identifica��o (N�meros da Zona, Se��o e Total de Eleitores Esperados). Lembre-se que nem todos os eleitores comparecem no dia da elei��o.
	printf(" ------------------------------------------------------------------------");
	printf("\n                  IDENTIFICA��O DA URNA ELETR�NICA\n");
	printf(" ------------------------------------------------------------------------");
	printf("\n Identifica��o da Se��o e Zona Eleitoral......: 189, 0321");
	printf("\n Total dos Eleitores que podem votar..........: %d",eleitores);
	printf("\n C�digo de Identifica��o da Urna Eletr�nica...: 1");
getch();
	//1.2) Receber os votos individuais dos eleitores de uma se��o eleitoral para cada candidato, partido e para cada legenda partid�ria, agrupados por cargo.
	do{
		printf("\n ________________________________________________________________________\n");
		printf("\n                       CANDIDATOS A PREFEITO\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                    PARTIDO |   CANDIDATO   | SIGLA\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PDB   |   Candidato 1 |  C1\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PDB   |   Candidato 2 |  C2\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PSB   |   Candidato 3 |  C3\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PSB   |   Candidato 4 |  C4\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      ---   |     BRANCO    |  VB\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      ---   |      NULO     |  VN\n");
		printf("\n ________________________________________________________________________\n\n");
		printf("\n\n ________________________________________________________________________\n");
		printf("\n                       CANDIDATOS A VEREADOR\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                    PARTIDO |   CANDIDATO   | SIGLA\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PDB   |   Candidato 1 |  V1\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PDB   |   Candidato 2 |  V2\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PSB   |   Candidato 3 |  V3\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      PSB   |   Candidato 4 |  V4\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      ---   |     BRANCO    |  VB\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                      ---   |      NULO     |  VN\n");
		printf("\n ________________________________________________________________________\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n                           VOTA��O INDIVIDUAL:\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n Eleitor %d:",i);
		printf("\n Voto ao Candidato � Prefeitura..:");
		scanf("%s",prefeito);
		printf("\n Voto ao Candidato a Vereador....:");
		scanf("%s",vereador);
		
		printf("\n prefeito votado:%s",prefeito);
		printf("\n vereador vorado:%s",vereador);
		printf("\neleitores laco:%d",eleitores);
		
		i++;
getch();
		system("clear||cls");
	}while(i<=eleitores || controle==2);
	
	//1.4) Divulga��o dos resultados ao t�rmino do processo de vota��o.
	printf(" ------------------------------------------------------------------------");
	printf("\n                  RESULTADO DA ELEI��O NA URNA:\n");
	printf(" ------------------------------------------------------------------------");
	printf("\n Identifica��o da Se��o e Zona Eleitoral......: 189, 0321");
	printf("\n Total dos Eleitores que podem votar..........: %d",eleitores);
	printf("\n Total dos Eleitores que votaram..............: %d",i);
	printf("\n Total de eleitores que faltaram..............: %d",eleitores-i);
	printf("\n C�digo de Identifica��o da Urna Eletr�nica...: 1");
	printf("\n Total de votos em branco e nulos, agrupados por cargo");
	printf("\n Total de votos apurados por cargo");
	
	printf("\n ");
	printf("\n ");
	getch();
	return 0;
}
