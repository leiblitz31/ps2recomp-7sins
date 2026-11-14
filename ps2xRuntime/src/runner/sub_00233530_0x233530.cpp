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

// Function: sub_00233530
// Address: 0x233530 - 0x233580
void sub_00233530_0x233530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233530_0x233530");
#endif

    switch (ctx->pc) {
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        default: break;
    }

    ctx->pc = 0x233530u;

label_233530:
    // 0x233530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_233534:
    // 0x233534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233538:
    // 0x233538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23353c:
    // 0x23353c: 0x8f83bb8c  lw          $v1, -0x4474($gp)
    ctx->pc = 0x23353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949772)));
label_233540:
    // 0x233540: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_233544:
    if (ctx->pc == 0x233544u) {
        ctx->pc = 0x233548u;
        goto label_233548;
    }
    ctx->pc = 0x233540u;
    {
        const bool branch_taken_0x233540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233540) {
            ctx->pc = 0x233560u;
            goto label_233560;
        }
    }
    ctx->pc = 0x233548u;
label_233548:
    // 0x233548: 0x8f84bb8c  lw          $a0, -0x4474($gp)
    ctx->pc = 0x233548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949772)));
label_23354c:
    // 0x23354c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_233550:
    // 0x233550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233554:
    // 0x233554: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x233554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_233558:
    // 0x233558: 0x320f809  jalr        $t9
label_23355c:
    if (ctx->pc == 0x23355Cu) {
        ctx->pc = 0x233560u;
        goto label_233560;
    }
    ctx->pc = 0x233558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233558u, 0x233560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233560u;
label_233560:
    // 0x233560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233564:
    // 0x233564: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_233568:
    // 0x233568: 0x3e00008  jr          $ra
label_23356c:
    if (ctx->pc == 0x23356Cu) {
        ctx->pc = 0x233570u;
        goto label_233570;
    }
    ctx->pc = 0x233568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233570u;
label_233570:
    // 0x233570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_233574:
    // 0x233574: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_233578:
    // 0x233578: 0x3e00008  jr          $ra
label_23357c:
    if (ctx->pc == 0x23357Cu) {
        ctx->pc = 0x233580u;
        goto label_fallthrough_0x233578;
    }
    ctx->pc = 0x233578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x233578:
    ctx->pc = 0x233580u;
}
