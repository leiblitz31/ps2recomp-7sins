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

// Function: sub_001B8C00
// Address: 0x1b8c00 - 0x1b8c80
void sub_001B8C00_0x1b8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C00_0x1b8c00");
#endif

    switch (ctx->pc) {
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c38u: goto label_1b8c38;
        default: break;
    }

    ctx->pc = 0x1b8c00u;

    // 0x1b8c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b8c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b8c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8c10: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b8c14: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b8c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b8c18: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1b8c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1b8c1c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8c20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B8C20u;
    {
        const bool branch_taken_0x1b8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c20) {
            ctx->pc = 0x1B8C4Cu;
            goto label_1b8c4c;
        }
    }
    ctx->pc = 0x1B8C28u;
label_1b8c28:
    // 0x1b8c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8c30: 0xc06e28c  jal         func_1B8A30
    ctx->pc = 0x1B8C30u;
    SET_GPR_U32(ctx, 31, 0x1B8C38u);
    ctx->pc = 0x1B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A30u, 0x1B8C30u, 0x1B8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C38u;
label_1b8c38:
    // 0x1b8c38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8c3c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b8c40: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1b8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1b8c44: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b8c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b8c48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c4c:
    // 0x1b8c4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8c50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8c54: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B8C54u;
    {
        const bool branch_taken_0x1b8c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8c54) {
            ctx->pc = 0x1B8C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8c28;
        }
    }
    ctx->pc = 0x1B8C5Cu;
    // 0x1b8c5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8c6c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b8c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b8c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8C78u;
    // 0x1b8c78: 0x0  nop
    ctx->pc = 0x1b8c78u;
    // NOP
    // 0x1b8c7c: 0x0  nop
    ctx->pc = 0x1b8c7cu;
    // NOP
    ctx->pc = 0x1b8c80u;
}
