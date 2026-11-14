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

// Function: sub_003E2C50
// Address: 0x3e2c50 - 0x3e2ca8
void sub_003E2C50_0x3e2c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2C50_0x3e2c50");
#endif

    switch (ctx->pc) {
        case 0x3e2c74u: goto label_3e2c74;
        case 0x3e2c90u: goto label_3e2c90;
        default: break;
    }

    ctx->pc = 0x3e2c50u;

    // 0x3e2c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e2c54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e2c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e2c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e2c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2c64: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3e2c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3e2c68: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3e2c68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3e2c6c: 0xc0bb484  jal         func_2ED210
    ctx->pc = 0x3E2C6Cu;
    SET_GPR_U32(ctx, 31, 0x3E2C74u);
    ctx->pc = 0x2ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED210u, 0x3E2C6Cu, 0x3E2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C74u;
label_3e2c74:
    // 0x3e2c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e2c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c78: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2C78u;
    {
        const bool branch_taken_0x3e2c78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C78u;
        // 0x3e2c7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c78) {
            ctx->pc = 0x3E2C94u;
            goto label_3e2c94;
        }
    }
    ctx->pc = 0x3E2C80u;
    // 0x3e2c80: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e2c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c88: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E2C88u;
    SET_GPR_U32(ctx, 31, 0x3E2C90u);
    ctx->pc = 0x3E2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2C88u;
    // 0x3e2c8c: 0x24a5e320  addiu       $a1, $a1, -0x1CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E2C88u, 0x3E2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C90u;
label_3e2c90:
    // 0x3e2c90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e2c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2c94:
    // 0x3e2c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e2c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e2c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CA0u;
        // 0x3e2ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2CA8u;
}
