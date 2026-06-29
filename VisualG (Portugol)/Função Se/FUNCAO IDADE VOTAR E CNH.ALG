Algoritmo "Funcao Idade Votar e CNH"

// Descrição   : Cálculo de Idade para votação e para tirar CNH.
// Autor(a)    : BrunoP
// Data atual  : 23/06/2026

Var

   idade, nascimento: inteiro

Inicio

   escreval ("Digite o ano em que você nasceu:")
   leia (nascimento)
   Escreval

   idade <- 2026 - nascimento

   Se ( idade >= 18 ) Entao
      escreval ("Como a sua idade é de", idade," anos, você possui o direito de realizar o seu Título de Eleitor e a CNH.")
      escreval

   Senao
      se ( idade >= 16 ) entao
         escreval ("Como a sua idade é de", idade," anos, você possui o direito de realizar apenas o seu Título de Eleitor, sem poder realizar a CNH ainda.")
         escreval

      senao
         escreval ("Você não possui a idade mínima para realizar o seu Título de Eleitor e nem a CNH, visto que sua idade é de", idade," anos.")
         escreval

      fimse
   Fimse
   
   escreval

Fimalgoritmo