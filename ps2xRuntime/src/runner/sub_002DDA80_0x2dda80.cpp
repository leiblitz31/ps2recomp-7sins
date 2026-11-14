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

// Function: sub_002DDA80
// Address: 0x2dda80 - 0x2ddaf0
void sub_002DDA80_0x2dda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA80_0x2dda80");
#endif

    switch (ctx->pc) {
        case 0x2ddaa8u: goto label_2ddaa8;
        case 0x2ddac4u: goto label_2ddac4;
        case 0x2ddad8u: goto label_2ddad8;
        default: break;
    }

    ctx->pc = 0x2dda80u;

    // 0x2dda80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dda84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dda88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dda88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dda8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dda90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2dda90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2dda94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dda94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2dda98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dda98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dda9c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dda9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddaa0: 0xc0b74ec  jal         func_2DD3B0
    ctx->pc = 0x2DDAA0u;
    SET_GPR_U32(ctx, 31, 0x2DDAA8u);
    ctx->pc = 0x2DD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3B0u, 0x2DDAA0u, 0x2DDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAA8u;
label_2ddaa8:
    // 0x2ddaa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddaac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DDAACu;
    {
        const bool branch_taken_0x2ddaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddaac) {
            ctx->pc = 0x2DDAD8u;
            goto label_2ddad8;
        }
    }
    ctx->pc = 0x2DDAB4u;
    // 0x2ddab4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2ddab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ddab8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2ddab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2ddabc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DDABCu;
    SET_GPR_U32(ctx, 31, 0x2DDAC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DDABCu, 0x2DDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAC4u;
label_2ddac4:
    // 0x2ddac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ddac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ddac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddacc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ddaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddad0: 0xc0b85e8  jal         func_2E17A0
    ctx->pc = 0x2DDAD0u;
    SET_GPR_U32(ctx, 31, 0x2DDAD8u);
    ctx->pc = 0x2E17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E17A0u, 0x2DDAD0u, 0x2DDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAD8u;
label_2ddad8:
    // 0x2ddad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ddad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddae4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDAF0u;
}
