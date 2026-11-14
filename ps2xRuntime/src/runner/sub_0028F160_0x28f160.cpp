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

// Function: sub_0028F160
// Address: 0x28f160 - 0x28f1e0
void sub_0028F160_0x28f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F160_0x28f160");
#endif

    ctx->pc = 0x28f160u;

    // 0x28f160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f164: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28f164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28f168: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x28f168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x28f16c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f170: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28f170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28f174: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f178: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f17c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f180: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f184: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28f184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28f188: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28f188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f18c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28f18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28f190: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28f190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28f194: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f198: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x28f19c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28f19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f1a0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f1a4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f1a8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f1ac: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28f1acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28f1b0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28f1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f1b4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28f1b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28f1b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28f1bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f1c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f1c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x28f1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28f1c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28f1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F1D4u;
    // 0x28f1d4: 0x0  nop
    ctx->pc = 0x28f1d4u;
    // NOP
    // 0x28f1d8: 0x0  nop
    ctx->pc = 0x28f1d8u;
    // NOP
    // 0x28f1dc: 0x0  nop
    ctx->pc = 0x28f1dcu;
    // NOP
    ctx->pc = 0x28f1e0u;
}
