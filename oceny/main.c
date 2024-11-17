/*
* Maciej P�o�ski
* Temat: Program do sredniej i ilosci ndst ocen
*/

#include <stdio.h>


int main()
{
    printf("*Program do liczenia sredniej z ocen oraz zliczenie ndst ocen*\n");
   int ocenaNds = 0;
   float wszystkie = 0.0;
   int iloscOcen = 0;
   do{
        printf("Podaj ilosc ocen\n ");
        scanf("%d" ,&iloscOcen);
   }while(iloscOcen <=0);

    //powtarzanie petli tyle razy ile jest ocen
    for(int i=0;i<iloscOcen;i++){
        float ocena = 0;
    do{//sprawdzanie zgodnosci czy ocena podana nie jest <=2 albo >5
        printf("Ocena nr %d = ",i+1);//wyswietlanie oceny
        scanf("%f",&ocena);//podaje oceny
        if(ocena >5 || ocena <=1){
            printf("Podaj oceny w zakresie od 2 do 5!!\n Wpisz jeszcze raz\n");
        }
    }while(ocena > 5 || ocena <= 1);//kiedy wszystko ok wykonuje petle
            if(ocena == 2.0){ //dodanie ocen ndst
                ocenaNds += 1;
            }
            wszystkie += ocena;
    }
    printf("Ocena\"ndst\" = %d, srednia ocen = %.2f" ,ocenaNds ,wszystkie/iloscOcen);
    return 0;
}
