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

// Function: sub_004695F0
// Address: 0x4695f0 - 0x469630
void sub_004695F0_0x4695f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004695F0_0x4695f0");
#endif

    switch (ctx->pc) {
        case 0x469610u: goto label_469610;
        default: break;
    }

    ctx->pc = 0x4695f0u;

    // 0x4695f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4695f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4695f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4695f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4695f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4695f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4695fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4695fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469600: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469604: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469608: 0xc11a58c  jal         func_469630
    ctx->pc = 0x469608u;
    SET_GPR_U32(ctx, 31, 0x469610u);
    ctx->pc = 0x469630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469630u, 0x469608u, 0x469610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469610u;
label_469610:
    // 0x469610: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x469610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469618: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46961c: 0x3e00008  jr          $ra
    ctx->pc = 0x46961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469624u;
    // 0x469624: 0x0  nop
    ctx->pc = 0x469624u;
    // NOP
    // 0x469628: 0x0  nop
    ctx->pc = 0x469628u;
    // NOP
    // 0x46962c: 0x0  nop
    ctx->pc = 0x46962cu;
    // NOP
    ctx->pc = 0x469630u;
}
