Algoritmo "Calculadora Básica"

// Descrição   : Cálculo de dois números pela operação escolhida
// Autor(a)    : BrunoP
// Data atual  : 25/06/2026

Var

   operacao: inteiro
   x, y, resultado: real

Inicio

      escreval ("Antes de realizarmos o cálculo")
      escreval ("digite o número correspondente com as seguintes operação básica:")
      escreval
      escreval (" 1 - Soma ( + )")
      escreval (" 2 - Subtração ( - )")
      escreval (" 3 - Multiplicação ( x )")
      escreval (" 4 - Divisão ( / )")
      escreval
      escreva ("A opção ecolhida é: ")
      leia (operacao)
      escreval
      
      Escolha (operacao)

      Caso 1, 2, 3, 4
           escreval ("Agora, digite os dois números em que deseja realizar essa operação:")
      escreva ("1º Número: ")
      leia (x)
      escreva ("2º Número: ")
      leia (y)

      OutroCaso
           escreval ("Opção Inválida")
           
      FimEscolha
      

      escreval
      
      Escolha (operacao)
      
      caso 1
           resultado <- x + y
           escreval ("O resultado da sua operação é", resultado)

      caso 2
           resultado <- x - y
           escreval ("O resultado da sua operação é", resultado)

      caso 3
           resultado <- x * y
           escreval ("O resultado da sua operação é", resultado)

      caso 4
       Se (y = 0)Entao
              escreval ("A divisão por zero é uma operação indefinida ou indeterminada na aritmética dos números reais.")
              escreval ("Refaça a operação.")

           Senao
                resultado <- x / y
           escreval ("O resultado da sua operação é", resultado)

           Fimse

      FimEscolha

      escreval
      
Fimalgoritmo