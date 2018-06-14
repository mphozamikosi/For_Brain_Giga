//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDMod : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOCon;
	TADODataSet *ADOInstructors;
	TADODataSet *ADOLearnerClients;
	TDataSource *dataSrcIns;
	TDataSource *dataSrcLearn;
	TWideStringField *ADOInstructorsInstructorPersID;
	TWideStringField *ADOInstructorsInstructorSAID;
	TWideStringField *ADOInstructorsInstructorName;
	TWideStringField *ADOInstructorsInstructorSurname;
	TWideStringField *ADOInstructorsInstructorContactNr;
	TWideStringField *ADOInstructorsInstructorLicenceCodes;
	TBCDField *ADOInstructorsEmpBasicSalPA;
	TADOCommand *ADOCom;
	TADODataSet *ADOTempDataSet;
	TDataSource *dataSrcTemp;
private:	// User declarations
public:		// User declarations
	__fastcall TDMod(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDMod *DMod;
//---------------------------------------------------------------------------
#endif
