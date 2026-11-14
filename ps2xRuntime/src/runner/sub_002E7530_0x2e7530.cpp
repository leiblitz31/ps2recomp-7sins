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

// Function: sub_002E7530
// Address: 0x2e7530 - 0x2e7570
void sub_002E7530_0x2e7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7530_0x2e7530");
#endif

    switch (ctx->pc) {
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        case 0x2e7548u: goto label_2e7548;
        case 0x2e754cu: goto label_2e754c;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e7560u: goto label_2e7560;
        case 0x2e7564u: goto label_2e7564;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e756cu: goto label_2e756c;
        default: break;
    }

    ctx->pc = 0x2e7530u;

label_2e7530:
    // 0x2e7530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e7534:
    // 0x2e7534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e7538:
    // 0x2e7538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2e753c:
    // 0x2e753c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7540:
    // 0x2e7540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e7540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7544:
    // 0x2e7544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e7544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e7548:
    // 0x2e7548: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2e7548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2e754c:
    // 0x2e754c: 0x320f809  jalr        $t9
label_2e7550:
    if (ctx->pc == 0x2E7550u) {
        ctx->pc = 0x2E7554u;
        goto label_2e7554;
    }
    ctx->pc = 0x2E754Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E7554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E754Cu, 0x2E7554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7554u;
label_2e7554:
    // 0x2e7554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7558:
    // 0x2e7558: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e755c:
    // 0x2e755c: 0x3e00008  jr          $ra
label_2e7560:
    if (ctx->pc == 0x2E7560u) {
        ctx->pc = 0x2E7564u;
        goto label_2e7564;
    }
    ctx->pc = 0x2E755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7564u;
label_2e7564:
    // 0x2e7564: 0x0  nop
    ctx->pc = 0x2e7564u;
    // NOP
label_2e7568:
    // 0x2e7568: 0x0  nop
    ctx->pc = 0x2e7568u;
    // NOP
label_2e756c:
    // 0x2e756c: 0x0  nop
    ctx->pc = 0x2e756cu;
    // NOP
    ctx->pc = 0x2e7570u;
}
