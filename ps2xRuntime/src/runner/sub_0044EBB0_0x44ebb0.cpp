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

// Function: sub_0044EBB0
// Address: 0x44ebb0 - 0x44ec20
void sub_0044EBB0_0x44ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EBB0_0x44ebb0");
#endif

    switch (ctx->pc) {
        case 0x44ebb0u: goto label_44ebb0;
        case 0x44ebb4u: goto label_44ebb4;
        case 0x44ebb8u: goto label_44ebb8;
        case 0x44ebbcu: goto label_44ebbc;
        case 0x44ebc0u: goto label_44ebc0;
        case 0x44ebc4u: goto label_44ebc4;
        case 0x44ebc8u: goto label_44ebc8;
        case 0x44ebccu: goto label_44ebcc;
        case 0x44ebd0u: goto label_44ebd0;
        case 0x44ebd4u: goto label_44ebd4;
        case 0x44ebd8u: goto label_44ebd8;
        case 0x44ebdcu: goto label_44ebdc;
        case 0x44ebe0u: goto label_44ebe0;
        case 0x44ebe4u: goto label_44ebe4;
        case 0x44ebe8u: goto label_44ebe8;
        case 0x44ebecu: goto label_44ebec;
        case 0x44ebf0u: goto label_44ebf0;
        case 0x44ebf4u: goto label_44ebf4;
        case 0x44ebf8u: goto label_44ebf8;
        case 0x44ebfcu: goto label_44ebfc;
        case 0x44ec00u: goto label_44ec00;
        case 0x44ec04u: goto label_44ec04;
        case 0x44ec08u: goto label_44ec08;
        case 0x44ec0cu: goto label_44ec0c;
        case 0x44ec10u: goto label_44ec10;
        case 0x44ec14u: goto label_44ec14;
        case 0x44ec18u: goto label_44ec18;
        case 0x44ec1cu: goto label_44ec1c;
        default: break;
    }

    ctx->pc = 0x44ebb0u;

label_44ebb0:
    // 0x44ebb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ebb4:
    // 0x44ebb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ebb8:
    // 0x44ebb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ebbc:
    // 0x44ebbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ebc0:
    // 0x44ebc0: 0xc113b08  jal         func_44EC20
label_44ebc4:
    if (ctx->pc == 0x44EBC4u) {
        ctx->pc = 0x44EBC8u;
        goto label_44ebc8;
    }
    ctx->pc = 0x44EBC0u;
    SET_GPR_U32(ctx, 31, 0x44EBC8u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EBC0u, 0x44EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EBC8u;
label_44ebc8:
    // 0x44ebc8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ebcc:
    // 0x44ebcc: 0x24636b90  addiu       $v1, $v1, 0x6B90
    ctx->pc = 0x44ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27536));
label_44ebd0:
    // 0x44ebd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ebd4:
    // 0x44ebd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ebd8:
    // 0x44ebd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ebdc:
    // 0x44ebdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ebdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ebe0:
    // 0x44ebe0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ebe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ebe4:
    // 0x44ebe4: 0x320f809  jalr        $t9
label_44ebe8:
    if (ctx->pc == 0x44EBE8u) {
        ctx->pc = 0x44EBECu;
        goto label_44ebec;
    }
    ctx->pc = 0x44EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EBECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EBE4u, 0x44EBECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EBECu;
label_44ebec:
    // 0x44ebec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ebf0:
    // 0x44ebf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ebf4:
    // 0x44ebf4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ebf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ebf8:
    // 0x44ebf8: 0x3e00008  jr          $ra
label_44ebfc:
    if (ctx->pc == 0x44EBFCu) {
        ctx->pc = 0x44EC00u;
        goto label_44ec00;
    }
    ctx->pc = 0x44EBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EC00u;
label_44ec00:
    // 0x44ec00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44ec04:
    // 0x44ec04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44ec08:
    // 0x44ec08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ec0c:
    // 0x44ec0c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44ec0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44ec10:
    // 0x44ec10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ec14:
    // 0x44ec14: 0x3e00008  jr          $ra
label_44ec18:
    if (ctx->pc == 0x44EC18u) {
        ctx->pc = 0x44EC1Cu;
        goto label_44ec1c;
    }
    ctx->pc = 0x44EC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EC1Cu;
label_44ec1c:
    // 0x44ec1c: 0x0  nop
    ctx->pc = 0x44ec1cu;
    // NOP
    ctx->pc = 0x44ec20u;
}
