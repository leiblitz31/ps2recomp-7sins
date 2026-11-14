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

// Function: sub_004E4ED8
// Address: 0x4e4ed8 - 0x4e4ef0
void sub_004E4ED8_0x4e4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4ED8_0x4e4ed8");
#endif

    switch (ctx->pc) {
        case 0x4e4ee4u: goto label_4e4ee4;
        default: break;
    }

    ctx->pc = 0x4e4ed8u;

    // 0x4e4ed8: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4ED8u;
    {
        const bool branch_taken_0x4e4ed8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ed8) {
            ctx->pc = 0x4E4EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4ED8u;
            // 0x4e4edc: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4EDC raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50009Cu;
            return;
        }
    }
    ctx->pc = 0x4E4EE0u;
    // 0x4e4ee0: 0x6165665f  daddi       $a1, $t3, 0x665F
    ctx->pc = 0x4e4ee0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26207; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e4ee4:
    // 0x4e4ee4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e4ee4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4ee8: 0x0  nop
    ctx->pc = 0x4e4ee8u;
    // NOP
    // 0x4e4eec: 0x0  nop
    ctx->pc = 0x4e4eecu;
    // NOP
    ctx->pc = 0x4e4ef0u;
}
