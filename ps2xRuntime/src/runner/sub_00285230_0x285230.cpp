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

// Function: sub_00285230
// Address: 0x285230 - 0x285270
void sub_00285230_0x285230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285230_0x285230");
#endif

    switch (ctx->pc) {
        case 0x285250u: goto label_285250;
        default: break;
    }

    ctx->pc = 0x285230u;

    // 0x285230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28523c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285240: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285244: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x285244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285248: 0xc0a149c  jal         func_285270
    ctx->pc = 0x285248u;
    SET_GPR_U32(ctx, 31, 0x285250u);
    ctx->pc = 0x285270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285270u, 0x285248u, 0x285250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285250u;
label_285250:
    // 0x285250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28525c: 0x3e00008  jr          $ra
    ctx->pc = 0x28525Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28525Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285264u;
    // 0x285264: 0x0  nop
    ctx->pc = 0x285264u;
    // NOP
    // 0x285268: 0x0  nop
    ctx->pc = 0x285268u;
    // NOP
    // 0x28526c: 0x0  nop
    ctx->pc = 0x28526cu;
    // NOP
    ctx->pc = 0x285270u;
}
