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

// Function: sub_004E68A8
// Address: 0x4e68a8 - 0x4e68b8
void sub_004E68A8_0x4e68a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68A8_0x4e68a8");
#endif

    ctx->pc = 0x4e68a8u;

    // 0x4e68a8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E68A8u;
    {
        const bool branch_taken_0x4e68a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e68a8) {
            ctx->pc = 0x4E68ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E68A8u;
            // 0x4e68ac: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E68AC raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E50u;
            return;
        }
    }
    ctx->pc = 0x4E68B0u;
    // 0x4e68b0: 0x524a5f45  beql        $s2, $t2, . + 4 + (0x5F45 << 2)
    ctx->pc = 0x4E68B0u;
    {
        const bool branch_taken_0x4e68b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        if (branch_taken_0x4e68b0) {
            ctx->pc = 0x4E68B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E68B0u;
            // 0x4e68b4: 0x32  tlt         $zero, $zero, 0 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE5C8u;
            return;
        }
    }
    ctx->pc = 0x4E68B8u;
}
