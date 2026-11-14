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

// Function: sub_001C31C0
// Address: 0x1c31c0 - 0x1c3230
void sub_001C31C0_0x1c31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C31C0_0x1c31c0");
#endif

    ctx->pc = 0x1c31c0u;

    // 0x1c31c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c31c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c31c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1c31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1c31cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c31d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c31d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c31dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c31e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1c31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1c31ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c31f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c31fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3200: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c3200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3204: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1c3204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c3208: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c3208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c320c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3210: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c3214: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c3214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3218: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1c3218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1c321c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3220: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c3220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3224: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C322Cu;
    // 0x1c322c: 0x0  nop
    ctx->pc = 0x1c322cu;
    // NOP
    ctx->pc = 0x1c3230u;
}
