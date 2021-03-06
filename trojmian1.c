/*Dawid ㄆkasiewicz
 Kod 廝鏚這wy i sprawozdanie z dzia豉nia programu 
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
      printf("Jest to r闚nanie liniowe o rozwiazaniu x=%f\n",-c/b);
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
Sprawozdanie z dzia豉nia programu:
 -Pr鏏a numer 1:
   Dane: a=1, b=6, c=9
   R您wi您anie: x1=x2=-3
  Wynik: poprawny

 -Pr鏏a numer 2: przypadek z wynikami nieca趾owitymi
   Dane: a=4, b=5, c=-2
   R您wi您anie: x1=-1.568729, x2=0.318729
  Po sprawdzeniu kalkulatorem naukowym, stwierdzam, 瞠 wynik poprawny

 -Pr鏏a numer 3: delta<0
   Dane: a=2, b=4, c=3
   R您wi您anie: Brak rozwi您a? rzeczyswistych
  Wynik: poprawny

 -Pr鏏a numer 4: przypadek liniowy
  Dane: a=0, b=1, c=2
  Rozwi您anie: Przypadek liniowy o x1=-2
 Wynik: poprawny

 -Pr鏏a numer 5: b=0
  Dane: a=-2, b=0, c=2
  Rozwi您anie: x1=1, x2=-1
 Wynik: poprawny

 -Pr鏏a numer 6: c=0
  Dane: a=-4, b=8, c=0
  Rozwi您anie: x1=2, x2=0
 Wynik: poprawny

 -Pr鏏a numer 7: a=0, b=0, c=0
  Dane: a=0, b=0, c=0
  Rozwi您anie: "Rozwi您aniem jest dowolne x"
 Wynik: poprawny

 -Pr鏏a numer 8: a=0, b=0, c=6
  Dane: a=0, b=0, c=6
  Rozwi您anie: "Brak rozwi您a?"
 Wynik: poprawny
*/
