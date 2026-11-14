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

// Function: sub_002DE340
// Address: 0x2de340 - 0x2de3a0
void sub_002DE340_0x2de340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE340_0x2de340");
#endif

    switch (ctx->pc) {
        case 0x2de364u: goto label_2de364;
        default: break;
    }

    ctx->pc = 0x2de340u;

    // 0x2de340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de34c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2de34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2de350: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2de350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2de354: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2de354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de358: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2de358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de35c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DE35Cu;
    SET_GPR_U32(ctx, 31, 0x2DE364u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DE35Cu, 0x2DE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE364u;
label_2de364:
    // 0x2de364: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2de364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2de368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE368u;
    {
        const bool branch_taken_0x2de368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de368) {
            ctx->pc = 0x2DE380u;
            goto label_2de380;
        }
    }
    ctx->pc = 0x2DE370u;
    // 0x2de370: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2de370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de378: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2de378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2de37c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2de37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2de380:
    // 0x2de380: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2de380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2de384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de38c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2de38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2de390: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE398u;
    // 0x2de398: 0x0  nop
    ctx->pc = 0x2de398u;
    // NOP
    // 0x2de39c: 0x0  nop
    ctx->pc = 0x2de39cu;
    // NOP
    ctx->pc = 0x2de3a0u;
}
