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

// Function: sub_001E82B0
// Address: 0x1e82b0 - 0x1e8330
void sub_001E82B0_0x1e82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E82B0_0x1e82b0");
#endif

    switch (ctx->pc) {
        case 0x1e82d8u: goto label_1e82d8;
        case 0x1e82e8u: goto label_1e82e8;
        default: break;
    }

    ctx->pc = 0x1e82b0u;

    // 0x1e82b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e82b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e82b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e82bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e82bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e82c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e82c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e82c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e82c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e82cc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e82ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e82d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E82D0u;
    {
        const bool branch_taken_0x1e82d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e82d0) {
            ctx->pc = 0x1E82FCu;
            goto label_1e82fc;
        }
    }
    ctx->pc = 0x1E82D8u;
label_1e82d8:
    // 0x1e82d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e82d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e82e0: 0xc07a0cc  jal         func_1E8330
    ctx->pc = 0x1E82E0u;
    SET_GPR_U32(ctx, 31, 0x1E82E8u);
    ctx->pc = 0x1E8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8330u, 0x1E82E0u, 0x1E82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E82E8u;
label_1e82e8:
    // 0x1e82e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e82ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e82f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e82f4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e82f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e82f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e82f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e82fc:
    // 0x1e82fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E8300u;
    {
        const bool branch_taken_0x1e8300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8300) {
            ctx->pc = 0x1E82D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e82d8;
        }
    }
    ctx->pc = 0x1E8308u;
    // 0x1e8308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e830c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8318: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e831c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8324u;
    // 0x1e8324: 0x0  nop
    ctx->pc = 0x1e8324u;
    // NOP
    // 0x1e8328: 0x0  nop
    ctx->pc = 0x1e8328u;
    // NOP
    // 0x1e832c: 0x0  nop
    ctx->pc = 0x1e832cu;
    // NOP
    ctx->pc = 0x1e8330u;
}
