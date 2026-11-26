// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

{
    int roll, marks;
    char name[30];

    printf("===== STUDENT MANAGEMENT SYSTEM =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%d", &marks);

    printf("\n===== STUDENT DETAILS =====\n");

    printf("Roll Number: %d\n", roll);
    printf("Student Name: %s\n", name);
    printf("Marks: %d\n", marks);

    if(marks >= 33)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}
