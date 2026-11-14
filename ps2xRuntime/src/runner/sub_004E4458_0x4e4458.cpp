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

// Function: sub_004E4458
// Address: 0x4e4458 - 0x4e4468
void sub_004E4458_0x4e4458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4458_0x4e4458");
#endif

    switch (ctx->pc) {
        case 0x4e445cu: goto label_4e445c;
        default: break;
    }

    ctx->pc = 0x4e4458u;

    // 0x4e4458: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e445c:
    if (ctx->pc == 0x4E445Cu) {
        ctx->pc = 0x4E445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4458u;
        // 0x4e445c: 0x725f626d  .word       0x725F626D                   # INVALID     $s2, $ra, 0x626D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E445C raw=0x725F626D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4460u;
        goto label_fallthrough_0x4e4458;
    }
    ctx->pc = 0x4E4458u;
    {
        const bool branch_taken_0x4e4458 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4458) {
            ctx->pc = 0x4E445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4458u;
            // 0x4e445c: 0x725f626d  .word       0x725F626D                   # INVALID     $s2, $ra, 0x626D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E445C raw=0x725F626D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F84F4u;
            return;
        }
    }
label_fallthrough_0x4e4458:
    ctx->pc = 0x4E4460u;
    // 0x4e4460: 0x79727465  lq          $s2, 0x7465($t3)
    ctx->pc = 0x4e4460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 29797)));
    // 0x4e4464: 0x0  nop
    ctx->pc = 0x4e4464u;
    // NOP
    ctx->pc = 0x4e4468u;
}
