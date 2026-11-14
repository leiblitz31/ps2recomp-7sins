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

// Function: sub_001196F0
// Address: 0x1196f0 - 0x119730
void sub_001196F0_0x1196f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001196F0_0x1196f0");
#endif

    switch (ctx->pc) {
        case 0x1196f0u: goto label_1196f0;
        case 0x1196f4u: goto label_1196f4;
        case 0x1196f8u: goto label_1196f8;
        case 0x1196fcu: goto label_1196fc;
        case 0x119700u: goto label_119700;
        case 0x119704u: goto label_119704;
        case 0x119708u: goto label_119708;
        case 0x11970cu: goto label_11970c;
        case 0x119710u: goto label_119710;
        case 0x119714u: goto label_119714;
        case 0x119718u: goto label_119718;
        case 0x11971cu: goto label_11971c;
        case 0x119720u: goto label_119720;
        case 0x119724u: goto label_119724;
        case 0x119728u: goto label_119728;
        case 0x11972cu: goto label_11972c;
        default: break;
    }

    ctx->pc = 0x1196f0u;

label_1196f0:
    // 0x1196f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1196f4:
    // 0x1196f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1196f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1196f8:
    // 0x1196f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1196f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1196fc:
    // 0x1196fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1196fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119700:
    // 0x119700: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119704:
    // 0x119704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119708:
    // 0x119708: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_11970c:
    // 0x11970c: 0x320f809  jalr        $t9
label_119710:
    if (ctx->pc == 0x119710u) {
        ctx->pc = 0x119714u;
        goto label_119714;
    }
    ctx->pc = 0x11970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119714u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11970Cu, 0x119714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119714u;
label_119714:
    // 0x119714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119718:
    // 0x119718: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11971c:
    // 0x11971c: 0x3e00008  jr          $ra
label_119720:
    if (ctx->pc == 0x119720u) {
        ctx->pc = 0x119724u;
        goto label_119724;
    }
    ctx->pc = 0x11971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11971Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119724u;
label_119724:
    // 0x119724: 0x0  nop
    ctx->pc = 0x119724u;
    // NOP
label_119728:
    // 0x119728: 0x0  nop
    ctx->pc = 0x119728u;
    // NOP
label_11972c:
    // 0x11972c: 0x0  nop
    ctx->pc = 0x11972cu;
    // NOP
    ctx->pc = 0x119730u;
}
