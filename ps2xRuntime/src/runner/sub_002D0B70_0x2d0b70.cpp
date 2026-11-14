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

// Function: sub_002D0B70
// Address: 0x2d0b70 - 0x2d0bb0
void sub_002D0B70_0x2d0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0B70_0x2d0b70");
#endif

    switch (ctx->pc) {
        case 0x2d0b70u: goto label_2d0b70;
        case 0x2d0b74u: goto label_2d0b74;
        case 0x2d0b78u: goto label_2d0b78;
        case 0x2d0b7cu: goto label_2d0b7c;
        case 0x2d0b80u: goto label_2d0b80;
        case 0x2d0b84u: goto label_2d0b84;
        case 0x2d0b88u: goto label_2d0b88;
        case 0x2d0b8cu: goto label_2d0b8c;
        case 0x2d0b90u: goto label_2d0b90;
        case 0x2d0b94u: goto label_2d0b94;
        case 0x2d0b98u: goto label_2d0b98;
        case 0x2d0b9cu: goto label_2d0b9c;
        case 0x2d0ba0u: goto label_2d0ba0;
        case 0x2d0ba4u: goto label_2d0ba4;
        case 0x2d0ba8u: goto label_2d0ba8;
        case 0x2d0bacu: goto label_2d0bac;
        default: break;
    }

    ctx->pc = 0x2d0b70u;

label_2d0b70:
    // 0x2d0b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0b74:
    // 0x2d0b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d0b78:
    // 0x2d0b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d0b7c:
    // 0x2d0b7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0b80:
    // 0x2d0b80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d0b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d0b84:
    // 0x2d0b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d0b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d0b88:
    // 0x2d0b88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d0b8c:
    // 0x2d0b8c: 0x320f809  jalr        $t9
label_2d0b90:
    if (ctx->pc == 0x2D0B90u) {
        ctx->pc = 0x2D0B94u;
        goto label_2d0b94;
    }
    ctx->pc = 0x2D0B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D0B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B8Cu, 0x2D0B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0b98:
    // 0x2d0b98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d0b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d0b9c:
    // 0x2d0b9c: 0x3e00008  jr          $ra
label_2d0ba0:
    if (ctx->pc == 0x2D0BA0u) {
        ctx->pc = 0x2D0BA4u;
        goto label_2d0ba4;
    }
    ctx->pc = 0x2D0B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0BA4u;
label_2d0ba4:
    // 0x2d0ba4: 0x0  nop
    ctx->pc = 0x2d0ba4u;
    // NOP
label_2d0ba8:
    // 0x2d0ba8: 0x0  nop
    ctx->pc = 0x2d0ba8u;
    // NOP
label_2d0bac:
    // 0x2d0bac: 0x0  nop
    ctx->pc = 0x2d0bacu;
    // NOP
    ctx->pc = 0x2d0bb0u;
}
