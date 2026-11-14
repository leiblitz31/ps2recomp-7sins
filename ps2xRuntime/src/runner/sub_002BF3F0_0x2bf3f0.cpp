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

// Function: sub_002BF3F0
// Address: 0x2bf3f0 - 0x2bf430
void sub_002BF3F0_0x2bf3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF3F0_0x2bf3f0");
#endif

    switch (ctx->pc) {
        case 0x2bf3f0u: goto label_2bf3f0;
        case 0x2bf3f4u: goto label_2bf3f4;
        case 0x2bf3f8u: goto label_2bf3f8;
        case 0x2bf3fcu: goto label_2bf3fc;
        case 0x2bf400u: goto label_2bf400;
        case 0x2bf404u: goto label_2bf404;
        case 0x2bf408u: goto label_2bf408;
        case 0x2bf40cu: goto label_2bf40c;
        case 0x2bf410u: goto label_2bf410;
        case 0x2bf414u: goto label_2bf414;
        case 0x2bf418u: goto label_2bf418;
        case 0x2bf41cu: goto label_2bf41c;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf424u: goto label_2bf424;
        case 0x2bf428u: goto label_2bf428;
        case 0x2bf42cu: goto label_2bf42c;
        default: break;
    }

    ctx->pc = 0x2bf3f0u;

label_2bf3f0:
    // 0x2bf3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf3f4:
    // 0x2bf3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf3f8:
    // 0x2bf3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2bf3fc:
    // 0x2bf3fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf400:
    // 0x2bf400: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf404:
    // 0x2bf404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf408:
    // 0x2bf408: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bf408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bf40c:
    // 0x2bf40c: 0x320f809  jalr        $t9
label_2bf410:
    if (ctx->pc == 0x2BF410u) {
        ctx->pc = 0x2BF414u;
        goto label_2bf414;
    }
    ctx->pc = 0x2BF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF40Cu, 0x2BF414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF414u;
label_2bf414:
    // 0x2bf414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf418:
    // 0x2bf418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf41c:
    // 0x2bf41c: 0x3e00008  jr          $ra
label_2bf420:
    if (ctx->pc == 0x2BF420u) {
        ctx->pc = 0x2BF424u;
        goto label_2bf424;
    }
    ctx->pc = 0x2BF41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF424u;
label_2bf424:
    // 0x2bf424: 0x0  nop
    ctx->pc = 0x2bf424u;
    // NOP
label_2bf428:
    // 0x2bf428: 0x0  nop
    ctx->pc = 0x2bf428u;
    // NOP
label_2bf42c:
    // 0x2bf42c: 0x0  nop
    ctx->pc = 0x2bf42cu;
    // NOP
    ctx->pc = 0x2bf430u;
}
