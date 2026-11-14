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

// Function: sub_004E5CD0
// Address: 0x4e5cd0 - 0x4e5ce0
void sub_004E5CD0_0x4e5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5CD0_0x4e5cd0");
#endif

    ctx->pc = 0x4e5cd0u;

    // 0x4e5cd0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5CD0u;
    {
        const bool branch_taken_0x4e5cd0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5cd0) {
            ctx->pc = 0x4E5CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5CD0u;
            // 0x4e5cd4: 0x73726570  .word       0x73726570                   # INVALID     $k1, $s2, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
            throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x4E5CD4 raw=0x73726570");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501278u;
            return;
        }
    }
    ctx->pc = 0x4E5CD8u;
    // 0x4e5cd8: 0x65725f6f  daddiu      $s2, $t3, 0x5F6F
    ctx->pc = 0x4e5cd8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24431);
    // 0x4e5cdc: 0x7473  tltu        $zero, $zero, 465
    ctx->pc = 0x4e5cdcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e5ce0u;
}
