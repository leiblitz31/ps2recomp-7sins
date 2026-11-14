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

// Function: sub_00450D20
// Address: 0x450d20 - 0x450d80
void sub_00450D20_0x450d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450D20_0x450d20");
#endif

    switch (ctx->pc) {
        case 0x450d44u: goto label_450d44;
        default: break;
    }

    ctx->pc = 0x450d20u;

    // 0x450d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x450d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x450d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x450d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x450d2c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x450d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x450d30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x450d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x450d34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x450d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x450d38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x450d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450d3c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x450D3Cu;
    SET_GPR_U32(ctx, 31, 0x450D44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x450D3Cu, 0x450D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450D44u;
label_450d44:
    // 0x450d44: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x450d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x450d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x450D48u;
    {
        const bool branch_taken_0x450d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x450d48) {
            ctx->pc = 0x450D60u;
            goto label_450d60;
        }
    }
    ctx->pc = 0x450D50u;
    // 0x450d50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x450d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x450d54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x450d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x450d58: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x450d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x450d5c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x450d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_450d60:
    // 0x450d60: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x450d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x450d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x450d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450d6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x450d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x450d70: 0x3e00008  jr          $ra
    ctx->pc = 0x450D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450D78u;
    // 0x450d78: 0x0  nop
    ctx->pc = 0x450d78u;
    // NOP
    // 0x450d7c: 0x0  nop
    ctx->pc = 0x450d7cu;
    // NOP
    ctx->pc = 0x450d80u;
}
