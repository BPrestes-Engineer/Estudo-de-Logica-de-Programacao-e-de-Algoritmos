Algoritmo "Escolha apartamento"

// Descrição   : Algoritmo que aponta o valor de um apartamento com base no andar escolhido
// Autor(a)    : BrunoP
// Data atual  : 25/06/2026

Var

   andar: inteiro
   preco: real

Inicio

   escreval ("Sabendo que o apartamento em que você deseja morar há 18 andares")
   escreval ("Escolha o andar em que deseja morar para mostrarmos o preco dele")
   escreva ("Andar: ")
   leia (andar)
   escreval

   Escolha (andar)

   Caso 1
      escreval ("O preço do andar", andar," é de R$200.000,00")

   Caso 2, 3, 4
      escreval ("O preço do andar", andar," é de R$220.000,00")

   Caso 5, 6, 7
      escreval ("O preço do andar", andar," é de R$250.000,00")

   Caso 8, 9, 10
      escreval ("O preço do andar", andar," é de R$300.000,00")

   Caso 11, 12, 13, 14, 15, 16, 17, 18
      escreval ("O preço do andar", andar," é de R$500.000,00")

   OutroCaso
      escreval ("Andar Inválido!")

   FimEscolha
   escreval

Fimalgoritmo