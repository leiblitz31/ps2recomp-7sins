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

// Function: sub_002E7240
// Address: 0x2e7240 - 0x2e72a0
void sub_002E7240_0x2e7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7240_0x2e7240");
#endif

    switch (ctx->pc) {
        case 0x2e7264u: goto label_2e7264;
        default: break;
    }

    ctx->pc = 0x2e7240u;

    // 0x2e7240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e7244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e724c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e724cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e7250: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e7250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e7254: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e7254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e7258: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e7258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e725c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E725Cu;
    SET_GPR_U32(ctx, 31, 0x2E7264u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E725Cu, 0x2E7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7264u;
label_2e7264:
    // 0x2e7264: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2e7264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2e7268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7268u;
    {
        const bool branch_taken_0x2e7268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7268) {
            ctx->pc = 0x2E7280u;
            goto label_2e7280;
        }
    }
    ctx->pc = 0x2E7270u;
    // 0x2e7270: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7274: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7278: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2e7278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e727c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e727cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2e7280:
    // 0x2e7280: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2e7280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e7284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e728c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e728cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7290: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7298u;
    // 0x2e7298: 0x0  nop
    ctx->pc = 0x2e7298u;
    // NOP
    // 0x2e729c: 0x0  nop
    ctx->pc = 0x2e729cu;
    // NOP
    ctx->pc = 0x2e72a0u;
}
