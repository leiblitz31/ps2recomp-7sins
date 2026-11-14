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

// Function: sub_00252B00
// Address: 0x252b00 - 0x252b80
void sub_00252B00_0x252b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B00_0x252b00");
#endif

    switch (ctx->pc) {
        case 0x252b28u: goto label_252b28;
        case 0x252b38u: goto label_252b38;
        default: break;
    }

    ctx->pc = 0x252b00u;

    // 0x252b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x252b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252b10: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x252b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x252b14: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x252b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x252b18: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x252b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x252b1c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x252b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252b20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252B20u;
    {
        const bool branch_taken_0x252b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b20) {
            ctx->pc = 0x252B4Cu;
            goto label_252b4c;
        }
    }
    ctx->pc = 0x252B28u;
label_252b28:
    // 0x252b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x252b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b30: 0xc094a4c  jal         func_252930
    ctx->pc = 0x252B30u;
    SET_GPR_U32(ctx, 31, 0x252B38u);
    ctx->pc = 0x252930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252930u, 0x252B30u, 0x252B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B38u;
label_252b38:
    // 0x252b38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b3c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x252b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x252b40: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x252b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x252b44: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x252b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x252b48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x252b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252b4c:
    // 0x252b4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x252b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252b54: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x252B54u;
    {
        const bool branch_taken_0x252b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252b54) {
            ctx->pc = 0x252B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252b28;
        }
    }
    ctx->pc = 0x252B5Cu;
    // 0x252b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x252b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252b6c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x252b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252b70: 0x3e00008  jr          $ra
    ctx->pc = 0x252B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B78u;
    // 0x252b78: 0x0  nop
    ctx->pc = 0x252b78u;
    // NOP
    // 0x252b7c: 0x0  nop
    ctx->pc = 0x252b7cu;
    // NOP
    ctx->pc = 0x252b80u;
}
