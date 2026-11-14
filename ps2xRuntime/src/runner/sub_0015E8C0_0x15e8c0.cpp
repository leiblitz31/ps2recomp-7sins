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

// Function: sub_0015E8C0
// Address: 0x15e8c0 - 0x15e940
void sub_0015E8C0_0x15e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E8C0_0x15e8c0");
#endif

    switch (ctx->pc) {
        case 0x15e8e8u: goto label_15e8e8;
        case 0x15e8f8u: goto label_15e8f8;
        default: break;
    }

    ctx->pc = 0x15e8c0u;

    // 0x15e8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15e8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e8d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15e8d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x15e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x15e8d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x15e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x15e8dc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x15e8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e8e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15E8E0u;
    {
        const bool branch_taken_0x15e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e8e0) {
            ctx->pc = 0x15E90Cu;
            goto label_15e90c;
        }
    }
    ctx->pc = 0x15E8E8u;
label_15e8e8:
    // 0x15e8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e8f0: 0xc057a50  jal         func_15E940
    ctx->pc = 0x15E8F0u;
    SET_GPR_U32(ctx, 31, 0x15E8F8u);
    ctx->pc = 0x15E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E940u, 0x15E8F0u, 0x15E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E8F8u;
label_15e8f8:
    // 0x15e8f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e8fc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15e900: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x15e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x15e904: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15e908: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15e908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e90c:
    // 0x15e90c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e910: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e914: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15E914u;
    {
        const bool branch_taken_0x15e914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e914) {
            ctx->pc = 0x15E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e8e8;
        }
    }
    ctx->pc = 0x15E91Cu;
    // 0x15e91c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e92c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x15e92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15e930: 0x3e00008  jr          $ra
    ctx->pc = 0x15E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E938u;
    // 0x15e938: 0x0  nop
    ctx->pc = 0x15e938u;
    // NOP
    // 0x15e93c: 0x0  nop
    ctx->pc = 0x15e93cu;
    // NOP
    ctx->pc = 0x15e940u;
}
