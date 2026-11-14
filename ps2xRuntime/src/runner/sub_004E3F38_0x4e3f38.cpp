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

// Function: sub_004E3F38
// Address: 0x4e3f38 - 0x4e3f48
void sub_004E3F38_0x4e3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F38_0x4e3f38");
#endif

    ctx->pc = 0x4e3f38u;

    // 0x4e3f38: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3F38u;
    {
        const bool branch_taken_0x4e3f38 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3f38) {
            ctx->pc = 0x4E3F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3F38u;
            // 0x4e3f3c: 0x61676f6e  daddi       $a3, $t3, 0x6F6E (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28526; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7FD4u;
            return;
        }
    }
    ctx->pc = 0x4E3F40u;
    // 0x4e3f40: 0x72656c6c  .word       0x72656C6C                   # INVALID     $s3, $a1, 0x6C6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3f40u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E3F40 raw=0x72656C6C");
    // 0x4e3f44: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3f44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E3F44 raw=0x00000079");
    ctx->pc = 0x4e3f48u;
}
