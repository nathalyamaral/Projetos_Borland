//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IMC.h"
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


void __fastcall TForm1::ButtonClick(TObject *Sender)
{
float altura, peso, imc, pesoideal, resultado;
String msg = " ";
altura = StrToFloat (ealtura->Text);

peso = StrToFloat (epeso->Text);

imc = peso / (altura * altura);

if(imc<18){
        msg = "Magreza\n";
}else if(imc<25){
        msg = "Normal\n";
}else if(imc<30){
        msg= "Sobrepeso\n";
}else if(imc<35){
        msg = "Obesidade Grau I\n";
}else if(imc<40){
        msg = "Obesidade Grau II\n";
}else if(imc>40){
        msg = "Obesidade Grau II (Grave)\n";
}

if(rbmas->Checked){
        pesoideal = (( 72.7 * altura) - 58);
}else if(rbfem->Checked){
        pesoideal = (( 62.1 * altura) - 44.7);
}
lresultado->Caption = "   IMC = " + FormatFloat("0.00\n\n",imc) + "Estado: " + msg + "Peso ideal: " + FormatFloat("0. kg\n\n", pesoideal);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::rbmasClick(TObject *Sender)
{

          Form1->Color= clSkyBlue;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rbfemClick(TObject *Sender)
{
        Form1->Color = clRed;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
