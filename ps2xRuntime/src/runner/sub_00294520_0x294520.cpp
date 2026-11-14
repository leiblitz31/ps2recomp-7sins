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

// Function: sub_00294520
// Address: 0x294520 - 0x294580
void sub_00294520_0x294520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294520_0x294520");
#endif

    switch (ctx->pc) {
        case 0x294544u: goto label_294544;
        default: break;
    }

    ctx->pc = 0x294520u;

    // 0x294520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29452c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x294530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x294530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x294534: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x294534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294538: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x294538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29453c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x29453Cu;
    SET_GPR_U32(ctx, 31, 0x294544u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29453Cu, 0x294544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294544u;
label_294544:
    // 0x294544: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x294544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x294548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294548u;
    {
        const bool branch_taken_0x294548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294548) {
            ctx->pc = 0x294560u;
            goto label_294560;
        }
    }
    ctx->pc = 0x294550u;
    // 0x294550: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x294550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294554: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294558: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x294558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x29455c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29455cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_294560:
    // 0x294560: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x294564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29456c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29456cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x294570: 0x3e00008  jr          $ra
    ctx->pc = 0x294570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294578u;
    // 0x294578: 0x0  nop
    ctx->pc = 0x294578u;
    // NOP
    // 0x29457c: 0x0  nop
    ctx->pc = 0x29457cu;
    // NOP
    ctx->pc = 0x294580u;
}
