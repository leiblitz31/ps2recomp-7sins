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

// Function: sub_0048ADA0
// Address: 0x48ada0 - 0x48add0
void sub_0048ADA0_0x48ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ADA0_0x48ada0");
#endif

    ctx->pc = 0x48ada0u;

    // 0x48ada0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48ada4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48ada8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x48ada8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x48adac: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x48adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48adb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48adb4: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x48adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x48adb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48adbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48adc0: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x48adc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48adc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48adc8: 0x3e00008  jr          $ra
    ctx->pc = 0x48ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ADD0u;
}
