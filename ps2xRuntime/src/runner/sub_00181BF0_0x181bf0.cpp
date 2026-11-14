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

// Function: sub_00181BF0
// Address: 0x181bf0 - 0x181c70
void sub_00181BF0_0x181bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181BF0_0x181bf0");
#endif

    switch (ctx->pc) {
        case 0x181c18u: goto label_181c18;
        case 0x181c28u: goto label_181c28;
        default: break;
    }

    ctx->pc = 0x181bf0u;

    // 0x181bf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181c00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x181c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x181c04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x181c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x181c08: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x181c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x181c0c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x181c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181c10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181C10u;
    {
        const bool branch_taken_0x181c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c10) {
            ctx->pc = 0x181C3Cu;
            goto label_181c3c;
        }
    }
    ctx->pc = 0x181C18u;
label_181c18:
    // 0x181c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c1c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x181c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181c20: 0xc06071c  jal         func_181C70
    ctx->pc = 0x181C20u;
    SET_GPR_U32(ctx, 31, 0x181C28u);
    ctx->pc = 0x181C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181C70u, 0x181C20u, 0x181C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C28u;
label_181c28:
    // 0x181c28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181c2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181c30: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x181c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x181c34: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x181c38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c3c:
    // 0x181c3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181c40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x181C40u;
    {
        const bool branch_taken_0x181c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181c40) {
            ctx->pc = 0x181C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c18;
        }
    }
    ctx->pc = 0x181C48u;
    // 0x181c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c58: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x181C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181C64u;
    // 0x181c64: 0x0  nop
    ctx->pc = 0x181c64u;
    // NOP
    // 0x181c68: 0x0  nop
    ctx->pc = 0x181c68u;
    // NOP
    // 0x181c6c: 0x0  nop
    ctx->pc = 0x181c6cu;
    // NOP
    ctx->pc = 0x181c70u;
}
