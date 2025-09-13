#include <stdio.h>
#include <string.h>
int nbrjouours = 11;
int idcnt = 12;

struct player
{
 char name[25];
 int age;
 int goals;
 int numero_maillot;
 char poste[17];
 int id;
 char statut[10];
};

struct player equipe[100] = {
 {"Iniesta", 41, 50, 8, "Milieu de terrain", 1, "Titulaire"},
 {"CR7", 40, 800, 7, "Attaquant", 2, "Titulaire"},
 {"Maradona", 60, 500, 10, "Attaquant", 3, "Titulaire"},
 {"Maldini", 56, 40, 3, "Defenseur", 4, "Titulaire"},
 {"Nesta", 49, 30, 13, "Defenseur", 5, "Titulaire"},
 {"Roberto Carlos", 51, 100, 6, "Defenseur", 6, "Titulaire"},
 {"Dani Alves", 42, 40, 2, "Defenseur", 7, "Titulaire"},
 {"Xavi", 45, 100, 6, "Milieu de terrain", 8, "Titulaire"},
 {"Pirlo", 46, 80, 21, "Milieu de terrain", 9, "Titulaire"},
 {"Neuer", 37, 0, 1, "Gardien de but", 10, "Titulaire"},
 {"Messi", 38, 700, 10, "Attaquant", 11, "Titulaire"},
};
int ajouterjoueur()
{
 if (nbrjouours >= 100)
 {
  printf("la limite de joueurs est atteinte \n");
  return 0;
 }
 int n;
 printf("donner le nombre de joueurs a ajouter : ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
  int choixposte;
  printf("donner le nom du joueur %d : ", i + 1);
  scanf("%s", equipe[nbrjouours].name);
  printf("donner l'age du joueur %d : ", i + 1);
  scanf("%d", &equipe[nbrjouours].age);
  printf("donner le nombre de buts du joueur %d : ", i + 1);
  scanf("%d", &equipe[nbrjouours].goals);
  printf("donner le numero de maillot du joueur %d : ", i + 1);
  scanf("%d", &equipe[nbrjouours].numero_maillot);
  printf("donner le poste du joueur %d : \n", i + 1);
  printf("1-Gardien de but \n");
  printf("2-Defenseur \n");
  printf("3-Milieu de terrain \n");
  printf("4-Attaquant \n");
  scanf("%d", &choixposte);
  int invalid = 0;
  switch (choixposte)
  {
  case 1:
   strcpy(equipe[nbrjouours].poste, "Gardien de but");
   break;
  case 2:
   strcpy(equipe[nbrjouours].poste, "Defenseur");
   break;
  case 3:
   strcpy(equipe[nbrjouours].poste, "Milieu de terrain");
   break;
  case 4:
   strcpy(equipe[nbrjouours].poste, "Attaquant");
   break;
  default:
   printf("choix invalide \n");
   invalid = 1;
   break;
   if (nbrjouours >= 100)
   {
    printf("la limite de joueurs est atteinte \n");
    return 0;
   }
  }

  printf("donner le statut du joueur %d :\n ", i + 1);
  printf("1-Titulaire \n");
  printf("2-Remplacant \n");
  scanf("%d", &choixposte);
  switch (choixposte)
  {
  case 1:
   strcpy(equipe[nbrjouours].statut, "Titulaire");
   break;
  case 2:
   strcpy(equipe[nbrjouours].statut, "Remplacant");
   break;
  default:
   invalid = 1;
   printf("choix invalide \n");
   break;
  }
  if (invalid == 0)
  {
   equipe[nbrjouours].id = idcnt++;
   printf("le joueur %s a ete ajoute avec succes avec l'id %d \n", equipe[nbrjouours].name, equipe[nbrjouours].id);
   nbrjouours++;
  }
 }
 return 0;
}
int afficherplayers()
{
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return 0;
 }
 printf(":::::::%d:::::::\n", nbrjouours);
 for (int i = 0; i < nbrjouours; i++)
 {
  printf("le joueur %d : \n", i + 1);
  printf("nom : %s \n", equipe[i].name);
  printf("age : %d \n", equipe[i].age);
  printf("nombre de buts : %d \n", equipe[i].goals);
  printf("numero de maillot : %d \n", equipe[i].numero_maillot);
  printf("poste : %s \n", equipe[i].poste);
  printf("id : %d \n", equipe[i].id);
  printf("\n");
 }
 return 0;
}
int rechercherjoueur()
{
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return 0;
 }
 int ids;
 printf("donner l'id du joueur a rechercher : ");
 scanf("%d", &ids);
 for (int i = 0; i < nbrjouours; i++)
 {
  if (equipe[i].id == ids)
  {
   printf("le joueur %s a ete trouve avec succes \n", equipe[i].name);
   printf("nom : %s \n", equipe[i].name);
   printf("age : %d \n", equipe[i].age);
   printf("nombre de buts : %d \n", equipe[i].goals);
   printf("numero de maillot : %d \n", equipe[i].numero_maillot);
   printf("poste : %s \n", equipe[i].poste);
   printf("id : %d \n", equipe[i].id);
   printf("statut : %s \n", equipe[i].statut);
   return 0;
  }
 }
 printf("le joueur avec l'id %d n'a pas ete trouve \n", ids);
 return 0;
}
int modifierjoueur()
{
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return 0;
 }
 int idr;
 printf("donner l'id du joueur a modifier : ");
 scanf("%d", &idr);
 for (int i = 0; i < nbrjouours; i++)
 {
  if (equipe[i].id == idr)
  {
   printf(" Vous pouvez modifier les informations du joueur%s\n", equipe[i].name);
   printf("le joueur %s a ete trouve avec succes \n", equipe[i].name);
   printf("donner le nouvel age du joueur : ");
   scanf("%d", &equipe[i].age);
   printf("donner le nouveau nombre de buts du joueur : ");
   scanf("%d", &equipe[i].goals);
   printf("donner le nouveau poste du joueur : ");
   scanf("%s", equipe[i].poste);
   printf("le joueur %s a ete modifie avec succes \n", equipe[i].name);
   return 0;
  }
 }
 printf("le joueur avec l'id %d n'a pas ete trouve \n", idr);
 return 0;
}
void supprimerjoueur()
{
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return;
 }
 int idss;
 printf("donner l'id du joueur a supprimer : ");
 scanf("%d", &idss);
 for (int i = 0; i < nbrjouours; i++)
 {
  if (equipe[i].id == idss)
  {
   for (int j = i; j + 1 < nbrjouours; j++)
   {
    equipe[j] = equipe[j + 1];
   }
   nbrjouours--;
   printf("le joueur avec l'id %d a ete supprime avec succes \n", idss);
   return;
  }
 }
 printf("le joueur avec l'id %d n est pas trouve. \n", idss);
}
void stattique()
{
 float moyenne;
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return;
 }
 int maxage = 0;
 char joueurplusage[25];
 for (int i = 0; i < nbrjouours; i++)
 {
  if (equipe[i].age > maxage)
  {
   maxage = equipe[i].age;
   strcpy(joueurplusage, equipe[i].name);
  }
 }
 printf("le joueur le plus age est %s avec %d ans \n", joueurplusage, maxage);
 int somme = 0;
 for (int i = 0; i < nbrjouours; i++)
 {
  somme = somme + equipe[i].age;
 }
 moyenne = somme / nbrjouours;
 printf("l age moyen des joueurs est de : %.2f \n", moyenne);
 printf("le nombre total des joueurs est de : %d \n", nbrjouours);
 int max = 0;
 char meilleurbuteur[25];
 for (int i = 0; i < nbrjouours; i++)
 {
  if (equipe[i].goals > max)
  {
   max = equipe[i].goals;
   strcpy(meilleurbuteur, equipe[i].name);
  }
 }
 printf("le meilleur buteur est %s avec %d buts \n", meilleurbuteur, max);
 int moinsage=0;
 char joueurmoinsage[25];
  for (int i = 0; i < nbrjouours; i++)
  {
    if(equipe[i].age>moinsage)
    {
      moinsage=equipe[i].age;
      strcpy(joueurmoinsage,equipe[i].name);
    }
  }
   printf("le joueur le moins age est %s avec %d ans \n", joueurmoinsage, moinsage);
}
void menu()
{
 printf("\n \n \n \n");
 printf("Pour ajouter un joueur, saissie sur ; ajouter\n");
 printf("Pour afficher les joueurs, saissie sur ; afficher\n");
 printf("Pour rechercher un joueur, saissie sur ; rechercher\n");
 printf("Pour modifier un joueur, saissie sur ; modifier\n");
 printf("Pour supprimer un joueur, saissie sur ; supprimer\n");
 printf("Pour afficher les statistiques, saissie sur ; statistique\n");
 printf("Pour quitter le programme, saissie sur ; quitter\n");
}
void trieparage()
{
 struct player temp;
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return;
 }
 for (int i = 0; i < nbrjouours; i++)
 {
  for (int j = i + 1; j < nbrjouours; j++)
  {
   if (equipe[i].age > equipe[j].age)
   {
    temp = equipe[i];
    equipe[i] = equipe[j];
    equipe[j] = temp;
   }
  }
 }
 printf("les joueurs ont ete tries par age avec succes \n");
}
void triparalphabetique()
{
 struct player temp;
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return;
 }
 for (int i = 0; i < nbrjouours; i++)
 {
  for (int j = i + 1; j < nbrjouours; j++)
  {
   if (strcmp(equipe[i].name, equipe[j].name) > 0)
   {
    temp = equipe[i];
    equipe[i] = equipe[j];
    equipe[j] = temp;
   }
  }
 }
 printf("les joueurs ont ete tries par ordre alphabetique avec succes \n");
}
void choixdetri()
{
 if (nbrjouours == 0)
 {
  printf("il n y a pas de joueurs dans l equipe \n");
  return;
 }
 char choix[12];
 printf("voulez vous trier les joueurs par age ou par ordre alphabetique ? \n");
 printf("taper 'age' pour trier par age \n");
 printf("taper 'alphabetique' pour trier par ordre alphabetique \n");
 scanf("%s", choix);
 if (strcmp(choix, "age") == 0)
 {
  trieparage();
  afficherplayers();
 }
 else if (strcmp(choix, "alphabetique") == 0)
 {
  triparalphabetique();
  afficherplayers();
 }
 else
 {
  printf("choix invalide \n");
 }
}
int main()
{
 printf("** Bienvenue dans le gestionnaire de joueurs **\n");
  char choix[15];

 while (1)
 {
  menu();
  printf("donner votre choix : ");
  scanf("%s", choix);
  if (strcmp(choix, "ajouter") == 0)
  {
   ajouterjoueur();
  }
  else if (strcmp(choix, "afficher") == 0)
  {
   choixdetri();
  }
  else if (strcmp(choix, "rechercher") == 0)
  {
   rechercherjoueur();
  }
  else if (strcmp(choix, "modifier") == 0)
  {
   modifierjoueur();
  }
  else if (strcmp(choix, "supprimer") == 0)
  {
   supprimerjoueur();
  }
  else if (strcmp(choix, "quitter") == 0)
  {
   printf("au revoir \n");
   break;
  }
  else if (strcmp(choix, "statistique") == 0)
  {
   stattique();
  }
  else
  {
   printf("choix invalide \n");
  }
 }
 return 0;
}