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

// Function: sub_00242150
// Address: 0x242150 - 0x242190
void sub_00242150_0x242150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242150_0x242150");
#endif

    switch (ctx->pc) {
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        default: break;
    }

    ctx->pc = 0x242150u;

label_242150:
    // 0x242150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242154:
    // 0x242154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_242158:
    // 0x242158: 0xc090864  jal         func_242190
label_24215c:
    if (ctx->pc == 0x24215Cu) {
        ctx->pc = 0x242160u;
        goto label_242160;
    }
    ctx->pc = 0x242158u;
    SET_GPR_U32(ctx, 31, 0x242160u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x242158u, 0x242160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242160u;
label_242160:
    // 0x242160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x242160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242164:
    // 0x242164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242168:
    // 0x242168: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_24216c:
    // 0x24216c: 0x320f809  jalr        $t9
label_242170:
    if (ctx->pc == 0x242170u) {
        ctx->pc = 0x242174u;
        goto label_242174;
    }
    ctx->pc = 0x24216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24216Cu, 0x242174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242174u;
label_242174:
    // 0x242174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242178:
    // 0x242178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24217c:
    // 0x24217c: 0x3e00008  jr          $ra
label_242180:
    if (ctx->pc == 0x242180u) {
        ctx->pc = 0x242184u;
        goto label_242184;
    }
    ctx->pc = 0x24217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24217Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242184u;
label_242184:
    // 0x242184: 0x0  nop
    ctx->pc = 0x242184u;
    // NOP
label_242188:
    // 0x242188: 0x0  nop
    ctx->pc = 0x242188u;
    // NOP
label_24218c:
    // 0x24218c: 0x0  nop
    ctx->pc = 0x24218cu;
    // NOP
    ctx->pc = 0x242190u;
}
