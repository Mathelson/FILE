#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();//nuevo empleado, persona newPersona
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldostr);

void employee_delete();//ESTA TODAVIA NO!

int employee_setId(Employee* this,int id);/***/

int employee_getId(Employee* this,int* id);/***/

int employee_setNombre(Employee* this,char* nombre);/***/
int employee_getNombre(Employee* this,char* nombre);/***/

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);/***///HORAS TRABAJADAS X SUELDO;
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);/***/

int employee_setSueldo(Employee* this,int sueldo);/***/
int employee_getSueldo(Employee* this,int* sueldo);/***/

#endif // employee_H_INCLUDED
