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

// Function: sub_002E03B0
// Address: 0x2e03b0 - 0x2e0440
void sub_002E03B0_0x2e03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E03B0_0x2e03b0");
#endif

    switch (ctx->pc) {
        case 0x2e03f8u: goto label_2e03f8;
        case 0x2e0408u: goto label_2e0408;
        case 0x2e041cu: goto label_2e041c;
        default: break;
    }

    ctx->pc = 0x2e03b0u;

    // 0x2e03b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e03b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e03b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e03b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e03bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e03c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e03c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e03c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e03c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e03cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e03ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e03d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e03d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e03d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e03dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e03e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e03e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e03e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e03e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e03e8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x2e03e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e03ec: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x2e03ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2e03f0: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x2E03F0u;
    SET_GPR_U32(ctx, 31, 0x2E03F8u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x2E03F0u, 0x2E03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03F8u;
label_2e03f8:
    // 0x2e03f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e03f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0400: 0xc0b8110  jal         func_2E0440
    ctx->pc = 0x2E0400u;
    SET_GPR_U32(ctx, 31, 0x2E0408u);
    ctx->pc = 0x2E0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0440u, 0x2E0400u, 0x2E0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0408u;
label_2e0408:
    // 0x2e0408: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e040c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e0410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0414: 0xc0b8adc  jal         func_2E2B70
    ctx->pc = 0x2E0414u;
    SET_GPR_U32(ctx, 31, 0x2E041Cu);
    ctx->pc = 0x2E2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2B70u, 0x2E0414u, 0x2E041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E041Cu;
label_2e041c:
    // 0x2e041c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0420: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e0420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0424: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0428: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e0428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e042c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0434: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0438: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0440u;
}
