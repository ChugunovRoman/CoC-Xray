//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <Buttons.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <StdCtrls.hpp>
#include <ToolWin.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm {
  __published : // IDE-managed Components
                TPanel *Panel1;
  TMultiObjSpinEdit *WorkTime;
  TMultiObjSpinEdit *Value;
  TSpeedButton *AddButton;
  TSpeedButton *DeleteButton;
  TImageList *ImageList;

private: // User declarations
public:  // User declarations
  __fastcall TForm9(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
