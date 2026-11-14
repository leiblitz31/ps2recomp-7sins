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

// Function: sub_00385638
// Address: 0x385638 - 0x385670
void sub_00385638_0x385638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385638_0x385638");
#endif

    switch (ctx->pc) {
        case 0x38565cu: goto label_38565c;
        default: break;
    }

    ctx->pc = 0x385638u;

    // 0x385638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38563c: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x38563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x385644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38564c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385650: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x385650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x385654: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x385654u;
    SET_GPR_U32(ctx, 31, 0x38565Cu);
    ctx->pc = 0x385658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385654u;
    // 0x385658: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x385654u, 0x38565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38565Cu;
label_38565c:
    // 0x38565c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38565cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385664: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385668: 0x3e00008  jr          $ra
    ctx->pc = 0x385668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385668u;
        // 0x38566c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385670u;
}
