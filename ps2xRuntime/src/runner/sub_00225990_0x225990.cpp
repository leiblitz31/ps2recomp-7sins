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

// Function: sub_00225990
// Address: 0x225990 - 0x225a00
void sub_00225990_0x225990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225990_0x225990");
#endif

    switch (ctx->pc) {
        case 0x2259c4u: goto label_2259c4;
        case 0x2259e4u: goto label_2259e4;
        default: break;
    }

    ctx->pc = 0x225990u;

    // 0x225990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x225990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x225994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22599c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22599cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2259a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2259a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2259a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2259a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2259a8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2259a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2259ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2259b0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2259b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2259b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2259b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2259b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2259b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259bc: 0xc089510  jal         func_225440
    ctx->pc = 0x2259BCu;
    SET_GPR_U32(ctx, 31, 0x2259C4u);
    ctx->pc = 0x225440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225440u, 0x2259BCu, 0x2259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C4u;
label_2259c4:
    // 0x2259c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2259c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259c8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2259c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2259cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2259ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2259d0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2259d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2259d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2259d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259d8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2259d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2259dc: 0xc089680  jal         func_225A00
    ctx->pc = 0x2259DCu;
    SET_GPR_U32(ctx, 31, 0x2259E4u);
    ctx->pc = 0x225A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A00u, 0x2259DCu, 0x2259E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259E4u;
label_2259e4:
    // 0x2259e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2259e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2259e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2259ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2259ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2259f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2259F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2259F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2259FCu;
    // 0x2259fc: 0x0  nop
    ctx->pc = 0x2259fcu;
    // NOP
    ctx->pc = 0x225a00u;
}
