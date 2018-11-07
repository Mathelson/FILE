#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* pFile;

    pFile = fopen(path, "r");

    if(pFile != NULL)
        parser_EmployeeFromText(pFile, pArrayListEmployee);
    else
        return -1;

    fclose(pFile);

    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    FILE* pFile;

    pFile = fopen(path, "rb");

    if(pFile == NULL)
    {
        pFile = fopen(path, "wb");
        if(pFile == NULL)
            return -1;
        else
            parser_EmployeeFromBinary(pFile, pArrayListEmployee);
    }

    fclose(pFile);

    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    int i;

    for(i=0; i<ll_len(pArrayListEmployee); i++)
    {

    }

    for(i=0; i<ll_len(pArrayListEmployee); i++)
    {


    }

    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int i;
    Employee* this;

    printf("\nID\tNOMBRE\tHsTRABJ.\tSUELDO\n\n");

    for(i=0; i<ll_len(pArrayListEmployee); i++)
    {
        this = ll_get(pArrayListEmployee, i);
        printf("%d\t%s\t\t%d\t\t%d\n", employee_getId(this), employee_getNombre(this),
               employee_getHorasTrabajadas(this)
               , employee_getSueldo(this));
    }

    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

