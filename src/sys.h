#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define SYS_EXPORT __declspec(dllexport)
#else
  #define SYS_EXPORT
#endif

SYS_EXPORT void sys();
SYS_EXPORT void sys_print_vector(const std::vector<std::string> &strings);
