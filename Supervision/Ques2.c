#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
	char Name[50];
	int Roll_No;
	char Roll_no[50];
	int Chem_Marks;
	int phy_Marks;
	int maths_Marks;
	int Total;
	float Percent;
};

void main(){
	struct student Student[5];
	
	strcpy(Student[0].Name,"Deep");
	Student[0].Roll_No=121;
	Student[0].Chem_Marks=95;
	Student[0].phy_Marks=88;
	Student[0].maths_Marks=90;
	Student[0].Total=Student[0].Chem_Marks+Student[0].maths_Marks+Student[0].phy_Marks;
	Student[0].Percent=(Student[0].Total*100)/300;
	
	strcpy(Student[1].Name,"Roshan");
	Student[1].Roll_No=122;
	Student[1].Chem_Marks=92;
	Student[1].phy_Marks=84;
	Student[1].maths_Marks=80;
	Student[1].Total=Student[1].Chem_Marks+Student[1].maths_Marks+Student[1].phy_Marks;
	Student[1].Percent=(Student[1].Total*100)/300;
	
	strcpy(Student[2].Name,"Shubham");
	Student[2].Roll_No=123;
	Student[2].Chem_Marks=72;
	Student[2].phy_Marks=93;
	Student[2].maths_Marks=87;
	Student[2].Total=Student[2].Chem_Marks+Student[2].maths_Marks+Student[2].phy_Marks;
	Student[2].Percent=(Student[2].Total*100)/300;
	
	strcpy(Student[3].Name,"Satyam");
	Student[3].Roll_No=124;
	Student[3].Chem_Marks=68;
	Student[3].phy_Marks=85;
	Student[3].maths_Marks=96;
	Student[3].Total=Student[3].Chem_Marks+Student[3].maths_Marks+Student[3].phy_Marks;
	Student[3].Percent=(Student[3].Total*100)/300;
	
	strcpy(Student[4].Name,"Ankit");
	Student[4].Roll_No=125;
	Student[4].Chem_Marks=91;
	Student[4].phy_Marks=77;
	Student[4].maths_Marks=89;
	Student[4].Total=Student[4].Chem_Marks+Student[4].maths_Marks+Student[4].phy_Marks;
	Student[4].Percent=(Student[4].Total*100)/300;
	
	int i;
	for(i=0;i<5;i++){
		printf("Enter details of Student %d: \n",i+1);
		printf("Name: %s\n",Student[i].Name);
		printf("Roll No : %d\n",Student[i].Roll_No);
		printf("Chemistry Marks: %d\n",Student[i].Chem_Marks);
		printf("Mathematics Marks: %d\n",Student[i].maths_Marks);
		printf("Physics Marks: %d\n",Student[i].phy_Marks);
		printf("Total Marks: %d/300\n",Student[i].Total);
		printf("Percentage: %.2f\n",Student[i].Percent);
		printf("\n\n");
		
		
		
	}
	
	
	
	getch();
}
