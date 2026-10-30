
#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure for employee information
struct Employee {
    int id;
    char name[50];
    int age;
    char designation[50];
    float salary;
};

// Structure for organisation information
struct Organisation {
    char name[100];
    char location[100];
    char type[50];
    int totalEmployees;
    struct Employee employees[MAX];
};

int main() {

    struct Organisation org;
    int choice, i, searchID;
    float totalSalary = 0, minimumSalary;

    // Organisation information
    printf("Enter Organisation Name: ");
    fgets(org.name, sizeof(org.name), stdin);
    org.name[strcspn(org.name, "\n")] = '\0';

    printf("Enter Location: ");
    fgets(org.location, sizeof(org.location), stdin);
    org.location[strcspn(org.location, "\n")] = '\0';

    printf("Enter Organisation Type: ");
    fgets(org.type, sizeof(org.type), stdin);
    org.type[strcspn(org.type, "\n")] = '\0';

    org.totalEmployees = 0;

    do {
        printf("\n========== ORGANISATION MENU ==========\n");
        printf("1. Add Employee\n");
        printf("2. Show Organisation Information\n");
        printf("3. Show All Employees\n");
        printf("4. Search Employee by ID\n");
        printf("5. Show Total Employees\n");
        printf("6. Calculate Total Salary\n");
        printf("7. Show Employees Above a Salary\n");
        printf("8. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (org.totalEmployees >= MAX) {
                    printf("Employee limit reached!\n");
                    break;
                }

                i = org.totalEmployees;

                printf("Enter Employee ID: ");
                scanf("%d", &org.employees[i].id);

                printf("Enter Employee Name: ");
                scanf(" %49[^\n]", org.employees[i].name);

                printf("Enter Age: ");
                scanf("%d", &org.employees[i].age);

                printf("Enter Designation: ");
                scanf(" %49[^\n]", org.employees[i].designation);

                printf("Enter Salary: ");
                scanf("%f", &org.employees[i].salary);

                org.totalEmployees++;

                printf("\nEmployee Added Successfully!\n");
                break;

            case 2:
                printf("\n===== ORGANISATION INFORMATION =====\n");
                printf("Name: %s\n", org.name);
                printf("Location: %s\n", org.location);
                printf("Type: %s\n", org.type);
                printf("Total Employees: %d\n", org.totalEmployees);
                break;

            case 3:
                if (org.totalEmployees == 0) {
                    printf("No employees found!\n");
                } else {
                    printf("\n===== EMPLOYEE LIST =====\n");

                    for (i = 0; i < org.totalEmployees; i++) {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID: %d\n", org.employees[i].id);
                        printf("Name: %s\n", org.employees[i].name);
                        printf("Age: %d\n", org.employees[i].age);
                        printf("Designation: %s\n",
                               org.employees[i].designation);
                        printf("Salary: %.2f\n",
                               org.employees[i].salary);
                    }
                }
                break;

            case 4:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchID);

                for (i = 0; i < org.totalEmployees; i++) {
                    if (org.employees[i].id == searchID) {
                        printf("\nEmployee Found!\n");
                        printf("Name: %s\n", org.employees[i].name);
                        printf("Age: %d\n", org.employees[i].age);
                        printf("Designation: %s\n",
                               org.employees[i].designation);
                        printf("Salary: %.2f\n",
                               org.employees[i].salary);
                        break;
                    }
                }

                if (i == org.totalEmployees) {
                    printf("Employee not found!\n");
                }
                break;

            case 5:
                printf("Total Employees: %d\n", org.totalEmployees);
                break;

            case 6:
                totalSalary = 0;

                for (i = 0; i < org.totalEmployees; i++) {
                    totalSalary += org.employees[i].salary;
                }

                printf("Total Salary: %.2f\n", totalSalary);
                break;

            case 7:
                printf("Enter Minimum Salary: ");
                scanf("%f", &minimumSalary);

                printf("\nEmployees Above %.2f:\n", minimumSalary);

                for (i = 0; i < org.totalEmployees; i++) {
                    if (org.employees[i].salary > minimumSalary) {
                        printf("%s - %.2f\n",
                               org.employees[i].name,
                               org.employees[i].salary);
                    }
                }
                break;

            case 8:
                printf("Thank you for using Organisation System!\n");
                break;

            default:
                printf("Invalid Choice! Try Again.\n");
        }

    } while (choice != 8);

    return 0;
}
