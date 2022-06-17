 #include <stdio.h>
#include <time.h>
#include <string.h>
#include <solution.h>
#include "fichier_à_tester.c"  
#include "test_standard.c"
#include "test_double_longueur.c"

int main(void) {
     clock_t start, end, startx2, endx2;
     double cpu_time_used, cpu_time_usedx2;
     start = clock();
     char* str= erase(c);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("temp d'exécution standard: %lf \n",cpu_time_used);
  
startx2 = clock();
     char* strx2= erase(c1);
     endx2 = clock();
     cpu_time_usedx2 = ((double) (endx2 - startx2)) / CLOCKS_PER_SEC;
printf("temp d'exécution longueur double: %lf",cpu_time_usedx2);  
  return 0;
}