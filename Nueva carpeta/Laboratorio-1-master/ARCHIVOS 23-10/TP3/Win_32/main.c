#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
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
    Employee ** this = (Employee**) malloc(sizeof(Employee*));
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        printf("\t\t\tTrabajo Practico N3\n\n");
        printf("1.Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
        printf("2.Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n");
        printf("3.Alta de empleado\n");
        printf("4.Modificar datos de empleado\n");
        printf("5.Baja de empleado\n");
        printf("6.Listar empleados\n");
        printf("7.Ordenar empleados\n");
        printf("8.Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
        printf("9.Guardar los datos de los empleados en el archivo data.csv (modo binario).\n");
        printf("10.Salir\n");
        printf("\n\nIngrese una opcion: ");

        scanf("%d", &option);

        switch(option)
        {
            case 1:
                if(controller_loadFromText("data.csv",listaEmpleados))
                    printf("\nArchivo cargado en modo texto correctamente!!\n\n");
                else
                    printf("\nError al parsear el archivo!!\n\n");

                system("pause");
                system("cls");
                break;

            case 2:
                if(controller_loadFromBinary("data.bin", listaEmpleados))
                    printf("\nArchivo binario creado correctamente!!\n\n");
                else
                    printf("\nSe a producido un error al crear el archivo!!\n\n");

                system("pause");
                system("cls");
                break;

            case 3:
                controller_addEmployee(listaEmpleados);

                system("pause");
                system("cls");
                break;

            case 4:
                controller_editEmployee(listaEmpleados);

                system("pause");
                system("cls");
                break;

            case 5:
                controller_removeEmployee(listaEmpleados);

                system("pause");
                system("cls");
                break;

            case 6:
                controller_ListEmployee(listaEmpleados);
                system("pause");
                system("cls");
                break;

            case 7:
                controller_sortEmployee(listaEmpleados);

                system("pause");
                system("cls");
                break;

            case 8:
                //controller_saveAsText();

                system("pause");
                system("cls");
                break;

            case 9:
                //controller_saveAsBinary();

                system("pause");
                system("cls");
                break;
        }

    }while(option != 10);

    return 0;
}
