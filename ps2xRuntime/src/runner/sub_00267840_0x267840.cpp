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

// Function: sub_00267840
// Address: 0x267840 - 0x2678c0
void sub_00267840_0x267840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267840_0x267840");
#endif

    switch (ctx->pc) {
        case 0x267868u: goto label_267868;
        case 0x267878u: goto label_267878;
        default: break;
    }

    ctx->pc = 0x267840u;

    // 0x267840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x267840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x267844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x267844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x267848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26784c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267850: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x267850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x267854: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x267854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x267858: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x267858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26785c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x26785cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267860: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x267860u;
    {
        const bool branch_taken_0x267860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267860) {
            ctx->pc = 0x26788Cu;
            goto label_26788c;
        }
    }
    ctx->pc = 0x267868u;
label_267868:
    // 0x267868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26786c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26786cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267870: 0xc099e40  jal         func_267900
    ctx->pc = 0x267870u;
    SET_GPR_U32(ctx, 31, 0x267878u);
    ctx->pc = 0x267900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267900u, 0x267870u, 0x267878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267878u;
label_267878:
    // 0x267878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x267878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26787c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x26787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x267880: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x267880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x267884: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x267884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x267888: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x267888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26788c:
    // 0x26788c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267890: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267894: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x267894u;
    {
        const bool branch_taken_0x267894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267894) {
            ctx->pc = 0x267868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267868;
        }
    }
    ctx->pc = 0x26789Cu;
    // 0x26789c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26789cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2678a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2678a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2678a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2678a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2678a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2678ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2678acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2678b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2678B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2678B8u;
    // 0x2678b8: 0x0  nop
    ctx->pc = 0x2678b8u;
    // NOP
    // 0x2678bc: 0x0  nop
    ctx->pc = 0x2678bcu;
    // NOP
    ctx->pc = 0x2678c0u;
}
