#include <stdio.h>

typedef struct Date {
  int mouth;
  int day;
  int year;
  struct Date *next_date;
  struct Date *prev_date;
} datas;

int main(void) {

  datas data1;
  datas data2;
  datas data3;
  int i;

  printf("\n=================== PRIMEIRA DATA =========================\n");
  
  printf("Digite um dia do mes: ");
  scanf("%d", &data1.day);

  printf("Digite um numero de um mes: ");
  scanf("%d", &data1.mouth);

  printf("Digite um ano: ");
  scanf("%d", &data1.year);

  printf("\n=================== SEGUNDA DATA =========================\n");

  printf("Digite um dia do mes: ");
  scanf("%d", &data2.day);

  printf("Digite um numero de um mes: ");
  scanf("%d", &data2.mouth);

  printf("Digite um ano: ");
  scanf("%d", &data2.year);

  printf("\n=================== TERCEIRA DATA =========================\n");
  
  printf("Digite um dia do mes: ");
  scanf("%d", &data3.day);

  printf("Digite um numero de um mes: ");
  scanf("%d", &data3.mouth);

  printf("Digite um ano: ");
  scanf("%d", &data3.year);

  int dayBig = data1.day;
  int mouthBig = data1.mouth;
  int yearBig = data1.year;

  // Maior ano

  if(data2.year > yearBig) 
    yearBig = data2.year;

  if(data3.year > yearBig)
    yearBig = data3.year;

   // Maior mes

  if(data2.mouth > mouthBig) 
    yearBig = data2.year;

  if(data3.mouth > mouthBig)
    yearBig = data3.year;

  printf("O ano maior é %d", yearBig);
    
  
  
  return 0;
}