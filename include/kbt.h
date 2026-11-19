#include <pmdsky.h>
#include <cot.h>

void KbtErrorWithSource(bool is_assert, const char* file, int line, const char* fmt, ...);

#define KBT_ERROR(msg) KbtErrorWithSource(false, __FILE__, __LINE__, msg)
#define KBT_ERRORFMT(fmt, ...) KbtErrorWithSource(false, __FILE__, __LINE__, fmt, __VA_ARGS__)
#define KBT_ASSERT(expr) if(!expr) KbtErrorWithSource(true, __FILE__, __LINE__, #expr)
