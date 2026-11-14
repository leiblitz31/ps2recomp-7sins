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

// Function: sub_0022EE90
// Address: 0x22ee90 - 0x22ef10
void sub_0022EE90_0x22ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EE90_0x22ee90");
#endif

    switch (ctx->pc) {
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eec8u: goto label_22eec8;
        default: break;
    }

    ctx->pc = 0x22ee90u;

    // 0x22ee90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ee94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ee98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ee9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eea0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22eea4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22eea8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22eeac: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x22eeacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22eeb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22EEB0u;
    {
        const bool branch_taken_0x22eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eeb0) {
            ctx->pc = 0x22EEDCu;
            goto label_22eedc;
        }
    }
    ctx->pc = 0x22EEB8u;
label_22eeb8:
    // 0x22eeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eebc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eec0: 0xc08bbd4  jal         func_22EF50
    ctx->pc = 0x22EEC0u;
    SET_GPR_U32(ctx, 31, 0x22EEC8u);
    ctx->pc = 0x22EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF50u, 0x22EEC0u, 0x22EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEC8u;
label_22eec8:
    // 0x22eec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eecc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22eed0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x22eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x22eed4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x22eed8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22eed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eedc:
    // 0x22eedc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eee0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eee4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22EEE4u;
    {
        const bool branch_taken_0x22eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22eee4) {
            ctx->pc = 0x22EEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22eeb8;
        }
    }
    ctx->pc = 0x22EEECu;
    // 0x22eeec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22eeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22eef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22eef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eefc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22eefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22ef00: 0x3e00008  jr          $ra
    ctx->pc = 0x22EF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF08u;
    // 0x22ef08: 0x0  nop
    ctx->pc = 0x22ef08u;
    // NOP
    // 0x22ef0c: 0x0  nop
    ctx->pc = 0x22ef0cu;
    // NOP
    ctx->pc = 0x22ef10u;
}
