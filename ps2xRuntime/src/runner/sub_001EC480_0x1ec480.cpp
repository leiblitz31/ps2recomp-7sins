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

// Function: sub_001EC480
// Address: 0x1ec480 - 0x1ec4e0
void sub_001EC480_0x1ec480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC480_0x1ec480");
#endif

    switch (ctx->pc) {
        case 0x1ec4a4u: goto label_1ec4a4;
        default: break;
    }

    ctx->pc = 0x1ec480u;

    // 0x1ec480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ec484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec48c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1ec48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1ec490: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1ec490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ec494: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ec494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec498: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec49c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1EC49Cu;
    SET_GPR_U32(ctx, 31, 0x1EC4A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1EC49Cu, 0x1EC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A4u;
label_1ec4a4:
    // 0x1ec4a4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1ec4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1ec4a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC4A8u;
    {
        const bool branch_taken_0x1ec4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4a8) {
            ctx->pc = 0x1EC4C0u;
            goto label_1ec4c0;
        }
    }
    ctx->pc = 0x1EC4B0u;
    // 0x1ec4b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ec4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec4b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec4b8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ec4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ec4bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ec4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ec4c0:
    // 0x1ec4c0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1ec4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ec4c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec4c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec4cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ec4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ec4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC4D8u;
    // 0x1ec4d8: 0x0  nop
    ctx->pc = 0x1ec4d8u;
    // NOP
    // 0x1ec4dc: 0x0  nop
    ctx->pc = 0x1ec4dcu;
    // NOP
    ctx->pc = 0x1ec4e0u;
}
