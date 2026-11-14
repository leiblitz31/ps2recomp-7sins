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

// Function: sub_005E0B90
// Address: 0x5e0b90 - 0x5e0ba0
void sub_005E0B90_0x5e0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0B90_0x5e0b90");
#endif

    ctx->pc = 0x5e0b90u;

    // 0x5e0b90: 0x50705f6d  beql        $v1, $s0, . + 4 + (0x5F6D << 2)
    ctx->pc = 0x5E0B90u;
    {
        const bool branch_taken_0x5e0b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x5e0b90) {
            ctx->pc = 0x5E0B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0B90u;
            // 0x5e0b94: 0x20687461  addi        $t0, $v1, 0x7461 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F8948u;
            return;
        }
    }
    ctx->pc = 0x5E0B98u;
    // 0x5e0b98: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0b98u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0B98 raw=0x4E203D21");
    // 0x5e0b9c: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0b9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5E0B9C raw=0x004C4C55");
    ctx->pc = 0x5e0ba0u;
}
