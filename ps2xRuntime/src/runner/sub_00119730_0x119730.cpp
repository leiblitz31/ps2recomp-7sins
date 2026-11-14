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

// Function: sub_00119730
// Address: 0x119730 - 0x119770
void sub_00119730_0x119730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119730_0x119730");
#endif

    switch (ctx->pc) {
        case 0x119730u: goto label_119730;
        case 0x119734u: goto label_119734;
        case 0x119738u: goto label_119738;
        case 0x11973cu: goto label_11973c;
        case 0x119740u: goto label_119740;
        case 0x119744u: goto label_119744;
        case 0x119748u: goto label_119748;
        case 0x11974cu: goto label_11974c;
        case 0x119750u: goto label_119750;
        case 0x119754u: goto label_119754;
        case 0x119758u: goto label_119758;
        case 0x11975cu: goto label_11975c;
        case 0x119760u: goto label_119760;
        case 0x119764u: goto label_119764;
        case 0x119768u: goto label_119768;
        case 0x11976cu: goto label_11976c;
        default: break;
    }

    ctx->pc = 0x119730u;

label_119730:
    // 0x119730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119734:
    // 0x119734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119738:
    // 0x119738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11973c:
    // 0x11973c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119740:
    // 0x119740: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x119740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119744:
    // 0x119744: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119748:
    // 0x119748: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_11974c:
    // 0x11974c: 0x320f809  jalr        $t9
label_119750:
    if (ctx->pc == 0x119750u) {
        ctx->pc = 0x119754u;
        goto label_119754;
    }
    ctx->pc = 0x11974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11974Cu, 0x119754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119754u;
label_119754:
    // 0x119754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119758:
    // 0x119758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11975c:
    // 0x11975c: 0x3e00008  jr          $ra
label_119760:
    if (ctx->pc == 0x119760u) {
        ctx->pc = 0x119764u;
        goto label_119764;
    }
    ctx->pc = 0x11975Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11975Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119764u;
label_119764:
    // 0x119764: 0x0  nop
    ctx->pc = 0x119764u;
    // NOP
label_119768:
    // 0x119768: 0x0  nop
    ctx->pc = 0x119768u;
    // NOP
label_11976c:
    // 0x11976c: 0x0  nop
    ctx->pc = 0x11976cu;
    // NOP
    ctx->pc = 0x119770u;
}
