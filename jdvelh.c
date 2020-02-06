#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lieu
{
    char Name[64];
	int LieuExistant;
};

typedef struct Lieu Lieu;

int main (){

	//vars
	int ChoixLieu;
	Lieu a_Lieux[4];
	int i;

	//Declaration lieux
	Lieu Lieu1 = {"Lieu1", 1};
	Lieu Lieu2 = {"Lieu2", 1};
	Lieu Lieu3 = {"Lieu3", 1};
	Lieu Lieu4 = {"Lieu4", 1};
	
	//Array lieux
	a_Lieux[0] = Lieu1;
	a_Lieux[1] = Lieu2;
	a_Lieux[2] = Lieu3;
	a_Lieux[3] = Lieu4;
	
	for (i=0; i<4; i++)
	{
		if (a_Lieux[i].LieuExistant==1)
		{
			printf("-%s \n", a_Lieux[i].Name);
		}
	}
	
	//Affichage txt choix lieux
	printf("Ou voulez vous aller ?");
	scanf("%d", &ChoixLieu);
	ChoixLieu -= 1;
	printf("Lieu choisi : %d", ChoixLieu);
	
	//CONDITIONS DEPLACEMENT
	if (a_Lieux[ChoixLieu].LieuExistant==1)
	{
		printf("Vous etes arrive au %s", a_Lieux[ChoixLieu].Name);
	}
}