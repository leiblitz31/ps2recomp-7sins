#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_002F6F38_0x2f6f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_002F6F38_0x2f6f38");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceCdSync(rdram, ctx, runtime); 
}
