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

// Function: sub_0019E160
// Address: 0x19e160 - 0x19e1e0
void sub_0019E160_0x19e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E160_0x19e160");
#endif

    switch (ctx->pc) {
        case 0x19e188u: goto label_19e188;
        case 0x19e198u: goto label_19e198;
        default: break;
    }

    ctx->pc = 0x19e160u;

    // 0x19e160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19e164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e170: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19e170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19e174: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19e174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19e178: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19e178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19e17c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x19e17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e180: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19E180u;
    {
        const bool branch_taken_0x19e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e180) {
            ctx->pc = 0x19E1ACu;
            goto label_19e1ac;
        }
    }
    ctx->pc = 0x19E188u;
label_19e188:
    // 0x19e188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e18c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x19e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e190: 0xc067878  jal         func_19E1E0
    ctx->pc = 0x19E190u;
    SET_GPR_U32(ctx, 31, 0x19E198u);
    ctx->pc = 0x19E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1E0u, 0x19E190u, 0x19E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E198u;
label_19e198:
    // 0x19e198: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19e1a0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x19e1a4: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19e1a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19e1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e1ac:
    // 0x19e1ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e1b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19E1B0u;
    {
        const bool branch_taken_0x19e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e1b0) {
            ctx->pc = 0x19E188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e188;
        }
    }
    ctx->pc = 0x19E1B8u;
    // 0x19e1b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19e1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E1D4u;
    // 0x19e1d4: 0x0  nop
    ctx->pc = 0x19e1d4u;
    // NOP
    // 0x19e1d8: 0x0  nop
    ctx->pc = 0x19e1d8u;
    // NOP
    // 0x19e1dc: 0x0  nop
    ctx->pc = 0x19e1dcu;
    // NOP
    ctx->pc = 0x19e1e0u;
}
