#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char cuenta[7];
  char nombre[30];
} datos[100];


int main (void)
{
  int i=0;
  int j=0;
  int valida=0;
  int igual;
  char num_cuenta[7];
  char cuenta2[10];
  char nombre_nuevo[30];
  int ren;
  int k=0;

  datos alumno;

  FILE *Alumnos;
  Alumnos = fopen("ALUMNOS.csv", "rt");

  system("clear");
  printf("\n\t BIENVENIDO - Universidad Iberoamericana -\n");
  printf("\nPor favor ingrese su numero de cuenta sin digito verificador:\n");
  scanf("%s", num_cuenta);

  while (!feof(Alumnos))
    {
      fscanf(Alumnos, "%30[^,],%7[^\n]\n",alumno[i].nombre, alumno[i].cuenta);
      i++;
    }
  //ren=i+1;

  system("clear");
  for(j=0; j<=i; j++)
    {
      //printf("\n%d %s", j, alumno[j].cuenta);
      if(strcmp(num_cuenta,alumno[j].cuenta)==0)
	{
	  printf("\nHola %s\n", alumno[j].nombre);
	  valida=1;
	}
    }
  fclose(Alumnos);  
 
  Alumnos = fopen("ALUMNOS.csv", "wt");
  if(valida==0)
    {
      printf("Usted no esta registrado.\n");

      printf("PROCESO DE REGISTRO.\n");

      getchar();
      printf("Ingrese su nombre completo:\n");

      gets(nombre_nuevo);
     

     
      printf("Ingrese su numero de cuenta sin digito verificador:\n");
      gets(cuenta2);

      printf("\n%s,%s", nombre_nuevo, cuenta2);

	for(ren=0; ren<i; ren++)
	{
	  fprintf(Alumnos, "%s,%s\n", alumno[ren].nombre, alumno[ren].cuenta);
	  printf("\n%s,%s", alumno[ren].nombre, alumno[ren].cuenta);
	}

      fprintf(Alumnos, "%s,%s\n", nombre_nuevo, cuenta2);
    }
            
}
