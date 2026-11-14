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

// Function: sub_00235640
// Address: 0x235640 - 0x235680
void sub_00235640_0x235640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235640_0x235640");
#endif

    switch (ctx->pc) {
        case 0x235660u: goto label_235660;
        default: break;
    }

    ctx->pc = 0x235640u;

    // 0x235640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235648: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x235648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23564c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23564cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235650: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235654: 0x2405054f  addiu       $a1, $zero, 0x54F
    ctx->pc = 0x235654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
    // 0x235658: 0xc042090  jal         func_108240
    ctx->pc = 0x235658u;
    SET_GPR_U32(ctx, 31, 0x235660u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x235658u, 0x235660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235660u;
label_235660:
    // 0x235660: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x235660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x235664: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x235664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23566c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23566cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235670: 0x3e00008  jr          $ra
    ctx->pc = 0x235670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235678u;
    // 0x235678: 0x0  nop
    ctx->pc = 0x235678u;
    // NOP
    // 0x23567c: 0x0  nop
    ctx->pc = 0x23567cu;
    // NOP
    ctx->pc = 0x235680u;
}
