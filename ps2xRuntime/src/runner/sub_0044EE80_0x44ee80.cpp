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

// Function: sub_0044EE80
// Address: 0x44ee80 - 0x44eef0
void sub_0044EE80_0x44ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EE80_0x44ee80");
#endif

    switch (ctx->pc) {
        case 0x44ee80u: goto label_44ee80;
        case 0x44ee84u: goto label_44ee84;
        case 0x44ee88u: goto label_44ee88;
        case 0x44ee8cu: goto label_44ee8c;
        case 0x44ee90u: goto label_44ee90;
        case 0x44ee94u: goto label_44ee94;
        case 0x44ee98u: goto label_44ee98;
        case 0x44ee9cu: goto label_44ee9c;
        case 0x44eea0u: goto label_44eea0;
        case 0x44eea4u: goto label_44eea4;
        case 0x44eea8u: goto label_44eea8;
        case 0x44eeacu: goto label_44eeac;
        case 0x44eeb0u: goto label_44eeb0;
        case 0x44eeb4u: goto label_44eeb4;
        case 0x44eeb8u: goto label_44eeb8;
        case 0x44eebcu: goto label_44eebc;
        case 0x44eec0u: goto label_44eec0;
        case 0x44eec4u: goto label_44eec4;
        case 0x44eec8u: goto label_44eec8;
        case 0x44eeccu: goto label_44eecc;
        case 0x44eed0u: goto label_44eed0;
        case 0x44eed4u: goto label_44eed4;
        case 0x44eed8u: goto label_44eed8;
        case 0x44eedcu: goto label_44eedc;
        case 0x44eee0u: goto label_44eee0;
        case 0x44eee4u: goto label_44eee4;
        case 0x44eee8u: goto label_44eee8;
        case 0x44eeecu: goto label_44eeec;
        default: break;
    }

    ctx->pc = 0x44ee80u;

label_44ee80:
    // 0x44ee80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ee84:
    // 0x44ee84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ee88:
    // 0x44ee88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ee8c:
    // 0x44ee8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ee90:
    // 0x44ee90: 0xc113b08  jal         func_44EC20
label_44ee94:
    if (ctx->pc == 0x44EE94u) {
        ctx->pc = 0x44EE98u;
        goto label_44ee98;
    }
    ctx->pc = 0x44EE90u;
    SET_GPR_U32(ctx, 31, 0x44EE98u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EE90u, 0x44EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EE98u;
label_44ee98:
    // 0x44ee98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ee9c:
    // 0x44ee9c: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x44ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
label_44eea0:
    // 0x44eea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44eea4:
    // 0x44eea4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44eea8:
    // 0x44eea8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44eeac:
    // 0x44eeac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44eeacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44eeb0:
    // 0x44eeb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44eeb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44eeb4:
    // 0x44eeb4: 0x320f809  jalr        $t9
label_44eeb8:
    if (ctx->pc == 0x44EEB8u) {
        ctx->pc = 0x44EEBCu;
        goto label_44eebc;
    }
    ctx->pc = 0x44EEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EEBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EEB4u, 0x44EEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EEBCu;
label_44eebc:
    // 0x44eebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44eec0:
    // 0x44eec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44eec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44eec4:
    // 0x44eec4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44eec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44eec8:
    // 0x44eec8: 0x3e00008  jr          $ra
label_44eecc:
    if (ctx->pc == 0x44EECCu) {
        ctx->pc = 0x44EED0u;
        goto label_44eed0;
    }
    ctx->pc = 0x44EEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EED0u;
label_44eed0:
    // 0x44eed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44eed4:
    // 0x44eed4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44eed8:
    // 0x44eed8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44eedc:
    // 0x44eedc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44eedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44eee0:
    // 0x44eee0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44eee4:
    // 0x44eee4: 0x3e00008  jr          $ra
label_44eee8:
    if (ctx->pc == 0x44EEE8u) {
        ctx->pc = 0x44EEECu;
        goto label_44eeec;
    }
    ctx->pc = 0x44EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EEECu;
label_44eeec:
    // 0x44eeec: 0x0  nop
    ctx->pc = 0x44eeecu;
    // NOP
    ctx->pc = 0x44eef0u;
}
