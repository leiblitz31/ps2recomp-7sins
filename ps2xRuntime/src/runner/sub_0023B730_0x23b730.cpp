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

// Function: sub_0023B730
// Address: 0x23b730 - 0x23b780
void sub_0023B730_0x23b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B730_0x23b730");
#endif

    switch (ctx->pc) {
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        default: break;
    }

    ctx->pc = 0x23b730u;

label_23b730:
    // 0x23b730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b734:
    // 0x23b734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b738:
    // 0x23b738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23b73c:
    // 0x23b73c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_23b740:
    // 0x23b740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b744:
    // 0x23b744: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23b744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23b748:
    // 0x23b748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b74c:
    // 0x23b74c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23b750:
    // 0x23b750: 0x320f809  jalr        $t9
label_23b754:
    if (ctx->pc == 0x23B754u) {
        ctx->pc = 0x23B758u;
        goto label_23b758;
    }
    ctx->pc = 0x23B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B758u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B750u, 0x23B758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B758u;
label_23b758:
    // 0x23b758: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b75c:
    // 0x23b75c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23b760:
    // 0x23b760: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23b764:
    // 0x23b764: 0xc088fb4  jal         func_223ED0
label_23b768:
    if (ctx->pc == 0x23B768u) {
        ctx->pc = 0x23B76Cu;
        goto label_23b76c;
    }
    ctx->pc = 0x23B764u;
    SET_GPR_U32(ctx, 31, 0x23B76Cu);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x23B764u, 0x23B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B76Cu;
label_23b76c:
    // 0x23b76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b770:
    // 0x23b770: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23b774:
    // 0x23b774: 0x3e00008  jr          $ra
label_23b778:
    if (ctx->pc == 0x23B778u) {
        ctx->pc = 0x23B77Cu;
        goto label_23b77c;
    }
    ctx->pc = 0x23B774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B77Cu;
label_23b77c:
    // 0x23b77c: 0x0  nop
    ctx->pc = 0x23b77cu;
    // NOP
    ctx->pc = 0x23b780u;
}
