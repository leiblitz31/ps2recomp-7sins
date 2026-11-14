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

// Function: sub_0044ED50
// Address: 0x44ed50 - 0x44ede0
void sub_0044ED50_0x44ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ED50_0x44ed50");
#endif

    switch (ctx->pc) {
        case 0x44ed50u: goto label_44ed50;
        case 0x44ed54u: goto label_44ed54;
        case 0x44ed58u: goto label_44ed58;
        case 0x44ed5cu: goto label_44ed5c;
        case 0x44ed60u: goto label_44ed60;
        case 0x44ed64u: goto label_44ed64;
        case 0x44ed68u: goto label_44ed68;
        case 0x44ed6cu: goto label_44ed6c;
        case 0x44ed70u: goto label_44ed70;
        case 0x44ed74u: goto label_44ed74;
        case 0x44ed78u: goto label_44ed78;
        case 0x44ed7cu: goto label_44ed7c;
        case 0x44ed80u: goto label_44ed80;
        case 0x44ed84u: goto label_44ed84;
        case 0x44ed88u: goto label_44ed88;
        case 0x44ed8cu: goto label_44ed8c;
        case 0x44ed90u: goto label_44ed90;
        case 0x44ed94u: goto label_44ed94;
        case 0x44ed98u: goto label_44ed98;
        case 0x44ed9cu: goto label_44ed9c;
        case 0x44eda0u: goto label_44eda0;
        case 0x44eda4u: goto label_44eda4;
        case 0x44eda8u: goto label_44eda8;
        case 0x44edacu: goto label_44edac;
        case 0x44edb0u: goto label_44edb0;
        case 0x44edb4u: goto label_44edb4;
        case 0x44edb8u: goto label_44edb8;
        case 0x44edbcu: goto label_44edbc;
        case 0x44edc0u: goto label_44edc0;
        case 0x44edc4u: goto label_44edc4;
        case 0x44edc8u: goto label_44edc8;
        case 0x44edccu: goto label_44edcc;
        case 0x44edd0u: goto label_44edd0;
        case 0x44edd4u: goto label_44edd4;
        case 0x44edd8u: goto label_44edd8;
        case 0x44eddcu: goto label_44eddc;
        default: break;
    }

    ctx->pc = 0x44ed50u;

label_44ed50:
    // 0x44ed50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ed54:
    // 0x44ed54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ed58:
    // 0x44ed58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ed5c:
    // 0x44ed5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed60:
    // 0x44ed60: 0xc113b08  jal         func_44EC20
label_44ed64:
    if (ctx->pc == 0x44ED64u) {
        ctx->pc = 0x44ED68u;
        goto label_44ed68;
    }
    ctx->pc = 0x44ED60u;
    SET_GPR_U32(ctx, 31, 0x44ED68u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44ED60u, 0x44ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44ED68u;
label_44ed68:
    // 0x44ed68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ed6c:
    // 0x44ed6c: 0x24636b50  addiu       $v1, $v1, 0x6B50
    ctx->pc = 0x44ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27472));
label_44ed70:
    // 0x44ed70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed74:
    // 0x44ed74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ed78:
    // 0x44ed78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed7c:
    // 0x44ed7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ed7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ed80:
    // 0x44ed80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ed80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ed84:
    // 0x44ed84: 0x320f809  jalr        $t9
label_44ed88:
    if (ctx->pc == 0x44ED88u) {
        ctx->pc = 0x44ED8Cu;
        goto label_44ed8c;
    }
    ctx->pc = 0x44ED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44ED8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED84u, 0x44ED8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ED8Cu;
label_44ed8c:
    // 0x44ed8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed90:
    // 0x44ed90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ed94:
    // 0x44ed94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ed94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ed98:
    // 0x44ed98: 0x3e00008  jr          $ra
label_44ed9c:
    if (ctx->pc == 0x44ED9Cu) {
        ctx->pc = 0x44EDA0u;
        goto label_44eda0;
    }
    ctx->pc = 0x44ED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EDA0u;
label_44eda0:
    // 0x44eda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44eda4:
    // 0x44eda4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44eda8:
    // 0x44eda8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44edac:
    // 0x44edac: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x44edacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
label_44edb0:
    // 0x44edb0: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x44edb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
label_44edb4:
    // 0x44edb4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x44edb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_44edb8:
    // 0x44edb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44edbc:
    // 0x44edbc: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x44edbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_44edc0:
    // 0x44edc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44edc4:
    // 0x44edc4: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x44edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_44edc8:
    // 0x44edc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44edc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44edcc:
    // 0x44edcc: 0x3e00008  jr          $ra
label_44edd0:
    if (ctx->pc == 0x44EDD0u) {
        ctx->pc = 0x44EDD4u;
        goto label_44edd4;
    }
    ctx->pc = 0x44EDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EDD4u;
label_44edd4:
    // 0x44edd4: 0x0  nop
    ctx->pc = 0x44edd4u;
    // NOP
label_44edd8:
    // 0x44edd8: 0x0  nop
    ctx->pc = 0x44edd8u;
    // NOP
label_44eddc:
    // 0x44eddc: 0x0  nop
    ctx->pc = 0x44eddcu;
    // NOP
    ctx->pc = 0x44ede0u;
}
