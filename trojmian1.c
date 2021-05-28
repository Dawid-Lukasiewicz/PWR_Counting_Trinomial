/*Dawid £ukasiewicz
 Kod ¼ród³owy i sprawozdanie z dzia³ania programu 
 Data: 23.10.2019 */
/* kompilacja: Sun C: cc -Xc trojmian.c -lm
                GNU C: gcc -pedantic -Wall trojmian.c -lm*/
#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c,delta;

  printf("Program oblicza pierwiastki rownania w postaci\n");
  printf("     2\n");
  printf("  a x + b x +c =0\n");
  printf("Podaj wartosc a:");
  scanf("%f",&a);
  printf("Podaj wartosc b:");
  scanf("%f",&b);
  printf("Podaj wartosc c:");
  scanf("%f",&c);
  
  if (a==0.0)    /*przypadek rownania liniowego */
    if (b!=0.0) 
      printf("Jest to równanie liniowe o rozwiazaniu x=%f\n",-c/b);
    else  if (c==0.0)  /* oraz a==b==0.0 */
      printf("Rozwiazaniem jest dowolne x\n");
    else              /* a==b==0.0 != c  */
      printf("Brak rozwiazan\n");
  else {   /*przypadek rownania kwadratowego */
    delta=pow(b,2)-4.0*a*c;
    if (delta<0) 
      printf("Brak rozwiazan rzeczywistych\n");
    else            /* delta>=0 */
      if (delta>0) 
	printf("Rozwiazaniem sa x1=%f i x2=%f\n",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
      else
      	printf("Rozwiazaniem sa x1=x2=%f\n",-b/(2*a));
  }
  
  
 }
/*
Sprawozdanie z dzia³ania programu:
 -Próba numer 1:
   Dane: a=1, b=6, c=9
   R±zwi±zanie: x1=x2=-3
  Wynik: poprawny

 -Próba numer 2: przypadek z wynikami nieca³kowitymi
   Dane: a=4, b=5, c=-2
   R±zwi±zanie: x1=-1.568729, x2=0.318729
  Po sprawdzeniu kalkulatorem naukowym, stwierdzam, ¿e wynik poprawny

 -Próba numer 3: delta<0
   Dane: a=2, b=4, c=3
   R±zwi±zanie: Brak rozwi±zañ rzeczyswistych
  Wynik: poprawny

 -Próba numer 4: przypadek liniowy
  Dane: a=0, b=1, c=2
  Rozwi±zanie: Przypadek liniowy o x1=-2
 Wynik: poprawny

 -Próba numer 5: b=0
  Dane: a=-2, b=0, c=2
  Rozwi±zanie: x1=1, x2=-1
 Wynik: poprawny

 -Próba numer 6: c=0
  Dane: a=-4, b=8, c=0
  Rozwi±zanie: x1=2, x2=0
 Wynik: poprawny

 -Próba numer 7: a=0, b=0, c=0
  Dane: a=0, b=0, c=0
  Rozwi±zanie: "Rozwi±zaniem jest dowolne x"
 Wynik: poprawny

 -Próba numer 8: a=0, b=0, c=6
  Dane: a=0, b=0, c=6
  Rozwi±zanie: "Brak rozwi±zañ"
 Wynik: poprawny
*/
