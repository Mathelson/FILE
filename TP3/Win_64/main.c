#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
        FILE, LEO DEL TIPO TEXTO.
        parse...do while se lee cada registro, cargar los datos a memoria, en estructura tipo memoria.
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
        pedir memoria, hacer el set en estructura empleado. empleado.h
        ll_add
     3. Alta de empleado

     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();//ll_nerLinkedList//CREA L LISTA
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);//PUNTO1_ PARSE//abro el archivo //parse empleado flom text_
                break;
        }
    }while(option != 10);
    return 0;
}
