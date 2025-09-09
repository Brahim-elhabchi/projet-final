#include<stdio.h>
#include<string.h>
 struct player
 {
    char name [25];
    int age ;
    int goals ;
    int numero_maillot ;
    char poste [13] ;
    int id;

 };

 struct player equipe [100];
   int nbrjouours =0 ;

   int ajouterjoueur()
{
    printf("donner le nombre de joueurs a ajouter : ");
    int n,id ;;
    scanf("%d",&n);
      id=0000001  ;
    for (int i =0 ; i<n ; i++)
    {
        printf("donner le nom du joueur %d : ",i+1);
        scanf("%s",&equipe[nbrjouours].name);
        printf("donner l'age du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].age);
        printf("donner le nombre de buts du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].goals);
        printf("donner le numero de maillot du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].numero_maillot);
        printf("donner le poste du joueur %d : ",i+1);
        scanf("%s",equipe[nbrjouours].poste);
        equipe[nbrjouours].id=id;
        printf("le joueur %s a ete ajoute avec succes avec l'id %d \n",equipe[nbrjouours].name,equipe[nbrjouours].id);
        nbrjouours++;
        id++;
    }
    return 0 ;
}
