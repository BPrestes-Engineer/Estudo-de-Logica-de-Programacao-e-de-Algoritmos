Algoritmo "Vetor Numeros Pares e Impares"

// Descrição   : Solicita 4 números ao usuário e depois separa-os em ímpares e pares e os imprime
// Autor(a)    : BPresstes
// Data atual  : 30/06/2026

Var

   par, impar: vetor [1..4] de inteiro
   i: inteiro

Inicio

      Para i de 1 ate 4 Faca
      
           Escreval("Digite um número: ")
           Leia(par[i])
           
           Se ( par[i] mod 2 = 0 ) Entao

              par[i] <- par[i]

              Senao

                   impar[i] <- par[i]
                   par[i] <- 0

                   FimSe
                   
                        FimPara
           
     escreval
     
      Para i de 1 ate 4 Faca
      
           Escreval (" Par", i, ":", par[i], ";  Ímpar", i, ":", impar[i])

                    FimPara
      
      escreval
      
Fimalgoritmo