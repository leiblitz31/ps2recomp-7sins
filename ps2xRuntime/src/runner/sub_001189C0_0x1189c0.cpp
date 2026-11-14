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

// Function: sub_001189C0
// Address: 0x1189c0 - 0x118a10
void sub_001189C0_0x1189c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189C0_0x1189c0");
#endif

    ctx->pc = 0x1189c0u;

    // 0x1189c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1189c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1189c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1189c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1189c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1189c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1189cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1189ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1189d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1189d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1189d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1189dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1189dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1189e0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1189e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1189e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1189e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1189e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1189e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1189ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1189ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189f0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1189f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1189f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1189f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1189f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1189fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x118a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x118a04: 0x3e00008  jr          $ra
    ctx->pc = 0x118A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A0Cu;
    // 0x118a0c: 0x0  nop
    ctx->pc = 0x118a0cu;
    // NOP
    ctx->pc = 0x118a10u;
}
