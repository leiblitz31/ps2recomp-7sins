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

// Function: sub_004E5020
// Address: 0x4e5020 - 0x4e5030
void sub_004E5020_0x4e5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5020_0x4e5020");
#endif

    switch (ctx->pc) {
        case 0x4e5028u: goto label_4e5028;
        default: break;
    }

    ctx->pc = 0x4e5020u;

    // 0x4e5020: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5020u;
    {
        const bool branch_taken_0x4e5020 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5020) {
            ctx->pc = 0x4E5024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5020u;
            // 0x4e5024: 0x656e6f4d  daddiu      $t6, $t3, 0x6F4D (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28493);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F90BCu;
            return;
        }
    }
    ctx->pc = 0x4E5028u;
label_4e5028:
    // 0x4e5028: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5028u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E5028 raw=0x00000079");
    // 0x4e502c: 0x0  nop
    ctx->pc = 0x4e502cu;
    // NOP
    ctx->pc = 0x4e5030u;
}
