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

// Function: sub_0046AF30
// Address: 0x46af30 - 0x46afa0
void sub_0046AF30_0x46af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AF30_0x46af30");
#endif

    switch (ctx->pc) {
        case 0x46af64u: goto label_46af64;
        case 0x46af84u: goto label_46af84;
        default: break;
    }

    ctx->pc = 0x46af30u;

    // 0x46af30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46af34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46af38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46af3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46af40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x46af44: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x46af44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x46af48: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x46af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x46af4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46af50: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46af50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46af54: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46af54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46af58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46af58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46af5c: 0xc11ad20  jal         func_46B480
    ctx->pc = 0x46AF5Cu;
    SET_GPR_U32(ctx, 31, 0x46AF64u);
    ctx->pc = 0x46B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B480u, 0x46AF5Cu, 0x46AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AF64u;
label_46af64:
    // 0x46af64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46af64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46af68: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x46af68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x46af6c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46af70: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46af70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46af74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46af74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46af78: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x46af78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x46af7c: 0xc04f208  jal         func_13C820
    ctx->pc = 0x46AF7Cu;
    SET_GPR_U32(ctx, 31, 0x46AF84u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x46AF7Cu, 0x46AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AF84u;
label_46af84:
    // 0x46af84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46af84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46af88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46af8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46af90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46af94: 0x3e00008  jr          $ra
    ctx->pc = 0x46AF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AF9Cu;
    // 0x46af9c: 0x0  nop
    ctx->pc = 0x46af9cu;
    // NOP
    ctx->pc = 0x46afa0u;
}
