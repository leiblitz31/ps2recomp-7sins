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

// Function: sub_002D2AB0
// Address: 0x2d2ab0 - 0x2d2b40
void sub_002D2AB0_0x2d2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2AB0_0x2d2ab0");
#endif

    switch (ctx->pc) {
        case 0x2d2ad4u: goto label_2d2ad4;
        case 0x2d2ae0u: goto label_2d2ae0;
        case 0x2d2b14u: goto label_2d2b14;
        default: break;
    }

    ctx->pc = 0x2d2ab0u;

    // 0x2d2ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d2ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2abc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d2abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d2ac0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d2ac4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2ac8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d2acc: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D2ACCu;
    SET_GPR_U32(ctx, 31, 0x2D2AD4u);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D2ACCu, 0x2D2AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AD4u;
label_2d2ad4:
    // 0x2d2ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ad8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D2AD8u;
    {
        const bool branch_taken_0x2d2ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ad8) {
            ctx->pc = 0x2D2B04u;
            goto label_2d2b04;
        }
    }
    ctx->pc = 0x2D2AE0u;
label_2d2ae0:
    // 0x2d2ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2ae4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d2ae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2aec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2AECu;
    {
        const bool branch_taken_0x2d2aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2aec) {
            ctx->pc = 0x2D2B00u;
            goto label_2d2b00;
        }
    }
    ctx->pc = 0x2D2AF4u;
    // 0x2d2af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2af8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2AF8u;
    {
        const bool branch_taken_0x2d2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2af8) {
            ctx->pc = 0x2D2B20u;
            goto label_2d2b20;
        }
    }
    ctx->pc = 0x2D2B00u;
label_2d2b00:
    // 0x2d2b00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d2b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d2b04:
    // 0x2d2b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2b08: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d2b0c: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D2B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B14u);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D2B0Cu, 0x2D2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B14u;
label_2d2b14:
    // 0x2d2b14: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D2B14u;
    {
        const bool branch_taken_0x2d2b14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2b14) {
            ctx->pc = 0x2D2AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2ae0;
        }
    }
    ctx->pc = 0x2D2B1Cu;
    // 0x2d2b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2b20:
    // 0x2d2b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2B34u;
    // 0x2d2b34: 0x0  nop
    ctx->pc = 0x2d2b34u;
    // NOP
    // 0x2d2b38: 0x0  nop
    ctx->pc = 0x2d2b38u;
    // NOP
    // 0x2d2b3c: 0x0  nop
    ctx->pc = 0x2d2b3cu;
    // NOP
    ctx->pc = 0x2d2b40u;
}
