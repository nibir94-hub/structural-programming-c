#include <stdio.h>

extern int scanf(const char *format, ...);

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Organisation {
    char name[50];
    char location[50];
    int total;
    struct Employee emp[100];
};

int main() {
    struct Organisation org;
    int choice, i;
    float sum;

    printf("Enter organisation name: ");
    scanf(" %[^\n]", org.name);
    printf("Enter location: ");
    scanf(" %[^\n]", org.location);
    org.total = 0;

    do {
        printf("\n1.Add employee  2.Show all  3.Total salary  0.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("ID: ");
            scanf("%d", &org.emp[org.total].id);
            printf("Name: ");
            scanf(" %[^\n]", org.emp[org.total].name);
            printf("Salary: ");
            scanf("%f", &org.emp[org.total].salary);
            org.total++;
        }
        else if (choice == 2) {
            printf("\n%s, %s (%d employees)\n", org.name, org.location, org.total);
            for (i = 0; i < org.total; i++)
                printf("%d  %s  %.2f\n", org.emp[i].id, org.emp[i].name, org.emp[i].salary);
        }
        else if (choice == 3) {
            sum = 0;
            for (i = 0; i < org.total; i++)
                sum = sum + org.emp[i].salary;
            printf("Total salary = %.2f\n", sum);
        }
    } while (choice != 0);

    return 0;
}