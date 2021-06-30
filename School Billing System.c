/*
####################################################
#####     WElcome TO School Billing System     #####
####################################################
authors:

Hassan Elshazly Eida 
amr mohamed aboalsaoud
darwish mohamed darwish
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

// -------------------------------  Structers Section  ----------------------
// Student Section {Struct}
struct student
{
    int id;
    char First_Name[100];
    char Last_Name[100];
    char gender[6];
    float grade;
};
// Teacher Section {Struct}
struct tech
{
    int id;
    char First_Name[100];
    char Last_Name[100];
    char CourseName[20];
};
// Date Section {Struct}
struct date
{
    int d, m, y;
};
//------------------------------   Global Variables --------------------------
int first=0,st_capacity=0;
struct student stud[MAX];
struct tech tea;
int cases2;
int p,n;
// -------------------------------  Main Section -----------------------------
void start();
int main()
{
    printf(" \t ***** \n");
    printf("\t   ______ \n");
    printf("\t  |                                          |\n");
    printf("\t  |       ~ Welcome to our project ~       |\n");
    printf("\t  |                                          |\n");
    printf("\t  |______|\n");
    printf("\n");
    start();

    return 0;
}
void start()
{
    int cases;
    printf("\n\tPLEASE ENTER ACCOUNT TYPE");
    printf("\n\t 1- Student");
    printf("\n\t 2- Teachers");
    printf("\n\t 3- Exit");
    printf("\nYour input \t ");
    scanf("%d", &cases);
    switch (cases)
    {
        case 1://----------Student Section
        {
            /*
                        #---- Features for student ------------
            */

            printf("\n\t1- Add Students");
            printf("\n\t2- Display All Students");
            printf("\n\t3- Search For  Student");
            printf("\n\t4- Main Program ");
            printf("\n\t5- Exit ");
            printf("\nYour input ");
            scanf("%d", &cases2);
            printf("\n");
            switch (cases2)
            {
                case 1:
                {
                    /*
                          #---- Add  record -------------------------
                    */
                    //Variable (Add Section)
                    int i,enough;
                    first=1;

                    //------
                    for (i = 0; i < MAX; i++)
                    {
                        st_capacity++;
                        printf("Enter Student ID\t");
                        scanf("%d", &stud[i].id);
                        printf("Enter First name\t");
                        scanf("%s", &stud[i].First_Name);
                        printf("Enter Last name\t");
                        scanf("%s", &stud[i].Last_Name);
                        printf("Enter Student Gender\t");
                        scanf("%s", &stud[i].gender);
                        printf("Enter Student Grade\t");
                        scanf("%f", &stud[i].grade);
                        printf("enter last class cash:");
                        scanf("%d",&p);
                        int l=p;
                        int m=(p*15)/100;

                        n=l+m;
                        printf("\t   ______ \n");
                        printf("\t  |                                          |\n");
                        printf("\t  |     Add more students --> [1]            |\n");
                        printf("\t  |     Main program  -->[2]                 |\n");
                        printf("\t  |______|\n");
                        printf("Your input \t");
                        scanf("%d", &enough);
                        if (enough==2) {
                            start();
                        }
                    }

                }//END Case {1}
                case 2:
                {
                    /*
                          #---- Display  record -------------------------
                    */
                    //Variable (Display Section)
                    int st_number=1,i;
                    //------
                    if (first==0){
                        printf("\t  Please Add student before Display \n");
                        start();
                    }
                    else {
                        printf("\n   ______ \n");
                        for (i = 0; i < st_capacity; i++)
                        {
                            printf("\nStudent Code {%d}",st_number++);
                            printf("\n\tStudent ID:  [ %d ]",stud[i].id);
                            printf("\n\tFirst Name: [ %s ]",stud[i].First_Name);
                            printf("\n\tLast Name:   [ %s ] ",stud[i].Last_Name);
                            printf("\n\tStudent Gender:   [ %s ]",stud[i].gender);
                            printf("\n\tEnter Student Grade:  [ %.2f ]",stud[i].grade);
                            printf("\n\tyour fees for this class: [ %d ]",n);

                        }
                        printf("\n   ______ \n");
                        start();
                    }

                }//END Case {2}
                case 3:
                {
                    /*
                          #---- Search For  record -------------------------
                    */
                    //Variable (Search Section)
                    int Search_Query,i,id_search,found=0;
                    char name_search[100],gender_search[100];
                    //------
                    if (first==0){
                        printf("\t  Please Add student before search \n");
                        start();
                    }
                    else {
                        printf("\t   ______ \n");
                        printf("\t  |                                             |\n");
                        printf("\t  |           Search By ID --> [1]              |\n");
                        printf("\t  |           Search By First Name  --> [2]     |\n");
                        printf("\t  |           Search By Gender  --> [3]         |\n");
                        printf("\t  |_____|\n");
                        printf("Your input \t");
                        scanf("%d", &Search_Query);
                        if (Search_Query==1){
                            printf("\t   ______ \n");
                            printf("\t                Search for ID...                \n");
                            printf("\t   ______ \n");
                            printf("Student ID.. \t");
                            scanf("%d", &id_search);
                            for (i = 0; i < st_capacity; i++)
                            {
                                if (stud[i].id==id_search)
                                {
                                    printf("Holla !! We found these info ");
                                    printf("\n\tStudent ID:  [ %d ]",stud[i].id);
                                    printf("\n\tFirst Name: [ %s ]",stud[i].First_Name);
                                    printf("\n\tLast Name:   [ %s ] ",stud[i].Last_Name);
                                    printf("\n\tStudent Gender:   [ %s ]",stud[i].gender);
                                    printf("\n\tEnter Student Grade:  [ %.2f ]",stud[i].grade);
                                    found=1;
                                }
                            }
                            if (found=0){
                                printf("Sorry We cannot find This ID   ");
                            }
                            start();
                        }
                        else if  (Search_Query==2){
                            printf("\t   ______ \n");
                            printf("\t                   Search for First Name...       \n");
                            printf("\t   ______ \n");
                            printf("Student First Name \t");
                            scanf( "%s" , &name_search );
                            for (i = 0; i < st_capacity; i++)
                            {
                                if (stud[i].First_Name==name_search)
                                {
                                    printf("Holla !! We found these info ");
                                    printf("\n\tStudent ID:  [ %d ]",stud[i].id);
                                    printf("\n\tFirst Name: [ %s ]",stud[i].First_Name);
                                    printf("\n\tLast Name:   [ %s ] ",stud[i].Last_Name);
                                    printf("\n\tStudent Gender:   [ %s ]",stud[i].gender);
                                    printf("\n\tEnter Student Grade:  [ %.2f ]",stud[i].grade);
                                }
                                else {
                                    printf("Sorry We cannot find this Name  ");
                                }
                            }
                            start();
                        }
                        else{
                            printf("\t   ______ \n");
                            printf("\t               Search for Gender...             \n");
                            printf("\t   ______ \n");
                            printf("Student Gender.. \t");
                            scanf( "%s" , &gender_search );
                            for (i = 0; i < st_capacity; i++)
                            {
                                if (stud[i].gender==gender_search)
                                {
                                    printf("Holla !! We found these info ");
                                    printf("\n\tStudent ID:  [ %d ]",stud[i].id);
                                    printf("\n\tFirst Name: [ %s ]",stud[i].First_Name);
                                    printf("\n\tLast Name:   [ %s ] ",stud[i].Last_Name);
                                    printf("\n\tStudent Gender:   [ %s ]",stud[i].gender);
                                    printf("\n\tEnter Student Grade:  [ %.2f ]",stud[i].grade);
                                }
                                else {
                                    printf("Sorry We cannot find this type of search  ");
                                }
                            }
                            start();
                        }
                    }

                }//END Case {3}
                case 4:
                {
                    /*
                          #---- To Main  ------------
                    */
                    start();
                }//END Case {4}
                case 5:
                {
                    /*
                          #----Bye Bye xD  -----------
                    */
                    exit(0);
                }//END Case {5}
            }//End Switch
        }//End Student Section
        case 2://----------Teacher Section
        {
            int G;
            int z;
            int back;
            int hourss;
            float overtime;
            float x;
            int i;
            FILE *fPtr;
            FILE *fPtrr;
            struct tech tea[MAX];
            printf("\t1.teacher record\n");
            printf("\t2.exit\n");
            scanf("%d", &G);
            if(G==1) {
                printf("\t1. Add Teachers records\n");
                printf("\t2. Show Teachers records\n");
                scanf("%d", &z);
                if (z == 1) {
                    fPtr = fopen("test2.txt", "w");
                    if (fPtr == NULL) {
                        /* File not created hence exit */
                        printf("Unable to create file.\n");
                        exit(EXIT_FAILURE);
                    }
                    for (i = 0; i < MAX; i++) {
                        printf("Enter Your ID ");
                        scanf("%d", &tea[MAX].id);
                        printf("Enter Your First Name ");
                        scanf("%s", &tea[MAX].First_Name);
                        printf("Enter Your Second Name ");
                        scanf("%s", &tea[MAX].Last_Name);
                        printf("Enter Your Course Name ");
                        scanf("%s", &tea[MAX].CourseName);
                        printf("Enter Your worked hours ");
                        scanf("%d", &hourss);
                        printf("Enter over time ");
                        scanf("%f", &overtime);
                        x = ((hourss * 100) + (overtime * 150));
                        fprintf(fPtr,
                                "Teacher ID [ %d ]\nName is [ %s %s ]\nCourse Name: [ %s ]\nTeacher Salary: [ %.1f ]\n",
                                tea[MAX].id, tea[MAX].First_Name, tea[MAX].Last_Name, tea[MAX].CourseName, x);

                        printf("\t1. Add more Teachers records\n");
                        printf("\t2. Main Page\n");
                        scanf("%d", &back);
                        if (back == 2) {
                            start();
                        }
                    }
                    fclose(fPtr);
                }
                fPtrr = fopen("test2.txt", "r"); // open file to read//
                if (fPtrr == NULL) {
                    printf("\nError ");
                    start();
                }
                fread(&tea[MAX], sizeof(struct tech), 100,fPtrr); //read file content//
                printf("\n___-{Teachers records}-___\n");
                printf("Teacher ID [ %d ] \n Teacher Name is [ %s %s ] \n Course Name: [ %s ] \n Teacher Salary: [ %.1f ] \n--------------------------------\n",
                       tea[MAX].id, tea[MAX].First_Name, tea[MAX].Last_Name, tea[MAX].CourseName, x); // print file content//
                fclose(fPtrr);

            }
        }
        case 3://----------exit Section
        {
            exit(0);
        }
    }