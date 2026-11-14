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

// Function: sub_00261590
// Address: 0x261590 - 0x261620
void sub_00261590_0x261590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261590_0x261590");
#endif

    switch (ctx->pc) {
        case 0x2615bcu: goto label_2615bc;
        default: break;
    }

    ctx->pc = 0x261590u;

    // 0x261590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26159c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2615a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2615a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2615a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2615a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2615a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2615ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615b0: 0xc78d81c0  lwc1        $f13, -0x7E40($gp)
    ctx->pc = 0x2615b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2615b4: 0xc094da8  jal         func_2536A0
    ctx->pc = 0x2615B4u;
    SET_GPR_U32(ctx, 31, 0x2615BCu);
    ctx->pc = 0x2536A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536A0u, 0x2615B4u, 0x2615BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615BCu;
label_2615bc:
    // 0x2615bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2615bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2615c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2615c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615c8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2615c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2615cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2615ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615d4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2615d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2615d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2615dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2615e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2615e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2615e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2615e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2615ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2615ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615f0: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x2615f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x2615f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2615f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2615fc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2615fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x261600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261604: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x261604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x261608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26160c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261610: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261614: 0x3e00008  jr          $ra
    ctx->pc = 0x261614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26161Cu;
    // 0x26161c: 0x0  nop
    ctx->pc = 0x26161cu;
    // NOP
    ctx->pc = 0x261620u;
}
