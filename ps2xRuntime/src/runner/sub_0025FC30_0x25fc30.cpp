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

// Function: sub_0025FC30
// Address: 0x25fc30 - 0x25fca0
void sub_0025FC30_0x25fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC30_0x25fc30");
#endif

    switch (ctx->pc) {
        case 0x25fc4cu: goto label_25fc4c;
        default: break;
    }

    ctx->pc = 0x25fc30u;

    // 0x25fc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fc38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25fc3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25fc40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25fc44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25FC44u;
    {
        const bool branch_taken_0x25fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fc44) {
            ctx->pc = 0x25FC74u;
            goto label_25fc74;
        }
    }
    ctx->pc = 0x25FC4Cu;
label_25fc4c:
    // 0x25fc4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fc50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fc54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25fc5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fc60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25fc64: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25fc68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc6c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x25fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25fc70: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x25fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_25fc74:
    // 0x25fc74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fc78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25FC78u;
    {
        const bool branch_taken_0x25fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fc78) {
            ctx->pc = 0x25FC4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fc4c;
        }
    }
    ctx->pc = 0x25FC80u;
    // 0x25fc80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fc88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC94u;
    // 0x25fc94: 0x0  nop
    ctx->pc = 0x25fc94u;
    // NOP
    // 0x25fc98: 0x0  nop
    ctx->pc = 0x25fc98u;
    // NOP
    // 0x25fc9c: 0x0  nop
    ctx->pc = 0x25fc9cu;
    // NOP
    ctx->pc = 0x25fca0u;
}
