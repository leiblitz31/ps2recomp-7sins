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

// Function: sub_003B5418
// Address: 0x3b5418 - 0x3b5468
void sub_003B5418_0x3b5418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5418_0x3b5418");
#endif

    switch (ctx->pc) {
        case 0x3b5434u: goto label_3b5434;
        case 0x3b5448u: goto label_3b5448;
        default: break;
    }

    ctx->pc = 0x3b5418u;

    // 0x3b5418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b5418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b541c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b5420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b5420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b5424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b542c: 0xc0ed312  jal         func_3B4C48
    ctx->pc = 0x3B542Cu;
    SET_GPR_U32(ctx, 31, 0x3B5434u);
    ctx->pc = 0x3B5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B542Cu;
    // 0x3b5430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C48u, 0x3B542Cu, 0x3B5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5434u;
label_3b5434:
    // 0x3b5434: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5434u;
    {
        const bool branch_taken_0x3b5434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5434) {
            ctx->pc = 0x3B5438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5434u;
            // 0x3b5438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5450u;
            goto label_3b5450;
        }
    }
    ctx->pc = 0x3B543Cu;
    // 0x3b543c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3b5440: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3B5440u;
    SET_GPR_U32(ctx, 31, 0x3B5448u);
    ctx->pc = 0x3B5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5440u;
    // 0x3b5444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3B5440u, 0x3B5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5448u;
label_3b5448:
    // 0x3b5448: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b5448u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3b544c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b544cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5450:
    // 0x3b5450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b5450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b545c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B545Cu;
        // 0x3b5460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B545Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5464u;
    // 0x3b5464: 0x0  nop
    ctx->pc = 0x3b5464u;
    // NOP
    ctx->pc = 0x3b5468u;
}
