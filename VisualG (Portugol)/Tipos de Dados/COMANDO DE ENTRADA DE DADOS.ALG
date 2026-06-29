Algoritmo "Comando de Entrada de dados"
// 
//  
// Descrição   : Permite o usuário inserir dados
// Autor(a)    : BrunoP
// Data atual  : 17/06/2026
Var

   produto: caractere          //dados tipo texto
   quantidade: inteiro         //dados tipo números do conjunto naturais
   preco: real                 //dados tipo números do conjunto racionais
   totalPagar: real
   cliente: caractere
   pagamentoEfetuado: logico   //dados tipo lógico (se, maior que, verdadeiro... etc.)
   

Inicio

      escreval ("Digite o nome do cliente: ")
      leia (cliente)
      escreval
      
      escreval ("Digite o produto que ele comprou")
      leia (produto)
      escreval
      
      escreval ("Digite o preço desse produto")
      escreva ("R$")
      leia (preco)
      escreval
      
      escreval ("Digite a quantidade desse produto que o cliente comprou")
      leia (quantidade)
      escreval
      
      escreval ("Informe o preço a ser pago pelo cliente: R$", quantidade * preco)
      escreva ("R$")
      leia (totalPagar)
      escreval
      escreval
      
      escreval ("Nome do cliente: ", cliente)
      escreval ("Produto escolhlido pelo cliente: ", produto)
      escreval ("preço do produto escolhido pelo cliente: ", preco)
      escreval ("Quantidade do produto pago pelo cliente: ", quantidade)
      escreval ("Total a ser pago pelo cliente: ", totalPagar)
      
Fimalgoritmo