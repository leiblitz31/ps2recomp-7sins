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

// Function: sub_002906E0
// Address: 0x2906e0 - 0x290740
void sub_002906E0_0x2906e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002906E0_0x2906e0");
#endif

    switch (ctx->pc) {
        case 0x290704u: goto label_290704;
        default: break;
    }

    ctx->pc = 0x2906e0u;

    // 0x2906e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2906e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2906e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2906e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2906e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2906ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2906ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2906f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2906f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2906f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2906f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2906f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2906f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2906fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2906FCu;
    SET_GPR_U32(ctx, 31, 0x290704u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2906FCu, 0x290704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290704u;
label_290704:
    // 0x290704: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x290704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x290708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290708u;
    {
        const bool branch_taken_0x290708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290708) {
            ctx->pc = 0x290720u;
            goto label_290720;
        }
    }
    ctx->pc = 0x290710u;
    // 0x290710: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x290714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290718: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x290718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x29071c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29071cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_290720:
    // 0x290720: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x290720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x290724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29072c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29072cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290730: 0x3e00008  jr          $ra
    ctx->pc = 0x290730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290738u;
    // 0x290738: 0x0  nop
    ctx->pc = 0x290738u;
    // NOP
    // 0x29073c: 0x0  nop
    ctx->pc = 0x29073cu;
    // NOP
    ctx->pc = 0x290740u;
}
