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

// Function: sub_002536A0
// Address: 0x2536a0 - 0x2536f0
void sub_002536A0_0x2536a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002536A0_0x2536a0");
#endif

    ctx->pc = 0x2536a0u;

    // 0x2536a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2536a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2536a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2536a8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2536a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2536ac: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x2536acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2536b0: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x2536b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2536b4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2536b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2536b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2536bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2536c0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2536c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2536c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2536c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2536c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2536cc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2536ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2536d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2536d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2536d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2536d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2536dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2536e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2536E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2536E8u;
    // 0x2536e8: 0x0  nop
    ctx->pc = 0x2536e8u;
    // NOP
    // 0x2536ec: 0x0  nop
    ctx->pc = 0x2536ecu;
    // NOP
    ctx->pc = 0x2536f0u;
}
