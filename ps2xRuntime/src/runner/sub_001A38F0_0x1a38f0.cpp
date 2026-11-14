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

// Function: sub_001A38F0
// Address: 0x1a38f0 - 0x1a3950
void sub_001A38F0_0x1a38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A38F0_0x1a38f0");
#endif

    switch (ctx->pc) {
        case 0x1a3914u: goto label_1a3914;
        default: break;
    }

    ctx->pc = 0x1a38f0u;

    // 0x1a38f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a38f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a38f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a38fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a3900: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a3900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a3904: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a3904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3908: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a3908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a390c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1A390Cu;
    SET_GPR_U32(ctx, 31, 0x1A3914u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1A390Cu, 0x1A3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3914u;
label_1a3914:
    // 0x1a3914: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1a3914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1a3918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3918u;
    {
        const bool branch_taken_0x1a3918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3918) {
            ctx->pc = 0x1A3930u;
            goto label_1a3930;
        }
    }
    ctx->pc = 0x1A3920u;
    // 0x1a3920: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3928: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a3928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a392c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a392cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a3930:
    // 0x1a3930: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a3934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a393c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a393cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a3940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3948u;
    // 0x1a3948: 0x0  nop
    ctx->pc = 0x1a3948u;
    // NOP
    // 0x1a394c: 0x0  nop
    ctx->pc = 0x1a394cu;
    // NOP
    ctx->pc = 0x1a3950u;
}
