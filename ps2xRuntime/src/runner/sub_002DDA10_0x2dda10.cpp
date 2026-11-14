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

// Function: sub_002DDA10
// Address: 0x2dda10 - 0x2dda80
void sub_002DDA10_0x2dda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA10_0x2dda10");
#endif

    switch (ctx->pc) {
        case 0x2dda38u: goto label_2dda38;
        case 0x2dda54u: goto label_2dda54;
        case 0x2dda68u: goto label_2dda68;
        default: break;
    }

    ctx->pc = 0x2dda10u;

    // 0x2dda10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dda14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dda14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dda18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dda1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dda20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2dda20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2dda24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dda24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2dda28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dda2c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dda2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dda30: 0xc0b74ec  jal         func_2DD3B0
    ctx->pc = 0x2DDA30u;
    SET_GPR_U32(ctx, 31, 0x2DDA38u);
    ctx->pc = 0x2DD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3B0u, 0x2DDA30u, 0x2DDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA38u;
label_2dda38:
    // 0x2dda38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dda38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda3c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DDA3Cu;
    {
        const bool branch_taken_0x2dda3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda3c) {
            ctx->pc = 0x2DDA68u;
            goto label_2dda68;
        }
    }
    ctx->pc = 0x2DDA44u;
    // 0x2dda44: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2dda44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2dda48: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2dda48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dda4c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DDA4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA54u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DDA4Cu, 0x2DDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA54u;
label_2dda54:
    // 0x2dda54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dda54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dda58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda5c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dda60: 0xc0b85c4  jal         func_2E1710
    ctx->pc = 0x2DDA60u;
    SET_GPR_U32(ctx, 31, 0x2DDA68u);
    ctx->pc = 0x2E1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1710u, 0x2DDA60u, 0x2DDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA68u;
label_2dda68:
    // 0x2dda68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dda68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dda6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dda6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dda70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dda70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dda74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dda78: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA80u;
}
