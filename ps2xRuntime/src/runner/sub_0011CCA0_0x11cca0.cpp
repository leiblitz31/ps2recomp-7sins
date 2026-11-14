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

// Function: sub_0011CCA0
// Address: 0x11cca0 - 0x11ccf0
void sub_0011CCA0_0x11cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CCA0_0x11cca0");
#endif

    switch (ctx->pc) {
        case 0x11cca0u: goto label_11cca0;
        case 0x11cca4u: goto label_11cca4;
        case 0x11cca8u: goto label_11cca8;
        case 0x11ccacu: goto label_11ccac;
        case 0x11ccb0u: goto label_11ccb0;
        case 0x11ccb4u: goto label_11ccb4;
        case 0x11ccb8u: goto label_11ccb8;
        case 0x11ccbcu: goto label_11ccbc;
        case 0x11ccc0u: goto label_11ccc0;
        case 0x11ccc4u: goto label_11ccc4;
        case 0x11ccc8u: goto label_11ccc8;
        case 0x11ccccu: goto label_11cccc;
        case 0x11ccd0u: goto label_11ccd0;
        case 0x11ccd4u: goto label_11ccd4;
        case 0x11ccd8u: goto label_11ccd8;
        case 0x11ccdcu: goto label_11ccdc;
        case 0x11cce0u: goto label_11cce0;
        case 0x11cce4u: goto label_11cce4;
        case 0x11cce8u: goto label_11cce8;
        case 0x11ccecu: goto label_11ccec;
        default: break;
    }

    ctx->pc = 0x11cca0u;

label_11cca0:
    // 0x11cca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11cca4:
    // 0x11cca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11cca8:
    // 0x11cca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11ccac:
    // 0x11ccac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_11ccb0:
    // 0x11ccb0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x11ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_11ccb4:
    // 0x11ccb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11ccb8:
    // 0x11ccb8: 0xc086230  jal         func_2188C0
label_11ccbc:
    if (ctx->pc == 0x11CCBCu) {
        ctx->pc = 0x11CCC0u;
        goto label_11ccc0;
    }
    ctx->pc = 0x11CCB8u;
    SET_GPR_U32(ctx, 31, 0x11CCC0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x11CCB8u, 0x11CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCC0u;
label_11ccc0:
    // 0x11ccc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11ccc4:
    // 0x11ccc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11ccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ccc8:
    // 0x11ccc8: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x11ccc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_11cccc:
    // 0x11cccc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11ccccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11ccd0:
    // 0x11ccd0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_11ccd4:
    // 0x11ccd4: 0x320f809  jalr        $t9
label_11ccd8:
    if (ctx->pc == 0x11CCD8u) {
        ctx->pc = 0x11CCDCu;
        goto label_11ccdc;
    }
    ctx->pc = 0x11CCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11CCDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CCD4u, 0x11CCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CCDCu;
label_11ccdc:
    // 0x11ccdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ccdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cce0:
    // 0x11cce0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11cce4:
    // 0x11cce4: 0x3e00008  jr          $ra
label_11cce8:
    if (ctx->pc == 0x11CCE8u) {
        ctx->pc = 0x11CCECu;
        goto label_11ccec;
    }
    ctx->pc = 0x11CCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CCECu;
label_11ccec:
    // 0x11ccec: 0x0  nop
    ctx->pc = 0x11ccecu;
    // NOP
    ctx->pc = 0x11ccf0u;
}
