#pragma once

#include "../../xrcdb/xrcdb.h"
#include "base_lighting.h"
#include "xrdeflectordefs.h"

class light_execute {

  HASH H;
  CDB::COLLIDER DB;
  base_lighting LightsSelected;

public:
  void run(CDeflector &D);
};
