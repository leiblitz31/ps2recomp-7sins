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

// Function: sub_00478080
// Address: 0x478080 - 0x4780c0
void sub_00478080_0x478080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478080_0x478080");
#endif

    switch (ctx->pc) {
        case 0x4780a8u: goto label_4780a8;
        default: break;
    }

    ctx->pc = 0x478080u;

    // 0x478080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x478080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x478084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478088: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x478088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47808c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x47808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x478090: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x478090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478094: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x478094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x478098: 0x24a58790  addiu       $a1, $a1, -0x7870
    ctx->pc = 0x478098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936464));
    // 0x47809c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x47809cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4780a0: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x4780A0u;
    SET_GPR_U32(ctx, 31, 0x4780A8u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x4780A0u, 0x4780A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4780A8u;
label_4780a8:
    // 0x4780a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4780a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4780ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4780acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4780b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4780b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4780b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4780B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4780B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4780BCu;
    // 0x4780bc: 0x0  nop
    ctx->pc = 0x4780bcu;
    // NOP
    ctx->pc = 0x4780c0u;
}
