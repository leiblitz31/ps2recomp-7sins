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

// Function: sub_0038FF68
// Address: 0x38ff68 - 0x38ffb8
void sub_0038FF68_0x38ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FF68_0x38ff68");
#endif

    switch (ctx->pc) {
        case 0x38ff9cu: goto label_38ff9c;
        default: break;
    }

    ctx->pc = 0x38ff68u;

    // 0x38ff68: 0x8f82bd54  lw          $v0, -0x42AC($gp)
    ctx->pc = 0x38ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950228)));
    // 0x38ff6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ff6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38ff70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38ff74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38ff78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ff7c: 0xaf82bd54  sw          $v0, -0x42AC($gp)
    ctx->pc = 0x38ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950228), GPR_U32(ctx, 2));
    // 0x38ff80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FF80u;
    {
        const bool branch_taken_0x38ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF80u;
        // 0x38ff84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff80) {
            ctx->pc = 0x38FFA0u;
            goto label_38ffa0;
        }
    }
    ctx->pc = 0x38FF88u;
    // 0x38ff88: 0x8f84a9c8  lw          $a0, -0x5638($gp)
    ctx->pc = 0x38ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
    // 0x38ff8c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FF8Cu;
    {
        const bool branch_taken_0x38ff8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF8Cu;
        // 0x38ff90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff8c) {
            ctx->pc = 0x38FFA4u;
            goto label_38ffa4;
        }
    }
    ctx->pc = 0x38FF94u;
    // 0x38ff94: 0xc104284  jal         func_410A10
    ctx->pc = 0x38FF94u;
    SET_GPR_U32(ctx, 31, 0x38FF9Cu);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x38FF94u, 0x38FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF9Cu;
label_38ff9c:
    // 0x38ff9c: 0xaf80a9c8  sw          $zero, -0x5638($gp)
    ctx->pc = 0x38ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945224), GPR_U32(ctx, 0));
label_38ffa0:
    // 0x38ffa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ffa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ffa4:
    // 0x38ffa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ffa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ffa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ffac: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFACu;
        // 0x38ffb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FFB4u;
    // 0x38ffb4: 0x0  nop
    ctx->pc = 0x38ffb4u;
    // NOP
    ctx->pc = 0x38ffb8u;
}
