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

// Function: sub_004E5CF8
// Address: 0x4e5cf8 - 0x4e5d08
void sub_004E5CF8_0x4e5cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5CF8_0x4e5cf8");
#endif

    ctx->pc = 0x4e5cf8u;

    // 0x4e5cf8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5CF8u;
    {
        const bool branch_taken_0x4e5cf8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5cf8) {
            ctx->pc = 0x4E5CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5CF8u;
            // 0x4e5cfc: 0x73726570  .word       0x73726570                   # INVALID     $k1, $s2, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
            throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x4E5CFC raw=0x73726570");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5012A0u;
            return;
        }
    }
    ctx->pc = 0x4E5D00u;
    // 0x4e5d00: 0x61625f6f  daddi       $v0, $t3, 0x5F6F
    ctx->pc = 0x4e5d00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24431; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x4e5d04: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e5d04u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e5d08u;
}
