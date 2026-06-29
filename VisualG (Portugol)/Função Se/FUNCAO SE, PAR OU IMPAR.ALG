Algoritmo "funcao se, par ou impar"

// Descrição   : Informa se o número digitado pleo usuário é par ou ímpar.
// Autor(a)    : BrunoP
// Data atual  : 23/06/2026

Var

   numero:  inteiro

Inicio

   escreval ("Digite um número: ")
   leia (numero)
   escreval

   // mod significa o resto de uma divisão, ou seja, quando eu peço o resto de uma divisão de um nº por outro nº.
   // Ex.: X mod Y = Z -->> ex. 14 mod 2 = 0 (a divisão de 14 por 2, gera um resto de 0)

   Se ( numero mod 2 = 0 ) Entao
      escreval ("O número", numero," é par")

   Senao
      escreval ("O número", numero," é impar")

   Fimse

   Escreval
   escreval

Fimalgoritmo