//---------------------------------------------------------------------------

#ifndef FrameFogVolH
#define FrameFogVolH
//---------------------------------------------------------------------------
#include "ExtBtn.hpp"
#include <Classes.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>

class ESceneFogVolumeTool;
//---------------------------------------------------------------------------
class TfraFogVol : public TForm {
  __published : // IDE-managed Components
                TPanel *paCommands;
  TLabel *APHeadLabel1;
  TExtBtn *ExtBtn2;
  TExtBtn *ebGroup;
  TExtBtn *ebUngroup;
  void __fastcall ebGroupClick(TObject *Sender);
  void __fastcall ebUngroupClick(TObject *Sender);

private: // User declarations
public:  // User declarations
  ESceneFogVolumeTool *ParentTools;
  __fastcall TfraFogVol(TComponent *Owner, ESceneFogVolumeTool *gt);
};
#endif
