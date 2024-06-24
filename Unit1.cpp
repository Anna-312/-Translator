//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "File2.cpp"
#include "File3.cpp"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	char text[1000];
	int j = 0;
	 char space[] = " ";
	 for (int i = 0; i < Memo1->Lines->Count; i++)
	 {
		AnsiString ansistr = Memo1->Lines->Strings[i];
		if (ansistr != NULL)
		{
			char str[100];
			strcpy(str, ansistr.c_str());
			int i1 = 0;
			while (str[i1] != '\0')
			{
				text[j] = str[i1];
				j++;
				i1++;
			}
			text[j] = ' ';
			j++;
			//strcat(text, str);
			//strcat(text, space);
		}
	 }
	 char answer[100];
	 int kom[100];
	 int met[100];
	 int dan[100];
	 Analysis(text, answer,kom, dan, met);
	 if (info->Error)
	 {
		 ShowMessage(info->Message);
		 return;
	 }
	 if (strcmp(answer, "Отвергнуть!") == 0)
	 {
		 ShowMessage("Ошибка в коде!");
		 return;
	 }
	 int res[100];
	 Interpriate(kom, dan, met, res);
	 Memo2->Lines->Clear();
	 int j1 = 0;
	 while (j1 < dan[99])
	 {
		 Memo2->Lines->Add(IntToStr(j1) + ": " + IntToStr(dan[j1]));
         j1++;
	 }
	 Memo3->Lines->Clear();
	 int i = 0;
	 while (kom[i] != -1)
	 {
		switch (kom[i])
		{
			case 29:
			{
				Memo3->Lines->Add("Присвоить(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2]) + ")");
				i += 3;
				break;
			}
			case 32:
			{
				Memo3->Lines->Add("Безусловный переход(" + IntToStr(kom[i+1]) + ")");
				i += 2;
				break;
			}
			case 33:
			{
				Memo3->Lines->Add("Сложить(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ "," + IntToStr(kom[i+3]) + ")");
				i += 4;
				break;
			}
			case 34:
			{
				Memo3->Lines->Add("Умножить(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ "," + IntToStr(kom[i+3]) + ")");
				i += 4;
				break;
			}
			case 35:
			{
				Memo3->Lines->Add("ВозвестиВСтепень(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ "," + IntToStr(kom[i+3]) + ")");
				i += 4;
				break;
			}
			case 30:
			{
				Memo3->Lines->Add("УсловныйПереходПо0(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ ")");
				i += 3;
				break;
			}
			case 36:
			{
				Memo3->Lines->Add("Равно(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ "," + IntToStr(kom[i+3]) + ")");
				i += 4;
				break;
			}
			case 37:
			{
				Memo3->Lines->Add("НеРавно(" + IntToStr(kom[i+1]) + "," + IntToStr(kom[i+2])+ "," + IntToStr(kom[i+3]) + ")");
				i += 4;
				break;
			}
		}
	 }
}
//---------------------------------------------------------------------------

