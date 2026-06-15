# ft_printf

## Descripción

ft_printf es un proyecto cuyo objetivo es recrear una versión simplificada de la función `printf` de la librería estándar de C.

El programa debe interpretar cadenas de formato y mostrar información por la salida estándar utilizando diferentes especificadores de conversión.

Este proyecto permite profundizar en el uso de funciones variádicas y en la conversión de distintos tipos de datos a texto.

## Función principal

```c
int ft_printf(const char *format, ...);
```

La función escribe la salida formateada en la salida estándar y devuelve el número de caracteres impresos.

## Conversiones implementadas

| Especificador | Descripción |
|-------------|-------------|
| `%c` | Carácter |
| `%s` | Cadena de caracteres |
| `%p` | Dirección de memoria |
| `%d` | Entero decimal con signo |
| `%i` | Entero decimal |
| `%u` | Entero decimal sin signo |
| `%x` | Hexadecimal en minúsculas |
| `%X` | Hexadecimal en mayúsculas |
| `%%` | Símbolo `%` |

## Conceptos trabajados

- Funciones variádicas
- `stdarg.h`
- Conversión de tipos
- Manejo de cadenas
- Recursividad
- Gestión de memoria
- Salida estándar

## Compilación

Para compilar el proyecto:

```bash
make
```

Esto generará la biblioteca:

```bash
libftprintf.a
```

### Reglas disponibles

```bash
make
make clean
make fclean
make re
```

## Uso

Incluye el header en tu proyecto:

```c
#include "ft_printf.h"
```

Y compila enlazando la biblioteca:

```bash
cc main.c libftprintf.a
```

### Ejemplo

```c
ft_printf("Nombre: %s\n", "Juan");
ft_printf("Edad: %d\n", 25);
ft_printf("Puntero: %p\n", ptr);
```

## Funcionamiento

La función analiza la cadena de formato carácter por carácter. Cuando encuentra un especificador precedido por `%`, selecciona la conversión correspondiente y muestra el valor recibido como argumento.

Al finalizar, devuelve el número total de caracteres impresos.

## Objetivo

El objetivo principal es comprender cómo funcionan internamente las funciones variádicas y cómo implementar un sistema de salida formateada similar al de la función `printf` estándar.

## Autor

Proyecto realizado como parte del programa de formación de 42.
