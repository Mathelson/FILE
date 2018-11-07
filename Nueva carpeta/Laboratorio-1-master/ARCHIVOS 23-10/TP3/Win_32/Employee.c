#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"
#include <string.h>

Employee* employee_new()
{
    Employee *this;

    this = (Employee*)malloc(sizeof(Employee));

    if(this != NULL)
    {
        this->id = 0;
        strcpy(this->nombre, "");
        this->horasTrabajadas = 0;
        this->sueldo = 0;
    }

    return this;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee *this;
    int id, hsTrabajadas, sueldo;

    this = employee_new();
    id = atoi(idStr);
    employee_setId(this, id);
    employee_setNombre(this, nombreStr);
    hsTrabajadas = atoi(horasTrabajadasStr);
    employee_setHorasTrabajadas(this, hsTrabajadas);
    sueldo = atoi(sueldoStr);
    employee_setSueldo(this, sueldo);

    return this;
}

/*void employee_delete()
{



}*/

int employee_setId(Employee* this,int id)
{
    int retorno = -1;

    if(this != NULL && id >=0)
    {
        this->id = id;
        retorno = 0;
    }

    return retorno;
}

int employee_getId(Employee* this)
{
    return this->id;

}

int employee_setNombre(Employee* this,char* nombre)
{
    int retorno = -1;

    if(this != NULL)
    {
        strcpy(this->nombre, nombre);
        retorno = 0;
    }

    return retorno;
}

char* employee_getNombre(Employee* this)
{
    return this->nombre;

}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int retorno = -1;

    if(this != NULL && horasTrabajadas >=0)
    {
        this->horasTrabajadas = horasTrabajadas;
        retorno = 0;
    }

    return retorno;
}

int employee_getHorasTrabajadas(Employee* this)
{
    return this->horasTrabajadas;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int retorno = -1;

    if(this != NULL && sueldo >=0)
    {
        this->sueldo = sueldo;
        retorno = 0;
    }

    return retorno;
}

int employee_getSueldo(Employee* this)
{
    return this->sueldo;
}
