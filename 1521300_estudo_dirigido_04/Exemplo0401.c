#include<stdio.h>




void method_01 (void)
{
    // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
    // identificar
     printf( " Method 01 - v0.0" );
    // ler do teclado
     printf( "\nEntrar com uma quantidade: " );
     scanf("\n%d", &quantidade);
    // repetir para a quantidade de vezes informada
     controle = 1;
     while ( controle <= quantidade )
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);
     // passar ao proximo valor
     controle = controle + 1;
     } // end while
    // encerrar
     printf( "Apertar ENTER para continuar" );
     getchar();
    } // end method_01 ( )



int positive ( int x )
{
    // testar a condicao
    if (x > 0)
    {
        return 1; // verdadeiro
    }
    else
    {
        return 0; // falso
    } // end if
} // end positive()

 void method_02 (void)
 {
     // definir dado
     int quantidade = 0;
     int valor = 0;
     int controle = 0;
     int contador = 0;

    // identificar
     printf( " Method 02 - v0.0" );

    // ler do teclado
     printf( "\nEntrar com uma quantidade: " );
     scanf("\n%d", &quantidade);

    // repetir para a quantidade de vezes informada
     controle = 1;
     while ( controle <= quantidade )
     {
     // ler valor do teclado
     printf("\nLeia um valor: ");
     scanf("\n%d", &valor);

     //testar se valor e positivo
     if(positive(valor))
     {
         contador = contador + 1;
     }// end if
     // passar ao proximo valor
     controle = controle + 1;
     } // end while
     printf("\n%s%d", "Positivos = ", contador);

    // encerrar
     printf( "\nApertar ENTER para continuar" );
     getchar();







 }















int main ( )
{
    int opcao;

    printf("%s", "Estudo Digirido_04 - Programa v0.0");
    printf("\nOpcao 0: Encerrar programa ");
    printf("\n%s", "Opcao 1: Method_01");
    printf("\n%s", "Opcao 2: Method_02");
    printf("\nEscolha uma opcao: ");
    scanf("\n%d", &opcao);
    getchar();

    switch(opcao)
    {
    case 0:
        printf("\n%s", "Encerrar o programa.");
        break;
    case 1:
        method_01();
        break;
    case 2:
        method_02();
        break;
    default:
        printf("\n%s", "Opcao invalida");
        break;
    }

    printf("\n%s", "Aperte ENTER para encerrar o programa");
    getchar();

}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) -1
b.) 0
c.) 5 e { 1, 2, 3, 4, 5 }
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/

