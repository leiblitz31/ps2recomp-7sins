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

// Function: sub_002B2C60
// Address: 0x2b2c60 - 0x2b2ce0
void sub_002B2C60_0x2b2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2C60_0x2b2c60");
#endif

    switch (ctx->pc) {
        case 0x2b2cc8u: goto label_2b2cc8;
        default: break;
    }

    ctx->pc = 0x2b2c60u;

    // 0x2b2c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b2c6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b2c70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b2c74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2c78: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2c7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c80: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x2b2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x2b2c84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c88: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2b2c8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2C8Cu;
    {
        const bool branch_taken_0x2b2c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c8c) {
            ctx->pc = 0x2B2CA4u;
            goto label_2b2ca4;
        }
    }
    ctx->pc = 0x2B2C94u;
    // 0x2b2c94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c98: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2b2c9c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2b2ca0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2b2ca4:
    // 0x2b2ca4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2ca8: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2b2cac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2CACu;
    {
        const bool branch_taken_0x2b2cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2cac) {
            ctx->pc = 0x2B2CCCu;
            goto label_2b2ccc;
        }
    }
    ctx->pc = 0x2B2CB4u;
    // 0x2b2cb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2cb8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2b2cbc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b2cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b2cc0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B2CC0u;
    SET_GPR_U32(ctx, 31, 0x2B2CC8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2CC0u, 0x2B2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CC8u;
label_2b2cc8:
    // 0x2b2cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ccc:
    // 0x2b2ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2cd4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b2cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b2cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2CE0u;
}
