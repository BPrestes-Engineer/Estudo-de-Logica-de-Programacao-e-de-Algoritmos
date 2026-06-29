Algoritmo "Vetor Lista de Numeros Multiplicados por 2 "

// Descrição: O sistema solicita ao usuário 5 números depois o entrega uma lista com os números
// informados pelo o mesmo junto à multiplicação desses mesmos números por um valor qualquer
// (Neste caso, foi 2).

// Autor(a)    : BPresstes
// Data atual  : 29/06/2026

Var

   x, y: vetor [1..5] de real
   i: inteiro

Inicio

      Escreval("Me informe 5 números.")
      escreval

      Para i de 1 ate 5 Faca

           Escreval("Digite o", i, "º número:")
           Leia(x[i])
           escreval

      FimPara
      

      
      Escreval("Aqui está a lista desses números já calculados ^U^:")
      escreval
      
      Para i de 1 ate 5 Faca
      
            y[i] <- x[i] * 2
           Escreval( i, "º número:", x[i], " x 2 =", y[i])
      
      FimPara
      
      escreval
      
Fimalgoritmo