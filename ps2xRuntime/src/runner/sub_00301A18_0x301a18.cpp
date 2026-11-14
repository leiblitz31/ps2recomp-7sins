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

// Function: sub_00301A18
// Address: 0x301a18 - 0x301aa8
void sub_00301A18_0x301a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301A18_0x301a18");
#endif

    ctx->pc = 0x301a18u;

    // 0x301a18: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x301a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x301a1c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x301a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x301a20: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x301a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x301a24: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x301A24u;
    {
        const bool branch_taken_0x301a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a24) {
            ctx->pc = 0x301A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301A24u;
            // 0x301a28: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301A34u;
            goto label_301a34;
        }
    }
    ctx->pc = 0x301A2Cu;
    // 0x301a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x301A2Cu;
    {
        const bool branch_taken_0x301a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A2Cu;
        // 0x301a30: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a2c) {
            ctx->pc = 0x301A38u;
            goto label_301a38;
        }
    }
    ctx->pc = 0x301A34u;
label_301a34:
    // 0x301a34: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x301a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_301a38:
    // 0x301a38: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x301a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x301a3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x301a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x301a40: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x301a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x301a44: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x301a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x301a48: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x301a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x301a4c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x301a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x301a50: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x301a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x301a54: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x301a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x301a58: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x301a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x301a5c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x301a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x301a60: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x301a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x301a64: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x301a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x301a68: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x301a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x301a6c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x301a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x301a70: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x301a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x301a74: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x301a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x301a78: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x301a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x301a7c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x301a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301a80: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x301A80u;
    {
        const bool branch_taken_0x301a80 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x301a80) {
            ctx->pc = 0x301A9Cu;
            goto label_301a9c;
        }
    }
    ctx->pc = 0x301A88u;
    // 0x301a88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x301a8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301A8Cu;
    {
        const bool branch_taken_0x301a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a8c) {
            ctx->pc = 0x301A9Cu;
            goto label_301a9c;
        }
    }
    ctx->pc = 0x301A94u;
    // 0x301a94: 0x80bfa8a  j           func_2FEA28
    ctx->pc = 0x301A94u;
    ctx->pc = 0x2FEA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA28u, 0x301A94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x301A9Cu;
label_301a9c:
    // 0x301a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x301A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301AA4u;
    // 0x301aa4: 0x0  nop
    ctx->pc = 0x301aa4u;
    // NOP
    ctx->pc = 0x301aa8u;
}
