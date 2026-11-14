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

// Function: sub_004E49B8
// Address: 0x4e49b8 - 0x4e49d0
void sub_004E49B8_0x4e49b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E49B8_0x4e49b8");
#endif

    switch (ctx->pc) {
        case 0x4e49c0u: goto label_4e49c0;
        default: break;
    }

    ctx->pc = 0x4e49b8u;

    // 0x4e49b8: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E49B8u;
    {
        const bool branch_taken_0x4e49b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e49b8) {
            ctx->pc = 0x4E49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E49B8u;
            // 0x4e49bc: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E49BC raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B74u;
            return;
        }
    }
    ctx->pc = 0x4E49C0u;
label_4e49c0:
    // 0x4e49c0: 0x6165665f  daddi       $a1, $t3, 0x665F
    ctx->pc = 0x4e49c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26207; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e49c4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e49c4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e49c8: 0x0  nop
    ctx->pc = 0x4e49c8u;
    // NOP
    // 0x4e49cc: 0x0  nop
    ctx->pc = 0x4e49ccu;
    // NOP
    ctx->pc = 0x4e49d0u;
}
