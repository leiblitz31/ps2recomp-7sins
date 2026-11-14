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

// Function: sub_0038A820
// Address: 0x38a820 - 0x38a860
void sub_0038A820_0x38a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A820_0x38a820");
#endif

    switch (ctx->pc) {
        case 0x38a844u: goto label_38a844;
        case 0x38a84cu: goto label_38a84c;
        default: break;
    }

    ctx->pc = 0x38a820u;

    // 0x38a820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a824: 0x8f82a988  lw          $v0, -0x5678($gp)
    ctx->pc = 0x38a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
    // 0x38a828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38a82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38a838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a83c: 0xc0e2728  jal         func_389CA0
    ctx->pc = 0x38A83Cu;
    SET_GPR_U32(ctx, 31, 0x38A844u);
    ctx->pc = 0x38A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A83Cu;
    // 0x38a840: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389CA0u, 0x38A83Cu, 0x38A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A844u;
label_38a844:
    // 0x38a844: 0xc105fc4  jal         func_417F10
    ctx->pc = 0x38A844u;
    SET_GPR_U32(ctx, 31, 0x38A84Cu);
    ctx->pc = 0x38A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A844u;
    // 0x38a848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x38A844u, 0x38A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A84Cu;
label_38a84c:
    // 0x38a84c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a854: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38a854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a858: 0x3e00008  jr          $ra
    ctx->pc = 0x38A858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A858u;
        // 0x38a85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A860u;
}
