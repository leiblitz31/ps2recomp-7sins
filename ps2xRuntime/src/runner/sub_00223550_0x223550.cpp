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

// Function: sub_00223550
// Address: 0x223550 - 0x2235b0
void sub_00223550_0x223550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223550_0x223550");
#endif

    switch (ctx->pc) {
        case 0x223574u: goto label_223574;
        default: break;
    }

    ctx->pc = 0x223550u;

    // 0x223550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x223550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x223554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22355c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x223560: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x223560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x223564: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x223564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223568: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x223568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22356c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22356Cu;
    SET_GPR_U32(ctx, 31, 0x223574u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22356Cu, 0x223574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223574u;
label_223574:
    // 0x223574: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x223574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x223578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223578u;
    {
        const bool branch_taken_0x223578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223578) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223580u;
    // 0x223580: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223584: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223588: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x223588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22358c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22358cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_223590:
    // 0x223590: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x223590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x223594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22359c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22359cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2235a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2235A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2235A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2235A8u;
    // 0x2235a8: 0x0  nop
    ctx->pc = 0x2235a8u;
    // NOP
    // 0x2235ac: 0x0  nop
    ctx->pc = 0x2235acu;
    // NOP
    ctx->pc = 0x2235b0u;
}
