Algoritmo "Enquanto Faca Fatorial"

// Descrição   : Cálculo do Fatorial ( ! ) de um número qualquer
// Autor(a)    : BrunoP
// Data atual  : 26/06/2026

Var

   numero, i, fatorial: inteiro

Inicio

   Escreval ("Digite um número: ")
   Leia (numero)
   Escreval

   i <- 1
   fatorial <- numero

   Se ( numero = 0 ) entao
      Escreval ("O fatorial de", numero, "! é 1.")

   Senao

      enquanto (i < numero) Faca

         fatorial <- fatorial * i
         i <- i + 1

      FimEnquanto

   Escreval ("O fatorial de", numero, "! é", fatorial, ".")
   escreval
   
   FimSe


Fimalgoritmo