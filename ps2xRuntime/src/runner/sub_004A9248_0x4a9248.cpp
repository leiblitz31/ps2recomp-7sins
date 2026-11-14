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

// Function: sub_004A9248
// Address: 0x4a9248 - 0x4a9278
void sub_004A9248_0x4a9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9248_0x4a9248");
#endif

    switch (ctx->pc) {
        case 0x4a925cu: goto label_4a925c;
        case 0x4a9264u: goto label_4a9264;
        default: break;
    }

    ctx->pc = 0x4a9248u;

    // 0x4a9248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a9248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a924c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a9250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9254: 0xc12a4b6  jal         func_4A92D8
    ctx->pc = 0x4A9254u;
    SET_GPR_U32(ctx, 31, 0x4A925Cu);
    ctx->pc = 0x4A9258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9254u;
    // 0x4a9258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A92D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A92D8u, 0x4A9254u, 0x4A925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A925Cu;
label_4a925c:
    // 0x4a925c: 0xc12a49e  jal         func_4A9278
    ctx->pc = 0x4A925Cu;
    SET_GPR_U32(ctx, 31, 0x4A9264u);
    ctx->pc = 0x4A9260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A925Cu;
    // 0x4a9260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9278u, 0x4A925Cu, 0x4A9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9264u;
label_4a9264:
    // 0x4a9264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a9264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a926c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a926cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9270: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9270u;
        // 0x4a9274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9278u;
}
