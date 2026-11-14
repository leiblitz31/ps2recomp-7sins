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

// Function: sub_004E11B8
// Address: 0x4e11b8 - 0x4e11c8
void sub_004E11B8_0x4e11b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11B8_0x4e11b8");
#endif

    ctx->pc = 0x4e11b8u;

    // 0x4e11b8: 0x544f4f42  bnel        $v0, $t7, . + 4 + (0x4F42 << 2)
    ctx->pc = 0x4E11B8u;
    {
        const bool branch_taken_0x4e11b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x4e11b8) {
            ctx->pc = 0x4E11BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E11B8u;
            // 0x4e11bc: 0x43444320  .word       0x43444320                   # INVALID     $k0, $a0, 0x4320 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E11BC raw=0x43444320");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4EC4u;
            return;
        }
    }
    ctx->pc = 0x4E11C0u;
    // 0x4e11c0: 0xa44  .word       0x00000A44                   # sllv        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e11c0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x4e11c4: 0x0  nop
    ctx->pc = 0x4e11c4u;
    // NOP
    ctx->pc = 0x4e11c8u;
}
