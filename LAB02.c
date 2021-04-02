/*************************************/
/* Aluno1: Bruna Ciriaco Benedito */
/* Aluno2: Fernanda Gonçalves Lima */
/* Aluno3: João Pedro Oliveira Gonçalves */
/* Aluno4: Paulo Henrique Cardoso de Jesus */
/* Aluno4: Vicente Santos Gonçalves */

/* Algoritmo e Lógica de Programação */
/* Prof. Eliane */
/*************************************/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int eleitores=4, i=1;
	char controle, prefeito[2], vereador[2];
	//1.1 Abrir uma urna eletrônica com os dados de identificação (Números da Zona, Seção e Total de Eleitores Esperados). Lembre-se que nem todos os eleitores comparecem no dia da eleição.
	printf(" ------------------------------------------------------------------------");
	printf("\n                  IDENTIFICAÇÃO DA URNA ELETRÔNICA\n");
	printf(" ------------------------------------------------------------------------");
	printf("\n Identificação da Seção e Zona Eleitoral......: 189, 0321");
	printf("\n Total dos Eleitores que podem votar..........: %d",eleitores);
	printf("\n Código de Identificação da Urna Eletrônica...: 1");
getch();
	//1.2) Receber os votos individuais dos eleitores de uma seção eleitoral para cada candidato, partido e para cada legenda partidária, agrupados por cargo.
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
		printf("\n                           VOTAÇÃO INDIVIDUAL:\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n Eleitor %d:",i);
		printf("\n Voto ao Candidato à Prefeitura..:");
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
	
	//1.4) Divulgação dos resultados ao término do processo de votação.
	printf(" ------------------------------------------------------------------------");
	printf("\n                  RESULTADO DA ELEIÇÃO NA URNA:\n");
	printf(" ------------------------------------------------------------------------");
	printf("\n Identificação da Seção e Zona Eleitoral......: 189, 0321");
	printf("\n Total dos Eleitores que podem votar..........: %d",eleitores);
	printf("\n Total dos Eleitores que votaram..............: %d",i);
	printf("\n Total de eleitores que faltaram..............: %d",eleitores-i);
	printf("\n Código de Identificação da Urna Eletrônica...: 1");
	printf("\n Total de votos em branco e nulos, agrupados por cargo");
	printf("\n Total de votos apurados por cargo");
	
	printf("\n ");
	printf("\n ");
	getch();
	return 0;
}
