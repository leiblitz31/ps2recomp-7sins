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

// Function: sub_00253780
// Address: 0x253780 - 0x2537c0
void sub_00253780_0x253780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253780_0x253780");
#endif

    switch (ctx->pc) {
        case 0x2537a4u: goto label_2537a4;
        default: break;
    }

    ctx->pc = 0x253780u;

    // 0x253780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25378c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x25378cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x253790: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x253790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253794: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x253794u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x253798: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25379c: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x25379Cu;
    SET_GPR_U32(ctx, 31, 0x2537A4u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x25379Cu, 0x2537A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537A4u;
label_2537a4:
    // 0x2537a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2537a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2537a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2537ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2537ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2537B4u;
    // 0x2537b4: 0x0  nop
    ctx->pc = 0x2537b4u;
    // NOP
    // 0x2537b8: 0x0  nop
    ctx->pc = 0x2537b8u;
    // NOP
    // 0x2537bc: 0x0  nop
    ctx->pc = 0x2537bcu;
    // NOP
    ctx->pc = 0x2537c0u;
}
