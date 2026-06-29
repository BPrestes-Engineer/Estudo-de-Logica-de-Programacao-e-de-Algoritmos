Algoritmo "Escolha Caso"

// Descrição   : Estudo da Funcção Escolha Caso
// Autor(a)    : BrunoP
// Data atual  : 24/06/2026

Var

   diaSemana : caractere
   numero: inteiro

Inicio

   escreval ("Digite um número de 1 a 7:")
   leia (numero)
   escreval

   Escolha (numero)

   Caso 1
      diaSemana <- "Domingo!"

   Caso 2
      diaSemana <- "Segunda-Feira!"

   Caso 3
      diaSemana <- "Terça-Feira!"

   Caso 4
      diaSemana <- "Quarta-Feira!"

   Caso 5
      diaSemana <- "Quinta-Feira!"

   Caso 6
      diaSemana <- "Sexta-Feira!"

   Caso 7
      diaSemana <- "Sábado!"

   OutroCaso
      diaSemana <- "Inválido!"

   Fimescolha

   escreval ("O número", numero," é ", diaSemana)

Fimalgoritmo