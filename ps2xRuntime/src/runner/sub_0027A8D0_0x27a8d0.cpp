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

// Function: sub_0027A8D0
// Address: 0x27a8d0 - 0x27a930
void sub_0027A8D0_0x27a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A8D0_0x27a8d0");
#endif

    switch (ctx->pc) {
        case 0x27a8f4u: goto label_27a8f4;
        default: break;
    }

    ctx->pc = 0x27a8d0u;

    // 0x27a8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27a8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a8dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x27a8e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x27a8e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a8e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a8ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x27A8ECu;
    SET_GPR_U32(ctx, 31, 0x27A8F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A8ECu, 0x27A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8F4u;
label_27a8f4:
    // 0x27a8f4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x27a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x27a8f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A8F8u;
    {
        const bool branch_taken_0x27a8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a8f8) {
            ctx->pc = 0x27A910u;
            goto label_27a910;
        }
    }
    ctx->pc = 0x27A900u;
    // 0x27a900: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x27a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a904: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a908: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x27a90c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_27a910:
    // 0x27a910: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x27a910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x27a914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a91c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27a920: 0x3e00008  jr          $ra
    ctx->pc = 0x27A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A928u;
    // 0x27a928: 0x0  nop
    ctx->pc = 0x27a928u;
    // NOP
    // 0x27a92c: 0x0  nop
    ctx->pc = 0x27a92cu;
    // NOP
    ctx->pc = 0x27a930u;
}
