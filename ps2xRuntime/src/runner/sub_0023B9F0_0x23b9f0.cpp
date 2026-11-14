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

// Function: sub_0023B9F0
// Address: 0x23b9f0 - 0x23ba60
void sub_0023B9F0_0x23b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B9F0_0x23b9f0");
#endif

    switch (ctx->pc) {
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba34u: goto label_23ba34;
        default: break;
    }

    ctx->pc = 0x23b9f0u;

    // 0x23b9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b9fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23ba00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba04: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x23BA04u;
    SET_GPR_U32(ctx, 31, 0x23BA0Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x23BA04u, 0x23BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA0Cu;
label_23ba0c:
    // 0x23ba0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23ba0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ba10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba14: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x23ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x23ba18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BA18u;
    {
        const bool branch_taken_0x23ba18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba18) {
            ctx->pc = 0x23BA3Cu;
            goto label_23ba3c;
        }
    }
    ctx->pc = 0x23BA20u;
    // 0x23ba20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba24: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x23ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x23ba28: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x23ba2c: 0xc08ee98  jal         func_23BA60
    ctx->pc = 0x23BA2Cu;
    SET_GPR_U32(ctx, 31, 0x23BA34u);
    ctx->pc = 0x23BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BA60u, 0x23BA2Cu, 0x23BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA34u;
label_23ba34:
    // 0x23ba34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba38: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x23ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_23ba3c:
    // 0x23ba3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba40: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x23ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x23ba44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ba44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ba4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ba4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ba50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ba54: 0x3e00008  jr          $ra
    ctx->pc = 0x23BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BA5Cu;
    // 0x23ba5c: 0x0  nop
    ctx->pc = 0x23ba5cu;
    // NOP
    ctx->pc = 0x23ba60u;
}
