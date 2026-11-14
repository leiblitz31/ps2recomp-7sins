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

// Function: sub_002475F0
// Address: 0x2475f0 - 0x247660
void sub_002475F0_0x2475f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002475F0_0x2475f0");
#endif

    switch (ctx->pc) {
        case 0x247624u: goto label_247624;
        case 0x247644u: goto label_247644;
        default: break;
    }

    ctx->pc = 0x2475f0u;

    // 0x2475f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2475f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2475f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2475f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2475f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2475fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2475fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x247600: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x247600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x247604: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x247604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x247608: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x247608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x24760c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247610: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x247610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x247614: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24761c: 0xc04484c  jal         func_112130
    ctx->pc = 0x24761Cu;
    SET_GPR_U32(ctx, 31, 0x247624u);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x24761Cu, 0x247624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247624u;
label_247624:
    // 0x247624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247628: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x247628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x24762c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247630: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247634: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x247634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247638: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x24763c: 0xc0648dc  jal         func_192370
    ctx->pc = 0x24763Cu;
    SET_GPR_U32(ctx, 31, 0x247644u);
    ctx->pc = 0x192370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192370u, 0x24763Cu, 0x247644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247644u;
label_247644:
    // 0x247644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x247644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24764c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24764cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247650: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x247654: 0x3e00008  jr          $ra
    ctx->pc = 0x247654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24765Cu;
    // 0x24765c: 0x0  nop
    ctx->pc = 0x24765cu;
    // NOP
    ctx->pc = 0x247660u;
}
