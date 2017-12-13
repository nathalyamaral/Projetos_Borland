//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PodraodaRita.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bfinClick(TObject *Sender)
{

int qtd;
float vt, vt1, cod;


ltotal->Caption= "R$ " + FormatFloat("0.00 \n", vt);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) {

int qtd;
float vt, vt1, cod;

   if(ecod->Text=="100"){
        cod = 1.20;
   }else if(ecod->Text=="102"){
        cod = 1.30;
   }else if(ecod->Text=="103"){
        cod = 1.50;
   }else if(ecod->Text=="104"){
        cod = 1.20;
   }else if(ecod->Text=="105"){
        cod = 1.30;
   }else if(ecod->Text=="106"){
        cod = 1.00;
   }

qtd = StrToInt (eqtd->Text);

vt1 = cod * qtd;

vt = vt + vt1;

ltotal->Caption= "R$ " + FormatFloat("0.00 \n", vt);

}
//---------------------------------------------------------------------------

