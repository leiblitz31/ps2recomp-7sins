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

// Function: sub_002150B0
// Address: 0x2150b0 - 0x215120
void sub_002150B0_0x2150b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002150B0_0x2150b0");
#endif

    switch (ctx->pc) {
        case 0x2150e4u: goto label_2150e4;
        case 0x215104u: goto label_215104;
        default: break;
    }

    ctx->pc = 0x2150b0u;

    // 0x2150b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2150b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2150b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2150b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2150b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2150b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2150bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2150bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2150c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2150c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2150c4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2150c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2150c8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2150c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2150cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2150d0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2150d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2150d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2150d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2150d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2150d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150dc: 0xc085300  jal         func_214C00
    ctx->pc = 0x2150DCu;
    SET_GPR_U32(ctx, 31, 0x2150E4u);
    ctx->pc = 0x214C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C00u, 0x2150DCu, 0x2150E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150E4u;
label_2150e4:
    // 0x2150e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2150e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150e8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2150e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2150ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2150ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2150f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2150f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2150f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2150f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2150fc: 0xc085448  jal         func_215120
    ctx->pc = 0x2150FCu;
    SET_GPR_U32(ctx, 31, 0x215104u);
    ctx->pc = 0x215120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215120u, 0x2150FCu, 0x215104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215104u;
label_215104:
    // 0x215104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21510c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21510cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215110: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x215110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x215114: 0x3e00008  jr          $ra
    ctx->pc = 0x215114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21511Cu;
    // 0x21511c: 0x0  nop
    ctx->pc = 0x21511cu;
    // NOP
    ctx->pc = 0x215120u;
}
