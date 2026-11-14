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

// Function: sub_00104B30
// Address: 0x104b30 - 0x104b70
void sub_00104B30_0x104b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104B30_0x104b30");
#endif

    switch (ctx->pc) {
        case 0x104b30u: goto label_104b30;
        case 0x104b34u: goto label_104b34;
        case 0x104b38u: goto label_104b38;
        case 0x104b3cu: goto label_104b3c;
        case 0x104b40u: goto label_104b40;
        case 0x104b44u: goto label_104b44;
        case 0x104b48u: goto label_104b48;
        case 0x104b4cu: goto label_104b4c;
        case 0x104b50u: goto label_104b50;
        case 0x104b54u: goto label_104b54;
        case 0x104b58u: goto label_104b58;
        case 0x104b5cu: goto label_104b5c;
        case 0x104b60u: goto label_104b60;
        case 0x104b64u: goto label_104b64;
        case 0x104b68u: goto label_104b68;
        case 0x104b6cu: goto label_104b6c;
        default: break;
    }

    ctx->pc = 0x104b30u;

label_104b30:
    // 0x104b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_104b34:
    // 0x104b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_104b38:
    // 0x104b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x104b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_104b3c:
    // 0x104b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x104b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_104b40:
    // 0x104b40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x104b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_104b44:
    // 0x104b44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x104b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_104b48:
    // 0x104b48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_104b4c:
    // 0x104b4c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x104b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_104b50:
    // 0x104b50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104b54:
    // 0x104b54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_104b58:
    // 0x104b58: 0x320f809  jalr        $t9
label_104b5c:
    if (ctx->pc == 0x104B5Cu) {
        ctx->pc = 0x104B60u;
        goto label_104b60;
    }
    ctx->pc = 0x104B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104B60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B58u, 0x104B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104B60u;
label_104b60:
    // 0x104b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104b64:
    // 0x104b64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_104b68:
    // 0x104b68: 0x3e00008  jr          $ra
label_104b6c:
    if (ctx->pc == 0x104B6Cu) {
        ctx->pc = 0x104B70u;
        goto label_fallthrough_0x104b68;
    }
    ctx->pc = 0x104B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104b68:
    ctx->pc = 0x104B70u;
}
