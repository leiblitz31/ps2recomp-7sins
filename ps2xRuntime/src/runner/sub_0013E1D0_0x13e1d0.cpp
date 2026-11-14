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

// Function: sub_0013E1D0
// Address: 0x13e1d0 - 0x13e210
void sub_0013E1D0_0x13e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E1D0_0x13e1d0");
#endif

    switch (ctx->pc) {
        case 0x13e1d0u: goto label_13e1d0;
        case 0x13e1d4u: goto label_13e1d4;
        case 0x13e1d8u: goto label_13e1d8;
        case 0x13e1dcu: goto label_13e1dc;
        case 0x13e1e0u: goto label_13e1e0;
        case 0x13e1e4u: goto label_13e1e4;
        case 0x13e1e8u: goto label_13e1e8;
        case 0x13e1ecu: goto label_13e1ec;
        case 0x13e1f0u: goto label_13e1f0;
        case 0x13e1f4u: goto label_13e1f4;
        case 0x13e1f8u: goto label_13e1f8;
        case 0x13e1fcu: goto label_13e1fc;
        case 0x13e200u: goto label_13e200;
        case 0x13e204u: goto label_13e204;
        case 0x13e208u: goto label_13e208;
        case 0x13e20cu: goto label_13e20c;
        default: break;
    }

    ctx->pc = 0x13e1d0u;

label_13e1d0:
    // 0x13e1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e1d4:
    // 0x13e1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13e1d8:
    // 0x13e1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13e1dc:
    // 0x13e1dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e1e0:
    // 0x13e1e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e1e4:
    // 0x13e1e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e1e8:
    // 0x13e1e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13e1ec:
    // 0x13e1ec: 0x320f809  jalr        $t9
label_13e1f0:
    if (ctx->pc == 0x13E1F0u) {
        ctx->pc = 0x13E1F4u;
        goto label_13e1f4;
    }
    ctx->pc = 0x13E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E1F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1ECu, 0x13E1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E1F4u;
label_13e1f4:
    // 0x13e1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e1f8:
    // 0x13e1f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e1fc:
    // 0x13e1fc: 0x3e00008  jr          $ra
label_13e200:
    if (ctx->pc == 0x13E200u) {
        ctx->pc = 0x13E204u;
        goto label_13e204;
    }
    ctx->pc = 0x13E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E204u;
label_13e204:
    // 0x13e204: 0x0  nop
    ctx->pc = 0x13e204u;
    // NOP
label_13e208:
    // 0x13e208: 0x0  nop
    ctx->pc = 0x13e208u;
    // NOP
label_13e20c:
    // 0x13e20c: 0x0  nop
    ctx->pc = 0x13e20cu;
    // NOP
    ctx->pc = 0x13e210u;
}
