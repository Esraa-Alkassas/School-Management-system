#include <stdio.h>
#include "types.h"
#include <stdlib.h>
#include "interface.h"

extern student *HeadNode;

void MainMenue_vidDisWelcomeScreen()
{	
	
	printf ("\n\n\n");
	printf ("              **************************************************************\n");
	printf ("              **************************************************************\n");
	printf ("              *********Welcome to our School Administration System!*********\n");
	printf ("              **********This system is conducted by Esraa ElQassas**********\n");
	printf ("              ************Please choose one of the next options*************\n");
	printf ("              **************************************************************\n");
	printf ("              **************************************************************\n");
		
}






void StudentList_vidAddStudent()
{
	u16 b, k;
	student *NewStudent = (student*)malloc (sizeof (student));
	printf ("the student name is: ");
	u8 name [20];                           
	scanf (" %[^\n]%*c",&NewStudent -> name);
	printf ("the student ID number is: ");
	scanf (" %d", &b );
	NewStudent -> ID = b;
	printf ("the student birth of date: ");
	scanf (" %[^\n]%*c", &NewStudent -> date_of_birth);
	printf ("the student adress is: ");
	scanf (" %[^\n]%*c", &NewStudent -> address);
	printf ("the student phone number is: ");
	scanf (" %[^\n]%*c", &NewStudent -> phone_number);
	printf ("The student GPA IS: ");
	scanf (" %d", &k);
	NewStudent -> GPA = k;
	
	NewStudent -> PointerToNextNode = NULL;
	
	if (HeadNode == NULL)
	{
		HeadNode = NewStudent;
	}
	
	else
	{
		student *TempNode =HeadNode;
		while (TempNode -> PointerToNextNode != NULL)
		{
			TempNode = TempNode -> PointerToNextNode;
		}
		TempNode -> PointerToNextNode = NewStudent;
	}
}







void StuentList_vidDeleteStudent ()
{
	u16 z;
	student *CurrentStudent = HeadNode;
	student *PreviousStudent = HeadNode;
	if (HeadNode== NULL)
	{
		printf ("there is no data to delet\n");
	}
	else
	{
		
		printf ("please Enter the student ID number you want to delete: ");
		scanf (" %d", &z);
		
		while ((CurrentStudent -> ID != z) && (CurrentStudent !=NULL))
			{
				PreviousStudent = CurrentStudent;
				CurrentStudent = CurrentStudent -> PointerToNextNode;
			}
			
		if (CurrentStudent == NULL)
		{
			printf ("The entered data doesn't Exsit\n");
		}
		else
		{
			if (z == HeadNode -> ID)
			{
				HeadNode = HeadNode -> PointerToNextNode;
				free (CurrentStudent);
			}
			else
			{
				PreviousStudent -> PointerToNextNode =CurrentStudent -> PointerToNextNode;
				free (CurrentStudent);
			}
			printf ("the entered data has been deleted successfully\n");
		}
		
	}
}








void StudentList_vidViewList ()
{
	student *currentStudent = HeadNode;
	if (HeadNode == NULL)
	{
		printf ("there is no data to display");
	}
	else
	{
		while (currentStudent != NULL)
		{
			printf ("The student name is: %s\n", currentStudent -> name);
			printf ("The student ID number is: %d\n", currentStudent -> ID);
			printf ("the student date of birth is: %s\n", currentStudent -> date_of_birth);
			printf ("the student add is: %s\n", currentStudent -> address);
			printf ("the student phone number is: %s\n", currentStudent -> phone_number);
			printf ("The student GPA is: %d\n", currentStudent -> GPA);
			printf ("\n");
			printf ("**************************************************");
			printf ("\n");
			currentStudent = currentStudent -> PointerToNextNode;
		}
	}
}





void StudentList_vidUpdateData ()
{
	u16 a, b,k;
	student *TempStudent = HeadNode;
	if (HeadNode== NULL)
	{
		printf ("there is no data to edit\n");
	}
	
	else
	{
		printf ("please Enter the student ID number you want to edit its GPA: ");
		scanf (" %d", &a);
		
	
	
	while ((TempStudent != NULL)&& (TempStudent -> ID != a))
	{
		TempStudent = TempStudent -> PointerToNextNode;
	}
	if (TempStudent == NULL)
	{
		printf ("the entered ID doesn't exsit\n");
	}
	else
	{
		printf ("the student new name is: ");
		scanf (" %[^\n]%*c",&TempStudent -> name);
		printf ("the student new id is: ");
		scanf (" %d", &b );
		TempStudent -> ID = b;
		printf ("the student new birth of date: ");
		scanf (" %[^\n]%*c", &TempStudent -> date_of_birth);
		printf ("the student new adress is: ");
		scanf (" %[^\n]%*c", &TempStudent -> address);
		printf ("the student new phone number is: ");
		scanf (" %[^\n]%*c", &TempStudent -> phone_number);
		printf ("The student new GPA IS: ");
		scanf (" %d", &k);
		TempStudent -> GPA = k;
	}
}
}






void StudentList_vidRankStudent ()
{
	
	student *currrentStudent = HeadNode;
	student *NextStudent , TempNode;
	
	if (HeadNode== NULL)
	{
		printf ("there is no data to be ranked\n");
	}
	else
	{
	
	while (currrentStudent -> PointerToNextNode != NULL)
	{
		NextStudent = currrentStudent -> PointerToNextNode;
		while (NextStudent != NULL)
		{
			if ((currrentStudent -> GPA)<(NextStudent -> GPA))
			{
						
						TempNode.ID=NextStudent->ID;
						TempNode.GPA=NextStudent->GPA;
						
							for(u8 i=0;i<20;i++)
							{
								TempNode.name[i]=NextStudent->name[i];
							}
							
							for(u8 i=0;i<20;i++)
							{
								TempNode.phone_number[i]=NextStudent->phone_number[i];
							}

							for(u8 i=0;i<20;i++)
							{
								TempNode.date_of_birth[i]=NextStudent->date_of_birth[i];
							}
							
							for(u8 i=0;i<20;i++)
							{
								TempNode.address[i]=NextStudent->address[i];
							}
							
							
							NextStudent->ID=currrentStudent->ID;
							NextStudent->GPA=currrentStudent->GPA;
							for(u8 i=0;i<20;i++)
							{
								NextStudent->name[i]=currrentStudent->name[i];
							}
							
							for(u8 i=0;i<20;i++)
							{
								NextStudent->phone_number[i]=currrentStudent->phone_number[i];
							}

							for(u8 i=0;i<20;i++)
							{
								NextStudent->date_of_birth[i]=currrentStudent->date_of_birth[i];
							}
							
							for(u8 i=0;i<20;i++)
							{
								NextStudent->address[i]=currrentStudent->address[i];
							}
							currrentStudent->ID=TempNode.ID;
							currrentStudent->GPA=TempNode.GPA;
							for(u8 i=0;i<20;i++)
							{
								currrentStudent->name[i]=TempNode.name[i];
							}
							
							for(u8 i=0;i<20;i++)
								
							{
								currrentStudent->phone_number[i]=TempNode.phone_number[i];
							}

							for(u8 i=0;i<20;i++)
							{
								currrentStudent->date_of_birth[i]=TempNode.date_of_birth[i];
							}
							
							for(u8 i=0;i<20;i++)
							{
								currrentStudent->address[i]=TempNode.address[i];
							}
							
							printf("the student has ranked successfully\n");
							
						
			}
			NextStudent = NextStudent -> PointerToNextNode;
		}
		currrentStudent = currrentStudent -> PointerToNextNode;
	}
	
	
	}
	
}







void StudentList_vidUpdateGPA ()
{
	u16 a,k;
	student *TempStudent = HeadNode;
	if (HeadNode== NULL)
	{
		printf ("there is no data to edit\n");
	}
	
	else
	{
		printf ("please Enter the student ID number you want to edit its GPA: ");
		scanf (" %d", &a);
		
	
	
	while ((TempStudent != NULL)&& (TempStudent -> ID != a))
	{
		TempStudent = TempStudent -> PointerToNextNode;
	}
	if (TempStudent == NULL)
	{
		printf ("the entered ID doesn't exsit\n");
	}
	else
	{
		printf ("The student new GPA IS: ");
		scanf (" %d", &k);
		TempStudent -> GPA = k;
	}
}
}
