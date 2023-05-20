#include <stdio.h>
#include <stdbool.h>

int main ()
{
int Ganzzahl = 5;
float Gleitkommazahl = 1.234567;
char Buchstabe = 'Y';
bool Vergleich;

printf("Dies ist eine Ganzzahl vom Typ int %i \n", Ganzzahl);
printf("Dies ist eine Gleitkommazahl vom Typ float %f \n", Gleitkommazahl);
printf("Dies ist ein Buchstabe vom Typ char %c \n", Buchstabe);

if(Ganzzahl > Gleitkommazahl)
{
printf("Der Vergleich zwischen Ganzzahl %i und Gleitkommazahl %f hat funktioniert. Die Ganzzahl %i ist größer!\n",
	Ganzzahl, Gleitkommazahl, Ganzzahl);
return Vergleich = true;
}
}
