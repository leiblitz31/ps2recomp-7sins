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

// Function: sub_004E5268
// Address: 0x4e5268 - 0x4e5280
void sub_004E5268_0x4e5268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5268_0x4e5268");
#endif

    ctx->pc = 0x4e5268u;

    // 0x4e5268: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5268u;
    {
        const bool branch_taken_0x4e5268 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5268) {
            ctx->pc = 0x4E526Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5268u;
            // 0x4e526c: 0x3025636d  andi        $a1, $at, 0x636D (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25453);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50343Cu;
            return;
        }
    }
    ctx->pc = 0x4E5270u;
    // 0x4e5270: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e5270u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e5274: 0x0  nop
    ctx->pc = 0x4e5274u;
    // NOP
    // 0x4e5278: 0x0  nop
    ctx->pc = 0x4e5278u;
    // NOP
    // 0x4e527c: 0x0  nop
    ctx->pc = 0x4e527cu;
    // NOP
    ctx->pc = 0x4e5280u;
}
