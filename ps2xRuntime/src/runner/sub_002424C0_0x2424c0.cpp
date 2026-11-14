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

// Function: sub_002424C0
// Address: 0x2424c0 - 0x242550
void sub_002424C0_0x2424c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002424C0_0x2424c0");
#endif

    switch (ctx->pc) {
        case 0x2424f0u: goto label_2424f0;
        case 0x2424fcu: goto label_2424fc;
        case 0x242504u: goto label_242504;
        case 0x24251cu: goto label_24251c;
        default: break;
    }

    ctx->pc = 0x2424c0u;

    // 0x2424c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2424c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2424c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2424c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2424c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2424c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2424cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2424ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2424d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2424d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2424d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2424d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2424d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2424dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2424dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2424e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2424e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2424e4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2424e8: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x2424E8u;
    SET_GPR_U32(ctx, 31, 0x2424F0u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x2424E8u, 0x2424F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424F0u;
label_2424f0:
    // 0x2424f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2424f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2424f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2424F4u;
    {
        const bool branch_taken_0x2424f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2424f4) {
            ctx->pc = 0x242524u;
            goto label_242524;
        }
    }
    ctx->pc = 0x2424FCu;
label_2424fc:
    // 0x2424fc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2424FCu;
    SET_GPR_U32(ctx, 31, 0x242504u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2424FCu, 0x242504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242504u;
label_242504:
    // 0x242504: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x242504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x242508: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x242508u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24250c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242514: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x242514u;
    SET_GPR_U32(ctx, 31, 0x24251Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x242514u, 0x24251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24251Cu;
label_24251c:
    // 0x24251c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x24251cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x242520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x242520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_242524:
    // 0x242524: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x242524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242528: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x242528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24252c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x24252Cu;
    {
        const bool branch_taken_0x24252c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24252c) {
            ctx->pc = 0x2424FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2424fc;
        }
    }
    ctx->pc = 0x242534u;
    // 0x242534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x242534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24253c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24253cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242540: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x242544: 0x3e00008  jr          $ra
    ctx->pc = 0x242544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24254Cu;
    // 0x24254c: 0x0  nop
    ctx->pc = 0x24254cu;
    // NOP
    ctx->pc = 0x242550u;
}
