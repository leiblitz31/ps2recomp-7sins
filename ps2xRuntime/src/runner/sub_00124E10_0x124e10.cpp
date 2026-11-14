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

// Function: sub_00124E10
// Address: 0x124e10 - 0x124e50
void sub_00124E10_0x124e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124E10_0x124e10");
#endif

    switch (ctx->pc) {
        case 0x124e10u: goto label_124e10;
        case 0x124e14u: goto label_124e14;
        case 0x124e18u: goto label_124e18;
        case 0x124e1cu: goto label_124e1c;
        case 0x124e20u: goto label_124e20;
        case 0x124e24u: goto label_124e24;
        case 0x124e28u: goto label_124e28;
        case 0x124e2cu: goto label_124e2c;
        case 0x124e30u: goto label_124e30;
        case 0x124e34u: goto label_124e34;
        case 0x124e38u: goto label_124e38;
        case 0x124e3cu: goto label_124e3c;
        case 0x124e40u: goto label_124e40;
        case 0x124e44u: goto label_124e44;
        case 0x124e48u: goto label_124e48;
        case 0x124e4cu: goto label_124e4c;
        default: break;
    }

    ctx->pc = 0x124e10u;

label_124e10:
    // 0x124e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124e14:
    // 0x124e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124e18:
    // 0x124e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x124e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_124e1c:
    // 0x124e1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_124e20:
    // 0x124e20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124e24:
    // 0x124e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x124e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124e28:
    // 0x124e28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x124e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_124e2c:
    // 0x124e2c: 0x320f809  jalr        $t9
label_124e30:
    if (ctx->pc == 0x124E30u) {
        ctx->pc = 0x124E34u;
        goto label_124e34;
    }
    ctx->pc = 0x124E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x124E34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E2Cu, 0x124E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124E34u;
label_124e34:
    // 0x124e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124e38:
    // 0x124e38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_124e3c:
    // 0x124e3c: 0x3e00008  jr          $ra
label_124e40:
    if (ctx->pc == 0x124E40u) {
        ctx->pc = 0x124E44u;
        goto label_124e44;
    }
    ctx->pc = 0x124E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E44u;
label_124e44:
    // 0x124e44: 0x0  nop
    ctx->pc = 0x124e44u;
    // NOP
label_124e48:
    // 0x124e48: 0x0  nop
    ctx->pc = 0x124e48u;
    // NOP
label_124e4c:
    // 0x124e4c: 0x0  nop
    ctx->pc = 0x124e4cu;
    // NOP
    ctx->pc = 0x124e50u;
}
