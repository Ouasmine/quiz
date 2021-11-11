#include <stdio.h>
#include <stdlib.h>

int main()
    {
    printf("veuillez choisir la bonne reponse :\n");
    int reponsejuste=0;
    int N;
     //int A=2,B=3 ;
      printf("En quelle annee etait la 2ere guerre mondiale");
      scanf("%d",&N);
      if (N==1939){
            reponsejuste=reponsejuste+1;
        printf("ce nombre est juste :\n");
      }

      else
       printf("ce nombre est faux ");
    printf("veuillez choisir la bonne reponse \n");
    int A;
     //int A=2,B=3 ;
      printf("Si ahmed a 2pommes et son ami a 5 pommes combien on aurra de pommes au total ");
      scanf("%d",&A);
      if (A==7){
             reponsejuste=reponsejuste+1;
        printf("ce nombre est juste :\n");
      }
      else
       printf("ce nombre est faux");
      int G;
      printf("En quelle annee etait la 1ere guerre mondiale");
      scanf("%d",&G);
      if (G==1914)  {
          reponsejuste=reponsejuste+1;
        printf("ce nombre est juste\n");
      }

      else
       printf("ce nombre est faux\n");

    printf("resulatat final : %d\n",reponsejuste );

     if (reponsejuste=3)
        printf("Tres bien");
        
        else if(reponsejuste>2 && reponsejuste<3)
        printf("passable");



       return 0;
}
