#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
Employee* employee_new(){
  Employee*this = malloc(sizeof(Employee));
  return this;

}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldostr)//init_inicializar_falta sueldo
{
  Employee*this;
  int id;
  int sueldo;
  int horas;
  id=atoi(idStr);
  sueldo=atoi(sueldostr);
  horas=atoi(horasTrabajadasStr);
  this = employee_new();
    if(this!=NULL){
        employee_setId(this,idStr);
        employee_setNombre(this,nombreStr);
        employee_setHorasTrabajadas(this,horasTrabajadasStr);
        employee_setSueldo(this,sueldostr);

        return this;
    }


}


/////////////////////////////////////


/**opcion 2 muestra error hasta cargar el punto 9*/
int employee_getId(Employee* this,int* id)
{
    if(id>0){

        this->id =id;

    }
        return 0;

}
int employee_getNombre(Employee* this,char* nombre)
{
     if (this!=NULL){
        strcpy(this->nombre, nombre);
    }
    return 0;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
      if(horasTrabajadas>0){
        this->horasTrabajadas =horasTrabajadas;
    }
    return 0;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
    if(sueldo>0){
        this->sueldo =sueldo;
    }
    return 0;
}




int employee_setId(Employee* this,int id)
{
        if(id>0)
        {
            this->id = id;
        }
    return 0;
}
int employee_setNombre(Employee* this,char* nombre)
{
    if (this!=NULL){                    //si el puntero a persona es distinto a nulo
        strcpy(this->nombre, nombre);   //en la posicion pasada por parametro copiame
    }
    return 0;
}


int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
        if(horasTrabajadas>0)
        {
            this->horasTrabajadas = horasTrabajadas;
        }
    return 0;

}
int employee_setSueldo(Employee* this,int sueldo){

        if(sueldo>0)
        {
            this->sueldo = sueldo;
        }
    return 0;

}

