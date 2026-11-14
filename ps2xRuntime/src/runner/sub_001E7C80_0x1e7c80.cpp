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

// Function: sub_001E7C80
// Address: 0x1e7c80 - 0x1e7d00
void sub_001E7C80_0x1e7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7C80_0x1e7c80");
#endif

    switch (ctx->pc) {
        case 0x1e7ca8u: goto label_1e7ca8;
        case 0x1e7cb8u: goto label_1e7cb8;
        default: break;
    }

    ctx->pc = 0x1e7c80u;

    // 0x1e7c80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7c90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e7c94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e7c98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e7c9c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7ca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E7CA0u;
    {
        const bool branch_taken_0x1e7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ca0) {
            ctx->pc = 0x1E7CCCu;
            goto label_1e7ccc;
        }
    }
    ctx->pc = 0x1E7CA8u;
label_1e7ca8:
    // 0x1e7ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7cb0: 0xc079eb0  jal         func_1E7AC0
    ctx->pc = 0x1E7CB0u;
    SET_GPR_U32(ctx, 31, 0x1E7CB8u);
    ctx->pc = 0x1E7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AC0u, 0x1E7CB0u, 0x1E7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CB8u;
label_1e7cb8:
    // 0x1e7cb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7cbc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e7cc0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e7cc4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1e7cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1e7cc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e7cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ccc:
    // 0x1e7ccc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7cd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7cd4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E7CD4u;
    {
        const bool branch_taken_0x1e7cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7cd4) {
            ctx->pc = 0x1E7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7ca8;
        }
    }
    ctx->pc = 0x1E7CDCu;
    // 0x1e7cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7cec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e7cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7CF8u;
    // 0x1e7cf8: 0x0  nop
    ctx->pc = 0x1e7cf8u;
    // NOP
    // 0x1e7cfc: 0x0  nop
    ctx->pc = 0x1e7cfcu;
    // NOP
    ctx->pc = 0x1e7d00u;
}
