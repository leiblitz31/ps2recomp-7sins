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

// Function: sub_0028FBA0
// Address: 0x28fba0 - 0x28fc10
void sub_0028FBA0_0x28fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FBA0_0x28fba0");
#endif

    ctx->pc = 0x28fba0u;

    // 0x28fba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28fba8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28fbac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fbb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fbb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fbb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fbbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fbc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fbc4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28fbc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28fbcc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x28fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fbd0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbd4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x28fbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28fbd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28fbdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fbe0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fbe4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x28fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28fbe8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x28fbec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x28fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fbf0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbf4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x28fbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28fbf8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28fbfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fc00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28fc04: 0x3e00008  jr          $ra
    ctx->pc = 0x28FC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FC0Cu;
    // 0x28fc0c: 0x0  nop
    ctx->pc = 0x28fc0cu;
    // NOP
    ctx->pc = 0x28fc10u;
}
