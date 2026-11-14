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

// Function: sub_00419360
// Address: 0x419360 - 0x419388
void sub_00419360_0x419360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419360_0x419360");
#endif

    switch (ctx->pc) {
        case 0x419360u: goto label_419360;
        case 0x419364u: goto label_419364;
        case 0x419368u: goto label_419368;
        case 0x41936cu: goto label_41936c;
        case 0x419370u: goto label_419370;
        case 0x419374u: goto label_419374;
        case 0x419378u: goto label_419378;
        case 0x41937cu: goto label_41937c;
        case 0x419380u: goto label_419380;
        case 0x419384u: goto label_419384;
        default: break;
    }

    ctx->pc = 0x419360u;

label_419360:
    // 0x419360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x419360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_419364:
    // 0x419364: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_419368:
    // 0x419368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41936c:
    // 0x41936c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x41936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_419370:
    // 0x419370: 0x40f809  jalr        $v0
label_419374:
    if (ctx->pc == 0x419374u) {
        ctx->pc = 0x419374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419370u;
        // 0x419374: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419378u;
        goto label_419378;
    }
    ctx->pc = 0x419370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419378u);
        ctx->pc = 0x419374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419370u;
        // 0x419374: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419370u, 0x419378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419378u;
label_419378:
    // 0x419378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41937c:
    // 0x41937c: 0x3e00008  jr          $ra
label_419380:
    if (ctx->pc == 0x419380u) {
        ctx->pc = 0x419380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41937Cu;
        // 0x419380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419384u;
        goto label_419384;
    }
    ctx->pc = 0x41937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41937Cu;
        // 0x419380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41937Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419384u;
label_419384:
    // 0x419384: 0x0  nop
    ctx->pc = 0x419384u;
    // NOP
    ctx->pc = 0x419388u;
}
