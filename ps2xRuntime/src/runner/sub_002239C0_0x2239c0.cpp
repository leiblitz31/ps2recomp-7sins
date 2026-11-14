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

// Function: sub_002239C0
// Address: 0x2239c0 - 0x223a40
void sub_002239C0_0x2239c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002239C0_0x2239c0");
#endif

    switch (ctx->pc) {
        case 0x2239e8u: goto label_2239e8;
        case 0x2239f8u: goto label_2239f8;
        default: break;
    }

    ctx->pc = 0x2239c0u;

    // 0x2239c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2239c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2239c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2239c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2239c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2239c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2239cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2239ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2239d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2239d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2239d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2239d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2239d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2239d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2239dc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x2239dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2239e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2239E0u;
    {
        const bool branch_taken_0x2239e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239e0) {
            ctx->pc = 0x223A0Cu;
            goto label_223a0c;
        }
    }
    ctx->pc = 0x2239E8u;
label_2239e8:
    // 0x2239e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2239e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2239ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2239f0: 0xc088ea0  jal         func_223A80
    ctx->pc = 0x2239F0u;
    SET_GPR_U32(ctx, 31, 0x2239F8u);
    ctx->pc = 0x223A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A80u, 0x2239F0u, 0x2239F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239F8u;
label_2239f8:
    // 0x2239f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2239f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2239fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x223a00: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x223a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x223a04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x223a08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x223a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223a0c:
    // 0x223a0c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223a10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223a14: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x223A14u;
    {
        const bool branch_taken_0x223a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223a14) {
            ctx->pc = 0x2239E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2239e8;
        }
    }
    ctx->pc = 0x223A1Cu;
    // 0x223a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223a2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x223a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x223a30: 0x3e00008  jr          $ra
    ctx->pc = 0x223A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223A38u;
    // 0x223a38: 0x0  nop
    ctx->pc = 0x223a38u;
    // NOP
    // 0x223a3c: 0x0  nop
    ctx->pc = 0x223a3cu;
    // NOP
    ctx->pc = 0x223a40u;
}
