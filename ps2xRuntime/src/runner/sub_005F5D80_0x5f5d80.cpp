#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005F5D80
// Address: 0x5f5d80 - 0x5f5d88
void sub_005F5D80_0x5f5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5D80_0x5f5d80");
#endif

    ctx->pc = 0x5f5d80u;

    // 0x5f5d80: 0x4ae0e8  .word       0x004AE0E8                   # mfsa        $gp # 004A00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d80u;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x5f5d84: 0x0  nop
    ctx->pc = 0x5f5d84u;
    // NOP
    ctx->pc = 0x5f5d88u;
}
