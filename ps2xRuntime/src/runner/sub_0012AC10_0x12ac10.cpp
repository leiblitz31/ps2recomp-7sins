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

// Function: sub_0012AC10
// Address: 0x12ac10 - 0x12ac70
void sub_0012AC10_0x12ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AC10_0x12ac10");
#endif

    switch (ctx->pc) {
        case 0x12ac24u: goto label_12ac24;
        case 0x12ac30u: goto label_12ac30;
        case 0x12ac50u: goto label_12ac50;
        default: break;
    }

    ctx->pc = 0x12ac10u;

    // 0x12ac10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ac14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ac18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ac1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12ac20: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ac24:
    // 0x12ac24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac28: 0xc04ab1c  jal         func_12AC70
    ctx->pc = 0x12AC28u;
    SET_GPR_U32(ctx, 31, 0x12AC30u);
    ctx->pc = 0x12AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC70u, 0x12AC28u, 0x12AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC30u;
label_12ac30:
    // 0x12ac30: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12ac30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ac34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac38: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12ac3c: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12AC3Cu;
    {
        const bool branch_taken_0x12ac3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12ac3c) {
            ctx->pc = 0x12AC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac24;
        }
    }
    ctx->pc = 0x12AC44u;
    // 0x12ac44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac48: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12AC48u;
    SET_GPR_U32(ctx, 31, 0x12AC50u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12AC48u, 0x12AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC50u;
label_12ac50:
    // 0x12ac50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ac58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ac58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12ac5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC68u;
    // 0x12ac68: 0x0  nop
    ctx->pc = 0x12ac68u;
    // NOP
    // 0x12ac6c: 0x0  nop
    ctx->pc = 0x12ac6cu;
    // NOP
    ctx->pc = 0x12ac70u;
}
