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

// Function: sub_003D1E78
// Address: 0x3d1e78 - 0x3d1ea0
void sub_003D1E78_0x3d1e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1E78_0x3d1e78");
#endif

    ctx->pc = 0x3d1e78u;

    // 0x3d1e78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d1e7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d1e80: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3d1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1e84: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3d1e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1e88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d1e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3d1e8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d1e90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3d1e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d1e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1E9Cu;
    // 0x3d1e9c: 0x0  nop
    ctx->pc = 0x3d1e9cu;
    // NOP
    ctx->pc = 0x3d1ea0u;
}
