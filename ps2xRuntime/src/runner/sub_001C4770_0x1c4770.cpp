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

// Function: sub_001C4770
// Address: 0x1c4770 - 0x1c47f0
void sub_001C4770_0x1c4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4770_0x1c4770");
#endif

    switch (ctx->pc) {
        case 0x1c4798u: goto label_1c4798;
        case 0x1c47a8u: goto label_1c47a8;
        default: break;
    }

    ctx->pc = 0x1c4770u;

    // 0x1c4770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c4774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c477c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4780: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c4780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c4784: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c4784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c4788: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c4788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c478c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1c478cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4790: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4790u;
    {
        const bool branch_taken_0x1c4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4790) {
            ctx->pc = 0x1C47BCu;
            goto label_1c47bc;
        }
    }
    ctx->pc = 0x1C4798u;
label_1c4798:
    // 0x1c4798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c479c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1c479cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c47a0: 0xc0711fc  jal         func_1C47F0
    ctx->pc = 0x1C47A0u;
    SET_GPR_U32(ctx, 31, 0x1C47A8u);
    ctx->pc = 0x1C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47F0u, 0x1C47A0u, 0x1C47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47A8u;
label_1c47a8:
    // 0x1c47a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c47ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c47b0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1c47b4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c47b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c47b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c47b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c47bc:
    // 0x1c47bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c47c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C47C0u;
    {
        const bool branch_taken_0x1c47c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c47c0) {
            ctx->pc = 0x1C4798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C47C8u;
    // 0x1c47c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c47c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c47ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c47d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c47d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c47d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c47d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c47d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c47d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c47dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47E4u;
    // 0x1c47e4: 0x0  nop
    ctx->pc = 0x1c47e4u;
    // NOP
    // 0x1c47e8: 0x0  nop
    ctx->pc = 0x1c47e8u;
    // NOP
    // 0x1c47ec: 0x0  nop
    ctx->pc = 0x1c47ecu;
    // NOP
    ctx->pc = 0x1c47f0u;
}
