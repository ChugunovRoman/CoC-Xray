#ifndef XRGAMESPY_CORE
#define XRGAMESPY_CORE

#include "GameSpy/common/gsCore.h"
#include "xrGameSpy_MainDefs.h"

extern "C" {

EXPORT_FN_DECL(void, gsCoreInitialize, ());
EXPORT_FN_DECL(void, gsCoreThink, (gsi_time theMs));
EXPORT_FN_DECL(void, gsCoreShutdown, ());

} // extern "C"

#endif