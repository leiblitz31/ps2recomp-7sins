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

// Function: sub_00482EA0
// Address: 0x482ea0 - 0x482f00
void sub_00482EA0_0x482ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482EA0_0x482ea0");
#endif

    switch (ctx->pc) {
        case 0x482ec4u: goto label_482ec4;
        default: break;
    }

    ctx->pc = 0x482ea0u;

    // 0x482ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x482ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x482ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482eac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x482eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x482eb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x482eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x482eb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x482eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482eb8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x482eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482ebc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x482EBCu;
    SET_GPR_U32(ctx, 31, 0x482EC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x482EBCu, 0x482EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482EC4u;
label_482ec4:
    // 0x482ec4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x482ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x482ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x482EC8u;
    {
        const bool branch_taken_0x482ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482ec8) {
            ctx->pc = 0x482EE0u;
            goto label_482ee0;
        }
    }
    ctx->pc = 0x482ED0u;
    // 0x482ed0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x482ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482ed4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x482ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x482ed8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x482ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x482edc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x482edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_482ee0:
    // 0x482ee0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x482ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x482ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482eec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x482eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x482ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x482EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482EF8u;
    // 0x482ef8: 0x0  nop
    ctx->pc = 0x482ef8u;
    // NOP
    // 0x482efc: 0x0  nop
    ctx->pc = 0x482efcu;
    // NOP
    ctx->pc = 0x482f00u;
}
