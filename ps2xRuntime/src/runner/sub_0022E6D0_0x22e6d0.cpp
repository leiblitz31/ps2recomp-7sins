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

// Function: sub_0022E6D0
// Address: 0x22e6d0 - 0x22e7b0
void sub_0022E6D0_0x22e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E6D0_0x22e6d0");
#endif

    ctx->pc = 0x22e6d0u;

    // 0x22e6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e6d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22e6d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22e6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e6e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e6e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22e6ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e6f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e6f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x22e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22e6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e700: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22e704: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e708: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x22e708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x22e70c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e710: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e714: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e718: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x22e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x22e71c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e720: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x22e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e724: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e728: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x22e728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x22e72c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e730: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x22e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e738: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22e73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e740: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x22e740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e748: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22e748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22e74c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e750: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x22e750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x22e754: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e758: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x22e758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e760: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x22e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22e764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e768: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x22e768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x22e76c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e770: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x22e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22e774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e778: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x22e778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x22e77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e780: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x22e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x22e784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e788: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x22e788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x22e78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e790: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x22e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x22e794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e798: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x22e798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x22e79c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e7a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E7ACu;
    // 0x22e7ac: 0x0  nop
    ctx->pc = 0x22e7acu;
    // NOP
    ctx->pc = 0x22e7b0u;
}
