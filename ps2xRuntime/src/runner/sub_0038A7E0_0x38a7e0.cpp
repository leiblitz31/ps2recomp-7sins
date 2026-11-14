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

// Function: sub_0038A7E0
// Address: 0x38a7e0 - 0x38a820
void sub_0038A7E0_0x38a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A7E0_0x38a7e0");
#endif

    switch (ctx->pc) {
        case 0x38a804u: goto label_38a804;
        case 0x38a80cu: goto label_38a80c;
        default: break;
    }

    ctx->pc = 0x38a7e0u;

    // 0x38a7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a7e4: 0x8f82a98c  lw          $v0, -0x5674($gp)
    ctx->pc = 0x38a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
    // 0x38a7e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38a7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a7f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38a7f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38a7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7fc: 0xc0e270c  jal         func_389C30
    ctx->pc = 0x38A7FCu;
    SET_GPR_U32(ctx, 31, 0x38A804u);
    ctx->pc = 0x38A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A7FCu;
    // 0x38a800: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C30u, 0x38A7FCu, 0x38A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A804u;
label_38a804:
    // 0x38a804: 0xc0e362e  jal         func_38D8B8
    ctx->pc = 0x38A804u;
    SET_GPR_U32(ctx, 31, 0x38A80Cu);
    ctx->pc = 0x38A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A804u;
    // 0x38a808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D8B8u, 0x38A804u, 0x38A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A80Cu;
label_38a80c:
    // 0x38a80c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38a814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a818: 0x3e00008  jr          $ra
    ctx->pc = 0x38A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A818u;
        // 0x38a81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A820u;
}
