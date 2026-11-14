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

// Function: sub_00252A70
// Address: 0x252a70 - 0x252b00
void sub_00252A70_0x252a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252A70_0x252a70");
#endif

    switch (ctx->pc) {
        case 0x252ab4u: goto label_252ab4;
        case 0x252ad4u: goto label_252ad4;
        default: break;
    }

    ctx->pc = 0x252a70u;

    // 0x252a70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x252a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x252a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252a7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x252a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x252a80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x252a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x252a84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x252a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x252a88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x252a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252a8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x252a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252a90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252a94: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252a98: 0x38143  sra         $s0, $v1, 5
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 5));
    // 0x252a9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252A9Cu;
    {
        const bool branch_taken_0x252a9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x252a9c) {
            ctx->pc = 0x252AACu;
            goto label_252aac;
        }
    }
    ctx->pc = 0x252AA4u;
    // 0x252aa4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x252aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x252aa8: 0x28143  sra         $s0, $v0, 5
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
label_252aac:
    // 0x252aac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252AACu;
    {
        const bool branch_taken_0x252aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252aac) {
            ctx->pc = 0x252AD8u;
            goto label_252ad8;
        }
    }
    ctx->pc = 0x252AB4u;
label_252ab4:
    // 0x252ab4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252ab8: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x252abc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x252abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x252ac0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252ac4: 0x2445ffe0  addiu       $a1, $v0, -0x20
    ctx->pc = 0x252ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x252ac8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x252ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x252acc: 0xc09489c  jal         func_252270
    ctx->pc = 0x252ACCu;
    SET_GPR_U32(ctx, 31, 0x252AD4u);
    ctx->pc = 0x252270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252270u, 0x252ACCu, 0x252AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AD4u;
label_252ad4:
    // 0x252ad4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x252ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_252ad8:
    // 0x252ad8: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x252AD8u;
    {
        const bool branch_taken_0x252ad8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x252ad8) {
            ctx->pc = 0x252AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252ab4;
        }
    }
    ctx->pc = 0x252AE0u;
    // 0x252ae0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252aec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x252aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252af0: 0x3e00008  jr          $ra
    ctx->pc = 0x252AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252AF8u;
    // 0x252af8: 0x0  nop
    ctx->pc = 0x252af8u;
    // NOP
    // 0x252afc: 0x0  nop
    ctx->pc = 0x252afcu;
    // NOP
    ctx->pc = 0x252b00u;
}
