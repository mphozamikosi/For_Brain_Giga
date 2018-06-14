//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TDBGrid *dbgrdAll;
	TComboBox *cmbInstructors;
	TTabSheet *TabSheet2;
	TButton *btnHighSalNo;
	TButton *btnHighSal;
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TDataSource *DataSource1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TLabel *Label3;
	TDBEdit *DBEdit3;
	TLabel *Label4;
	TDBEdit *DBEdit4;
	TLabel *Label5;
	TDBEdit *DBEdit5;
	TLabel *Label6;
	TDBEdit *DBEdit6;
	TLabel *Label7;
	TDBEdit *DBEdit7;
	TDBNavigator *DBNavigator1;
	TTabSheet *TabSheet3;
	TDBGrid *dbgrd2;
	TButton *Button1;
	TTabSheet *TabSheet4;
	TListBox *ListBox1;
	TButton *Button2;
	TTabSheet *TabSheet5;
	TButton *Button3;
	TButton *Button4;
	TDBGrid *DBGrid1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall cmbInstructorsChange(TObject *Sender);
	void __fastcall btnHighSalClick(TObject *Sender);
	void __fastcall btnHighSalNoClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
