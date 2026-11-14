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

// Function: sub_0023ECB0
// Address: 0x23ecb0 - 0x23ed40
void sub_0023ECB0_0x23ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ECB0_0x23ecb0");
#endif

    switch (ctx->pc) {
        case 0x23ecccu: goto label_23eccc;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ecf4u: goto label_23ecf4;
        case 0x23ed08u: goto label_23ed08;
        case 0x23ed1cu: goto label_23ed1c;
        default: break;
    }

    ctx->pc = 0x23ecb0u;

label_23ecb0:
    // 0x23ecb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23ecb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ecb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ecbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23ecc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23ecc4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23ECC4u;
    {
        const bool branch_taken_0x23ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ecc4) {
            ctx->pc = 0x23ED20u;
            goto label_23ed20;
        }
    }
    ctx->pc = 0x23ECCCu;
label_23eccc:
    // 0x23eccc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ecd0: 0xc08f43c  jal         func_23D0F0
    ctx->pc = 0x23ECD0u;
    SET_GPR_U32(ctx, 31, 0x23ECD8u);
    ctx->pc = 0x23D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0F0u, 0x23ECD0u, 0x23ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECD8u;
label_23ecd8:
    // 0x23ecd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ecdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ece0: 0xc08fb2c  jal         func_23ECB0
    ctx->pc = 0x23ECE0u;
    SET_GPR_U32(ctx, 31, 0x23ECE8u);
    ctx->pc = 0x23ECB0u;
    goto label_23ecb0;
    ctx->pc = 0x23ECE8u;
label_23ece8:
    // 0x23ece8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ecec: 0xc08f444  jal         func_23D110
    ctx->pc = 0x23ECECu;
    SET_GPR_U32(ctx, 31, 0x23ECF4u);
    ctx->pc = 0x23D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D110u, 0x23ECECu, 0x23ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECF4u;
label_23ecf4:
    // 0x23ecf4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ecf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ecfc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x23ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23ed00: 0xc08fb50  jal         func_23ED40
    ctx->pc = 0x23ED00u;
    SET_GPR_U32(ctx, 31, 0x23ED08u);
    ctx->pc = 0x23ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED40u, 0x23ED00u, 0x23ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED08u;
label_23ed08:
    // 0x23ed08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ed0c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ed10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ed14: 0xc08f898  jal         func_23E260
    ctx->pc = 0x23ED14u;
    SET_GPR_U32(ctx, 31, 0x23ED1Cu);
    ctx->pc = 0x23E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E260u, 0x23ED14u, 0x23ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED1Cu;
label_23ed1c:
    // 0x23ed1c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x23ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_23ed20:
    // 0x23ed20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ed24: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23ED24u;
    {
        const bool branch_taken_0x23ed24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ed24) {
            ctx->pc = 0x23ECCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eccc;
        }
    }
    ctx->pc = 0x23ED2Cu;
    // 0x23ed2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ed30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ed30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ed34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23ed34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23ed38: 0x3e00008  jr          $ra
    ctx->pc = 0x23ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ED40u;
}
