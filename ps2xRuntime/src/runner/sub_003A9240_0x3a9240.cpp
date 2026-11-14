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

// Function: sub_003A9240
// Address: 0x3a9240 - 0x3a9268
void sub_003A9240_0x3a9240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9240_0x3a9240");
#endif

    switch (ctx->pc) {
        case 0x3a9254u: goto label_3a9254;
        default: break;
    }

    ctx->pc = 0x3a9240u;

    // 0x3a9240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a9244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a9244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a9248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a924c: 0xc0cb0bc  jal         func_32C2F0
    ctx->pc = 0x3A924Cu;
    SET_GPR_U32(ctx, 31, 0x3A9254u);
    ctx->pc = 0x3A9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A924Cu;
    // 0x3a9250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C2F0u, 0x3A924Cu, 0x3A9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9254u;
label_3a9254:
    // 0x3a9254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a9254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a925c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a925cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9260: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9260u;
        // 0x3a9264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9268u;
}
