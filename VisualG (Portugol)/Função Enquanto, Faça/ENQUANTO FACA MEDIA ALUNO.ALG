Algoritmo "Enquanto Faca Media Aluno"

// Descrição   : Cálculo de média usando função enquanto
// Autor(a)    : BrunoP
// Data atual  : 26/06/2026

Var

   aluno: caractere
   notaTotal, media, prova: real
   i: inteiro

Inicio

   Escreval ("Digite o nome do aluno(a): ")
   Leia (aluno)
   escreval

   i <- 1

   Enquanto i < 5 Faca

      Escreva ("Digite o ponto da prova", i, ": ")
      Leia (prova)

      i <- i + 1
      notaTotal <- notaTotal + prova

   FimEnquanto

   media <- notaTotal / i

   escreval
   Escreval ("A média Final de ", aluno, " é de", media, " pontos.")
   escreval

Fimalgoritmo