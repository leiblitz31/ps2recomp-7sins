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

// Function: sub_00214520
// Address: 0x214520 - 0x214580
void sub_00214520_0x214520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214520_0x214520");
#endif

    switch (ctx->pc) {
        case 0x214544u: goto label_214544;
        default: break;
    }

    ctx->pc = 0x214520u;

    // 0x214520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21452c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x214530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x214530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x214534: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214538: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21453c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x21453Cu;
    SET_GPR_U32(ctx, 31, 0x214544u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x21453Cu, 0x214544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214544u;
label_214544:
    // 0x214544: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x214544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x214548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214548u;
    {
        const bool branch_taken_0x214548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214548) {
            ctx->pc = 0x214560u;
            goto label_214560;
        }
    }
    ctx->pc = 0x214550u;
    // 0x214550: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214554: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214558: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x21455c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21455cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_214560:
    // 0x214560: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x214564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21456c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21456cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214570: 0x3e00008  jr          $ra
    ctx->pc = 0x214570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214578u;
    // 0x214578: 0x0  nop
    ctx->pc = 0x214578u;
    // NOP
    // 0x21457c: 0x0  nop
    ctx->pc = 0x21457cu;
    // NOP
    ctx->pc = 0x214580u;
}
