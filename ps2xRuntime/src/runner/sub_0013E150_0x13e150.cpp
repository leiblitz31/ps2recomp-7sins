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

// Function: sub_0013E150
// Address: 0x13e150 - 0x13e190
void sub_0013E150_0x13e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E150_0x13e150");
#endif

    switch (ctx->pc) {
        case 0x13e150u: goto label_13e150;
        case 0x13e154u: goto label_13e154;
        case 0x13e158u: goto label_13e158;
        case 0x13e15cu: goto label_13e15c;
        case 0x13e160u: goto label_13e160;
        case 0x13e164u: goto label_13e164;
        case 0x13e168u: goto label_13e168;
        case 0x13e16cu: goto label_13e16c;
        case 0x13e170u: goto label_13e170;
        case 0x13e174u: goto label_13e174;
        case 0x13e178u: goto label_13e178;
        case 0x13e17cu: goto label_13e17c;
        case 0x13e180u: goto label_13e180;
        case 0x13e184u: goto label_13e184;
        case 0x13e188u: goto label_13e188;
        case 0x13e18cu: goto label_13e18c;
        default: break;
    }

    ctx->pc = 0x13e150u;

label_13e150:
    // 0x13e150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e154:
    // 0x13e154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13e158:
    // 0x13e158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13e158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13e15c:
    // 0x13e15c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e160:
    // 0x13e160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e164:
    // 0x13e164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e168:
    // 0x13e168: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13e168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13e16c:
    // 0x13e16c: 0x320f809  jalr        $t9
label_13e170:
    if (ctx->pc == 0x13E170u) {
        ctx->pc = 0x13E174u;
        goto label_13e174;
    }
    ctx->pc = 0x13E16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E16Cu, 0x13E174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E174u;
label_13e174:
    // 0x13e174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e178:
    // 0x13e178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e17c:
    // 0x13e17c: 0x3e00008  jr          $ra
label_13e180:
    if (ctx->pc == 0x13E180u) {
        ctx->pc = 0x13E184u;
        goto label_13e184;
    }
    ctx->pc = 0x13E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E184u;
label_13e184:
    // 0x13e184: 0x0  nop
    ctx->pc = 0x13e184u;
    // NOP
label_13e188:
    // 0x13e188: 0x0  nop
    ctx->pc = 0x13e188u;
    // NOP
label_13e18c:
    // 0x13e18c: 0x0  nop
    ctx->pc = 0x13e18cu;
    // NOP
    ctx->pc = 0x13e190u;
}
