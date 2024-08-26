#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pass {
    char fname[50];
    char lname[50];
    char fathname[50];
    char mothname[50];
    char address[100];
    char typeaccount[20];
    int date;
    int month;
    int year;
    char adharnum[20];
    char pnumber[15];
    char username[50];
};

void account(void) {
    char password[20];
    int i;
    char ch;
    FILE *fp;
    struct pass u1;

    // Open file to write data of a user
    fp = fopen("username.txt", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Inputs
    system("cls");
    printf("\n\n!!!!!CREATE ACCOUNT!!!!!\n");

    printf("\nFIRST NAME: ");
    scanf("%49s", u1.fname);

    printf("\nLAST NAME: ");
    scanf("%49s", u1.lname);

    printf("\nFATHER'S NAME: ");
    scanf("%49s", u1.fathname);

    printf("\nMOTHER'S NAME: ");
    scanf("%49s", u1.mothname);

    printf("\nADDRESS: ");
    scanf("%99s", u1.address);

    printf("\nACCOUNT TYPE: ");
    scanf("%19s", u1.typeaccount);

    printf("\nDATE OF BIRTH:\n");
    printf("DATE: ");
    scanf("%d", &u1.date);
    printf("MONTH: ");
    scanf("%d", &u1.month);
    printf("YEAR: ");
    scanf("%d", &u1.year);

    printf("\nNID NUMBER: ");
    scanf("%19s", u1.adharnum);

    printf("\nPHONE NUMBER: ");
    scanf("%14s", u1.pnumber);

    printf("\nUSERNAME: ");
    scanf("%49s", u1.username);

    printf("\nPASSWORD: ");
    for (i = 0; i < 19; i++) {
        ch = getchar();
        if (ch != '\n' && ch != EOF) {
            password[i] = ch;
            printf("*");
        } else {
            break;
        }
    }
   // scanf("%20s", password[]);
    password[i] = '\0';
    
    // Save data to file
    fwrite(&u1, sizeof(u1), 1, fp);

    

    printf("\n\nAccount created successfully!\n");


    printf("\n NAME: ", u1.fname,u1.lname);
    printf("\nFATHER'S NAME: ", u1.fathname);
    printf("\nMOTHER'S NAME: ", u1.mothname);
    printf("\nADDRESS: ", u1.address);
    printf("\nACCOUNT TYPE: ", u1.typeaccount);
    printf("\nDATE OF BIRTH:\n", &u1.date,"/", &u1.month,"/", &u1.year);
    printf("\nNID NUMBER: ", u1.adharnum);
    printf("\nPHONE NUMBER: ", u1.pnumber);
    printf("\nUSERNAME: ", u1.username);


// Close file
  fclose(fp);
    // Call any other function if needed, e.g., accountcreated();
}

int main() {
    account();
    return 0;
}
