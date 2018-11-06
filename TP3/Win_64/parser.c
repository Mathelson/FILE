#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    //Persona*PersonasArray[20];      //array de punteros a estructuras

    int flag=0;

    int r,i=0;
    char var1[50],var3[50],var2[50],var4[50];
    pFile = fopen("data.csv","r");


    if(pFile == NULL){
    return -1;
    }

    do{
    r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);

    if(r==4 && flag==1){
    employee_newParametros(var4,var3,var2,var1);
    i++;
    }
    else if (r!=4&&flag==1){   //si la lectura en R es distinto de 4, y flag es 1, o flag es 0
        break;
    }
    flag=1;

    }while(!feof(pFile));
    fclose(pFile);
    return i;
}



/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
