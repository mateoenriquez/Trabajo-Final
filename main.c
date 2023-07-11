#include <stdio.h>
#include <string.h>
#define MAXSALANORMAL 40
#define MAXSALAVIP 15
#define MAXSALA3D 30

int main(){

char usuario[10];
char usuario1[10]="Mateo";
char usuario2[10]="Nicolas";
char usuario3[10]="Juan";
int contra1=1234;
int contra2=4321;
int contra3=5678;
int intento=3, i, contraseña, opcionMenu1, opcionMenu2, opcionMenu3, numeroEntradas, descuento40y80, descuento80y120, descuento120;
int costoEntradaNormal=8, costoEntradaVip=15, costoEntrada3D=12, costoTotal, entradasNormalesVendidas=0, entradasVIPVendidas=0, entradas3Dvendidas=0, gananciasTotales=0;


printf ("---SUPERCINES---\n");
printf("Bienvenido, ingresa tu usuario y contrasena\n");
for (i = 1; i <= intento; i++)
{
    printf("\n");
    printf("Usuario: \n");
    scanf("%s", &usuario);
    printf("Contrasena: \n");
    scanf("%d", &contraseña);
    
    if (strcmp(usuario,usuario1)==0 && contraseña==contra1)
    {
        printf("Ha ingresado correctamente, bienvenido Mateo\n");
        break;
    }else{
        if (strcmp(usuario, usuario2)==0 && contraseña==contra2)
        {
            printf("Ha ingresado correctamente, bienvenido Nicolas\n");
            break;
        }else{
            if (strcmp(usuario, usuario3)==0 && contraseña==contra3)
        {
            printf("Ha ingresado correctamente, bienvenido Juan\n");
            break;
        }else{
        printf("Usuario o contrasena incorrectos, intento #%d\n", i);
    }
        }
    }
    if (i==intento)
    {
        printf("Imposible ingresar\n");
        return 0;
    }
}

do
{
    printf("\n");
    printf("---MENU---\n");
    printf("\n");
    printf("1. Venta de entradas\n");
    printf("2. Estadistica de ventas\n");
    printf("3. Salir\n");
    scanf("%d", &opcionMenu1);

    switch (opcionMenu1)
    {
    case 1:
        printf("\n");
        printf("---Catalogo---\n");
        printf("1. Spiderman\n");
        printf("2. Transformers\n");
        scanf("%d", &opcionMenu2);

        switch (opcionMenu2)
        {
        case 1:
            printf("\n");
            printf("---Tipo de sala---\n");
            printf("1. Normal\n");
            printf("2. VIP\n");
            printf("3. 3D\n");
            scanf("%d", &opcionMenu3);

            switch (opcionMenu3)
            {
            case 1:
                printf("Numero de entradas: ");
                scanf("%d", &numeroEntradas);
                if (numeroEntradas>MAXSALANORMAL)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }else{
                    if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradasNormalesVendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntradaNormal;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                    
                }
                }
                }
                break;
            case 2:
                printf("Numero de entradas: ");
                scanf("%d", numeroEntradas);
                if (numeroEntradas>MAXSALAVIP)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }
                if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradasVIPVendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntradaVip;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                }
                }
                
                break;
            case 3:
                printf("Numero de entradas: ");
                scanf("%d", numeroEntradas);
                if (numeroEntradas>MAXSALA3D)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }
                if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradas3Dvendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntrada3D;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                    
                }
                }

                break;    
            
            default:
                break;
            }

            break;
        case 2:
        printf("\n");
            printf("---Tipo de sala---\n");
            printf("1. Normal\n");
            printf("2. VIP\n");
            printf("3. 3D\n");
            scanf("%d", &opcionMenu3);

            switch (opcionMenu3)
            {
            case 1:
                printf("Numero de entradas: ");
                scanf("%d", &numeroEntradas);
                if (numeroEntradas>MAXSALANORMAL)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }else{
                    if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradasNormalesVendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntradaNormal;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                    
                }
                }
                }
                break;
            case 2:
                printf("Numero de entradas: ");
                scanf("%d", numeroEntradas);
                if (numeroEntradas>MAXSALAVIP)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }
                if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradasVIPVendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntradaVip;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                }
                }
                
                break;
            case 3:
                printf("Numero de entradas: ");
                scanf("%d", numeroEntradas);
                if (numeroEntradas>MAXSALA3D)
                {
                    printf("Error, excede el numero de ascientos dispobibles\n");
                    break;
                }
                if (numeroEntradas<0)
                {
                    printf("Error, cantidad ingresada no valida\n");
                    break;
                }else{
                entradas3Dvendidas+=numeroEntradas;    
                costoTotal=numeroEntradas*costoEntrada3D;
                if (costoTotal>=40 && costoTotal<80)
                {
                    descuento40y80=costoTotal*.95;
                    gananciasTotales+=descuento40y80;
                    printf("Usted aplica para un descuento del %%5 ");
                    printf("Su gasto total seria de %d\n", descuento40y80);
                }else{
                    if (costoTotal>=80 && costoTotal<120)
                    {
                        descuento80y120=costoTotal*.90;
                        gananciasTotales+=descuento80y120;
                        printf("Usted aplica para un descuento del %%10 ");
                        printf("Su gasto total seria de %d\n", descuento80y120);
                    }else{
                        if (costoTotal>=120)
                    {
                        descuento120=costoTotal*.85;
                        gananciasTotales+=descuento120;
                        printf("Usted aplica para un descuento del %%15 ");
                        printf("Su gasto total seria de %d\n", descuento120);
                    }else{
                        gananciasTotales+=costoTotal;
                        printf("Su gasto total seria de %d\n", costoTotal);
                    }
                    }
                    
                }
                }

                break;    
            
            default:
                break;
            }

            break;
        }
            
        
    case 2:
        printf("\n");
        printf("---Estadistica de ventas---\n");
        printf("---Entradas venidas---\n");
        printf("Entradas Normales: %d", entradasNormalesVendidas);
        printf("Entradas Vip vendidas: %d", entradasVIPVendidas);
        printf("Entradas 3D vendidas: %d", entradas3Dvendidas);
        printf("\n");
        printf("Ganancias totales: %d", gananciasTotales);
        break;

    case 3:
        printf("\n");
        printf("Gracias, esperamos volver a verlo\n");
        break;
    
    default:
        break;
    }
} while (opcionMenu1!=3);

return 0;
}