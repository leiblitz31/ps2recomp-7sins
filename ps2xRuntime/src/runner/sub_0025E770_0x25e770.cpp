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

// Function: sub_0025E770
// Address: 0x25e770 - 0x25e7f0
void sub_0025E770_0x25e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E770_0x25e770");
#endif

    ctx->pc = 0x25e770u;

    // 0x25e770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25e774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25e778: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25e77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e788: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25e788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25e78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e790: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e798: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25e798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25e79c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e7a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e7a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x25e7a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25e7ac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e7b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e7b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7b8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25e7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e7bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25e7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25e7c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25e7c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e7c8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x25e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e7d0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x25e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25e7d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e7d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25e7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E7E4u;
    // 0x25e7e4: 0x0  nop
    ctx->pc = 0x25e7e4u;
    // NOP
    // 0x25e7e8: 0x0  nop
    ctx->pc = 0x25e7e8u;
    // NOP
    // 0x25e7ec: 0x0  nop
    ctx->pc = 0x25e7ecu;
    // NOP
    ctx->pc = 0x25e7f0u;
}
