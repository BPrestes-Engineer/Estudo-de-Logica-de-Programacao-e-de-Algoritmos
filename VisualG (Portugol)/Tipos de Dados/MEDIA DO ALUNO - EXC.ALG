Algoritmo "Média do Aluno-EXC"

// Descrição   : Cálculo da Média de um aluno.
// Autor(a)    : BrunoP
// Data atual  : 17/06/2026

Var

   aluno: caractere
   aVA, bVA, cVA, dVA, media : real
   quantidadeProva: inteiro

Inicio

      escreval ("Digite o nome do aluno:")
      leia (aluno)
      escreval
      
      escreval ("Insira as notas das seguintes provas desse aluno")
      escreval
      escreva ("1º Verificação de Aprendizagem: ")
      leia (aVA)
      escreva ("2º Verificação de Aprendizagem: ")
      leia (bVA)
      escreva ("3º Verificação de Aprendizagem: ")
      leia (cVA)
      escreva ("4º Verificação de Aprendizagem: ")
      leia (dVA)
      escreval
      escreval
      
      quantidadeProva <- 4
      media <- (aVA + bVA + cVA + dVA) / (quantidadeProva)
      
      escreva ("Aluno: ", aluno, "   |   ")
      escreval ("Média: ", media)
      escreval
      escreval ("Nota 1ºVA: ", aVA)
      escreval ("Nota 2ºVA: ", bVA)
      escreval ("Nota 3ºVA: ", cVA)
      escreval ("Nota 4ºVA: ", dVA)

      
Fimalgoritmo