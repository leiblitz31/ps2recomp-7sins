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

// Function: sub_0029DE90
// Address: 0x29de90 - 0x29df00
void sub_0029DE90_0x29de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DE90_0x29de90");
#endif

    switch (ctx->pc) {
        case 0x29dec4u: goto label_29dec4;
        case 0x29dee4u: goto label_29dee4;
        default: break;
    }

    ctx->pc = 0x29de90u;

    // 0x29de90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29de94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29de98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29de9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29dea0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29dea4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x29dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29dea8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x29dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x29deac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29deb0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29deb4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29deb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29deb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29debc: 0xc099590  jal         func_265640
    ctx->pc = 0x29DEBCu;
    SET_GPR_U32(ctx, 31, 0x29DEC4u);
    ctx->pc = 0x265640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265640u, 0x29DEBCu, 0x29DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEC4u;
label_29dec4:
    // 0x29dec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29dec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dec8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x29dec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x29decc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ded0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x29ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ded4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ded4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ded8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x29ded8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x29dedc: 0xc0a7750  jal         func_29DD40
    ctx->pc = 0x29DEDCu;
    SET_GPR_U32(ctx, 31, 0x29DEE4u);
    ctx->pc = 0x29DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD40u, 0x29DEDCu, 0x29DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEE4u;
label_29dee4:
    // 0x29dee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29dee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29deec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29deecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29def0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29def4: 0x3e00008  jr          $ra
    ctx->pc = 0x29DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DEFCu;
    // 0x29defc: 0x0  nop
    ctx->pc = 0x29defcu;
    // NOP
    ctx->pc = 0x29df00u;
}
