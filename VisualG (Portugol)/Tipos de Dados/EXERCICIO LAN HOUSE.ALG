Algoritmo "Exercício Lan House"

// Descrição   : Cálculo de pagamento por hora utilizada em um serviço.
// Autor(a)    : BrunoP
// Data atual  : 20/06/2026

Var

   cliente: caractere
   tempoUsado, preco, totalPagar: real
   

Inicio

      escreval ("Digite o nome do cliente: ")
      leia (cliente)
      escreval
      
      escreval ("Digite o tempo de uso em minutos da Lan House pelo cliente: ")
      escreva ("Min: ")
      leia (tempoUsado)
      escreval
      
      preco <- 2,00
      totalPagar <- (tempoUsado / 60) * preco
      
      escreval ("Informe ao cliente ", cliente, " o total a pagar:")
      escreva ("R$", totalPagar)
      escreval
      escreval
      
Fimalgoritmo