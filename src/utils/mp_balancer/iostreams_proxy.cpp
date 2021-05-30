#include "iostreams_proxy.h"
#include "pch.h"

#ifdef _STLP_NO_IOSTREAMS

namespace std {

console_output cout;
console_output cerr;
console_output clog;
char const *endl = "\n";

} // namespace std

#endif //#ifdef _STLP_NO_IOSTREAMS