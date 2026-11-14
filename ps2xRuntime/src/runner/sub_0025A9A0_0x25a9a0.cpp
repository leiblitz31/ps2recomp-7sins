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

// Function: sub_0025A9A0
// Address: 0x25a9a0 - 0x25aa30
void sub_0025A9A0_0x25a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A9A0_0x25a9a0");
#endif

    switch (ctx->pc) {
        case 0x25a9e4u: goto label_25a9e4;
        case 0x25a9f4u: goto label_25a9f4;
        default: break;
    }

    ctx->pc = 0x25a9a0u;

    // 0x25a9a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a9ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a9b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a9b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25a9b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a9bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a9c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a9c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25a9c8: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x25a9c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x25a9cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A9CCu;
    {
        const bool branch_taken_0x25a9cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25a9cc) {
            ctx->pc = 0x25A9DCu;
            goto label_25a9dc;
        }
    }
    ctx->pc = 0x25A9D4u;
    // 0x25a9d4: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x25a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x25a9d8: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x25a9d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_25a9dc:
    // 0x25a9dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25A9DCu;
    {
        const bool branch_taken_0x25a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9dc) {
            ctx->pc = 0x25AA10u;
            goto label_25aa10;
        }
    }
    ctx->pc = 0x25A9E4u;
label_25a9e4:
    // 0x25a9e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a9e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a9ec: 0xc096a8c  jal         func_25AA30
    ctx->pc = 0x25A9ECu;
    SET_GPR_U32(ctx, 31, 0x25A9F4u);
    ctx->pc = 0x25AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA30u, 0x25A9ECu, 0x25A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9F4u;
label_25a9f4:
    // 0x25a9f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a9f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25a9fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25aa00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25aa04: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25aa08: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x25aa0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_25aa10:
    // 0x25aa10: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25AA10u;
    {
        const bool branch_taken_0x25aa10 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25aa10) {
            ctx->pc = 0x25A9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a9e4;
        }
    }
    ctx->pc = 0x25AA18u;
    // 0x25aa18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25aa1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25aa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25aa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa24: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25aa24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AA30u;
}
