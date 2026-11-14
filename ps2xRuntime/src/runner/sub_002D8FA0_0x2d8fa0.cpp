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

// Function: sub_002D8FA0
// Address: 0x2d8fa0 - 0x2d9010
void sub_002D8FA0_0x2d8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8FA0_0x2d8fa0");
#endif

    switch (ctx->pc) {
        case 0x2d8fd4u: goto label_2d8fd4;
        case 0x2d8ff4u: goto label_2d8ff4;
        default: break;
    }

    ctx->pc = 0x2d8fa0u;

    // 0x2d8fa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d8fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8fac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d8facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d8fb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d8fb4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2d8fb8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2d8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2d8fbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8fc0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d8fc4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fcc: 0xc0b6328  jal         func_2D8CA0
    ctx->pc = 0x2D8FCCu;
    SET_GPR_U32(ctx, 31, 0x2D8FD4u);
    ctx->pc = 0x2D8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8CA0u, 0x2D8FCCu, 0x2D8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FD4u;
label_2d8fd4:
    // 0x2d8fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fd8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d8fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8fdc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d8fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8fe0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2d8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8fe4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d8fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fe8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d8fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d8fec: 0xc0b6404  jal         func_2D9010
    ctx->pc = 0x2D8FECu;
    SET_GPR_U32(ctx, 31, 0x2D8FF4u);
    ctx->pc = 0x2D9010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9010u, 0x2D8FECu, 0x2D8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8FF4u;
label_2d8ff4:
    // 0x2d8ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9000: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d9004: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D900Cu;
    // 0x2d900c: 0x0  nop
    ctx->pc = 0x2d900cu;
    // NOP
    ctx->pc = 0x2d9010u;
}
