#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i = 0; // To keep track of the number of students

// Structure to store student information
struct sinfo {
    char first_name[50];
    char last_name[50];
    int roll_no;
    float cgpa;
} st[55];

// Function to add a student
void add_student() {
    printf("Add the student details\n");
    printf("Enter first name: \n");
    scanf("%s", st[i].first_name);
    printf("Enter last name: \n");
    scanf("%s", st[i].last_name);
    printf("Enter roll no.:\n ");
    scanf("%d", &st[i].roll_no);
    printf("Enter CGPA :\n");
    scanf("%f", &st[i].cgpa);
    i++;
}

// Function to find a student by roll no.
void find_rollno() {
    int r;
    printf("Enter the roll no. of the student\n");
    scanf("%d", &r);
    for (int j = 0; j < i; j++) {
        if (r == st[j].roll_no) {
            printf("The student details are:\n");
            printf("First name: %s\n", st[j].first_name);
            printf("Last name: %s\n", st[j].last_name);
            printf("Roll no.: %d\n", st[j].roll_no);
            printf("CGPA: %f\n", st[j].cgpa);
            return;
        }
    }
    printf("The roll no. not found\n");
}

// Function to find a student by first name
void find_name() {
    char n[50];
    printf("Enter the first name of the student: ");
    scanf("%s", n);
    int found = 0;
    for (int j = 0; j < i; j++) {
        if (strcmp(st[j].first_name, n) == 0) {
            printf("The student details are:\n");
            printf("First name: %s\n", st[j].first_name);
            printf("Last name: %s\n", st[j].last_name);
            printf("Roll no.: %d\n", st[j].roll_no);
            printf("CGPA: %f\n", st[j].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("The first name was not found\n");
    }
}

// Function to print the total number of students
void tot_st() {
    printf("The total number of students is %d\n", i);
    printf("You can have a maximum of 50 students\n");
    printf("You can add %d more students\n", 50 - i);
}

// Function to delete a student by roll no.
void del_st() {
    int a;
    printf("Enter the roll no. you want to delete\n");
    scanf("%d", &a);
    for (int j = 0; j < i; j++) {
        if (a == st[j].roll_no) {
            for (int k = j; k < i - 1; k++) {
                st[k] = st[k + 1];
            }
            i--;
            printf("The roll no. is removed successfully\n");
            return;
        }
    }
    printf("The roll no. not found\n");
}

// Function to update student data
void upd_st() {
    printf("Enter the roll no. to update the entry\n");
    int x;
    scanf("%d", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll_no == x) {
            printf("1. First name\n");
            printf("2. Last name\n");
            printf("3. Roll number\n");
            printf("4. CGPA\n");
            int z;
            scanf("%d", &z);
            switch (z) {
                case 1:
                    printf("Enter the new first name: \n");
                    scanf("%s", st[j].first_name);
                    break;
                case 2:
                    printf("Enter the new last name:\n");
                    scanf("%s", st[j].last_name);
                    break;
                case 3:
                    printf("Enter the new roll no. of the student: \n");
                    scanf("%d", &st[j].roll_no);
                    break;
                case 4:
                    printf("Enter the new CGPA: \n");
                    scanf("%f", &st[j].cgpa);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }
            printf("Updated successfully\n");
            return;
        }
    }
    printf("Roll no. not found\n");
}

// Driver code
int main() {
    int choice;
    while (1) {
        printf("The task that you want to perform\n");
        printf("1. Add the student details:\n");
        printf("2. Find the student by roll no.:\n");
        printf("3. Find the student by first name:\n");
        printf("4. Find the total number of students:\n");
        printf("5. Delete the student details by roll no.:\n");
        printf("6. Update the student's details by roll no.:\n");
        printf("7. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                find_rollno();
                break;
            case 3:
                find_name();
                break;
            case 4:
                tot_st();
                break;
            case 5:
                del_st();
                break;
            case 6:
                upd_st();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}