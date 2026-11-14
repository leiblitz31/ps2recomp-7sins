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

// Function: sub_00258D20
// Address: 0x258d20 - 0x258db0
void sub_00258D20_0x258d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258D20_0x258d20");
#endif

    switch (ctx->pc) {
        case 0x258d60u: goto label_258d60;
        default: break;
    }

    ctx->pc = 0x258d20u;

    // 0x258d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x258d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258d30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x258d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x258d34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x258d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258d40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x258d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258d44: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x258d44u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x258d48: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x258D48u;
    {
        const bool branch_taken_0x258d48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x258d48) {
            ctx->pc = 0x258D58u;
            goto label_258d58;
        }
    }
    ctx->pc = 0x258D50u;
    // 0x258d50: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x258d54: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x258d54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_258d58:
    // 0x258d58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x258D58u;
    {
        const bool branch_taken_0x258d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d58) {
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D60u;
label_258d60:
    // 0x258d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258d68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x258d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x258d70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x258d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x258d78: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x258d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x258d7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258d80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x258d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x258d84: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x258d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x258d88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x258d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_258d8c:
    // 0x258d8c: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x258D8Cu;
    {
        const bool branch_taken_0x258d8c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x258d8c) {
            ctx->pc = 0x258D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258d60;
        }
    }
    ctx->pc = 0x258D94u;
    // 0x258d94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d9c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x258d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x258da0: 0x3e00008  jr          $ra
    ctx->pc = 0x258DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258DA8u;
    // 0x258da8: 0x0  nop
    ctx->pc = 0x258da8u;
    // NOP
    // 0x258dac: 0x0  nop
    ctx->pc = 0x258dacu;
    // NOP
    ctx->pc = 0x258db0u;
}
