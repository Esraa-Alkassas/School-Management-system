#include <stdio.h>
#include "types.h"
#include <stdlib.h>
#include "interface.h"




student *HeadNode = NULL;


void main (void)
{
	u16 x;
	
	MainMenue_vidDisWelcomeScreen();
	
	
	while (1)
	{
	printf ("\n\n\n");
	
	printf ("option number (1) to add new Student, please Enter 1\n");
	printf ("option number (2) to delete a Student, please Enter 2\n");
	printf ("option number (3) to get the Students list, please Enter 3\n");
	printf ("option number (4) to edit student info, please Enter 4\n");
	printf ("option number (5) to rank all the students, please Enter 5\n");
	printf ("option number (6) to edit student GPA, please Enter 6\n");
	printf ("option number (7) to Exit, please Enter 7\n");
	
	
	scanf (" %d", &x);
		
		switch (x)
		{
			case 1 :
				StudentList_vidAddStudent();
				break;
				
			case 2 :
				StuentList_vidDeleteStudent ();
				break;
				
			case 3 :
				StudentList_vidViewList ();
				break;
				
			case 4 :
				StudentList_vidUpdateData ();
				break;
				
			case 5 :
				StudentList_vidRankStudent ();
				break;
				
			case 6 :
				StudentList_vidUpdateGPA ();
				break;
				
			case 7 :
				exit (0);
				break;
				
			default :
				//Do Nothing
				break;
		}
	}
}