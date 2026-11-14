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

// Function: sub_00139130
// Address: 0x139130 - 0x139170
void sub_00139130_0x139130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139130_0x139130");
#endif

    switch (ctx->pc) {
        case 0x139154u: goto label_139154;
        default: break;
    }

    ctx->pc = 0x139130u;

    // 0x139130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13913c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x139140: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139148: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13914c: 0xc04e45c  jal         func_139170
    ctx->pc = 0x13914Cu;
    SET_GPR_U32(ctx, 31, 0x139154u);
    ctx->pc = 0x139170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139170u, 0x13914Cu, 0x139154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139154u;
label_139154:
    // 0x139154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13915c: 0x3e00008  jr          $ra
    ctx->pc = 0x13915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139164u;
    // 0x139164: 0x0  nop
    ctx->pc = 0x139164u;
    // NOP
    // 0x139168: 0x0  nop
    ctx->pc = 0x139168u;
    // NOP
    // 0x13916c: 0x0  nop
    ctx->pc = 0x13916cu;
    // NOP
    ctx->pc = 0x139170u;
}
