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

// Function: sub_00381560
// Address: 0x381560 - 0x381590
void sub_00381560_0x381560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381560_0x381560");
#endif

    switch (ctx->pc) {
        case 0x381574u: goto label_381574;
        default: break;
    }

    ctx->pc = 0x381560u;

    // 0x381560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38156c: 0xc0e07c4  jal         func_381F10
    ctx->pc = 0x38156Cu;
    SET_GPR_U32(ctx, 31, 0x381574u);
    ctx->pc = 0x381570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38156Cu;
    // 0x381570: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381F10u, 0x38156Cu, 0x381574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381574u;
label_381574:
    // 0x381574: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x381574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x381578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38157c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381584: 0x3e00008  jr          $ra
    ctx->pc = 0x381584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381584u;
        // 0x381588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38158Cu;
    // 0x38158c: 0x0  nop
    ctx->pc = 0x38158cu;
    // NOP
    ctx->pc = 0x381590u;
}
