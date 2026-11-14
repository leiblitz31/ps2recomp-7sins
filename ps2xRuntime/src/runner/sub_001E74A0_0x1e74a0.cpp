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

// Function: sub_001E74A0
// Address: 0x1e74a0 - 0x1e7530
void sub_001E74A0_0x1e74a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E74A0_0x1e74a0");
#endif

    switch (ctx->pc) {
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74f4u: goto label_1e74f4;
        default: break;
    }

    ctx->pc = 0x1e74a0u;

    // 0x1e74a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e74a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e74a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e74a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e74ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e74acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e74b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e74b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e74b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e74b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e74bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e74c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e74c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e74c8: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e74cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E74CCu;
    {
        const bool branch_taken_0x1e74cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e74cc) {
            ctx->pc = 0x1E74DCu;
            goto label_1e74dc;
        }
    }
    ctx->pc = 0x1E74D4u;
    // 0x1e74d4: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1e74d8: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_1e74dc:
    // 0x1e74dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E74DCu;
    {
        const bool branch_taken_0x1e74dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e74dc) {
            ctx->pc = 0x1E7510u;
            goto label_1e7510;
        }
    }
    ctx->pc = 0x1E74E4u;
label_1e74e4:
    // 0x1e74e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e74e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e74ec: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1E74ECu;
    SET_GPR_U32(ctx, 31, 0x1E74F4u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1E74ECu, 0x1E74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74F4u;
label_1e74f4:
    // 0x1e74f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e74f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e74fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e7500: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7504: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e7504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e7508: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e7508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e750c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e7510:
    // 0x1e7510: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E7510u;
    {
        const bool branch_taken_0x1e7510 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e7510) {
            ctx->pc = 0x1E74E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e74e4;
        }
    }
    ctx->pc = 0x1E7518u;
    // 0x1e7518: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e751c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7524: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7528: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7530u;
}
