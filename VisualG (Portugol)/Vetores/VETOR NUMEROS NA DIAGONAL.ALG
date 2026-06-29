Algoritmo "Vetor Numeros na Diagonal"

// Descrição   : Cria uma Matriz 3x3 e imprime o resultado da soma da diagonal dessa matriz.
// Autor(a)    :BPresstes
// Data atual  : 29/06/2026

Var

   x: vetor [1..9] de inteiro
   soma, i: inteiro

Inicio

      Para i de 1 ate 9 Faca

           Escreval("Digite o número", i, ": ")
           Leia(x[i])
           escreval

      FimPara

      Para i de 1 ate 3 Faca

           Escreva(" ", x[i])

      FimPara
      escreval
      
      Para i de 4 ate 6 Faca

           Escreva(" ", x[i])

      FimPara
      escreval
      
      Para i de 7 ate 9 Faca

           Escreva(" ", x[i])

      FimPara
      escreval
      
      Soma <- x[1] + x[5] + x[9]
      
      escreval
      Escreval("A soma da Diagonal é igual a", soma)
      escreval

Fimalgoritmo