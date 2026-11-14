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

// Function: sub_0038AA38
// Address: 0x38aa38 - 0x38aa60
void sub_0038AA38_0x38aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AA38_0x38aa38");
#endif

    switch (ctx->pc) {
        case 0x38aa4cu: goto label_38aa4c;
        default: break;
    }

    ctx->pc = 0x38aa38u;

    // 0x38aa38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38aa3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38aa40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38aa44: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x38AA44u;
    SET_GPR_U32(ctx, 31, 0x38AA4Cu);
    ctx->pc = 0x38AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA44u;
    // 0x38aa48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x38AA44u, 0x38AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA4Cu;
label_38aa4c:
    // 0x38aa4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38aa4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38aa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38aa54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x38AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA58u;
        // 0x38aa5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AA60u;
}
