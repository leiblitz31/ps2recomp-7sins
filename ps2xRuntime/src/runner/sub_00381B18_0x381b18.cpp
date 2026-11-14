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

// Function: sub_00381B18
// Address: 0x381b18 - 0x381b70
void sub_00381B18_0x381b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381B18_0x381b18");
#endif

    switch (ctx->pc) {
        case 0x381b58u: goto label_381b58;
        default: break;
    }

    ctx->pc = 0x381b18u;

    // 0x381b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381b1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x381b20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b28: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x381b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x381b2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x381b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x381b30: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x381b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x381b34: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x381b34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x381b38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x381B38u;
    {
        const bool branch_taken_0x381b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B38u;
        // 0x381b3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b38) {
            ctx->pc = 0x381B48u;
            goto label_381b48;
        }
    }
    ctx->pc = 0x381B40u;
    // 0x381b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x381b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x381b44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x381b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_381b48:
    // 0x381b48: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x381b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x381b4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x381b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b50: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x381B50u;
    SET_GPR_U32(ctx, 31, 0x381B58u);
    ctx->pc = 0x381B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B50u;
    // 0x381b54: 0x24a51b88  addiu       $a1, $a1, 0x1B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x381B50u, 0x381B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B58u;
label_381b58:
    // 0x381b58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381b64: 0x3e00008  jr          $ra
    ctx->pc = 0x381B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B64u;
        // 0x381b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381B6Cu;
    // 0x381b6c: 0x0  nop
    ctx->pc = 0x381b6cu;
    // NOP
    ctx->pc = 0x381b70u;
}
