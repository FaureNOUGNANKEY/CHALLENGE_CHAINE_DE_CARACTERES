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
        "Quelle fonction compare deux chaines de caractéres?",
        "comment declare t'on un tableau de 50 caractères ?",
        "Quelle est la bonne façon de déclarer une chaîne de caractères en C ?",
        "Que contient réellement la chaîne 'Salut' en mémoire ?",
        "Quelle fonction permet de copier une chaîne dans une autre ?",
        "Que fait la fonction strlen() ?",
        "Quelle est la bonne façon de lire une chaîne depuis l'entrée standard ?",
        "Que fait strcmp('abc', 'abd') ?",
        "Quelle est la bonne façon de concaténer deux chaînes ?",
        "Que faut-il toujours vérifier avant d’utiliser strcpy() ?",
    };
    char choix [NB_QUESTIONS][4][MAX_LEN] = {
        {"A) scanf()","B) gets()","C) getchar()","D) printf()"},
        {"A) compare()","B) strcomp()","C) strcmp()","D) equal()"},
        {"A) char nom[50]","B) string nom[50])","C) char nom(50)","D) text nom[50]"},
        {"A. char nom[] = \"Bonjour\";" , "B. string nom = \"Bonjour\";" , "C. char nom = \"Bonjour\";" , "D. char* nom[] = \"Bonjour\";" },
        {" A. 5 caractères"," B. 6 caractères (avec le \0)"," C. 7 caractères"," D. 4 caractères"},
        {"A. strcpy()","B. strcat()","C. strlen()","D. strcmp()"},
        {"A. Elle copie une chaîne","B. Elle concatène deux chaînes","C. Elle retourne la longueur sans le \0","D. Elle compare deux chaînes"},
        {"A. scanf(\"%s\", chaine);" , "B. gets(chaine);" , "C. fgets(chaine, taille, stdin); " , "D. Toutes les réponses"},
        {"A. Retourne 0","B. Retourne un nombre négatif","C. Retourne un nombre positif","D. Retourne une erreur"},
        {"A. strcat(chaine1, chaine2);","B. chaine1 + chaine2;","C. append(chaine1, chaine2);","D. join(chaine1, chaine2);"},
        {"A. Que la chaîne source est vide","B. Que la chaîne destination est assez grande","C. Que les chaînes sont égales","D. Que la chaîne source est allouée dynamiquement"}
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
                puts("Correct au 2 ème éssai! +0.5 point\n");
            }else{
                printf ("Incorrect toujours ! la bonne reponse est : %s. 0 point accordée\n",reponse_correcte[i]);
            }
        }
        puts("\n");
    }
    printf("=== Résultat final ===\n");
    printf("Score : %.2f / %d\n", score, NB_QUESTIONS);

    if (score == NB_QUESTIONS)
        printf("🎉 Parfait ! Tu maîtrises les chaînes !\n");
    else if (score >= NB_QUESTIONS * 0.7)
        printf("👍 Très bon travail !\n");
    else
        printf("📘 Continue à t'entraîner, tu progresses !\n");
    return 0;
}


    /* ✅❌🛑
    1️⃣ Quelle est la bonne façon de déclarer une chaîne de caractères en C ?
    ✅ Bonne réponse : A
    2️⃣ Que contient réellement la chaîne "Salut" en mémoire ?
    ✅ Bonne réponse : B
    3   ️⃣ Quelle fonction permet de copier une chaîne dans une autre ?
✅ Bonne réponse : A
4️⃣ Que fait la fonction strlen() ?
✅ Bonne réponse : C
5️⃣ Quelle est la bonne façon de lire une chaîne depuis l'entrée standard ?
✅ Bonne réponse : D (mais ⚠️ gets() est déconseillée car elle est dangereuse)

6️⃣ Que fait strcmp("abc", "abd") ?
✅ Bonne réponse : B (car "abc" < "abd" dans l’ordre ASCII)

7️⃣ Quelle est la bonne façon de concaténer deux chaînes ?
✅ Bonne réponse : A

8️⃣ Que faut-il toujours vérifier avant d’utiliser strcpy() ?
✅ Bonne réponse : B

Souhaites-tu que je t’en prépare d’autres sur le


/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTIONS 7
#define MAX_LEN 100

Fonction pour convertir une chaîne en majuscules
int i = 0;
void to_upper(char *str) {
    for (i = 0; str[i]; i++)
    {
        str[i] = toupper(str[i]);
    }

}

int main() {
    char questions[MAX_QUESTIONS][MAX_LEN] = {
        "Quelle est la capitale du Togo ?",
        "Quel langage utilise strcmp() ?",
        "Combien de bits dans un octet ?",
        "Quel est le symbole chimique de l'eau ?",
        "Quel est le résultat de 2 + 2 * 2 ?",
        "Quel continent est le plus grand ?",
        "Quel est le langage du web côté client ?"
    };

    char choices[MAX_QUESTIONS][4][MAX_LEN] = {
        {"A. Lome", "B. Kara", "C. Sokodé", "D. Dapaong"},
        {"A. Python", "B. C", "C. Java", "D. HTML"},
        {"A. 4", "B. 8", "C. 16", "D. 32"},
        {"A. HO", "B. H2O", "C. OH", "D. O2"},
        {"A. 6", "B. 8", "C. 10", "D. 12"},
        {"A. Afrique", "B. Asie", "C. Europe", "D. Amérique"},
        {"A. JavaScript", "B. PHP", "C. Python", "D. SQL"}
    };

    char correct[MAX_QUESTIONS][MAX_LEN] = {
        "A", "B", "B", "B", "A", "B", "A"
    };

    char hints[MAX_QUESTIONS][MAX_LEN] = {
        "Indice : C'est aussi la plus grande ville.",
        "Indice : Ce langage est compilé.",
        "Indice : C'est une puissance de 2.",
        "Indice : Deux atomes d'hydrogène.",
        "Indice : Priorité aux multiplications.",
        "Indice : Il contient la Chine et l'Inde.",
        "Indice : Il s'exécute dans le navigateur."
    };

    char answer[MAX_LEN];
    float score = 0;

    printf("=== Quiz sur les chaînes en C ===\n\n");
    int j = 0;
    for ( i = 0; i < MAX_QUESTIONS; i++) {
        printf("Q%d: %s\n", i + 1, questions[i]);
        for ( j = 0; j < 4; j++) {
            puts(choices[i][j]);
        }

        printf("%s\n", hints[i]);
        printf("Votre réponse (A/B/C/D) : ");
        gets(answer);
        to_upper(answer);

        if (strcmp(answer, correct[i]) == 0) {
            printf("✅ Bonne réponse !\n");
            score += 1;
        } else if (strcmp(answer, "A") == 0 || strcmp(answer, "B") == 0 ||
                   strcmp(answer, "C") == 0 || strcmp(answer, "D") == 0) {
            printf("❌ Mauvaise réponse. Demi-point accordé pour l'effort.\n");
            score += 0.5;
        } else {
            printf("⚠️ Réponse invalide. Aucun point.\n");
        }

        printf("\n");
    }



    return 0;
}*/
