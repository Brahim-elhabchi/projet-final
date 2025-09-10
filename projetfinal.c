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
    char statut[10];

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
    { int choixposte;
        printf("donner le nom du joueur %d : ",i+1);
        scanf("%s",&equipe[nbrjouours].name);
        printf("donner l'age du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].age);
        printf("donner le nombre de buts du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].goals);
        printf("donner le numero de maillot du joueur %d : ",i+1);
        scanf("%d",&equipe[nbrjouours].numero_maillot);
        printf("donner le poste du joueur %d : \n",i+1);
        printf("1-Gardien de but \n");
        printf("2-Defenseur \n");
        printf("3-Milieu de terrain \n");
        printf("4-Attaquant \n");
        scanf("%d",&choixposte);
        switch(choixposte)
        {
            case 1 :
                strcpy(equipe[nbrjouours].poste,"Gardien de but");
                break;
            case 2 :
                strcpy(equipe[nbrjouours].poste,"Defenseur");
                break;
            case 3 :
                strcpy(equipe[nbrjouours].poste,"Milieu de terrain");
                break;
            case 4 :
                strcpy(equipe[nbrjouours].poste,"Attaquant");
                break;
            default :
                printf("choix invalide \n");
                break;
        }
        equipe[nbrjouours].id=id;
        printf("donner le statut du joueur %d :\n ",i+1);
        printf("1-Titulaire \n");
        printf("2-Remplacant \n");
        scanf("%d",&choixposte);
        switch(choixposte)
        {
            case 1 :
                strcpy(equipe[nbrjouours].statut,"Titulaire");
                break;
            case 2 :
                strcpy(equipe[nbrjouours].statut,"Remplacant");
                break;
            default :
                printf("choix invalide \n");
                break;
        }
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
            printf("statut : %s \n",equipe[i].statut);
            return 0;
        }
    }
    printf("le joueur avec l'id %d n'a pas ete trouve \n",id);
    return 0;
}
int modifierjoueur()
{
    if(nbrjouours==0)
    {
        printf("il n y a pas de joueurs dans l equipe \n");
        return 0;
    }
    int id ;
    printf("donner l'id du joueur a modifier : ");
    scanf("%d",&id);
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        if(equipe[i].id==id)
        {
           printf(" Vous pouvez modifier les informations du joueur%s\n",equipe[i].name);
            printf("le joueur %s a ete trouve avec succes \n",equipe[i].name);
            printf("donner le nouvel age du joueur : ");
            scanf("%d",&equipe[i].age);
            printf("donner le nouveau nombre de buts du joueur : ");
            scanf("%d",&equipe[i].goals);
            printf("donner le nouveau numero de maillot du joueur : ");
            scanf("%d",&equipe[i].numero_maillot);
            printf("donner le nouveau poste du joueur : ");
            scanf("%s",equipe[i].poste);
            printf("le joueur %s a ete modifie avec succes \n",equipe[i].name);
            return 0;
        }
    }
    printf("le joueur avec l'id %d n'a pas ete trouve \n",id);
    return 0;
}
    int supprimerjoueur()
    {
    if(nbrjouours==0)
    {
        printf("il n y a pas de joueurs dans l equipe \n");
        return 0;
    }
    int id ;
    printf("donner l'id du joueur a supprimer : ");
    scanf("%d",&id);
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        if(equipe[i].id==id)
        {
            for(int j=i ; j<nbrjouours-1 ; j++)
            {
                equipe[j]=equipe[j+1];
            }
            nbrjouours--;
            printf("le joueur avec l'id %d a ete supprime avec succes \n",id);
            return 0;
        }
    }
}
int stattique(){
    float moyenne ;
    if(nbrjouours==0)
    {
        printf("il n y a pas de joueurs dans l equipe \n");
        return 0;
    } 
    int maxage=0;
    char joueurplusage[25];
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        if(equipe[i].age>maxage)
        {
            maxage=equipe[i].age;
            strcpy(joueurplusage,equipe[i].name);
        }
    }
    printf("le joueur le plus age est %s avec %d ans \n",joueurplusage,maxage);
    int somme=0;
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        somme=somme+equipe[i].age;
    }
     moyenne = somme/nbrjouours;
    printf("l age moyen des joueurs est de : %.2f \n",moyenne);
    printf("le nombre total des joueurs est de : %d \n",nbrjouours);
    int max=0;
    char meilleurbuteur[25];
    for ( int i=0 ; i<nbrjouours ; i++)
    {
        if(equipe[i].goals>max)
        {
            max=equipe[i].goals;
            strcpy(meilleurbuteur,equipe[i].name);
        }
    }
    printf("le meilleur buteur est %s avec %d buts \n",meilleurbuteur,max);
}
    void menu()
    {

    
    
    printf("********** Bienvenue dans le gestionnaire de joueurs **********\n");
    printf("Pour ajouter un joueur, saissie sur ; ajouter\n");
    printf("Pour afficher les joueurs, saissie sur ; afficher\n");
    printf("Pour rechercher un joueur, saissie sur ; rechercher\n");
    printf("Pour modifier un joueur, saissie sur ; modifier\n");
    printf("Pour supprimer un joueur, saissie sur ; supprimer\n");
    printf("Pour quitter le programme, saissie sur ; quitter\n");

}
int main()
{
    
    char choix[10];
    
    while(1)
    {
        menu();
        printf("donner votre choix : ");
        scanf("%s",choix);
        if(strcmp(choix,"ajouter")==0)
        {
            ajouterjoueur();
        }
        else if(strcmp(choix,"afficher")==0)
        {
            afficherplayers();
        }
        else if(strcmp(choix,"rechercher")==0)
        {
            rechercherjoueur();
        }
        else if(strcmp(choix,"modifier")==0)
        {
            modifierjoueur();
        }
        else if(strcmp(choix,"supprimer")==0)
        {
            supprimerjoueur();
        }
        else if(strcmp(choix,"statistique")==0)
        {
            stattique();
        }
        else if(strcmp(choix,"quitter")==0)
        {
            printf("au revoir \n");
            break;
        }
        else
        {
            printf("choix invalide \n");
        }
    }
    return 0;
}