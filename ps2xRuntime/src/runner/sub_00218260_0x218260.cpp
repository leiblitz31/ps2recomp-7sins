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

// Function: sub_00218260
// Address: 0x218260 - 0x2182c0
void sub_00218260_0x218260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218260_0x218260");
#endif

    switch (ctx->pc) {
        case 0x218284u: goto label_218284;
        default: break;
    }

    ctx->pc = 0x218260u;

    // 0x218260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x218260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x218264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x218264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x218268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21826c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21826cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x218270: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x218270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x218274: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218278: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x218278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21827c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x21827Cu;
    SET_GPR_U32(ctx, 31, 0x218284u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x21827Cu, 0x218284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218284u;
label_218284:
    // 0x218284: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x218284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x218288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218288u;
    {
        const bool branch_taken_0x218288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218288) {
            ctx->pc = 0x2182A0u;
            goto label_2182a0;
        }
    }
    ctx->pc = 0x218290u;
    // 0x218290: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218298: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x218298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x21829c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21829cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2182a0:
    // 0x2182a0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2182a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2182a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2182a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2182a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2182ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2182acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2182b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2182B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2182B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2182B8u;
    // 0x2182b8: 0x0  nop
    ctx->pc = 0x2182b8u;
    // NOP
    // 0x2182bc: 0x0  nop
    ctx->pc = 0x2182bcu;
    // NOP
    ctx->pc = 0x2182c0u;
}
