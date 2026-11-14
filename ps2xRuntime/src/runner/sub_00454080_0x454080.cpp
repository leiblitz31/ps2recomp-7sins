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

// Function: sub_00454080
// Address: 0x454080 - 0x4540d0
void sub_00454080_0x454080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454080_0x454080");
#endif

    ctx->pc = 0x454080u;

    // 0x454080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x454080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x454084: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x454084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x454088: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x454088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45408c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454090: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x454090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x454094: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x454094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454098: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x454098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45409c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x45409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4540a0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4540a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4540a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x4540a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4540a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x4540a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4540ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4540acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4540b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4540b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4540b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4540b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4540b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x4540b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4540bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4540bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4540c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4540c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4540c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4540C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4540C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4540CCu;
    // 0x4540cc: 0x0  nop
    ctx->pc = 0x4540ccu;
    // NOP
    ctx->pc = 0x4540d0u;
}
