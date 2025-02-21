#include <stdio.h>

// DECLARACION DE FUNCIONES
void app_calculadora();
void struct_Menu();
void _subMenu();

// DECLARACION DE VARIABLES
int respuesta_menu

//FUNCION PRINCIPAL
int main (){
    struct_Menu();
}

//FUNCION MENU
void struct_Menu(){
  //DECLARACION DE VARIABLE LOCAL
    // SE LE PREGUNTA AL USUARIO QUE DESEA HACER EL SWITCH LO LEEE Y REDIRIGIR

    printf("Que desea hacer?? \n\n");

    printf("1- Calculadora");
    scanf("%d", &respuesta_menu);

    switch(respuesta_menu){
        case 1:
           app_calculadora();
        break;
        case 2:
           _subMenu(respuesta_menu);
        break;

        default : printf("Respuesta no vailida");
           struct_Menu();
        break;
    }

}

void app_calculadora(){

    //APP CALCULADORA DONDE SOLO SE PUEDEN REALIZAR LAS OERACIONES BASICAS MATEMATICAS 

    char operacion;
    double num1, num2, resultado;

    printf("Ingrese la opeeracion (+,-,*,/)")
    scanf("%c", &operacion);

    printf("Ingrese el primer numero: ");
    scanf("%lf",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%lf",&num2);

    switch (operacion){
        case '+':
          resultado = num1 + num2;
          printf("El resultado es: %.2lf\n", resultado);
        break;
        case '-':
          resultado = num1 - num2;
          printf("El resultado es: %.2lf\n", resultado);
        break;
        case '*':
          resultado = num1 * num2;
          printf("El resultado es: %2.lf\n", resultado);
        break;
        case '/':
          resultado = num1 / num2;
          printf("El resultado es: %.2lf\n", resultado);
        break;
        default:
          printf("Operacion no valida"); 

    }
}
void _subMenu(respuesta_menu){


}
