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

// Function: sub_00413490
// Address: 0x413490 - 0x4134c0
void sub_00413490_0x413490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413490_0x413490");
#endif

    ctx->pc = 0x413490u;

    // 0x413490: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x413490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413494: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x413494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413498: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x413498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x41349c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x41349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4134a0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4134a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4134a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4134a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4134a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4134a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4134ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4134acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4134b0: 0x46000004  c1          0x4
    ctx->pc = 0x4134b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x4134b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4134B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4134B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4134BCu;
    // 0x4134bc: 0x0  nop
    ctx->pc = 0x4134bcu;
    // NOP
    ctx->pc = 0x4134c0u;
}
