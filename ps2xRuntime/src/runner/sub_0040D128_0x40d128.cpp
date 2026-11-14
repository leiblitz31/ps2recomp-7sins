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

// Function: sub_0040D128
// Address: 0x40d128 - 0x40d150
void sub_0040D128_0x40d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D128_0x40d128");
#endif

    switch (ctx->pc) {
        case 0x40d13cu: goto label_40d13c;
        default: break;
    }

    ctx->pc = 0x40d128u;

    // 0x40d128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40d12c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40d130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40d134: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40D134u;
    SET_GPR_U32(ctx, 31, 0x40D13Cu);
    ctx->pc = 0x40D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D134u;
    // 0x40d138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40D134u, 0x40D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D13Cu;
label_40d13c:
    // 0x40d13c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d144: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40d144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d148: 0x3e00008  jr          $ra
    ctx->pc = 0x40D148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D148u;
        // 0x40d14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D150u;
}
