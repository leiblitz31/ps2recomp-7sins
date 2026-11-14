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

// Function: sub_002BC000
// Address: 0x2bc000 - 0x2bc0a0
void sub_002BC000_0x2bc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC000_0x2bc000");
#endif

    switch (ctx->pc) {
        case 0x2bc080u: goto label_2bc080;
        default: break;
    }

    ctx->pc = 0x2bc000u;

    // 0x2bc000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bc000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bc004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc00c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bc00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bc010: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2bc010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2bc014: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2bc014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2bc018: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc01c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc020: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2bc020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2bc024: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2bc024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bc028: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bc028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc02c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC02Cu;
    {
        const bool branch_taken_0x2bc02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc02c) {
            ctx->pc = 0x2BC050u;
            goto label_2bc050;
        }
    }
    ctx->pc = 0x2BC034u;
    // 0x2bc034: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2bc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bc038: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2bc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc03c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2bc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2bc040: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bc044: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2bc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bc048: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC048u;
    {
        const bool branch_taken_0x2bc048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc048) {
            ctx->pc = 0x2BC080u;
            goto label_2bc080;
        }
    }
    ctx->pc = 0x2BC050u;
label_2bc050:
    // 0x2bc050: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bc054: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bc054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc058: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bc05c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC05Cu;
    {
        const bool branch_taken_0x2bc05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc05c) {
            ctx->pc = 0x2BC080u;
            goto label_2bc080;
        }
    }
    ctx->pc = 0x2BC064u;
    // 0x2bc064: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bc064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc068: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc06c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bc06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bc070: 0x24c6bf60  addiu       $a2, $a2, -0x40A0
    ctx->pc = 0x2bc070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950752));
    // 0x2bc074: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2bc074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc078: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2BC078u;
    SET_GPR_U32(ctx, 31, 0x2BC080u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2BC078u, 0x2BC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC080u;
label_2bc080:
    // 0x2bc080: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc08c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2bc08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bc090: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC098u;
    // 0x2bc098: 0x0  nop
    ctx->pc = 0x2bc098u;
    // NOP
    // 0x2bc09c: 0x0  nop
    ctx->pc = 0x2bc09cu;
    // NOP
    ctx->pc = 0x2bc0a0u;
}
