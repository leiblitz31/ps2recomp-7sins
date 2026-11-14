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

// Function: sub_0016FC30
// Address: 0x16fc30 - 0x16fc70
void sub_0016FC30_0x16fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FC30_0x16fc30");
#endif

    switch (ctx->pc) {
        case 0x16fc30u: goto label_16fc30;
        case 0x16fc34u: goto label_16fc34;
        case 0x16fc38u: goto label_16fc38;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc40u: goto label_16fc40;
        case 0x16fc44u: goto label_16fc44;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc4cu: goto label_16fc4c;
        case 0x16fc50u: goto label_16fc50;
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc58u: goto label_16fc58;
        case 0x16fc5cu: goto label_16fc5c;
        case 0x16fc60u: goto label_16fc60;
        case 0x16fc64u: goto label_16fc64;
        case 0x16fc68u: goto label_16fc68;
        case 0x16fc6cu: goto label_16fc6c;
        default: break;
    }

    ctx->pc = 0x16fc30u;

label_16fc30:
    // 0x16fc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16fc34:
    // 0x16fc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fc38:
    // 0x16fc38: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_16fc3c:
    // 0x16fc3c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fc40:
    // 0x16fc40: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fc44:
    // 0x16fc44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fc48:
    // 0x16fc48: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_16fc4c:
    // 0x16fc4c: 0x320f809  jalr        $t9
label_16fc50:
    if (ctx->pc == 0x16FC50u) {
        ctx->pc = 0x16FC54u;
        goto label_16fc54;
    }
    ctx->pc = 0x16FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FC54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC4Cu, 0x16FC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC54u;
label_16fc54:
    // 0x16fc54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fc58:
    // 0x16fc58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16fc5c:
    // 0x16fc5c: 0x3e00008  jr          $ra
label_16fc60:
    if (ctx->pc == 0x16FC60u) {
        ctx->pc = 0x16FC64u;
        goto label_16fc64;
    }
    ctx->pc = 0x16FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC64u;
label_16fc64:
    // 0x16fc64: 0x0  nop
    ctx->pc = 0x16fc64u;
    // NOP
label_16fc68:
    // 0x16fc68: 0x0  nop
    ctx->pc = 0x16fc68u;
    // NOP
label_16fc6c:
    // 0x16fc6c: 0x0  nop
    ctx->pc = 0x16fc6cu;
    // NOP
    ctx->pc = 0x16fc70u;
}
