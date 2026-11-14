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

// Function: sub_002DE7E0
// Address: 0x2de7e0 - 0x2de850
void sub_002DE7E0_0x2de7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7E0_0x2de7e0");
#endif

    switch (ctx->pc) {
        case 0x2de814u: goto label_2de814;
        case 0x2de834u: goto label_2de834;
        default: break;
    }

    ctx->pc = 0x2de7e0u;

    // 0x2de7e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2de7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de7ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2de7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2de7f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2de7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2de7f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2de7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2de7f8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2de7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2de7fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2de7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de800: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2de804: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2de804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de80c: 0xc0b7974  jal         func_2DE5D0
    ctx->pc = 0x2DE80Cu;
    SET_GPR_U32(ctx, 31, 0x2DE814u);
    ctx->pc = 0x2DE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE5D0u, 0x2DE80Cu, 0x2DE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE814u;
label_2de814:
    // 0x2de814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de818: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2de818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de81c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2de81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de820: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2de820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de828: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2de82c: 0xc0b7a14  jal         func_2DE850
    ctx->pc = 0x2DE82Cu;
    SET_GPR_U32(ctx, 31, 0x2DE834u);
    ctx->pc = 0x2DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE850u, 0x2DE82Cu, 0x2DE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE834u;
label_2de834:
    // 0x2de834: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2de834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de840: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2de844: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE84Cu;
    // 0x2de84c: 0x0  nop
    ctx->pc = 0x2de84cu;
    // NOP
    ctx->pc = 0x2de850u;
}
