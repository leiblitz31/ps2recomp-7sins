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

// Function: sub_00261620
// Address: 0x261620 - 0x261650
void sub_00261620_0x261620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261620_0x261620");
#endif

    switch (ctx->pc) {
        case 0x261640u: goto label_261640;
        default: break;
    }

    ctx->pc = 0x261620u;

    // 0x261620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26162c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x26162cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x261630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261634: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x261634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261638: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x261638u;
    SET_GPR_U32(ctx, 31, 0x261640u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x261638u, 0x261640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261644: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261648: 0x3e00008  jr          $ra
    ctx->pc = 0x261648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261650u;
}
