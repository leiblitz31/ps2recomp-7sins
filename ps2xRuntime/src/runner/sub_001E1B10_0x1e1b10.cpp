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

// Function: sub_001E1B10
// Address: 0x1e1b10 - 0x1e1ba0
void sub_001E1B10_0x1e1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1B10_0x1e1b10");
#endif

    switch (ctx->pc) {
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b64u: goto label_1e1b64;
        default: break;
    }

    ctx->pc = 0x1e1b10u;

    // 0x1e1b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1b1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1b20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1b24: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1b28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1b34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1b38: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x1e1b38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1b3c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1B3Cu;
    {
        const bool branch_taken_0x1e1b3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e1b3c) {
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1B44u;
    // 0x1e1b44: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1e1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e1b48: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1e1b48u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_1e1b4c:
    // 0x1e1b4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E1B4Cu;
    {
        const bool branch_taken_0x1e1b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b4c) {
            ctx->pc = 0x1E1B80u;
            goto label_1e1b80;
        }
    }
    ctx->pc = 0x1E1B54u;
label_1e1b54:
    // 0x1e1b54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1b58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e1b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b5c: 0xc052608  jal         func_149820
    ctx->pc = 0x1E1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B64u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x1E1B5Cu, 0x1E1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B64u;
label_1e1b64:
    // 0x1e1b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e1b6c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e1b70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1b74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e1b78: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e1b7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e1b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e1b80:
    // 0x1e1b80: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E1B80u;
    {
        const bool branch_taken_0x1e1b80 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e1b80) {
            ctx->pc = 0x1E1B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1b54;
        }
    }
    ctx->pc = 0x1E1B88u;
    // 0x1e1b88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b94: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e1b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1BA0u;
}
