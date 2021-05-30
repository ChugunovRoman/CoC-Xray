#include "stdafx.h"
#include "xrLight_Implicit.h"
#include "xrThread.h"
#include "xrlight_implicitdeflector.h"
#include "xrlight_implicitrun.h"
class ImplicitThread : public CThread {
public:
  ImplicitExecute execute;
  ImplicitThread(u32 ID, ImplicitDeflector *_DATA, u32 _y_start, u32 _y_end)
      : CThread(ID), execute(_y_start, _y_end) {}
  virtual void Execute();
};

void ImplicitThread ::Execute() {
  // Priority
  SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
  Sleep(0);
  execute.Execute(0);
}

#define NUM_THREADS 8
void RunImplicitMultithread(ImplicitDeflector &defl) {
  // Start threads
  CThreadManager tmanager;
  u32 stride = defl.Height() / NUM_THREADS;
  for (u32 thID = 0; thID < NUM_THREADS; thID++)
    tmanager.start(xr_new<ImplicitThread>(thID, &defl, thID * stride,
                                          thID * stride + stride));
  tmanager.wait();
}
