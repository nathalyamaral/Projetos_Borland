//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
extern int cont;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
        : TForm(Owner)
{

String obs;

        if(cont < 6){
        lobs->Caption = " Estude mais, numa situação\n de emergência precisará estar preparado.";
        }else if(cont < 7){
        lobs->Caption = " Em algumas situações de emergência\n se saíra bem, continue neste caminho.";
        }else if(cont > 7){
        lobs->Caption = " Você é qualificado para reagir a qualquer\n desta situações, parabéns";
        }

lresultado->Caption = cont;
}
//---------------------------------------------------------------------------

void __fastcall TForm12::FormClose(TObject *Sender, TCloseAction &Action)
{
        Application->Terminate();
}
//---------------------------------------------------------------------------







