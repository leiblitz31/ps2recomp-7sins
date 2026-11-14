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

// Function: sub_004E1220
// Address: 0x4e1220 - 0x4e1230
void sub_004E1220_0x4e1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1220_0x4e1220");
#endif

    ctx->pc = 0x4e1220u;

    // 0x4e1220: 0x52414843  beql        $s2, $at, . + 4 + (0x4843 << 2)
    ctx->pc = 0x4E1220u;
    {
        const bool branch_taken_0x4e1220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x4e1220) {
            ctx->pc = 0x4E1224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1220u;
            // 0x4e1224: 0x20544553  addi        $s4, $v0, 0x4553 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17747, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3330u;
            return;
        }
    }
    ctx->pc = 0x4E1228u;
    // 0x4e1228: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1228u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1228 raw=0x4F202020");
    // 0x4e122c: 0xa4646  .word       0x000A4646                   # srlv        $t0, $t2, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e122cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x4e1230u;
}
