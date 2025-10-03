
#include <stdio.h>

int main()
{
char alimentos[50][30];//50 alimentos com 30 letras
int gramas[50];
int total = 0;
int count = 0;
char resposta;



do {
    
   
  printf("qual alimentos você comeu?\n");
    scanf(" %[^\n]", alimentos[count]);//le a resposta do usuario
    
printf("quantas gramas esse alimento tem?\n");
     scanf("%d", &gramas[count]);
     
      total += gramas[count]; // acumula no total
        count++; // aumenta a contagem de alimentos
        
    printf("você comeu mais coisas no dia?[s/n]\n");
    scanf(" %c", &resposta);
    
        printf("\033[2J\033[H");//limpa a tela !!!


} while ((resposta == 's' || resposta == 'S') && count < 50);

      printf("\n--- Relatório do dia ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d) %s - %d g\n", i+1, alimentos[i], gramas[i]);
    }
    printf("Total consumido: %d g\n", total);
    


    return 0;
}
