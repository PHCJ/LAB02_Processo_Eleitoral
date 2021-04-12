/*************************************/
/* Aluno1: Bruna Ciriaco Benedito............RA: 1111392111021 */
/* Aluno2: Fernanda Gonçalves Lima...........RA: 1111392111014 */
/* Aluno3: João Pedro Oliveira Gonçalves.....RA: 1111392111045 */
/* Aluno4: Paulo Henrique Cardoso de Jesus...RA: 1111392111018 */
/* Aluno4: Vicente Santos Gonçalves..........RA: 1111392111035 */

/* Algoritmo e Lógica de Programação */
/* Prof. Eliane */
/*************************************/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	int eleitores=4, contador=1, c1=0, c2=0, c3=0, c4=0, vb1=0, vb2=0, vn1=0, vn2=0, v1=0, v2=0, v3=0, v4=0;
	char controle[2], prefeito[3], vereador[3];
	//1.1 Abrir uma urna eletrônica com os dados de identificação (Números da Zona, Seção e Total de Eleitores Esperados). Lembre-se que nem todos os eleitores comparecem no dia da eleição.
	printf(" ------------------------------------------------------------------------");
	printf("\n                  IDENTIFICAÇÃO DA URNA ELETRÔNICA\n");
	printf(" ------------------------------------------------------------------------");
	printf("\n Identificação da Seção e Zona Eleitoral......: 189, 0321");
	printf("\n Total dos Eleitores que podem votar..........: %d",eleitores);
	printf("\n Código de Identificação da Urna Eletrônica...: 001\n");
    printf("\n *Aperte Enter para iniciar a votação*");
    getch();
    system("clear||cls");
    
	//1.2) Receber os votos individuais dos eleitores de uma seção eleitoral para cada candidato, partido e para cada legenda partidária, agrupados por cargo.
	do{
		printf("\n ********  VOTE NO PREFEITO INSERINDO A SIGLA CORRESPONDENTE:  *********");
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
		printf(" Digite a sigla do Prefeito: ");
		scanf("%s", prefeito);		
		
		//1.3.1) Total de votos para cada candidato agrupados por cargo
		if(strcmp(prefeito,"c1")==0 || strcmp(prefeito,"C1")==0)
			c1++;
		if(strcmp(prefeito,"c2")==0 || strcmp(prefeito,"C2")==0)
			c2++;
		if(strcmp(prefeito,"c3")==0 || strcmp(prefeito,"C3")==0)
			c3++;
		if(strcmp(prefeito,"c4")==0 || strcmp(prefeito,"C4")==0)
			c4++;
		if(strcmp(prefeito,"vb")==0 || strcmp(prefeito,"VB")==0)
			vb1++;
		if(strcmp(prefeito,"VN")==0 || strcmp(prefeito,"vn")==0)
			vn1++;			
		system("clear||cls");
		
		printf("\n ********  VOTE NO VEREADOR INSERINDO A SIGLA CORRESPONDENTE:  *********");
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
		printf(" Digite a sigla do Vereador: ");
		scanf("%s", vereador);
		
		//1.3.1) Total de votos para cada candidato agrupados por cargo
		if(strcmp(vereador,"v1")==0 || strcmp(vereador,"V1")==0)
			v1++;
		if(strcmp(vereador,"v2")==0 || strcmp(vereador,"V2")==0)
			v2++;
		if(strcmp(vereador,"v3")==0 || strcmp(vereador,"V3")==0)
			v3++;
		if(strcmp(vereador,"v4")==0 || strcmp(vereador,"V4")==0)
			v4++;
		if(strcmp(vereador,"vb")==0 || strcmp(vereador,"VB")==0)
			vb2++;
		if(strcmp(vereador,"VN")==0 || strcmp(vereador,"vn")==0)
			vn2++;
		system("clear||cls");
								
		//Informações da votação do eleitor.	
		printf(" ------------------------------------------------------------------------");
		printf("\n                           VOTAÇÃO INDIVIDUAL:\n");
		printf(" ------------------------------------------------------------------------");
		printf("\n Eleitor %d:",contador);
		printf("\n Voto ao Candidato a Prefeito..: %s",prefeito);
		printf("\n Voto ao Candidato a Vereador..: %s",vereador);
		contador++;
		
		//Decisão para finalizar a votação antes do número máximo de eleitores ser atingido.
		printf("\n\n\n Deseja iniciar o proximo voto? Caso não, o processo de votação se encerra.");
		printf("\n digite: [S]-Sim || [N]-Não : ");
		scanf("%s",controle);
		system("clear||cls");		
	}while((contador<=eleitores||contador==eleitores) && strcmp(controle,"n")==1);
	contador--;
	strcpy(prefeito,"Empate");
	strcpy(vereador,"Empate");
	//Calcular prefeito vencedor:
	if(c1>c2)
		if(c1>c3)
			if(c1>c4)
				strcpy(prefeito,"C1");
	else
		if(c2>c3)
			if(c2>c4)	
				strcpy(prefeito,"C2");
		
		else
			if(c3>c4)
				strcpy(prefeito,"C3");
			else
				strcpy(prefeito,"C4");	

	//Calcular vereador vencedor:
	if(v1>v2)
		if(v1>v3)
			if(v1>v4)
				strcpy(vereador,"V1");
	else
		if(v2>v3)
			if(v2>v4)	
				strcpy(vereador,"V2");
		else
			if(v3>v4)
				strcpy(vereador,"V3");
			else
				strcpy(vereador,"V4");
	
	//Mensagem para informar que todos os eleitores da seção votaram.
	if(eleitores==contador)
	printf("\nVotação finalizada. Número máximo de eleitores da seção atingido.\n");
	printf("Aperte Enter para exibir o resultado final:\n");
	getch();
	system("clear||cls");
	
	//1.4) Divulgação dos resultados ao término do processo de votação.
	printf(" -------------------------------------------------------");
	printf("\n           RESULTADO DA ELEIÇÃO NA URNA:\n");
	printf(" -------------------------------------------------------");
	printf("\n Identificação da Seção e Zona Eleitoral...: 189, 0321");
	printf("\n Total dos Eleitores que podem votar.......: %d",eleitores);
	printf("\n Total dos Eleitores que votaram...........: %d",contador);
	printf("\n Total de eleitores que faltaram...........: %d",eleitores-contador);
	printf("\n Código de Identificação da Urna Eletrônica: 001");
	printf("\n Total de votos em branco por cargo........:");
	printf("\n Prefeito..................................: %d",vb1);
	printf("\n Vereador..................................: %d",vb2);
	printf("\n Total de votos nulos por cargo............:");
	printf("\n Prefeito..................................: %d",vn1);
	printf("\n Vereador..................................: %d",vn2);
	printf("\n Total de votos apurados por cargo");
	printf("\n Prefeito..................................: %d",c1+c2+c3+c4);
	printf("\n Vereador..................................: %d\n\n\n",v1+v2+v3+v4);
	//a) votação individual para cada candidato, partido e para cada legenda partidária, agrupados por cargo;
	printf("\n Número de votos para o Partido PDB........: %d",c1+c2+v1+v2);
	printf("\n Número de votos para o Partido PSB........: %d\n",c3+c4+v3+v4);
	printf("\n Número de votos para o Candidato C1.......: %d",c1);
	printf("\n Número de votos para o Candidato C2.......: %d",c2);
	printf("\n Número de votos para o Candidato C3.......: %d",c3);
	printf("\n Número de votos para o Candidato C4.......: %d",c4);
	printf("\n Número de votos brancos...................: %d",vb1);
	printf("\n Número de votos nulos.....................: %d\n\n",vn1);
	printf("\n Número de votos para o Candidato V1.......: %d",v1);
	printf("\n Número de votos para o Candidato V2.......: %d",v2);
	printf("\n Número de votos para o Candidato V3.......: %d",v3);
	printf("\n Número de votos para o Candidato V4.......: %d",v4);
	printf("\n Número de votos brancos...................: %d",vb2);
	printf("\n Número de votos nulos.....................: %d\n\n",vn2);
	printf("\n Candidato a Prefeito mais votado..........: %s\n",prefeito);
	printf("\n Candidato a Vereador mais votado..........: %s",vereador);
	getch();
	return 0;
}
