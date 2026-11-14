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

// Function: sub_0023BDE0
// Address: 0x23bde0 - 0x23be70
void sub_0023BDE0_0x23bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BDE0_0x23bde0");
#endif

    switch (ctx->pc) {
        case 0x23bdfcu: goto label_23bdfc;
        case 0x23be1cu: goto label_23be1c;
        case 0x23be40u: goto label_23be40;
        default: break;
    }

    ctx->pc = 0x23bde0u;

    // 0x23bde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bde8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23bdec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23bdf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bdf4: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x23BDF4u;
    SET_GPR_U32(ctx, 31, 0x23BDFCu);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x23BDF4u, 0x23BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDFCu;
label_23bdfc:
    // 0x23bdfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23be00: 0x24635660  addiu       $v1, $v1, 0x5660
    ctx->pc = 0x23be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22112));
    // 0x23be04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23be0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be10: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23be14: 0xc08f184  jal         func_23C610
    ctx->pc = 0x23BE14u;
    SET_GPR_U32(ctx, 31, 0x23BE1Cu);
    ctx->pc = 0x23C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C610u, 0x23BE14u, 0x23BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE1Cu;
label_23be1c:
    // 0x23be1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23be20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be24: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x23be24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x23be28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be2c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x23be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x23be30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be34: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x23be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23be38: 0xc08f0e0  jal         func_23C380
    ctx->pc = 0x23BE38u;
    SET_GPR_U32(ctx, 31, 0x23BE40u);
    ctx->pc = 0x23C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C380u, 0x23BE38u, 0x23BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE40u;
label_23be40:
    // 0x23be40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be44: 0xaf82bbec  sw          $v0, -0x4414($gp)
    ctx->pc = 0x23be44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949868), GPR_U32(ctx, 2));
    // 0x23be48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23be4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be50: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x23be50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x23be54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23be5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23be60: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BE68u;
    // 0x23be68: 0x0  nop
    ctx->pc = 0x23be68u;
    // NOP
    // 0x23be6c: 0x0  nop
    ctx->pc = 0x23be6cu;
    // NOP
    ctx->pc = 0x23be70u;
}
