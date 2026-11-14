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

// Function: sub_0019C4B0
// Address: 0x19c4b0 - 0x19c520
void sub_0019C4B0_0x19c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C4B0_0x19c4b0");
#endif

    switch (ctx->pc) {
        case 0x19c508u: goto label_19c508;
        default: break;
    }

    ctx->pc = 0x19c4b0u;

    // 0x19c4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19c4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c4c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4c4: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x19c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x19c4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c4d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19c4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19c4d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4dc: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x19c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c4e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4e4: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x19c4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c4e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4f4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x19c4f8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x19c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c4fc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x19c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19c500: 0xc0672b8  jal         func_19CAE0
    ctx->pc = 0x19C500u;
    SET_GPR_U32(ctx, 31, 0x19C508u);
    ctx->pc = 0x19CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CAE0u, 0x19C500u, 0x19C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C508u;
label_19c508:
    // 0x19c508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c50c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19c50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c510: 0x3e00008  jr          $ra
    ctx->pc = 0x19C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C518u;
    // 0x19c518: 0x0  nop
    ctx->pc = 0x19c518u;
    // NOP
    // 0x19c51c: 0x0  nop
    ctx->pc = 0x19c51cu;
    // NOP
    ctx->pc = 0x19c520u;
}
