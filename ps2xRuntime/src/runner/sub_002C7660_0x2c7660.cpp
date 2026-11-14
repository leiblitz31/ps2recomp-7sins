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

// Function: sub_002C7660
// Address: 0x2c7660 - 0x2c76c0
void sub_002C7660_0x2c7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7660_0x2c7660");
#endif

    switch (ctx->pc) {
        case 0x2c7684u: goto label_2c7684;
        default: break;
    }

    ctx->pc = 0x2c7660u;

    // 0x2c7660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c766c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c766cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c7670: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c7670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c7674: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7678: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c7678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c767c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2C767Cu;
    SET_GPR_U32(ctx, 31, 0x2C7684u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2C767Cu, 0x2C7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7684u;
label_2c7684:
    // 0x2c7684: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c7684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c7688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7688u;
    {
        const bool branch_taken_0x2c7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7688) {
            ctx->pc = 0x2C76A0u;
            goto label_2c76a0;
        }
    }
    ctx->pc = 0x2C7690u;
    // 0x2c7690: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c7690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7698: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2c7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2c769c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2c769cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2c76a0:
    // 0x2c76a0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2c76a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2c76a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c76a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c76a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c76a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c76ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c76acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c76b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C76B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C76B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C76B8u;
    // 0x2c76b8: 0x0  nop
    ctx->pc = 0x2c76b8u;
    // NOP
    // 0x2c76bc: 0x0  nop
    ctx->pc = 0x2c76bcu;
    // NOP
    ctx->pc = 0x2c76c0u;
}
