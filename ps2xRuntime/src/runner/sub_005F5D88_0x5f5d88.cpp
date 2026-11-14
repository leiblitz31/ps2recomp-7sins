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

// Function: sub_005F5D88
// Address: 0x5f5d88 - 0x5f5d90
void sub_005F5D88_0x5f5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5D88_0x5f5d88");
#endif

    ctx->pc = 0x5f5d88u;

    // 0x5f5d88: 0x4ad898  .word       0x004AD898                   # mult        $k1, $v0, $t2 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
    // 0x5f5d8c: 0x0  nop
    ctx->pc = 0x5f5d8cu;
    // NOP
    ctx->pc = 0x5f5d90u;
}
