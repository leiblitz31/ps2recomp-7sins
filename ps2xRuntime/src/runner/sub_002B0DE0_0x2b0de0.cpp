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

// Function: sub_002B0DE0
// Address: 0x2b0de0 - 0x2b0e50
void sub_002B0DE0_0x2b0de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0DE0_0x2b0de0");
#endif

    switch (ctx->pc) {
        case 0x2b0e14u: goto label_2b0e14;
        case 0x2b0e34u: goto label_2b0e34;
        default: break;
    }

    ctx->pc = 0x2b0de0u;

    // 0x2b0de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b0de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b0de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b0de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0dec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b0decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b0df0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b0df4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2b0df8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2b0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2b0dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0e00: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b0e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b0e04: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e0c: 0xc0ac254  jal         func_2B0950
    ctx->pc = 0x2B0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E14u);
    ctx->pc = 0x2B0950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0950u, 0x2B0E0Cu, 0x2B0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E14u;
label_2b0e14:
    // 0x2b0e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e18: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b0e18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0e1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0e20: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b0e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b0e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e28: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b0e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b0e2c: 0xc0ac394  jal         func_2B0E50
    ctx->pc = 0x2B0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E34u);
    ctx->pc = 0x2B0E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0E50u, 0x2B0E2Cu, 0x2B0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E34u;
label_2b0e34:
    // 0x2b0e34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0e40: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b0e44: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E4Cu;
    // 0x2b0e4c: 0x0  nop
    ctx->pc = 0x2b0e4cu;
    // NOP
    ctx->pc = 0x2b0e50u;
}
