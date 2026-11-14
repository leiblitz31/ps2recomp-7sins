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

// Function: sub_0038D128
// Address: 0x38d128 - 0x38d170
void sub_0038D128_0x38d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D128_0x38d128");
#endif

    switch (ctx->pc) {
        case 0x38d160u: goto label_38d160;
        default: break;
    }

    ctx->pc = 0x38d128u;

    // 0x38d128: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38d128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d12c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38d12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38d130: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38d130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d134: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x38d134u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d138: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x38d138u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d13c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x38d13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d140: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38d144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d148: 0x2484add0  addiu       $a0, $a0, -0x5230
    ctx->pc = 0x38d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    // 0x38d14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38d14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d150: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38d150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d154: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x38d154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d158: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x38D158u;
    SET_GPR_U32(ctx, 31, 0x38D160u);
    ctx->pc = 0x38D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D158u;
    // 0x38d15c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x38D158u, 0x38D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D160u;
label_38d160:
    // 0x38d160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d164: 0x3e00008  jr          $ra
    ctx->pc = 0x38D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D164u;
        // 0x38d168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D16Cu;
    // 0x38d16c: 0x0  nop
    ctx->pc = 0x38d16cu;
    // NOP
    ctx->pc = 0x38d170u;
}
