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

// Function: sub_004E4BA8
// Address: 0x4e4ba8 - 0x4e4bb8
void sub_004E4BA8_0x4e4ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BA8_0x4e4ba8");
#endif

    switch (ctx->pc) {
        case 0x4e4bb0u: goto label_4e4bb0;
        default: break;
    }

    ctx->pc = 0x4e4ba8u;

    // 0x4e4ba8: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4BA8u;
    {
        const bool branch_taken_0x4e4ba8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ba8) {
            ctx->pc = 0x4E4BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4BA8u;
            // 0x4e4bac: 0x65636166  daddiu      $v1, $t3, 0x6166 (Delay Slot)
            SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D64u;
            return;
        }
    }
    ctx->pc = 0x4E4BB0u;
label_4e4bb0:
    // 0x4e4bb0: 0x676b62  .word       0x00676B62                   # sub         $t5, $v1, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4bb0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x4e4bb4: 0x0  nop
    ctx->pc = 0x4e4bb4u;
    // NOP
    ctx->pc = 0x4e4bb8u;
}
