# Notatka dotyczaca funkcji **printf** i **scanf**

## 1. PRINTF

Funkcja `printf()` wypisuje na ekranie łańcuchy danych, czyli napis tak jak puts z tym ,tylko że nie ogranicza się do wyświetlania tekstu. Oprócz tego można wypisać wartości zmienne i stałe, same lub wraz z tekstem poprzez specyfikatory formatowania, dla danego typu zmiennej lub stałej (np. %d – dla typu int).


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

`Scanf()` służy do wprowadzania wartości z klawiatury różnych typów danych, które użytkownik wprowadza i wczytuje do zmiennej. Scanf() wymaga potwierdzenia enterem wprowadzonej wartości.
Odczytuje dane ze standardowego strumienia wejściowego (stdin)
w/g zadanego formatu i zapamiętuje je pod zadanymi adresami pamięci.

int scanf (tekst_sterujący, adres_1, adres_2,  . . .  ) ;

tekst  sterujący → jest  to  stała  łańcuchowa  (w  podwójnych cudzysłowach) zawierająca polecenia jak traktować kolejne dane wczytywane ze strumienia (jakie typy zmiennych są pod adresami adres_1, adres_2, ... ) 
Kody formatujące (podobne jak dla printf() ): 

%c − pojedynczy znak 
%s − łańcuch znaków 
%d − liczba dziesiętna ze znakiem 
   %f lub %e − liczba zmiennoprzecinkowa 
%u − liczba dziesiętna bez znaku 
%x − liczba w kodzie szesnastkowym (bez znaku) 
%o − liczba w kodzie ósemkowym (bez znaku) 
l − przedrostek stosowany przed: d u x o (long int) 
l − przedrostek stosowany przed: f e (double) 
L − przedrostek stosowany przed: f e (long double) 






