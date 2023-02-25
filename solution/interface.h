typedef struct student 
{
	u8 name [20];
	u8 date_of_birth[10];
	u16 ID;
	u8 address[20];
	u8 phone_number[20];
	u16 GPA;
	u16 *PointerToNextNode;
}student;



void MainMenue_vidDisWelcomeScreen();
void StudentList_vidAddStudent();
void StuentList_vidDeleteStudent ();
void StudentList_vidViewList ();
void StudentList_vidUpdateData ();
void StudentList_vidRankStudent ();
void StudentList_vidUpdateGPA ();


