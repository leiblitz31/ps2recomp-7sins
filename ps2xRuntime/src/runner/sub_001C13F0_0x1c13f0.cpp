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

// Function: sub_001C13F0
// Address: 0x1c13f0 - 0x1c1480
void sub_001C13F0_0x1c13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C13F0_0x1c13f0");
#endif

    switch (ctx->pc) {
        case 0x1c1414u: goto label_1c1414;
        default: break;
    }

    ctx->pc = 0x1c13f0u;

    // 0x1c13f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c13f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c13f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c13fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c1400: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c1400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c1404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c140c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C140Cu;
    {
        const bool branch_taken_0x1c140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c140c) {
            ctx->pc = 0x1C1450u;
            goto label_1c1450;
        }
    }
    ctx->pc = 0x1C1414u;
label_1c1414:
    // 0x1c1414: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c1418: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c1418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c141c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c141cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1420: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1424: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c1424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1428: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c1428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c142c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c142cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c1430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1438: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c143c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1440: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1440u;
    {
        const bool branch_taken_0x1c1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1440) {
            ctx->pc = 0x1C144Cu;
            goto label_1c144c;
        }
    }
    ctx->pc = 0x1C1448u;
    // 0x1c1448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c144c:
    // 0x1c144c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1450:
    // 0x1c1450: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c1450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c1454: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C1454u;
    {
        const bool branch_taken_0x1c1454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1454) {
            ctx->pc = 0x1C1414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1414;
        }
    }
    ctx->pc = 0x1C145Cu;
    // 0x1c145c: 0x2201026  xor         $v0, $s1, $zero
    ctx->pc = 0x1c145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
    // 0x1c1460: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c146c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1470: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1478u;
    // 0x1c1478: 0x0  nop
    ctx->pc = 0x1c1478u;
    // NOP
    // 0x1c147c: 0x0  nop
    ctx->pc = 0x1c147cu;
    // NOP
    ctx->pc = 0x1c1480u;
}
