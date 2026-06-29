Algoritmo "Funcao Enquanto Faca Tabuada"

// Descrição   : Função enquanto faça para tabuada de um número
// Autor(a)    : BrunoP
// Data atual  : 27/06/2026

Var

   numero, resultado: real
   i : inteiro

Inicio

      Escreval("Digite um número o qual deseja ver a tabuada dele: ")
      Leia(numero)
      escreval
      
      Escreval("  << TABUADA DE", numero, " >>  ")
      escreval

      Enquanto ( i <= 10 ) Faca
      
               resultado <- numero * i

               Escreval("      ", numero, " x", i, " =", resultado)

               i <- i + 1
               
               escreval
      
      FimEnquanto
      escreval
      
Fimalgoritmo