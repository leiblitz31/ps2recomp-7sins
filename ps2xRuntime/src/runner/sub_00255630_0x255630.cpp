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

// Function: sub_00255630
// Address: 0x255630 - 0x2556a0
void sub_00255630_0x255630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255630_0x255630");
#endif

    switch (ctx->pc) {
        case 0x255650u: goto label_255650;
        case 0x25565cu: goto label_25565c;
        case 0x255668u: goto label_255668;
        case 0x25567cu: goto label_25567c;
        default: break;
    }

    ctx->pc = 0x255630u;

    // 0x255630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x255634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25563c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x255640: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x255640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255644: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255648: 0xc09538c  jal         func_254E30
    ctx->pc = 0x255648u;
    SET_GPR_U32(ctx, 31, 0x255650u);
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x255648u, 0x255650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255650u;
label_255650:
    // 0x255650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255654u;
    {
        const bool branch_taken_0x255654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255654) {
            ctx->pc = 0x25566Cu;
            goto label_25566c;
        }
    }
    ctx->pc = 0x25565Cu;
label_25565c:
    // 0x25565c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x255660: 0xc0967a0  jal         func_259E80
    ctx->pc = 0x255660u;
    SET_GPR_U32(ctx, 31, 0x255668u);
    ctx->pc = 0x259E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E80u, 0x255660u, 0x255668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255668u;
label_255668:
    // 0x255668: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x255668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25566c:
    // 0x25566c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255670: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255674: 0xc095384  jal         func_254E10
    ctx->pc = 0x255674u;
    SET_GPR_U32(ctx, 31, 0x25567Cu);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x255674u, 0x25567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25567Cu;
label_25567c:
    // 0x25567c: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25567Cu;
    {
        const bool branch_taken_0x25567c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25567c) {
            ctx->pc = 0x25565Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25565c;
        }
    }
    ctx->pc = 0x255684u;
    // 0x255684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25568c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25568cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255690: 0x3e00008  jr          $ra
    ctx->pc = 0x255690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255698u;
    // 0x255698: 0x0  nop
    ctx->pc = 0x255698u;
    // NOP
    // 0x25569c: 0x0  nop
    ctx->pc = 0x25569cu;
    // NOP
    ctx->pc = 0x2556a0u;
}
