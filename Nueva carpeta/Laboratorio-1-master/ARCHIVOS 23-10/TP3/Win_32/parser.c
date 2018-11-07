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
    Employee* this;
    int r, i=0;
    char id_s[50], nombre[50], hsTrabajadas_s[50], sueldo_s[50];

    if(pFile == NULL)
    {
        return -1;
    }

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id_s,nombre,hsTrabajadas_s,sueldo_s);

    do
    {
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id_s,nombre,hsTrabajadas_s,sueldo_s);
        if(r==4)
        {
            this = employee_newParametros(id_s, nombre, hsTrabajadas_s, sueldo_s);
            ll_add(pArrayListEmployee, this);

            i++;
        }
        else
            break;
    }
    while(!feof(pFile));

    return 1;
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
    fread(pArrayListEmployee, sizeof(LinkedList), ll_len(pArrayListEmployee), pFile);

    return 1;
}
