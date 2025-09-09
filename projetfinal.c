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
int afficherplayers()
    
{
    if(nbrjouours==0)
    {
        printf("il n y a pas de joueurs dans l equipe \n");
        return 0;
    }
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        printf("le joueur %d : \n",i+1);
        printf("nom : %s \n",equipe[i].name);
        printf("age : %d \n",equipe[i].age);
        printf("nombre de buts : %d \n",equipe[i].goals);
        printf("numero de maillot : %d \n",equipe[i].numero_maillot);
        printf("poste : %s \n",equipe[i].poste);
        printf("id : %d \n",equipe[i].id);
        printf("\n");
    }
}
int rechercherjoueur()
{
    if(nbrjouours==0)
    {
        printf("il n y a pas de joueurs dans l equipe \n");
        return 0;
    }
    int id ;
    printf("donner l'id du joueur a rechercher : ");
    scanf("%d",&id);
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        if(equipe[i].id==id)
        {
            printf("le joueur %s a ete trouve avec succes \n",equipe[i].name);
            printf("nom : %s \n",equipe[i].name);
            printf("age : %d \n",equipe[i].age);
            printf("nombre de buts : %d \n",equipe[i].goals);
            printf("numero de maillot : %d \n",equipe[i].numero_maillot);
            printf("poste : %s \n",equipe[i].poste);
            printf("id : %d \n",equipe[i].id);
            return 0;
        }
    }
    printf("le joueur avec l'id %d n'a pas ete trouve \n",id);
    return 0;
}
