#include<stdio.h>

int main() 
{
    char sections[] = {'A', 'B', 'C', 'D', 'E'};
    double Marks[5];
    int length=5;
    int option;
    char sectionToUpdate;
    double newAverageMarks;;
    int highestIndex = 0;    
    int lowestIndex = 0;

    for (int i = 0; i < 5; i++) 
    {
        Marks[i] = 0;
    }

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter average marks for section %c: ", sections[i]);
        scanf("%lf", &Marks[i]);
    }

    for(int  i = 0 ; i < length; i++)
    {

        printf("grade management system:\n");
        printf("==============================================================================================================================\n");
        printf("1:update section average marks.\n2:display section with highest average marks.\n3:display section with lowest average marks.\n4:display section with average marks above a certain value.\n5:display all section marks.\n6:exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Enter section to update (A, B, C, D, or E): ");
            scanf(" %c", &sectionToUpdate);
            printf("Enter new average marks for section %c: ", sectionToUpdate);
            scanf("%lf", &newAverageMarks);

            for (int i = 0; i < 5; i++) 
            {
                if (sections[i] == sectionToUpdate) 
                {
                    Marks[i] = newAverageMarks;
                    printf("Average marks for section %c updated to %.2lf\n", sections[i], Marks[i]);
                    break;
                }
            }
        }
        else if (option == 2)
        {
            for (int i = 1; i < 5; i++) 
            {
                if (Marks[i] > Marks[highestIndex]) 
                {
                    highestIndex = i;
                }
            }
            printf("Section with highest average marks is %c with %.2lf marks.\n", sections[highestIndex], Marks[highestIndex]);
        }
        else if (option == 3)
        {
            for (int i = 1; i < 5; i++) 
            {
                if (Marks[i] < Marks[lowestIndex]) 
                {
                    lowestIndex = i;
                }
            }
            printf("Section with lowest average marks is %c with %.2lf marks.\n", sections[lowestIndex], Marks[lowestIndex]);

        }
        else if (option == 4)
        {
            double threshold;
            printf("Enter a threshold for average marks: ");
            scanf("%lf", &threshold);
            printf("Sections with average marks above %.2lf:\n", threshold);
            for (int i = 0; i < 5; i++) 
            {
                if (Marks[i] > threshold) 
                {
                    printf("%c - %.2lf\n", sections[i], Marks[i]);
                }
            }

            printf("All the marks of all the sections:\n");
        }
        else if (option == 5)
        {
             for (int i = 0; i < 5; i++) 
            {
                printf("%c - %.2lf\n", sections[i], Marks[i]);
            }
        }
        else if (option == 6)
        {
            break;
        }
        
        else
        {
            printf("you entered invalid option!\n");
        }
       
    }
    return 0;
}