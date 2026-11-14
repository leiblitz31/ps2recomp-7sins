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

// Function: sub_0023FDD0
// Address: 0x23fdd0 - 0x23fe50
void sub_0023FDD0_0x23fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FDD0_0x23fdd0");
#endif

    switch (ctx->pc) {
        case 0x23fdf4u: goto label_23fdf4;
        case 0x23fe38u: goto label_23fe38;
        default: break;
    }

    ctx->pc = 0x23fdd0u;

    // 0x23fdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fdd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fdd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23fddc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fde0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fde4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fde8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23fdec: 0xc08fd40  jal         func_23F500
    ctx->pc = 0x23FDECu;
    SET_GPR_U32(ctx, 31, 0x23FDF4u);
    ctx->pc = 0x23F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F500u, 0x23FDECu, 0x23FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDF4u;
label_23fdf4:
    // 0x23fdf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fdf8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fdfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fe00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fe04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fe08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fe0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fe10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23fe14: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x23fe14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x23fe18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FE18u;
    {
        const bool branch_taken_0x23fe18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23fe18) {
            ctx->pc = 0x23FE28u;
            goto label_23fe28;
        }
    }
    ctx->pc = 0x23FE20u;
    // 0x23fe20: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x23fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x23fe24: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x23fe24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_23fe28:
    // 0x23fe28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23fe2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23fe30: 0xc090048  jal         func_240120
    ctx->pc = 0x23FE30u;
    SET_GPR_U32(ctx, 31, 0x23FE38u);
    ctx->pc = 0x240120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240120u, 0x23FE30u, 0x23FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE38u;
label_23fe38:
    // 0x23fe38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fe3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23fe3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FE48u;
    // 0x23fe48: 0x0  nop
    ctx->pc = 0x23fe48u;
    // NOP
    // 0x23fe4c: 0x0  nop
    ctx->pc = 0x23fe4cu;
    // NOP
    ctx->pc = 0x23fe50u;
}
