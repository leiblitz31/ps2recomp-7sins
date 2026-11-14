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

// Function: sub_0018A070
// Address: 0x18a070 - 0x18a0f0
void sub_0018A070_0x18a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A070_0x18a070");
#endif

    switch (ctx->pc) {
        case 0x18a098u: goto label_18a098;
        case 0x18a0a8u: goto label_18a0a8;
        default: break;
    }

    ctx->pc = 0x18a070u;

    // 0x18a070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a07c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a080: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18a084: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18a088: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18a08c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x18a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a090: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A090u;
    {
        const bool branch_taken_0x18a090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a090) {
            ctx->pc = 0x18A0BCu;
            goto label_18a0bc;
        }
    }
    ctx->pc = 0x18A098u;
label_18a098:
    // 0x18a098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a09c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a0a0: 0xc06284c  jal         func_18A130
    ctx->pc = 0x18A0A0u;
    SET_GPR_U32(ctx, 31, 0x18A0A8u);
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x18A0A0u, 0x18A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0A8u;
label_18a0a8:
    // 0x18a0a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a0ac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18a0b0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x18a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x18a0b4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x18a0b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18a0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a0bc:
    // 0x18a0bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a0c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a0c4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18A0C4u;
    {
        const bool branch_taken_0x18a0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a0c4) {
            ctx->pc = 0x18A098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a098;
        }
    }
    ctx->pc = 0x18A0CCu;
    // 0x18a0cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18a0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a0dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18a0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A0E8u;
    // 0x18a0e8: 0x0  nop
    ctx->pc = 0x18a0e8u;
    // NOP
    // 0x18a0ec: 0x0  nop
    ctx->pc = 0x18a0ecu;
    // NOP
    ctx->pc = 0x18a0f0u;
}
