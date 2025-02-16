#ifndef COSMOPOLITAN_NET_HTTP_TOKENBUCKET_H_
#define COSMOPOLITAN_NET_HTTP_TOKENBUCKET_H_
#include "libc/atomic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

void ReplenishTokens(atomic_uint_fast64_t *, size_t);
int AcquireToken(atomic_schar *, uint32_t, int);
int CountTokens(atomic_schar *, uint32_t, int);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_NET_HTTP_TOKENBUCKET_H_ */
