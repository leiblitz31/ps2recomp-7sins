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

// Function: sub_001913E0
// Address: 0x1913e0 - 0x191420
void sub_001913E0_0x1913e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001913E0_0x1913e0");
#endif

    switch (ctx->pc) {
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        default: break;
    }

    ctx->pc = 0x1913e0u;

label_1913e0:
    // 0x1913e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1913e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1913e4:
    // 0x1913e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1913e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1913e8:
    // 0x1913e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1913e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1913ec:
    // 0x1913ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1913ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1913f0:
    // 0x1913f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1913f4:
    // 0x1913f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1913f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1913f8:
    // 0x1913f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1913fc:
    // 0x1913fc: 0x320f809  jalr        $t9
label_191400:
    if (ctx->pc == 0x191400u) {
        ctx->pc = 0x191404u;
        goto label_191404;
    }
    ctx->pc = 0x1913FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913FCu, 0x191404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191404u;
label_191404:
    // 0x191404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191408:
    // 0x191408: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19140c:
    // 0x19140c: 0x3e00008  jr          $ra
label_191410:
    if (ctx->pc == 0x191410u) {
        ctx->pc = 0x191414u;
        goto label_191414;
    }
    ctx->pc = 0x19140Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19140Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191414u;
label_191414:
    // 0x191414: 0x0  nop
    ctx->pc = 0x191414u;
    // NOP
label_191418:
    // 0x191418: 0x0  nop
    ctx->pc = 0x191418u;
    // NOP
label_19141c:
    // 0x19141c: 0x0  nop
    ctx->pc = 0x19141cu;
    // NOP
    ctx->pc = 0x191420u;
}
