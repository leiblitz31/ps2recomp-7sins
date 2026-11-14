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

// Function: sub_002E0260
// Address: 0x2e0260 - 0x2e02c0
void sub_002E0260_0x2e0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0260_0x2e0260");
#endif

    switch (ctx->pc) {
        case 0x2e0284u: goto label_2e0284;
        default: break;
    }

    ctx->pc = 0x2e0260u;

    // 0x2e0260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e026c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e0270: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e0270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e0274: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0278: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e0278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e027c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E027Cu;
    SET_GPR_U32(ctx, 31, 0x2E0284u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E027Cu, 0x2E0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0284u;
label_2e0284:
    // 0x2e0284: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2e0284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2e0288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0288u;
    {
        const bool branch_taken_0x2e0288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0288) {
            ctx->pc = 0x2E02A0u;
            goto label_2e02a0;
        }
    }
    ctx->pc = 0x2E0290u;
    // 0x2e0290: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e0294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0298: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2e0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e029c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e029cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2e02a0:
    // 0x2e02a0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2e02a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e02a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e02a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e02a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e02a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e02ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e02acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e02b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E02B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E02B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E02B8u;
    // 0x2e02b8: 0x0  nop
    ctx->pc = 0x2e02b8u;
    // NOP
    // 0x2e02bc: 0x0  nop
    ctx->pc = 0x2e02bcu;
    // NOP
    ctx->pc = 0x2e02c0u;
}
