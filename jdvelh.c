#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lieu
{
    char Name[64];
	int LieuExistant;
	char Description[64];
	int GoldGain;
	int HPGain;
	int ID[5];
};

typedef struct Lieu Lieu;


int Gold=10;
int HP=100;

int main (){
	
	while (HP>0)
	{
			//vars
		int ChoixLieu;
		Lieu a_Lieux[4];
		int i;

		//Declaration lieux
		Lieu Depart = {"Depart(tap0)", 1, "Lieu1Details", 0, 0, 0};
		Lieu Lieu1 = {"Lieu1(tap1)", 1, "Lieu1Details", -2, +8, 0};
		Lieu Lieu2 = {"Lieu2(tap2)", 1, "Lieu1Details", 6, -12, 0};
		Lieu Lieu3 = {"Lieu3(tap3)", 1, "Lieu1Details", 14, -20, 0};
		
		//Array lieux
		a_Lieux[0] = Depart;
		a_Lieux[1] = Lieu1;
		a_Lieux[2] = Lieu2;
		a_Lieux[3] = Lieu3;
		
		for (i=0; i<4; i++)
		{
			if (a_Lieux[i].LieuExistant==1)
			{
				printf("-%s \n", a_Lieux[i].Name);
			}
		}
		
		//Affichage txt choix lieux
		printf("Ou voulez vous aller ?\n");
		scanf("%d", &ChoixLieu);
		
		/*if (a_Lieux[i].LieuExistant!=1)
		{
			printf("Lieu inexistant");
			scanf("%d", &ChoixLieu);
		}*/
		
		printf("Lieu choisi : %d \n", ChoixLieu);
		
		//CONDITIONS DEPLACEMENT
		if (a_Lieux[ChoixLieu].LieuExistant==1)
		{
			printf("Vous etes arrive au %s \n", a_Lieux[ChoixLieu].Name);
			if (Gold>=0)
			{
				Gold += a_Lieux[ChoixLieu].GoldGain;
				if (Gold<0)
				{
					Gold=0;
				}
			}
			if (HP<=100)
			{
				HP += a_Lieux[ChoixLieu].HPGain;
			}
			else if (HP>100)
			{
				HP=100;
			}
			printf("Vous avez %d or \n", Gold);
			printf("Vous avez %d HP \n \n", HP);
		}
	}	
	printf("Vous etes mort");
}