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

// Function: sub_00325C88
// Address: 0x325c88 - 0x325cf8
void sub_00325C88_0x325c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325C88_0x325c88");
#endif

    switch (ctx->pc) {
        case 0x325cb8u: goto label_325cb8;
        default: break;
    }

    ctx->pc = 0x325c88u;

    // 0x325c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325c8c: 0x8f83a638  lw          $v1, -0x59C8($gp)
    ctx->pc = 0x325c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944312)));
    // 0x325c90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325ca0: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x325ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x325ca4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x325ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325ca8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x325CA8u;
    {
        const bool branch_taken_0x325ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CA8u;
        // 0x325cac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ca8) {
            ctx->pc = 0x325CD0u;
            goto label_325cd0;
        }
    }
    ctx->pc = 0x325CB0u;
    // 0x325cb0: 0xc0c9bc8  jal         func_326F20
    ctx->pc = 0x325CB0u;
    SET_GPR_U32(ctx, 31, 0x325CB8u);
    ctx->pc = 0x326F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F20u, 0x325CB0u, 0x325CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325CB8u;
label_325cb8:
    // 0x325cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325CB8u;
    {
        const bool branch_taken_0x325cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CB8u;
        // 0x325cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cb8) {
            ctx->pc = 0x325CC8u;
            goto label_325cc8;
        }
    }
    ctx->pc = 0x325CC0u;
    // 0x325cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325CC0u;
    {
        const bool branch_taken_0x325cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CC0u;
        // 0x325cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325cc0) {
            ctx->pc = 0x325CD0u;
            goto label_325cd0;
        }
    }
    ctx->pc = 0x325CC8u;
label_325cc8:
    // 0x325cc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x325cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x325ccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x325cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325cd0:
    // 0x325cd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x325cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x325CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CDCu;
        // 0x325ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325CE4u;
    // 0x325ce4: 0x0  nop
    ctx->pc = 0x325ce4u;
    // NOP
    // 0x325ce8: 0x8f82a638  lw          $v0, -0x59C8($gp)
    ctx->pc = 0x325ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944312)));
    // 0x325cec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x325CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CF0u;
        // 0x325cf4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325CF8u;
}
