#include "pch.h"

#ifndef LUABIND_NO_EXCEPTIONS
namespace boost {
void throw_exception(const std::exception &) {}
} // namespace boost
#endif //! LUABIND_NO_EXCEPTIONS
