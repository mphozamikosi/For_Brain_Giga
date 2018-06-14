//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Unit2.cpp"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	cmbInstructors->Items->Clear();
	cmbInstructors->Items->Text=("All Instructors");


	DMod->ADOLearnerClients->Close();

	DMod->ADOLearnerClients->CommandText = "Select * from LearnerClients";
	dbgrdAll->DataSource = DMod->dataSrcLearn;

	DMod->ADOLearnerClients->Open();



	DMod->ADOInstructors->Close();
	DMod->ADOInstructors->CommandText = "Select * from Instructors";
	DMod->ADOInstructors->Open();
	DMod->ADOInstructors->First();
	AnsiString name;
	while(!DMod->ADOInstructors->Eof)
	{

	  name =DMod->ADOInstructors->FieldByName("InstructorName")->AsAnsiString;
	  cmbInstructors->Items->Add(name);
	  DMod->ADOInstructors->Next();

	}


   dbgrd2->DataSource=DMod->dataSrcLearn;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cmbInstructorsChange(TObject *Sender)
{
AnsiString naam=  cmbInstructors->Items->Strings[cmbInstructors->ItemIndex];
DMod->ADOLearnerClients->Close();
  AnsiString SQLString = "Select * from learnerclients l,instructors i";
			 SQLString+= " where l.preferredinstructor = i.instructorPersID";
			 SQLString+=" AND InstructorName = '"+naam+"'";

  DMod->ADOLearnerClients->CommandText = SQLString;
   DMod->ADOLearnerClients->Open();
  dbgrdAll->DataSource = DMod->dataSrcLearn;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnHighSalClick(TObject *Sender)
{
	float highestSal;




	AnsiString SQLString = "select * from instructors ";
	SQLString +=" where empbasicsalpa = ";
	SQLString +=" (select max(empbasicsalpa) from instructors)";

	 DMod->ADOInstructors->Active=false;
	DMod->ADOInstructors->CommandText = SQLString;

   //
	//DMod->ADOInstructors->Active = true;
   DMod->ADOInstructors->Open();
	highestSal = DMod->ADOInstructors->FieldByName("EmpBasicSalPa")->AsFloat;
	ShowMessage(highestSal);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnHighSalNoClick(TObject *Sender)
{   float tempHighestSal=0;
AnsiString highName="";
	int x=0;
	DMod->ADOInstructors->Close();
	DMod->ADOInstructors->Open();
	DMod->ADOInstructors->First();

	while(!DMod->ADOInstructors->Eof)
	{

	   if(tempHighestSal<DMod->ADOInstructors->FieldByName("EmpBasicSalPa")->AsFloat)
	   {
		  tempHighestSal=DMod->ADOInstructors->FieldByName("EmpBasicSalPa")->AsFloat;
		  highName=DMod->ADOInstructors->FieldByName("InstructorName")->AsAnsiString;
	   }

	   DMod->ADOInstructors->Next();
	}

	ShowMessage("Highest instructor is "+highName+" with salary of "+FloatToStr(tempHighestSal));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
int increaseYears;
increaseYears = StrToInt(InputBox("Year increment...","Please enter amount of years",0));


AnsiString SQLString="update learnerclients ";
SQLString+=" set learnerslicenceExpirydate =learnerslicenceExpirydate+(365* :increaseValue)+1";


//int increaseValue=   increaseYears;
DMod->ADOCom->CommandText=SQLString;
DMod->ADOCom->Parameters->ParamByName("increaseValue")->Value=  increaseYears;


DMod->ADOCom->Execute();

DMod->ADOLearnerClients->Refresh();



}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
AnsiString SQLString = "select LearnerName,LearnerSurname,Learnercell,preferredInstructor ";
			SQLString+=" from learnerclients ";

DMod->ADOTempDataSet->Close();
DMod->ADOTempDataSet->Connection=DMod->ADOCon;
DMod->ADOTempDataSet->CommandText=SQLString;
DMod->ADOTempDataSet->Open();


TTextWriter * writer=new TStreamWriter("ResultFile.txt",False);

AnsiString head="Learner Clients with their preferred instructors";

writer->WriteLine(head);
 head="=========================================================";
 writer->WriteLine(head);
 head="Learner Name		Learner Surname		Learner Cell		Preferred Instructor ID";
 writer->WriteLine(head);

 AnsiString lName,lSName,lCell,lID,oneLine;

 DMod->ADOTempDataSet->First();


 while(!DMod->ADOTempDataSet->Eof)
 {
  lName=DMod->ADOTempDataSet->FieldByName("LearnerName")->AsAnsiString;
  lSName= DMod->ADOTempDataSet->FieldByName("LearnerSurname")->AsAnsiString;
  lCell= DMod->ADOTempDataSet->FieldByName("Learnercell")->AsAnsiString;
  lID= DMod->ADOTempDataSet->FieldByName("preferredInstructor")->AsAnsiString;

  oneLine=lName+"\t\t";
  oneLine+=lSName+"\t\t";
  oneLine+=lCell+"\t\t";
  oneLine+=lID+"\t\t";

  writer->WriteLine(oneLine);

  DMod->ADOTempDataSet->Next();
  oneLine="";
 }

 head="Total learner clients = "+IntToStr(DMod->ADOTempDataSet->RecordCount);
 writer->WriteLine(head);
 writer->Close();
 ListBox1->Font->Name="Calibri";
 ListBox1->Font->Size=10;

 ListBox1->Items->LoadFromFile("ResultFile.txt");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
DMod->ADOTempDataSet->DataSource=DMod->dataSrcLearn;
DMod->ADOTempDataSet->IndexFieldNames="InstructorNr";
DMod->ADOTempDataSet->MasterFields="PreferredInstructor";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
DMod->ADOTempDataSet->DataSource =NULL;
DMod->ADOTempDataSet->IndexFieldNames="";
DMod->ADOTempDataSet->MasterFields="";

}
//---------------------------------------------------------------------------


