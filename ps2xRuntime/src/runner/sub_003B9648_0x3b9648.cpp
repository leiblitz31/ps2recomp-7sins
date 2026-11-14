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

// Function: sub_003B9648
// Address: 0x3b9648 - 0x3b9690
void sub_003B9648_0x3b9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9648_0x3b9648");
#endif

    switch (ctx->pc) {
        case 0x3b965cu: goto label_3b965c;
        case 0x3b966cu: goto label_3b966c;
        case 0x3b967cu: goto label_3b967c;
        default: break;
    }

    ctx->pc = 0x3b9648u;

    // 0x3b9648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b964c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b9650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9654: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B9654u;
    SET_GPR_U32(ctx, 31, 0x3B965Cu);
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B9654u, 0x3B965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B965Cu;
label_3b965c:
    // 0x3b965c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b965cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b9660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9664: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B9664u;
    SET_GPR_U32(ctx, 31, 0x3B966Cu);
    ctx->pc = 0x3B9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9664u;
    // 0x3b9668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B9664u, 0x3B966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B966Cu;
label_3b966c:
    // 0x3b966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9674: 0xc0ee75e  jal         func_3B9D78
    ctx->pc = 0x3B9674u;
    SET_GPR_U32(ctx, 31, 0x3B967Cu);
    ctx->pc = 0x3B9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9674u;
    // 0x3b9678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D78u, 0x3B9674u, 0x3B967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B967Cu;
label_3b967c:
    // 0x3b967c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b9684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9688: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9688u;
        // 0x3b968c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9690u;
}
