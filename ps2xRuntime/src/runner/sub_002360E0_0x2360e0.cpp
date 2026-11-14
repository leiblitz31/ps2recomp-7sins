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

// Function: sub_002360E0
// Address: 0x2360e0 - 0x236120
void sub_002360E0_0x2360e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002360E0_0x2360e0");
#endif

    switch (ctx->pc) {
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        default: break;
    }

    ctx->pc = 0x2360e0u;

label_2360e0:
    // 0x2360e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2360e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2360e4:
    // 0x2360e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2360e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2360e8:
    // 0x2360e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2360e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2360ec:
    // 0x2360ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2360f0:
    // 0x2360f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2360f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2360f4:
    // 0x2360f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2360f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2360f8:
    // 0x2360f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2360f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2360fc:
    // 0x2360fc: 0x320f809  jalr        $t9
label_236100:
    if (ctx->pc == 0x236100u) {
        ctx->pc = 0x236104u;
        goto label_236104;
    }
    ctx->pc = 0x2360FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360FCu, 0x236104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236104u;
label_236104:
    // 0x236104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236108:
    // 0x236108: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x236108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23610c:
    // 0x23610c: 0x3e00008  jr          $ra
label_236110:
    if (ctx->pc == 0x236110u) {
        ctx->pc = 0x236114u;
        goto label_236114;
    }
    ctx->pc = 0x23610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23610Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236114u;
label_236114:
    // 0x236114: 0x0  nop
    ctx->pc = 0x236114u;
    // NOP
label_236118:
    // 0x236118: 0x0  nop
    ctx->pc = 0x236118u;
    // NOP
label_23611c:
    // 0x23611c: 0x0  nop
    ctx->pc = 0x23611cu;
    // NOP
    ctx->pc = 0x236120u;
}
