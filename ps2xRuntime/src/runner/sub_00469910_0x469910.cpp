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

// Function: sub_00469910
// Address: 0x469910 - 0x469960
void sub_00469910_0x469910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469910_0x469910");
#endif

    switch (ctx->pc) {
        case 0x469934u: goto label_469934;
        case 0x469944u: goto label_469944;
        default: break;
    }

    ctx->pc = 0x469910u;

    // 0x469910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46991c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469924: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x469924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x469928: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46992c: 0xc11a67c  jal         func_4699F0
    ctx->pc = 0x46992Cu;
    SET_GPR_U32(ctx, 31, 0x469934u);
    ctx->pc = 0x4699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699F0u, 0x46992Cu, 0x469934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469934u;
label_469934:
    // 0x469934: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x469938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46993c: 0xc11a658  jal         func_469960
    ctx->pc = 0x46993Cu;
    SET_GPR_U32(ctx, 31, 0x469944u);
    ctx->pc = 0x469960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469960u, 0x46993Cu, 0x469944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469944u;
label_469944:
    // 0x469944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469948: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46994c: 0x3e00008  jr          $ra
    ctx->pc = 0x46994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46994Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469954u;
    // 0x469954: 0x0  nop
    ctx->pc = 0x469954u;
    // NOP
    // 0x469958: 0x0  nop
    ctx->pc = 0x469958u;
    // NOP
    // 0x46995c: 0x0  nop
    ctx->pc = 0x46995cu;
    // NOP
    ctx->pc = 0x469960u;
}
