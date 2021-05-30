//---------------------------------------------------------------------------

#ifndef float_paramH
#define float_paramH
//---------------------------------------------------------------------------
#include "MXCtrls.hpp"
#include "multi_edit.hpp"
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
class TfrmTimeConstructor : public TForm {
  __published : // IDE-managed Components
                TPanel *Panel1;
  TMultiObjSpinEdit *WorkTime;
  TSpeedButton *AddButton;
  TSpeedButton *DeleteButton;
  TMxLabel *RxLabel2;
  TMxLabel *MxLabel1;
  TMultiObjSpinEdit *StartTime;

private: // User declarations
public:  // User declarations
  float t, c, b;
  __fastcall TfrmTimeConstructor(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTimeConstructor *frmTimeConstructor;
//---------------------------------------------------------------------------
#endif
