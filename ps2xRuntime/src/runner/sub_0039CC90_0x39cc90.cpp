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

// Function: sub_0039CC90
// Address: 0x39cc90 - 0x39ccd8
void sub_0039CC90_0x39cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CC90_0x39cc90");
#endif

    switch (ctx->pc) {
        case 0x39ccc4u: goto label_39ccc4;
        default: break;
    }

    ctx->pc = 0x39cc90u;

    // 0x39cc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cc94: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
    // 0x39cc98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cca4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39cca8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CCA8u;
    {
        const bool branch_taken_0x39cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCA8u;
        // 0x39ccac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cca8) {
            ctx->pc = 0x39CCC4u;
            goto label_39ccc4;
        }
    }
    ctx->pc = 0x39CCB0u;
    // 0x39ccb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ccb4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CCB4u;
    {
        const bool branch_taken_0x39ccb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCB4u;
        // 0x39ccb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ccb4) {
            ctx->pc = 0x39CCC8u;
            goto label_39ccc8;
        }
    }
    ctx->pc = 0x39CCBCu;
    // 0x39ccbc: 0xc0e6f46  jal         func_39BD18
    ctx->pc = 0x39CCBCu;
    SET_GPR_U32(ctx, 31, 0x39CCC4u);
    ctx->pc = 0x39CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CCBCu;
    // 0x39ccc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD18u, 0x39CCBCu, 0x39CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CCC4u;
label_39ccc4:
    // 0x39ccc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ccc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ccc8:
    // 0x39ccc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ccccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ccd0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCD0u;
        // 0x39ccd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CCD8u;
}
