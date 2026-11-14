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

// Function: sub_002A0E20
// Address: 0x2a0e20 - 0x2a0ea0
void sub_002A0E20_0x2a0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0E20_0x2a0e20");
#endif

    switch (ctx->pc) {
        case 0x2a0e54u: goto label_2a0e54;
        case 0x2a0e68u: goto label_2a0e68;
        default: break;
    }

    ctx->pc = 0x2a0e20u;

    // 0x2a0e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0e2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a0e30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0e34: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2a0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a0e38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A0E38u;
    {
        const bool branch_taken_0x2a0e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e38) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0E40u;
    // 0x2a0e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0e44: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a0e48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0e4c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E54u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0E4Cu, 0x2A0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E54u;
label_2a0e54:
    // 0x2a0e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e60: 0xc0a5a70  jal         func_2969C0
    ctx->pc = 0x2A0E60u;
    SET_GPR_U32(ctx, 31, 0x2A0E68u);
    ctx->pc = 0x2969C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C0u, 0x2A0E60u, 0x2A0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E68u;
label_2a0e68:
    // 0x2a0e68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0e6c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2a0e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2a0e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0e74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0E74u;
    {
        const bool branch_taken_0x2a0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e74) {
            ctx->pc = 0x2A0E80u;
            goto label_2a0e80;
        }
    }
    ctx->pc = 0x2A0E7Cu;
label_2a0e7c:
    // 0x2a0e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e80:
    // 0x2a0e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0e88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0E94u;
    // 0x2a0e94: 0x0  nop
    ctx->pc = 0x2a0e94u;
    // NOP
    // 0x2a0e98: 0x0  nop
    ctx->pc = 0x2a0e98u;
    // NOP
    // 0x2a0e9c: 0x0  nop
    ctx->pc = 0x2a0e9cu;
    // NOP
    ctx->pc = 0x2a0ea0u;
}
