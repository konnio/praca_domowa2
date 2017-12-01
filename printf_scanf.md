# Notatka dotycząca funkcji **printf** i **scanf**

## 1. PRINTF


Specyfikator |	Opis
---|---
**%d** lub **%i** |	Liczba całkowita ze znakiem (system dziesiętny) np. int
**%f** |	Liczba rzeczywista (system dziesiętny) np. float
**%u** |	Liczba całkowita bez znaku (system dziesiętny)
**%e** |	Liczba w notacji naukowej – ze znakiem e (małe litery)
**%E** |	Liczba w notacji naukowej – ze znakiem E (duże litery)
**%g** |	Liczba rzeczywista w notacji %f lub %e
**%G** |	Liczba rzeczywista w notacji %f lub %E
**%o** |	Liczba w systemie ósemkowym
**%x** |	Liczba w systemie szesnastkowym (małe litery)
**%X** |	Liczba w systemie szesnastkowym (duże litery)
**%c** |	Znak np. zmienne typu char
**%s** |	Łańcuch znaków zakończony „\0„, np. zmienne typu string
**%p** |	Adres pamięci




Przyklad wykorzystania
```c
#include <stdio.h>

int main()
{
    printf( "Znaki: %c, %c\n", 'h', 68 );
    printf( "Liczby (1): %d %i\n", 23, 45 );
    printf( "Liczby (2): %5d %0*d\n", 1234, 8, 5678 );
    printf( "Lancuchy znakow: %s, %s\n", "napis pierwszy", "napis drugi" );
    printf( "Systemy liczbowe: %d %x %o %#x %#o \n", 250, 250, 250, 250, 250 );
    printf( "Liczby zmiennoprzecinowe: %4.2f %+.0e %E \n", 2.1254, 2.1254, 2.1254 );
    printf( "Liczba bez  zer wiadacych: %7d \n", 1387 );
    printf( "Liczba z zerami wiadocymi: %07d \n", 1387 );
    return 0;
}
```

## 2. SCANF
