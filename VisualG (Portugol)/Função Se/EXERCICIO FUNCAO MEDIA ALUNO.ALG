Algoritmo "Exercício funcao média aluno"

// Descrição   : Cálculo de aprovação com base na média
// Autor(a)    : BrunoP
// Data atual  : 21/06/2026

Var

   aluno: caracter
   aVA, bVA, cVA, dVA, media, notaRec, mediaFim: real

Inicio

   escreval ("Digite o nome do aluno: ")
   leia (aluno)
   escreval

   escreval ("Digite a nota das seguintes Verificações de Aprendizagem:")
   escreva ("1º VA: ")
   leia (aVA)
   escreva ("2º VA: ")
   leia (bVA)
   escreva ("3º VA: ")
   leia (cVA)
   escreva ("4º VA: ")
   leia (dVA)

   media <- (aVA + bVA + cVA + dVA) / 4

   Se (media >= 7) Entao
      escreval
      escreval ("Segundo a média de ", media, " pontos, a situação atual do aluno está APROVADA.")
      escreval

   Senao (media < 7) entao
      escreval
      escreval ("Segundo a média de ", media, " pontos, a situação atual do aluno se encontra em REPROVAÇÃO.")
      escreval
      escreval ("Digite a nota de recuperação de ", aluno, ":")
      leia (notaRec)
      escreval

      notaRec <- notaRec / 4
      mediaFim <- media + notaRec

      Se (mediaFim >= 7) entao
         escreval ("Segundo a média final de ", mediaFim, " pontos, a situação do aluno se encontra em APROVAÇÃO.")

      Senao (mediaFim < 7)
         escreval ("Segundo a média final de ", mediaFim, " pontos, a situação do aluno se encontra em REPROVAÇÃO.")

      Fimse
   Fimse


   escreval
   escreval

Fimalgoritmo