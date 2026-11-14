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

// Function: sub_0022EE10
// Address: 0x22ee10 - 0x22ee90
void sub_0022EE10_0x22ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EE10_0x22ee10");
#endif

    switch (ctx->pc) {
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee48u: goto label_22ee48;
        default: break;
    }

    ctx->pc = 0x22ee10u;

    // 0x22ee10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ee14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ee18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ee1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ee20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22ee24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22ee28: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22ee2c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ee30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22EE30u;
    {
        const bool branch_taken_0x22ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee30) {
            ctx->pc = 0x22EE5Cu;
            goto label_22ee5c;
        }
    }
    ctx->pc = 0x22EE38u;
label_22ee38:
    // 0x22ee38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee3c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ee40: 0xc08bbd4  jal         func_22EF50
    ctx->pc = 0x22EE40u;
    SET_GPR_U32(ctx, 31, 0x22EE48u);
    ctx->pc = 0x22EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF50u, 0x22EE40u, 0x22EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE48u;
label_22ee48:
    // 0x22ee48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ee4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ee50: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22ee54: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x22ee58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22ee58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ee5c:
    // 0x22ee5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ee60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22EE60u;
    {
        const bool branch_taken_0x22ee60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee60) {
            ctx->pc = 0x22EE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ee38;
        }
    }
    ctx->pc = 0x22EE68u;
    // 0x22ee68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22ee68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ee70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ee70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ee74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ee78: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22ee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE84u;
    // 0x22ee84: 0x0  nop
    ctx->pc = 0x22ee84u;
    // NOP
    // 0x22ee88: 0x0  nop
    ctx->pc = 0x22ee88u;
    // NOP
    // 0x22ee8c: 0x0  nop
    ctx->pc = 0x22ee8cu;
    // NOP
    ctx->pc = 0x22ee90u;
}
