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

// Function: sub_00264760
// Address: 0x264760 - 0x2647d0
void sub_00264760_0x264760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264760_0x264760");
#endif

    switch (ctx->pc) {
        case 0x26477cu: goto label_26477c;
        default: break;
    }

    ctx->pc = 0x264760u;

    // 0x264760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x264768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26476c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x264770: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x264770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x264774: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x264774u;
    {
        const bool branch_taken_0x264774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264774) {
            ctx->pc = 0x2647A4u;
            goto label_2647a4;
        }
    }
    ctx->pc = 0x26477Cu;
label_26477c:
    // 0x26477c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264784: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264788: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x264788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26478c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264794: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x264794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x264798: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26479c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2647a0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2647a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2647a4:
    // 0x2647a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2647a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2647A8u;
    {
        const bool branch_taken_0x2647a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2647a8) {
            ctx->pc = 0x26477Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26477c;
        }
    }
    ctx->pc = 0x2647B0u;
    // 0x2647b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2647b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2647b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2647b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2647bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2647BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2647BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2647C4u;
    // 0x2647c4: 0x0  nop
    ctx->pc = 0x2647c4u;
    // NOP
    // 0x2647c8: 0x0  nop
    ctx->pc = 0x2647c8u;
    // NOP
    // 0x2647cc: 0x0  nop
    ctx->pc = 0x2647ccu;
    // NOP
    ctx->pc = 0x2647d0u;
}
