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

// Function: sub_00245EF0
// Address: 0x245ef0 - 0x245f50
void sub_00245EF0_0x245ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245EF0_0x245ef0");
#endif

    switch (ctx->pc) {
        case 0x245f14u: goto label_245f14;
        default: break;
    }

    ctx->pc = 0x245ef0u;

    // 0x245ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245efc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x245efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x245f00: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x245f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x245f04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x245f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x245f08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x245f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245f0c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x245F0Cu;
    SET_GPR_U32(ctx, 31, 0x245F14u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x245F0Cu, 0x245F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F14u;
label_245f14:
    // 0x245f14: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x245f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x245f18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245F18u;
    {
        const bool branch_taken_0x245f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f18) {
            ctx->pc = 0x245F30u;
            goto label_245f30;
        }
    }
    ctx->pc = 0x245F20u;
    // 0x245f20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x245f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245f24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245f28: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x245f2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x245f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_245f30:
    // 0x245f30: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x245f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x245f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245f3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x245f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x245f40: 0x3e00008  jr          $ra
    ctx->pc = 0x245F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245F48u;
    // 0x245f48: 0x0  nop
    ctx->pc = 0x245f48u;
    // NOP
    // 0x245f4c: 0x0  nop
    ctx->pc = 0x245f4cu;
    // NOP
    ctx->pc = 0x245f50u;
}
