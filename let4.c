#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher le tableau
void afficher_tableau(int** tab, int lignes) {
    for (int i = 0; i < lignes; i++) {
        printf("Nombre %d : %d lettres, ", i, tab[i][0]); // Affiche le nombre de lettres
        printf("\"");
        for (int j = 1; j <= tab[i][0]; j++) {
            printf("%c", tab[i][j]); // Affiche les lettres une à une
        }
        printf("\"\n");
    }
}

// Fonction pour initialiser le tableau
int** unit() {
    int lignes = 10; // Nombre de lignes initialisées
    int** tab = (int**)malloc(lignes * sizeof(int*)); // Allocation pour les lignes

    // Initialisation de chaque ligne avec allocation dynamique
    tab[0] = (int*)malloc((1 + 4) * sizeof(int)); tab[0][0] = 4; tab[0][1] = 'z'; tab[0][2] = 'e'; tab[0][3] = 'r'; tab[0][4] = 'o';
    tab[1] = (int*)malloc((1 + 2) * sizeof(int)); tab[1][0] = 2; tab[1][1] = 'u'; tab[1][2] = 'n';
    tab[2] = (int*)malloc((1 + 4) * sizeof(int)); tab[2][0] = 4; tab[2][1] = 'd'; tab[2][2] = 'e'; tab[2][3] = 'u'; tab[2][4] = 'x';
    tab[3] = (int*)malloc((1 + 5) * sizeof(int)); tab[3][0] = 5; tab[3][1] = 't'; tab[3][2] = 'r'; tab[3][3] = 'o'; tab[3][4] = 'i'; tab[3][5] = 's';
    tab[4] = (int*)malloc((1 + 6) * sizeof(int)); tab[4][0] = 6; tab[4][1] = 'q'; tab[4][2] = 'u'; tab[4][3] = 'a'; tab[4][4] = 't'; tab[4][5] = 'r'; tab[4][6] = 'e';
    tab[5] = (int*)malloc((1 + 4) * sizeof(int)); tab[5][0] = 4; tab[5][1] = 'c'; tab[5][2] = 'i'; tab[5][3] = 'n'; tab[5][4] = 'q';
    tab[6] = (int*)malloc((1 + 3) * sizeof(int)); tab[6][0] = 3; tab[6][1] = 's'; tab[6][2] = 'i'; tab[6][3] = 'x';
    tab[7] = (int*)malloc((1 + 4) * sizeof(int)); tab[7][0] = 4; tab[7][1] = 's'; tab[7][2] = 'e'; tab[7][3] = 'p'; tab[7][4] = 't';
    tab[8] = (int*)malloc((1 + 4) * sizeof(int)); tab[8][0] = 4; tab[8][1] = 'h'; tab[8][2] = 'u'; tab[8][3] = 'i'; tab[8][4] = 't';
    tab[9] = (int*)malloc((1 + 4) * sizeof(int)); tab[9][0] = 4; tab[9][1] = 'n'; tab[9][2] = 'e'; tab[9][3] = 'u'; tab[9][4] = 'f';

    return tab;
}
int** special() {
      int lignes = 6; // Nombre de lignes initialisées
    int** tab = (int**)malloc(lignes * sizeof(int*)); // Allocation pour les lignes

    // Initialisation de chaque ligne avec allocation dynamique
    tab[0] = (int*)malloc((1 + 4) * sizeof(int)); tab[0][0] = 4; tab[0][1] = 'o'; tab[0][2] = 'n'; tab[0][3] = 'z'; tab[0][4] = 'e'; // onze
    tab[1] = (int*)malloc((1 + 5) * sizeof(int)); tab[1][0] = 5; tab[1][1] = 'd'; tab[1][2] = 'o'; tab[1][3] = 'u'; tab[1][4] = 'z'; tab[1][5] = 'e'; // douze
    tab[2] = (int*)malloc((1 + 6) * sizeof(int)); tab[2][0] = 6; tab[2][1] = 't'; tab[2][2] = 'r'; tab[2][3] = 'e'; tab[2][4] = 'i'; tab[2][5] = 'z'; tab[2][6] = 'e'; // treize
    tab[3] = (int*)malloc((1 + 8) * sizeof(int)); tab[3][0] = 8; tab[3][1] = 'q'; tab[3][2] = 'u'; tab[3][3] = 'a'; tab[3][4] = 't'; tab[3][5] = 'o'; tab[3][6] = 'r'; tab[3][7] = 'z'; tab[3][8] = 'e'; // quatorze
    tab[4] = (int*)malloc((1 + 6) * sizeof(int)); tab[4][0] = 6; tab[4][1] = 'q'; tab[4][2] = 'u'; tab[4][3] = 'i'; tab[4][4] = 'n'; tab[4][5] = 'z'; tab[4][6] = 'e'; // quinze
    tab[5] = (int*)malloc((1 + 5) * sizeof(int)); tab[5][0] = 5; tab[5][1] = 's'; tab[5][2] = 'e'; tab[5][3] = 'i'; tab[5][4] = 'z'; tab[5][5] = 'e'; // seize

    return tab;
}
#include <stdlib.h>

int** dizaine() {
    int lignes = 9; // Nombre de lignes (10 dizaines au total)
    int** tab = (int**)malloc(lignes * sizeof(int*)); // Allocation pour les lignes
    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return NULL;
    }

    // Allocation et initialisation de chaque ligne
    tab[0] = (int*)malloc((1 + 3) * sizeof(int)); 
    if (tab[0]) { tab[0][0] = 3; tab[0][1] = 'd'; tab[0][2] = 'i'; tab[0][3] = 'x'; }

    tab[1] = (int*)malloc((1 + 5) * sizeof(int)); 
    if (tab[1]) { tab[1][0] = 5; tab[1][1] = 'v'; tab[1][2] = 'i'; tab[1][3] = 'n'; tab[1][4] = 'g'; tab[1][5] = 't'; }

    tab[2] = (int*)malloc((1 + 6) * sizeof(int)); 
    if (tab[2]) { tab[2][0] = 6; tab[2][1] = 't'; tab[2][2] = 'r'; tab[2][3] = 'e'; tab[2][4] = 'n'; tab[2][5] = 't'; tab[2][6] = 'e'; }

    tab[3] = (int*)malloc((1 + 8) * sizeof(int)); 
    if (tab[3]) { tab[3][0] = 8; tab[3][1] = 'q'; tab[3][2] = 'u'; tab[3][3] = 'a'; tab[3][4] = 'r'; tab[3][5] = 'a'; tab[3][6] = 'n'; tab[3][7] = 't'; tab[3][8] = 'e'; }

    tab[4] = (int*)malloc((1 + 9) * sizeof(int)); 
    if (tab[4]) { tab[4][0] = 9; tab[4][1] = 'c'; tab[4][2] = 'i'; tab[4][3] = 'n'; tab[4][4] = 'q'; tab[4][5] = 'u'; tab[4][6] = 'a'; tab[4][7] = 'n'; tab[4][8] = 't'; tab[4][9] = 'e'; }

    tab[5] = (int*)malloc((1 + 8) * sizeof(int)); 
    if (tab[5]) { tab[5][0] = 8; tab[5][1] = 's'; tab[5][2] = 'o'; tab[5][3] = 'i'; tab[5][4] = 'x'; tab[5][5] = 'a'; tab[5][6] = 'n'; tab[5][7] = 't'; tab[5][8] = 'e'; }

    tab[6] = (int*)malloc((1 + 12) * sizeof(int)); 
    if (tab[6]) { tab[6][0] = 12; tab[6][1] = 's'; tab[6][2] = 'o'; tab[6][3] = 'i'; tab[6][4] = 'x'; tab[6][5] = 'a'; tab[6][6] = 'n'; tab[6][7] = 't'; tab[6][8] = 'e'; tab[6][9] = '-'; tab[6][10] = 'd'; tab[6][11] = 'i'; tab[6][12] = 'x'; }

    tab[7] = (int*)malloc((1 + 12) * sizeof(int)); 
    if (tab[7]) { tab[7][0] = 12; tab[7][1] = 'q'; tab[7][2] = 'u'; tab[7][3] = 'a'; tab[7][4] = 't'; tab[7][5] = 'r'; tab[7][6] = 'e'; tab[7][7] = '-'; tab[7][8] = 'v'; tab[7][9] = 'i'; tab[7][10] = 'n'; tab[7][11] = 'g';tab[7][12] = 't'; }

    tab[8] = (int*)malloc((1 + 17) * sizeof(int)); 
    if (tab[8]) { tab[8][0] = 17; tab[8][1] = 'q'; tab[8][2] = 'u'; tab[8][3] = 'a'; tab[8][4] = 't'; tab[8][5] = 'r'; tab[8][6] = 'e'; tab[8][7] = '-'; tab[8][8] = 'v'; tab[8][9] = 'i'; tab[8][10] = 'n'; tab[8][11] = 'g'; tab[8][12] = 't'; tab[8][13] = '-'; tab[8][14] = 'd'; tab[8][15] = 'i';tab[8][16] = 'x'; }

    return tab;
}

// Fonction pour imprimer les caractères
void print_car(int nombre, int* caracteres) {
  
    for (int i = 1; i <= nombre; i++) { // Les caractères commencent à l'indice 1
        printf("%c", caracteres[i]);
    }
   
}

// Fonction pour libérer la mémoire
void liberer_tableau(int** tab, int lignes) {
    for (int i = 0; i < lignes; i++) {
        free(tab[i]); // Libère chaque ligne
    }
    free(tab); // Libère le tableau de pointeurs
}

int*decomp(int n){
    int*tab=malloc(3*sizeof(int));
    tab[0]=(n/100);
    tab[1]=(n-(tab[0]*100))/10;
    tab[2]=n-((tab[0]*100)+(tab[1]*10));

    return tab;
}

int*decomp2(long long n){
    int* tab = malloc(7 * sizeof(int)); // Tableau pour stocker les résultats
    // Initialisation du tableau
    for (int i = 0; i < 7; i++) {
        tab[i] = 0;
    }

    // Extraction des milliards
    while (n >= 1000000000) {
        tab[0]++;
        n -= 1000000000;
    }

    // Extraction des millions
    while (n >= 1000000) {
        tab[1]++;
        n -= 1000000;
    }

    // Extraction des milliers
    while (n >= 1000) {
        tab[2]++;
        n -= 1000;
    }

    // Extraction des centaines
    while (n >= 100) {
        tab[3]++;
        n -= 100;
    }

    // Extraction des dizaines
    while (n >= 10) {
        tab[4]++;
        n -= 10;
    }

    // Le reste est les unités
    tab[5] = n;

    return tab;

}

void cent(int n){
    int*dec = decomp(n);
    int hundred = dec[0];
    int ten = dec[1];
    int one = dec[2];

    int**u = unit();
    int**d = dizaine();
    int**s = special();

    if(hundred !=0){
            if(hundred==1){
                printf("cent");
                 printf(" ");
                if(one==0 && ten==0){
                    goto fin;
                } 
            }
            if(hundred!=1){
                print_car(u[hundred][0],u[hundred]);
                printf("-");
                printf("cent");
                printf(" ");
                if(one==0 && ten==0){
                    goto fin;
                } 
            }

    
    }

    if(ten!=0){
        if(ten!=1){
            if(ten==2 ||ten==3  ||ten==4  || ten==5  || ten==6 || ten==8 ){
                if(one!=0){
                print_car(d[ten-1][0],d[ten-1]);
            
                }else{
                     print_car(d[ten-1][0],d[ten-1]);
                     goto fin;
                }
            }else{
          
                
            if(one>0 && one<7){
                print_car(d[ten-2][0],d[ten-2]);
                printf(" ");
                print_car(s[one-1][0],s[one-1]);
                goto fin;

            }else{ 
                    
                    print_car(d[ten-1][0],d[ten-1]);
                    if(one==0){goto fin;
                    }
                    }
                    
                                                                           }              
        }else{
           
            if(one>0 && one<7){
                printf(" ");
                print_car(s[one-1][0],s[one-1]);
                goto fin;
                
            } else{
                printf("dix");
                if((one==0)){goto fin;
                }
            
             

            }

        }


    }
 

    if(n==0){
        printf("zero");

    }else {
        printf(" ");
        print_car(u[one][0],u[one]);
    }

    fin: 
     printf(" ");
    liberer_tableau(u, 10);
    liberer_tableau(d, 9);
    liberer_tableau(s, 6);    
}
void plus_cent(long long n) {
    int* dec2 = decomp2(n);
    int billion = dec2[0];
    int million = dec2[1];
    int thousand = dec2[2];
    int hundred = dec2[3];
    int ten = dec2[4];
    int one = dec2[5];
    int last_section = hundred * 100 + ten * 10 + one;

    if (billion != 0) {
        cent(billion);
        printf(" milliard");
        if (million != 0 || thousand != 0 || last_section != 0) {
            printf(" ");
        }
    }

    if (million != 0) {
        cent(million);
        printf(" million");
        if (thousand != 0 || last_section != 0) {
            printf(" ");
        }
    }

    if (thousand != 0) {
        if (thousand == 1) {
            printf("mille ");
        } else {
            cent(thousand);
            printf(" mille ");
        }
    }

    if (last_section != 0) {
         cent(last_section);
    }

    free(dec2); // Libérer la mémoire de décomp2
}
int main() {
    int a =179989999;
    printf("%lld",a);
    printf("\n");
    plus_cent(a);
    return 0;
}

