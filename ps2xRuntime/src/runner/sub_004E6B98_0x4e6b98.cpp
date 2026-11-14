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

// Function: sub_004E6B98
// Address: 0x4e6b98 - 0x4e6bb0
void sub_004E6B98_0x4e6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B98_0x4e6b98");
#endif

    switch (ctx->pc) {
        case 0x4e6b9cu: goto label_4e6b9c;
        default: break;
    }

    ctx->pc = 0x4e6b98u;

    // 0x4e6b98: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e6b9c:
    if (ctx->pc == 0x4E6B9Cu) {
        ctx->pc = 0x4E6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B98u;
        // 0x4e6b9c: 0x53525543  beql        $k0, $s2, . + 4 + (0x5543 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E6B9C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BA0u;
        goto label_fallthrough_0x4e6b98;
    }
    ctx->pc = 0x4E6B98u;
    {
        const bool branch_taken_0x4e6b98 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6b98) {
            ctx->pc = 0x4E6B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6B98u;
            // 0x4e6b9c: 0x53525543  beql        $k0, $s2, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6B9C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502140u;
            return;
        }
    }
label_fallthrough_0x4e6b98:
    ctx->pc = 0x4E6BA0u;
    // 0x4e6ba0: 0x525f524f  beql        $s2, $ra, . + 4 + (0x524F << 2)
    ctx->pc = 0x4E6BA0u;
    {
        const bool branch_taken_0x4e6ba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 31));
        if (branch_taken_0x4e6ba0) {
            ctx->pc = 0x4E6BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BA0u;
            // 0x4e6ba4: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6BA4 raw=0x00004445");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB4E0u;
            return;
        }
    }
    ctx->pc = 0x4E6BA8u;
    // 0x4e6ba8: 0x0  nop
    ctx->pc = 0x4e6ba8u;
    // NOP
    // 0x4e6bac: 0x0  nop
    ctx->pc = 0x4e6bacu;
    // NOP
    ctx->pc = 0x4e6bb0u;
}
