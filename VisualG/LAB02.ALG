Algoritmo "LAB02"
//************************************************************

// Aluno1: Bruna Ciriaco Benedito............RA: 1111392111021
// Aluno2: Fernanda Gonçalves Lima...........RA: 1111392111014
// Aluno3: João Pedro Oliveira Gonçalves.....RA: 1111392111045
// Aluno4: Paulo Henrique Cardoso de Jesus...RA: 1111392111018
// Aluno4: Vicente Santos Gonçalves..........RA: 1111392111035

//* Algoritmo e Lógica de Programação
//* Prof. Eliane */
//************************************************************
Var
   eleitores, contador, controle, c1, c2, c3, c4, vb1, vb2, vn1, vn2, v1, v2, v3, v4 : inteiro
   vereador, prefeito : caracter
Inicio
   eleitores <- 4
   escreval(" ------------------------------------------------------------")
   escreval("               IDENTIFICAÇÃO DA URNA ELETRÔNICA")
   escreval(" ------------------------------------------------------------")
   escreval(" Identificação da Seção e Zona Eleitoral......: 189, 0321")
   escreval(" Total dos Eleitores que podem votar..........:",eleitores)
   escreval(" Código de Identificação da Urna Eletrônica...: 001")
   escreva(" *Aperte Enter para iniciar a votação*")
   leia(controle)  //pausa na tela
   limpatela

   enquanto contador < eleitores faca
      escreval(" **** VOTE NO PREFEITO INSERINDO A SIGLA CORRESPONDENTE: ****")
      escreval(" ____________________________________________________________")
      escreval("                     CANDIDATOS A PREFEITO")
      escreval(" ------------------------------------------------------------")
      escreval("               PARTIDO |   CANDIDATO   | SIGLA")
      escreval(" ------------------------------------------------------------")
      escreval("                 PDB   |   Candidato 1 |  C1")
      escreval(" ------------------------------------------------------------")
      escreval("                 PDB   |   Candidato 2 |  C2")
      escreval(" ------------------------------------------------------------")
      escreval("                 PSB   |   Candidato 3 |  C3")
      escreval(" ------------------------------------------------------------")
      escreval("                 PSB   |   Candidato 4 |  C4")
      escreval(" ------------------------------------------------------------")
      escreval("                 ---   |     BRANCO    |  VB")
      escreval(" ------------------------------------------------------------")
      escreval("                 ---   |      NULO     |  VN")
      escreval(" ____________________________________________________________")
      escreva(" Digite a sigla do Prefeito: ")
      leia(prefeito)
      // Armazenamento dos votos
      se ((prefeito = "c1")ou(prefeito = "C1")) entao
         c1 <- c1 + 1
      fimse
      se ((prefeito = "c2")ou(prefeito = "C2")) entao
         c2 <- c2 + 1
      fimse
      se ((prefeito = "c3")ou(prefeito = "C3")) entao
         c3 <- c3 + 1
      fimse
      se ((prefeito = "c4")ou(prefeito = "C4")) entao
         c4 <- c4 + 1
      fimse
      se ((prefeito = "vb")ou(prefeito = "VB")) entao
         vb1 <- vb1 + 1
      fimse
      se ((prefeito = "vn")ou(prefeito = "VN")) entao
         vn1 <- vn1 + 1
      fimse
      limpatela

      escreval(" **** VOTE NO VEREADOR INSERINDO A SIGLA CORRESPONDENTE: ****")
      escreval(" ____________________________________________________________")
      escreval("                     CANDIDATOS A VEREADOR")
      escreval(" ------------------------------------------------------------")
      escreval("               PARTIDO |   CANDIDATO   | SIGLA")
      escreval(" ------------------------------------------------------------")
      escreval("                 PDB   |   Candidato 1 |  V1")
      escreval(" ------------------------------------------------------------")
      escreval("                 PDB   |   Candidato 2 |  V2")
      escreval(" ------------------------------------------------------------")
      escreval("                 PSB   |   Candidato 3 |  V3")
      escreval(" ------------------------------------------------------------")
      escreval("                 PSB   |   Candidato 4 |  V4")
      escreval(" ------------------------------------------------------------")
      escreval("                 ---   |     BRANCO    |  VB")
      escreval(" ------------------------------------------------------------")
      escreval("                 ---   |      NULO     |  VN")
      escreval(" ____________________________________________________________")
      escreva(" Digite a sigla do Vereador: ")
      leia(vereador)
      limpatela
      // Armazenamento dos votos
      se ((vereador = "v1")ou(vereador = "V1")) entao
         v1 <- v1 + 1
      fimse
      se ((vereador = "v2")ou(vereador = "V2")) entao
         v2 <- v2 + 1
      fimse
      se ((vereador = "v3")ou(vereador = "V3")) entao
         v3 <- v3 + 1
      fimse
      se ((vereador = "v4")ou(vereador = "V4")) entao
         v4 <- v4 + 1
      fimse
      se ((vereador = "vb")ou(vereador = "VB")) entao
         vb2 <- vb2 + 1
      fimse
      se ((vereador = "vn")ou(vereador = "VN")) entao
         vn2 <- vn2 + 1
      fimse

      //Informações da votação do eleitor.
      escreval(" ------------------------------------------------------------")
      escreval("                   VOTAÇÃO INDIVIDUAL:")
      escreval(" ------------------------------------------------------------")
      escreval(" Eleitor: ",contador+1)
      escreval(" Voto ao Candidato a Prefeito..: ",prefeito)
      escreval(" Voto ao Candidato a Vereador..: ",vereador)
      contador <- contador + 1
      escreval("")
      escreval("")
      //Decisão para finalizar a votação antes do número máximo de eleitores ser atingido.
      escreval(" Deseja iniciar o proximo voto? Caso não, o processo de votação se encerra.")
      escreval(" Digite: [1]-Sim || [2]-Não : ")
      leia(controle)
      limpatela
      se controle=2 entao
         interrompa
      fimse
   fimenquanto

   //Calcular prefeito vencedor:
   se c1>c2 entao
      se c1>c3 entao
         se c1>c4 entao
            prefeito <- "C1"
         fimse
      fimse
   senao
      se c2>c3 entao
         se c2>c4 entao
            prefeito <- "C2"
         fimse
      senao
         se c3>c4 entao
            prefeito <- "C3"
         senao
            prefeito <- "C4"
         fimse
      fimse
   fimse

   //Calcular vereador vencedor:
   se v1>v2 entao
      se v1>v3 entao
         se v1>v4 entao
            vereador <- "V1"
         fimse
      fimse
   senao
      se v2>v3 entao
         se v2>v4 entao
            vereador <- "V2"
         fimse
      senao
         se v3>v4 entao
            vereador <- "V3"
         senao
            vereador <- "V4"
         fimse
      fimse
   fimse
   //Mensagem para informar que todos os eleitores da seção votaram.
   se eleitores=contador entao
      escreval(" Votação finalizada. Número máximo de eleitores da seção atingida.")
   fimse
   escreva(" Aperte Enter para exibir o resultado final:")
   leia(controle) //pausa na tela
   limpatela
   // Divulgação dos resultados ao término do processo de votação.
   escreval(" ------------------------------------------------------------")
   escreval("               RESULTADO DA ELEIÇÃO NA URNA:")
   escreval(" ------------------------------------------------------------")
   escreval(" Identificação da Seção e Zona Eleitoral...:  189, 0321")
   escreval(" Total dos Eleitores que podem votar.......: ",eleitores)
   escreval(" Total dos Eleitores que votaram...........: ",contador)
   escreval(" Total de eleitores que faltaram...........: ",eleitores-contador)
   escreval(" Código de Identificação da Urna Eletrônica:  001")
   escreval(" Total de votos em branco por cargo........:")
   escreval(" Prefeito..................................: ",vb1)
   escreval(" Vereador..................................: ",vb2)
   escreval(" Total de votos nulos por cargo............:")
   escreval(" Prefeito..................................: ",vn1)
   escreval(" Vereador..................................: ",vn2)
   escreval(" Total de votos apurados por cargo:")
   escreval(" Prefeito..................................: ",c1+c2+c3+c4)
   escreval(" Vereador..................................: ",v1+v2+v3+v4)
   escreval("")
   	// votação individual para cada candidato, partido e para cada legenda partidária, agrupados por cargo;
   escreval("")
   escreval(" Número de votos para o Partido PDB........: ",c1+c2+v1+v2)
   escreval(" Número de votos para o Partido PSB........: ",c3+c4+v3+v4)
   escreval("")
   escreval(" Número de votos para o Candidato C1.......: ",c1)
   escreval(" Número de votos para o Candidato C2.......: ",c2)
   escreval(" Número de votos para o Candidato C3.......: ",c3)
   escreval(" Número de votos para o Candidato C4.......: ",c4)
   escreval(" Número de votos brancos...................: ",vb1)
   escreval(" Número de votos nulos.....................: ",vn1)
   escreval("")
   escreval(" Número de votos para o Candidato V1.......: ",v1)
   escreval(" Número de votos para o Candidato V2.......: ",v2)
   escreval(" Número de votos para o Candidato V3.......: ",v3)
   escreval(" Número de votos para o Candidato V4.......: ",v4)
   escreval(" Número de votos brancos...................: ",vb2)
   escreval(" Número de votos nulos.....................: ",vn2)
   escreval("")
   escreval(" Candidato a Prefeito mais votado..........: ",prefeito)
   escreval(" Candidato a Vereador mais votado..........: ",vereador)
Fimalgoritmo