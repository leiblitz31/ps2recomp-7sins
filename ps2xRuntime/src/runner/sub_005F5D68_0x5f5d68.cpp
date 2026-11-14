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

// Function: sub_005F5D68
// Address: 0x5f5d68 - 0x5f5d70
void sub_005F5D68_0x5f5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5D68_0x5f5d68");
#endif

    ctx->pc = 0x5f5d68u;

    // 0x5f5d68: 0x4ad8d8  .word       0x004AD8D8                   # mult        $k1, $v0, $t2 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
    // 0x5f5d6c: 0x0  nop
    ctx->pc = 0x5f5d6cu;
    // NOP
    ctx->pc = 0x5f5d70u;
}
