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

// Function: sub_002825E0
// Address: 0x2825e0 - 0x282630
void sub_002825E0_0x2825e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002825E0_0x2825e0");
#endif

    switch (ctx->pc) {
        case 0x282604u: goto label_282604;
        case 0x282614u: goto label_282614;
        default: break;
    }

    ctx->pc = 0x2825e0u;

    // 0x2825e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2825e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2825e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2825e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2825e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2825ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2825ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2825f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2825f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2825f4: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x2825f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2825f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2825f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2825fc: 0xc0a09dc  jal         func_282770
    ctx->pc = 0x2825FCu;
    SET_GPR_U32(ctx, 31, 0x282604u);
    ctx->pc = 0x282770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282770u, 0x2825FCu, 0x282604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282604u;
label_282604:
    // 0x282604: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28260c: 0xc0a098c  jal         func_282630
    ctx->pc = 0x28260Cu;
    SET_GPR_U32(ctx, 31, 0x282614u);
    ctx->pc = 0x282630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282630u, 0x28260Cu, 0x282614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282614u;
label_282614:
    // 0x282614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282618: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28261c: 0x3e00008  jr          $ra
    ctx->pc = 0x28261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28261Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282624u;
    // 0x282624: 0x0  nop
    ctx->pc = 0x282624u;
    // NOP
    // 0x282628: 0x0  nop
    ctx->pc = 0x282628u;
    // NOP
    // 0x28262c: 0x0  nop
    ctx->pc = 0x28262cu;
    // NOP
    ctx->pc = 0x282630u;
}
