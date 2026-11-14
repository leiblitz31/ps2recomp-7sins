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

// Function: sub_00129E50
// Address: 0x129e50 - 0x129ed0
void sub_00129E50_0x129e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129E50_0x129e50");
#endif

    switch (ctx->pc) {
        case 0x129e78u: goto label_129e78;
        case 0x129e88u: goto label_129e88;
        default: break;
    }

    ctx->pc = 0x129e50u;

    // 0x129e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x129e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x129e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129e60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x129e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x129e64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x129e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x129e68: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x129e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x129e6c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129e70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x129E70u;
    {
        const bool branch_taken_0x129e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e70) {
            ctx->pc = 0x129E9Cu;
            goto label_129e9c;
        }
    }
    ctx->pc = 0x129E78u;
label_129e78:
    // 0x129e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e7c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x129e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129e80: 0xc04a7d4  jal         func_129F50
    ctx->pc = 0x129E80u;
    SET_GPR_U32(ctx, 31, 0x129E88u);
    ctx->pc = 0x129F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F50u, 0x129E80u, 0x129E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E88u;
label_129e88:
    // 0x129e88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x129e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129e90: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x129e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x129e94: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x129e98: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x129e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129e9c:
    // 0x129e9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129ea0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x129EA0u;
    {
        const bool branch_taken_0x129ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ea0) {
            ctx->pc = 0x129E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e78;
        }
    }
    ctx->pc = 0x129EA8u;
    // 0x129ea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129eb8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x129eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x129EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129EC4u;
    // 0x129ec4: 0x0  nop
    ctx->pc = 0x129ec4u;
    // NOP
    // 0x129ec8: 0x0  nop
    ctx->pc = 0x129ec8u;
    // NOP
    // 0x129ecc: 0x0  nop
    ctx->pc = 0x129eccu;
    // NOP
    ctx->pc = 0x129ed0u;
}
