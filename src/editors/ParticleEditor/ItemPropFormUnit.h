//---------------------------------------------------------------------------

#ifndef ItemPropFormUnitH
#define ItemPropFormUnitH
//---------------------------------------------------------------------------
#include "mxPlacemnt.hpp"
#include <Classes.hpp>
#include <Controls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TfmItemProp : public TForm {
  __published : // IDE-managed Components
                TFormStorage *fsStorage;
  void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
  void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

private: // User declarations
public:  // User declarations
  __fastcall TfmItemProp(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern TfmItemProp *fmItemProp;
//---------------------------------------------------------------------------
#endif
