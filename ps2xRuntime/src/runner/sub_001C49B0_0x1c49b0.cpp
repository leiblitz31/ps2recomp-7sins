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

// Function: sub_001C49B0
// Address: 0x1c49b0 - 0x1c4a30
void sub_001C49B0_0x1c49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C49B0_0x1c49b0");
#endif

    switch (ctx->pc) {
        case 0x1c49d8u: goto label_1c49d8;
        case 0x1c49e8u: goto label_1c49e8;
        default: break;
    }

    ctx->pc = 0x1c49b0u;

    // 0x1c49b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c49b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c49b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c49b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c49bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c49bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c49c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c49c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c49c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c49cc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c49d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C49D0u;
    {
        const bool branch_taken_0x1c49d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c49d0) {
            ctx->pc = 0x1C49FCu;
            goto label_1c49fc;
        }
    }
    ctx->pc = 0x1C49D8u;
label_1c49d8:
    // 0x1c49d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c49d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49dc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c49e0: 0xc0711fc  jal         func_1C47F0
    ctx->pc = 0x1C49E0u;
    SET_GPR_U32(ctx, 31, 0x1C49E8u);
    ctx->pc = 0x1C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47F0u, 0x1C49E0u, 0x1C49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49E8u;
label_1c49e8:
    // 0x1c49e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c49ec: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1c49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1c49f0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c49f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1c49f4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c49f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c49f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c49f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c49fc:
    // 0x1c49fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4a00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4a04: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C4A04u;
    {
        const bool branch_taken_0x1c4a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4a04) {
            ctx->pc = 0x1C49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c49d8;
        }
    }
    ctx->pc = 0x1C4A0Cu;
    // 0x1c4a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c4a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a1c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A28u;
    // 0x1c4a28: 0x0  nop
    ctx->pc = 0x1c4a28u;
    // NOP
    // 0x1c4a2c: 0x0  nop
    ctx->pc = 0x1c4a2cu;
    // NOP
    ctx->pc = 0x1c4a30u;
}
