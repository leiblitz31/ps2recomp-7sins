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

// Function: sub_005F5D70
// Address: 0x5f5d70 - 0x5f5d80
void sub_005F5D70_0x5f5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5D70_0x5f5d70");
#endif

    ctx->pc = 0x5f5d70u;

    // 0x5f5d70: 0x4ac110  .word       0x004AC110                   # mfhi        $t8 # 004A0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d70u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x5f5d74: 0x4ac080  .word       0x004AC080                   # sll         $t8, $t2, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d74u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x5f5d78: 0x4abff0  tge         $v0, $t2, 767
    ctx->pc = 0x5f5d78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f5d7c: 0x0  nop
    ctx->pc = 0x5f5d7cu;
    // NOP
    ctx->pc = 0x5f5d80u;
}
