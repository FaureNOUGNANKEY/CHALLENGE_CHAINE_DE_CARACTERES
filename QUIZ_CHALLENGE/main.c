#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define NB_QUESTIONS 11
#define MAX_LEN 100

int main()
{
    char questions [NB_QUESTIONS][MAX_LEN] ={
        "Quelle fonction permet de lire une chaine avec espaces ?",
        "Quelle fonction compare deux chaines de caract�res?",
        "comment declare t'on un tableau de 50 caract�res ?",
        "Quelle est la bonne fa�on de d�clarer une cha�ne de caract�res en C ?",
        "Que contient r�ellement la cha�ne 'Salut' en m�moire ?",
        "Quelle fonction permet de copier une cha�ne dans une autre ?",
        "Que fait la fonction strlen() ?",
        "Quelle est la bonne fa�on de lire une cha�ne depuis l'entr�e standard ?",
        "Que fait strcmp('abc', 'abd') ?",
        "Quelle est la bonne fa�on de concat�ner deux cha�nes ?",
        "Que faut-il toujours v�rifier avant d�utiliser strcpy() ?",
    };
    char choix [NB_QUESTIONS][4][MAX_LEN] = {
        {"A) scanf()","B) gets()","C) getchar()","D) printf()"},
        {"A) compare()","B) strcomp()","C) strcmp()","D) equal()"},
        {"A) char nom[50]","B) string nom[50])","C) char nom(50)","D) text nom[50]"},
        {"A. char nom[] = \"Bonjour\";" , "B. string nom = \"Bonjour\";" , "C. char nom = \"Bonjour\";" , "D. char* nom[] = \"Bonjour\";" },
        {" A. 5 caract�res"," B. 6 caract�res (avec le \0)"," C. 7 caract�res"," D. 4 caract�res"},
        {"A. strcpy()","B. strcat()","C. strlen()","D. strcmp()"},
        {"A. Elle copie une cha�ne","B. Elle concat�ne deux cha�nes","C. Elle retourne la longueur sans le \0","D. Elle compare deux cha�nes"},
        {"A. scanf(\"%s\", chaine);" , "B. gets(chaine);" , "C. fgets(chaine, taille, stdin); " , "D. Toutes les r�ponses"},
        {"A. Retourne 0","B. Retourne un nombre n�gatif","C. Retourne un nombre positif","D. Retourne une erreur"},
        {"A. strcat(chaine1, chaine2);","B. chaine1 + chaine2;","C. append(chaine1, chaine2);","D. join(chaine1, chaine2);"},
        {"A. Que la cha�ne source est vide","B. Que la cha�ne destination est assez grande","C. Que les cha�nes sont �gales","D. Que la cha�ne source est allou�e dynamiquement"}
    };

    char hint [NB_QUESTIONS][MAX_LEN] = {
    };
    char reponse_correcte [NB_QUESTIONS][MAX_LEN] = {
        "B","C","A","A","B","A","C","D","B","A","B"
    };
    char reponse [MAX_LEN];
    float score = 0;

    printf ("=== QUIZ CHALLENGE - CHAINE DE CARARTERE C ===\n");
    int i,j = 0;
    for (i=0;i< NB_QUESTIONS;i++)
    {
        printf ("Question %d/%d : %s \n",i+1,NB_QUESTIONS,questions[i]);
        for (j=0;j<4;j++)
        {
            puts (choix[i][j]);
        }
        puts ("Entrer votre choix ( A, B, C ou D) :\n");
        gets (reponse);
        reponse[0] = toupper(reponse[0]);
        if (strcmp(reponse_correcte[i],reponse)== 0){
            puts("Excellent! +1 point\n");
            score += 1;
        }else{
            printf ("Incorrect ! Hint: %s\n",hint[i]);
            puts ("Entrer votre choix ( A, B, C ou D) :\n");
            gets (reponse);
            reponse[0] = toupper(reponse[0]);
            if (strcmp(reponse_correcte[i],reponse)== 0){
                puts("Correct au 2 �me �ssai! +0.5 point\n");
            }else{
                printf ("Incorrect toujours ! la bonne reponse est : %s. 0 point accord�e\n",reponse_correcte[i]);
            }
        }
        puts("\n");
    }
    printf("=== R�sultat final ===\n");
    printf("Score : %.2f / %d\n", score, NB_QUESTIONS);

    if (score == NB_QUESTIONS)
        printf("Parfait ! Tu ma�trises les cha�nes !\n");
    else if (score >= NB_QUESTIONS * 0.7)
        printf("Tr�s bon travail !\n");
    else
        printf("Continue � t'entra�ner, tu progresses !\n");
    return 0;
}



