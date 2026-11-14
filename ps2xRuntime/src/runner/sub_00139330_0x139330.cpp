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

// Function: sub_00139330
// Address: 0x139330 - 0x139370
void sub_00139330_0x139330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139330_0x139330");
#endif

    switch (ctx->pc) {
        case 0x139350u: goto label_139350;
        default: break;
    }

    ctx->pc = 0x139330u;

    // 0x139330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13933c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x139340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x139340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139344: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x139344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139348: 0xc04e4dc  jal         func_139370
    ctx->pc = 0x139348u;
    SET_GPR_U32(ctx, 31, 0x139350u);
    ctx->pc = 0x139370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139370u, 0x139348u, 0x139350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139350u;
label_139350:
    // 0x139350: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13935c: 0x3e00008  jr          $ra
    ctx->pc = 0x13935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139364u;
    // 0x139364: 0x0  nop
    ctx->pc = 0x139364u;
    // NOP
    // 0x139368: 0x0  nop
    ctx->pc = 0x139368u;
    // NOP
    // 0x13936c: 0x0  nop
    ctx->pc = 0x13936cu;
    // NOP
    ctx->pc = 0x139370u;
}
