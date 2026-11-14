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

// Function: sub_002D8B10
// Address: 0x2d8b10 - 0x2d8b60
void sub_002D8B10_0x2d8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8B10_0x2d8b10");
#endif

    switch (ctx->pc) {
        case 0x2d8b10u: goto label_2d8b10;
        case 0x2d8b14u: goto label_2d8b14;
        case 0x2d8b18u: goto label_2d8b18;
        case 0x2d8b1cu: goto label_2d8b1c;
        case 0x2d8b20u: goto label_2d8b20;
        case 0x2d8b24u: goto label_2d8b24;
        case 0x2d8b28u: goto label_2d8b28;
        case 0x2d8b2cu: goto label_2d8b2c;
        case 0x2d8b30u: goto label_2d8b30;
        case 0x2d8b34u: goto label_2d8b34;
        case 0x2d8b38u: goto label_2d8b38;
        case 0x2d8b3cu: goto label_2d8b3c;
        case 0x2d8b40u: goto label_2d8b40;
        case 0x2d8b44u: goto label_2d8b44;
        case 0x2d8b48u: goto label_2d8b48;
        case 0x2d8b4cu: goto label_2d8b4c;
        case 0x2d8b50u: goto label_2d8b50;
        case 0x2d8b54u: goto label_2d8b54;
        case 0x2d8b58u: goto label_2d8b58;
        case 0x2d8b5cu: goto label_2d8b5c;
        default: break;
    }

    ctx->pc = 0x2d8b10u;

label_2d8b10:
    // 0x2d8b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d8b14:
    // 0x2d8b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d8b18:
    // 0x2d8b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d8b1c:
    // 0x2d8b1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8b20:
    // 0x2d8b20: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2d8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2d8b24:
    // 0x2d8b24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2d8b28:
    if (ctx->pc == 0x2D8B28u) {
        ctx->pc = 0x2D8B2Cu;
        goto label_2d8b2c;
    }
    ctx->pc = 0x2D8B24u;
    {
        const bool branch_taken_0x2d8b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b24) {
            ctx->pc = 0x2D8B4Cu;
            goto label_2d8b4c;
        }
    }
    ctx->pc = 0x2D8B2Cu;
label_2d8b2c:
    // 0x2d8b2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8b30:
    // 0x2d8b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8b34:
    // 0x2d8b34: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2d8b38:
    // 0x2d8b38: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2d8b3c:
    // 0x2d8b3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8b40:
    // 0x2d8b40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2d8b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2d8b44:
    // 0x2d8b44: 0x320f809  jalr        $t9
label_2d8b48:
    if (ctx->pc == 0x2D8B48u) {
        ctx->pc = 0x2D8B4Cu;
        goto label_2d8b4c;
    }
    ctx->pc = 0x2D8B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8B4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B44u, 0x2D8B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8B4Cu;
label_2d8b4c:
    // 0x2d8b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8b50:
    // 0x2d8b50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d8b54:
    // 0x2d8b54: 0x3e00008  jr          $ra
label_2d8b58:
    if (ctx->pc == 0x2D8B58u) {
        ctx->pc = 0x2D8B5Cu;
        goto label_2d8b5c;
    }
    ctx->pc = 0x2D8B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8B5Cu;
label_2d8b5c:
    // 0x2d8b5c: 0x0  nop
    ctx->pc = 0x2d8b5cu;
    // NOP
    ctx->pc = 0x2d8b60u;
}
