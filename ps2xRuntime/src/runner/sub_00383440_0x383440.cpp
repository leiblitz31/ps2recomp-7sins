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

// Function: sub_00383440
// Address: 0x383440 - 0x383490
void sub_00383440_0x383440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383440_0x383440");
#endif

    switch (ctx->pc) {
        case 0x383454u: goto label_383454;
        case 0x38347cu: goto label_38347c;
        default: break;
    }

    ctx->pc = 0x383440u;

    // 0x383440: 0x8f82a94c  lw          $v0, -0x56B4($gp)
    ctx->pc = 0x383440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945100)));
    // 0x383444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38344c: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x38344Cu;
    SET_GPR_U32(ctx, 31, 0x383454u);
    ctx->pc = 0x383450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38344Cu;
    // 0x383450: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x38344Cu, 0x383454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383454u;
label_383454:
    // 0x383454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383458: 0x3e00008  jr          $ra
    ctx->pc = 0x383458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383458u;
        // 0x38345c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383460u;
    // 0x383460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383464: 0x8f82a94c  lw          $v0, -0x56B4($gp)
    ctx->pc = 0x383464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945100)));
    // 0x383468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38346c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383474: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x383474u;
    SET_GPR_U32(ctx, 31, 0x38347Cu);
    ctx->pc = 0x383478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383474u;
    // 0x383478: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x383474u, 0x38347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38347Cu;
label_38347c:
    // 0x38347c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38347cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x383484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383488: 0x3e00008  jr          $ra
    ctx->pc = 0x383488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383488u;
        // 0x38348c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383490u;
}
