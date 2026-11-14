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

// Function: sub_00264B20
// Address: 0x264b20 - 0x264ba0
void sub_00264B20_0x264b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264B20_0x264b20");
#endif

    switch (ctx->pc) {
        case 0x264b48u: goto label_264b48;
        case 0x264b58u: goto label_264b58;
        default: break;
    }

    ctx->pc = 0x264b20u;

    // 0x264b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x264b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264b30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x264b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x264b34: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x264b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x264b38: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x264b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x264b3c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x264b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264b40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264B40u;
    {
        const bool branch_taken_0x264b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b40) {
            ctx->pc = 0x264B6Cu;
            goto label_264b6c;
        }
    }
    ctx->pc = 0x264B48u;
label_264b48:
    // 0x264b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b4c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x264b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264b50: 0xc099318  jal         func_264C60
    ctx->pc = 0x264B50u;
    SET_GPR_U32(ctx, 31, 0x264B58u);
    ctx->pc = 0x264C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C60u, 0x264B50u, 0x264B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B58u;
label_264b58:
    // 0x264b58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x264b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264b5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264b60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x264b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x264b64: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x264b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x264b68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x264b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264b6c:
    // 0x264b6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x264b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264b70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x264B70u;
    {
        const bool branch_taken_0x264b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264b70) {
            ctx->pc = 0x264B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264b48;
        }
    }
    ctx->pc = 0x264B78u;
    // 0x264b78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264b88: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x264b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x264B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264B94u;
    // 0x264b94: 0x0  nop
    ctx->pc = 0x264b94u;
    // NOP
    // 0x264b98: 0x0  nop
    ctx->pc = 0x264b98u;
    // NOP
    // 0x264b9c: 0x0  nop
    ctx->pc = 0x264b9cu;
    // NOP
    ctx->pc = 0x264ba0u;
}
