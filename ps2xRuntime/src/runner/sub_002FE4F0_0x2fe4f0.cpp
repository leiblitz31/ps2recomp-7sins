#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_002FE4F0_0x2fe4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_002FE4F0_0x2fe4f0");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceIDC(rdram, ctx, runtime); 
}
