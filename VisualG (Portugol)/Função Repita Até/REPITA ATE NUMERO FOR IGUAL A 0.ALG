Algoritmo "Repita Ate Numero for igual a 0"

// Descrição   : Lê o número digitado pelo usuário e só para quando ele digitar 0, revelando o maior número digitado por ele.
// Autor(a)    : BPresstes
// Data atual  : 29/06/2026

Var

   numero, maior: real

Inicio
      
      Repita
      
            Escreval("Digite um número: ")
            Leia(numero)
            escreval
            
            Se ( numero > maior ) Entao
            
               maior <- numero
               
            FimSe
            
      Ate numero = 0
      
      Escreval("Muito Bem!!! Você digitou o número ZERO ^U^")
      Escreval("E o maior número digitado por você foi", maior, "!")
      escreval
      
Fimalgoritmo