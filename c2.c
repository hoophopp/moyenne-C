#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nom[20];
    char prenom[20];
    int age;
    int moyenne;
} Etudiant;
void afficherLesEtudinat(Etudiant e, n){
    int i ;
    for(i=0; i <= n ; i++){
        printf("\n le nom: %s",e[i].nom);
        printf("\n le prenom: %s",e[i].prenom);
        printf("\n l'age: %d",e[i].age);
        printf("\n la moyenne: %d",e[i].moyenne);
    }
}
float moyenneGeneral(Etudiant e, n){
int i;
float sum;
for(i = 0; i <= n ; i++){
 sum = sum + e[i].moyenne;
}
return sum;
}
int main() {
    printf("We are going to enter student information:\n");
    int i, n;

    do {
        printf("Enter the number of students (do not exceed 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

     Etudiant e[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", e[i].nom);

        printf("Enter the first name of student %d: ", i + 1);
        scanf("%s", e[i].prenom);

        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &e[i].age);

        printf("Enter the average (moyenne) of student %d: ", i + 1);
        scanf("%d", &e[i].moyenne);
    }

    printf("\n--- Students Information ---\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %s %s, Age: %d, Average: %d\n", i + 1, e[i].prenom, e[i].nom, e[i].age, e[i].moyenne);
    }
    afficherLesEtudinat(Etudiant e , n);
    printf("\n la moyenne general est: %f",moyenneGeneral(Etudiant e, n));
    return 0;
}