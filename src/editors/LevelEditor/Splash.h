//---------------------------------------------------------------------------

#ifndef SplashH
#define SplashH
//---------------------------------------------------------------------------
#include "MXCtrls.hpp"
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TfrmSplash : public TForm {
  __published : // IDE-managed Components
                TImage *Image1;
  TLabel *lbStatus;

private: // User declarations
public:  // User declarations
  __fastcall TfrmSplash(TComponent *Owner);
  void SetStatus(LPSTR log) {
    if (log) {
      lbStatus->Caption = log;
      lbStatus->Repaint();
    };
  }
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSplash *frmSplash;
//---------------------------------------------------------------------------
#endif
