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

// Function: sub_0046CD90
// Address: 0x46cd90 - 0x46ce20
void sub_0046CD90_0x46cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CD90_0x46cd90");
#endif

    switch (ctx->pc) {
        case 0x46cdb8u: goto label_46cdb8;
        case 0x46cde4u: goto label_46cde4;
        case 0x46ce04u: goto label_46ce04;
        default: break;
    }

    ctx->pc = 0x46cd90u;

    // 0x46cd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46cd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46cd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46cd9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46cda0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x46cda4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cda8: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x46cda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x46cdac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cdb0: 0xc11b3bc  jal         func_46CEF0
    ctx->pc = 0x46CDB0u;
    SET_GPR_U32(ctx, 31, 0x46CDB8u);
    ctx->pc = 0x46CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CEF0u, 0x46CDB0u, 0x46CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CDB8u;
label_46cdb8:
    // 0x46cdb8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46CDB8u;
    {
        const bool branch_taken_0x46cdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x46cdb8) {
            ctx->pc = 0x46CDE4u;
            goto label_46cde4;
        }
    }
    ctx->pc = 0x46CDC0u;
    // 0x46cdc0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cdc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cdc8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x46cdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x46cdcc: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x46cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x46cdd0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46cdd4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x46cdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46cdd8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x46cdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x46cddc: 0xc11b388  jal         func_46CE20
    ctx->pc = 0x46CDDCu;
    SET_GPR_U32(ctx, 31, 0x46CDE4u);
    ctx->pc = 0x46CE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CE20u, 0x46CDDCu, 0x46CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CDE4u;
label_46cde4:
    // 0x46cde4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cde8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x46cdec: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x46cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x46cdf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x46cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x46cdf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cdf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46cdfc: 0xc11afc8  jal         func_46BF20
    ctx->pc = 0x46CDFCu;
    SET_GPR_U32(ctx, 31, 0x46CE04u);
    ctx->pc = 0x46BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF20u, 0x46CDFCu, 0x46CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CE04u;
label_46ce04:
    // 0x46ce04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46ce08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46ce08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ce0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ce0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ce10: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46ce14: 0x3e00008  jr          $ra
    ctx->pc = 0x46CE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CE1Cu;
    // 0x46ce1c: 0x0  nop
    ctx->pc = 0x46ce1cu;
    // NOP
    ctx->pc = 0x46ce20u;
}
