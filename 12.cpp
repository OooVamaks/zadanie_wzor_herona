//Zadanie wzór Herona


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Punkt
{
	float x;
	float y;
};
float punkty10, punkty21, punkty12;
struct Punkt punkty_na_plaszczyznie[3];

void wprowadzanie_punktow(struct Punkt punkty_na_plaszczyznie[]);

void dlugosc_odcinka(struct Punkt punkty_na_plaszczyznie[]);
void pole(struct Punkt punkty_na_plaszczyznie[]);
int main() {
	printf("ile punktów:");


	
	wprowadzanie_punktow(punkty_na_plaszczyznie);

	dlugosc_odcinka(punkty_na_plaszczyznie);
	pole(punkty_na_plaszczyznie);
	system("PAUSE");
	return 0;
}



void wprowadzanie_punktow(struct Punkt punkty_na_plaszczyznie[])
{
		for (int i = 0; i < 3; i++)
	{
		printf("Podaj wspolrzedna x %d punktu: ", i + 1);
		scanf_s("%f", &punkty_na_plaszczyznie[i].x);

		printf("Podaj wspolrzedna y %d punktu: ", i + 1);
		scanf_s("%f", &punkty_na_plaszczyznie[i].y);

	}
	printf("Twoje punkty to:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("(%f, %f)\n", punkty_na_plaszczyznie[i].x, punkty_na_plaszczyznie[i].y);
	}
}

void dlugosc_odcinka(struct Punkt punkty_na_plaszczyznie[])
{
	punkty10 = sqrt((punkty_na_plaszczyznie[1].x - punkty_na_plaszczyznie[0].x) * (punkty_na_plaszczyznie[1].x - punkty_na_plaszczyznie[0].x) + (punkty_na_plaszczyznie[1].y - punkty_na_plaszczyznie[0].y) * (punkty_na_plaszczyznie[1].y - punkty_na_plaszczyznie[0].y));
	
	punkty21 = sqrt((punkty_na_plaszczyznie[2].x - punkty_na_plaszczyznie[1].x) * (punkty_na_plaszczyznie[2].x - punkty_na_plaszczyznie[1].x) + (punkty_na_plaszczyznie[2].y - punkty_na_plaszczyznie[1].y) * (punkty_na_plaszczyznie[2].y - punkty_na_plaszczyznie[1].y));
	
	punkty12= sqrt((punkty_na_plaszczyznie[1].x - punkty_na_plaszczyznie[2].x) * (punkty_na_plaszczyznie[0].x - punkty_na_plaszczyznie[2].x) + (punkty_na_plaszczyznie[0].y - punkty_na_plaszczyznie[2].y) * (punkty_na_plaszczyznie[0].y - punkty_na_plaszczyznie[2].y));
	
	
	
	}
void pole()
{
	float pole, l;
	l = 0.5 * (punkty10 + punkty21 + punkty12);
	pole = sqrt(l(l - punkty10))
		printf(% i, pole)
}