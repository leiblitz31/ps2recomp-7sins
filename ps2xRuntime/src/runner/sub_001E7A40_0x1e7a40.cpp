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

// Function: sub_001E7A40
// Address: 0x1e7a40 - 0x1e7ac0
void sub_001E7A40_0x1e7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A40_0x1e7a40");
#endif

    switch (ctx->pc) {
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7a78u: goto label_1e7a78;
        default: break;
    }

    ctx->pc = 0x1e7a40u;

    // 0x1e7a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7a50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e7a54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e7a58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e7a5c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e7a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7a60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E7A60u;
    {
        const bool branch_taken_0x1e7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a60) {
            ctx->pc = 0x1E7A8Cu;
            goto label_1e7a8c;
        }
    }
    ctx->pc = 0x1E7A68u;
label_1e7a68:
    // 0x1e7a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7a70: 0xc079eb0  jal         func_1E7AC0
    ctx->pc = 0x1E7A70u;
    SET_GPR_U32(ctx, 31, 0x1E7A78u);
    ctx->pc = 0x1E7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AC0u, 0x1E7A70u, 0x1E7A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A78u;
label_1e7a78:
    // 0x1e7a78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7a7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e7a80: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e7a84: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1e7a88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e7a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a8c:
    // 0x1e7a8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7a90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7A90u;
    {
        const bool branch_taken_0x1e7a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a90) {
            ctx->pc = 0x1E7A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7a68;
        }
    }
    ctx->pc = 0x1E7A98u;
    // 0x1e7a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7aa8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e7aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7AB4u;
    // 0x1e7ab4: 0x0  nop
    ctx->pc = 0x1e7ab4u;
    // NOP
    // 0x1e7ab8: 0x0  nop
    ctx->pc = 0x1e7ab8u;
    // NOP
    // 0x1e7abc: 0x0  nop
    ctx->pc = 0x1e7abcu;
    // NOP
    ctx->pc = 0x1e7ac0u;
}
