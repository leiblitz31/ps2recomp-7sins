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

// Function: sub_00108AA0
// Address: 0x108aa0 - 0x108ae0
void sub_00108AA0_0x108aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108AA0_0x108aa0");
#endif

    switch (ctx->pc) {
        case 0x108aa0u: goto label_108aa0;
        case 0x108aa4u: goto label_108aa4;
        case 0x108aa8u: goto label_108aa8;
        case 0x108aacu: goto label_108aac;
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab4u: goto label_108ab4;
        case 0x108ab8u: goto label_108ab8;
        case 0x108abcu: goto label_108abc;
        case 0x108ac0u: goto label_108ac0;
        case 0x108ac4u: goto label_108ac4;
        case 0x108ac8u: goto label_108ac8;
        case 0x108accu: goto label_108acc;
        case 0x108ad0u: goto label_108ad0;
        case 0x108ad4u: goto label_108ad4;
        case 0x108ad8u: goto label_108ad8;
        case 0x108adcu: goto label_108adc;
        default: break;
    }

    ctx->pc = 0x108aa0u;

label_108aa0:
    // 0x108aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_108aa4:
    // 0x108aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108aa8:
    // 0x108aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_108aac:
    // 0x108aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x108aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_108ab0:
    // 0x108ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_108ab4:
    // 0x108ab4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_108ab8:
    // 0x108ab8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x108ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_108abc:
    // 0x108abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x108abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108ac0:
    // 0x108ac0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108ac4:
    // 0x108ac4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x108ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_108ac8:
    // 0x108ac8: 0x320f809  jalr        $t9
label_108acc:
    if (ctx->pc == 0x108ACCu) {
        ctx->pc = 0x108AD0u;
        goto label_108ad0;
    }
    ctx->pc = 0x108AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108AD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AC8u, 0x108AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108AD0u;
label_108ad0:
    // 0x108ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108ad4:
    // 0x108ad4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x108ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_108ad8:
    // 0x108ad8: 0x3e00008  jr          $ra
label_108adc:
    if (ctx->pc == 0x108ADCu) {
        ctx->pc = 0x108AE0u;
        goto label_fallthrough_0x108ad8;
    }
    ctx->pc = 0x108AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108ad8:
    ctx->pc = 0x108AE0u;
}
