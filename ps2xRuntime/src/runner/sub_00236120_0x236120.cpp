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

// Function: sub_00236120
// Address: 0x236120 - 0x236160
void sub_00236120_0x236120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236120_0x236120");
#endif

    switch (ctx->pc) {
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        default: break;
    }

    ctx->pc = 0x236120u;

label_236120:
    // 0x236120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236124:
    // 0x236124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_236128:
    // 0x236128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23612c:
    // 0x23612c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23612cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_236130:
    // 0x236130: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236134:
    // 0x236134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236138:
    // 0x236138: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23613c:
    // 0x23613c: 0x320f809  jalr        $t9
label_236140:
    if (ctx->pc == 0x236140u) {
        ctx->pc = 0x236144u;
        goto label_236144;
    }
    ctx->pc = 0x23613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23613Cu, 0x236144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236144u;
label_236144:
    // 0x236144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236148:
    // 0x236148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x236148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23614c:
    // 0x23614c: 0x3e00008  jr          $ra
label_236150:
    if (ctx->pc == 0x236150u) {
        ctx->pc = 0x236154u;
        goto label_236154;
    }
    ctx->pc = 0x23614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236154u;
label_236154:
    // 0x236154: 0x0  nop
    ctx->pc = 0x236154u;
    // NOP
label_236158:
    // 0x236158: 0x0  nop
    ctx->pc = 0x236158u;
    // NOP
label_23615c:
    // 0x23615c: 0x0  nop
    ctx->pc = 0x23615cu;
    // NOP
    ctx->pc = 0x236160u;
}
