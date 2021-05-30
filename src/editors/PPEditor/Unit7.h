//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Buttons.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <StdCtrls.hpp>
#include <ToolWin.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm {
  __published : // IDE-managed Components
                TPanel *Panel1;
  TMultiObjSpinEdit *WorkTime;
  TPanel *ColorPanel;
  TSpeedButton *AddButton;
  TSpeedButton *DeleteButton;
  TColorDialog *ColorDialog;
  TImageList *ImageList;
  void __fastcall ColorPanelClick(TObject *Sender);
  void __fastcall LinearFuncButtonClick(TObject *Sender);

private: // User declarations
public:  // User declarations
  int m_iFunction;
  float tr, cr, br;
  float tg, cg, bg;
  float tb, cb, bb;
  __fastcall TForm7(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
