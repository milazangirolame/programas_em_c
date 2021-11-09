#include <stdio.h>

/* declaracao do construtor da funcao do sensor */
int retorna_sensor(int valor_sensor);

int main () {

   /* cria varios valores de sensores diferentes aqui vc pode guardar na variavel o valor
   que voce recebe do sensor (vai depender de qual sensor esta usando
   por enquanto so vou colocar um valor numerico */
   int valor_sensor1 = 10;
   int valor_sensor2 = 8;
   int valor_sensor3 = 5;
   int valor_sensor4 = 0;

   /* aqui voce cria uma variavel vazia pra receber os resultados */
   int resultado1;
   int resultado2;
   int resultado3;
   int resultado4;

   /* aqui voce chama a funcao para retornar o resultado pra cada valor inputado */
   resultado1 = retorna_sensor(valor_sensor1);
   resultado2 = retorna_sensor(valor_sensor2);
   resultado3 = retorna_sensor(valor_sensor3);
   resultado4 = retorna_sensor(valor_sensor4);

   /* aqui vc printa os valores de cada resultado */
   printf( "valor do sensor é : %d\n", resultado1 );
   printf( "valor do sensor é : %d\n", resultado2 );
   printf( "valor do sensor é : %d\n", resultado3 );
   printf( "valor do sensor é : %d\n", resultado4 );


   return 0;
}

/* aqui voce escreve a funcao que vai devolver o resultado correto de acordo com valor recebido
que no caso é o valor do sensor que voce manda como atributo estou usando como integer
talvez vc precise transforar em integer (fazer um cast ) se o valor for em string ou centimetros como disse */
int retorna_sensor(int valor_sensor) {

   /* declara uma variavel vazia pra receber resultado  */
   int resultado;

   if (valor_sensor == 0)
      resultado = 2;
   else
      resultado = valor_sensor;

   return resultado;
}
