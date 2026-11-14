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

// Function: sub_002CB240
// Address: 0x2cb240 - 0x2cb280
void sub_002CB240_0x2cb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB240_0x2cb240");
#endif

    switch (ctx->pc) {
        case 0x2cb260u: goto label_2cb260;
        default: break;
    }

    ctx->pc = 0x2cb240u;

    // 0x2cb240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb24c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cb250: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb254: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cb254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb258: 0xc0b2ca0  jal         func_2CB280
    ctx->pc = 0x2CB258u;
    SET_GPR_U32(ctx, 31, 0x2CB260u);
    ctx->pc = 0x2CB280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB280u, 0x2CB258u, 0x2CB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB260u;
label_2cb260:
    // 0x2cb260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb26c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB274u;
    // 0x2cb274: 0x0  nop
    ctx->pc = 0x2cb274u;
    // NOP
    // 0x2cb278: 0x0  nop
    ctx->pc = 0x2cb278u;
    // NOP
    // 0x2cb27c: 0x0  nop
    ctx->pc = 0x2cb27cu;
    // NOP
    ctx->pc = 0x2cb280u;
}
