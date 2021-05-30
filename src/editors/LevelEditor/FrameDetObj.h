//---------------------------------------------------------------------------
#ifndef FrameDetObjH
#define FrameDetObjH
//---------------------------------------------------------------------------
#include <Buttons.hpp>
#include <Classes.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>

#include "ESceneCustomMTools.h"
#include "ExtBtn.hpp"
#include "multi_color.hpp"
#include "multi_edit.hpp"
#include "mxPlacemnt.hpp"
// refs
struct SDOClusterDef;
class EDetailManager;
//---------------------------------------------------------------------------
class TfraDetailObject : public TForm {
  __published : // IDE-managed Components
                TFormStorage *fsStorage;
  TPanel *paCommand;
  TLabel *Label1;
  TExtBtn *ExtBtn3;
  TExtBtn *ExtBtn1;
  TExtBtn *ExtBtn6;
  TExtBtn *ExtBtn4;
  TExtBtn *ebResetSlots;
  TExtBtn *ExtBtn7;
  TExtBtn *ebClearDetails;
  TBevel *Bevel3;
  TBevel *Bevel4;
  TExtBtn *ExtBtn5;
  TBevel *Bevel1;
  TExtBtn *ebReinitializeSlotObjects;
  void __fastcall PaneMinClick(TObject *Sender);
  void __fastcall ExpandClick(TObject *Sender);
  void __fastcall ExtBtn1Click(TObject *Sender);
  void __fastcall ExtBtn5Click(TObject *Sender);
  void __fastcall ebUpdateObjectsClick(TObject *Sender);
  void __fastcall ebReinitializeSlotObjectsClick(TObject *Sender);
  void __fastcall ExtBtn6Click(TObject *Sender);
  void __fastcall ebInvalidateCacheClick(TObject *Sender);
  void __fastcall ebResetSlotsClick(TObject *Sender);
  void __fastcall ebClearDetailsClick(TObject *Sender);

private: // User declarations
  EDetailManager *DM;

public: // User declarations
  __fastcall TfraDetailObject(TComponent *Owner, EDetailManager *dm_tools);
};
//---------------------------------------------------------------------------
#endif
