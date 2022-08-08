#include <stdio.h>
struct student {
    char Name[256];
    float marks;
} s[6];

int main() {
    int i, n, j, highest = 0;

    // storing information
    for (i = 0; i < 6; ++i) {
        printf("\nCandidate No. %d,\n", i + 1);
        printf("Enter candidate name, and score:\n ");
        scanf("%s%f", s[i].Name, &s[i].marks);
        if(s[i].marks > s[highest].marks){ //Get the highest score
            highest = i;
			}
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 6; ++i) {
        printf("Candidate No. %d: ", i + 1);
        puts(s[i].Name);
        printf("Marks: %f", s[i].marks);
        printf("\n");
    }
    //Iterate the below loop to print the candidate name who has the highest score 
	for (j = 0; j < 6; j++)
	{
	  if (s[j].marks == s[highest].marks) //Finally checking the highest score here
	  {
	    printf ("Winner: %s %f\n", s[j].Name, s[j].marks);
	  }
	}
    return 0;
}
