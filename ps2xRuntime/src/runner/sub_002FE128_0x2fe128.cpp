#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_002FE128_0x2fe128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_002FE128_0x2fe128");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::write(rdram, ctx, runtime); 
}
