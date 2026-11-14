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

// Function: sub_0029B880
// Address: 0x29b880 - 0x29b8b0
void sub_0029B880_0x29b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B880_0x29b880");
#endif

    ctx->pc = 0x29b880u;

    // 0x29b880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b888: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29b888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29b88c: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x29b88cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b894: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x29b894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b8a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x29B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B8ACu;
    // 0x29b8ac: 0x0  nop
    ctx->pc = 0x29b8acu;
    // NOP
    ctx->pc = 0x29b8b0u;
}
