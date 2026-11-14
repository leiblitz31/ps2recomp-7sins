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

// Function: sub_00139760
// Address: 0x139760 - 0x1397c0
void sub_00139760_0x139760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139760_0x139760");
#endif

    ctx->pc = 0x139760u;

    // 0x139760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139764: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x139764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x139768: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x139768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13976c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139770: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x139770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x139774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139778: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x139778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13977c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139780: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x139780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x139784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139788: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x139788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13978c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139790: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x139790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x139794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139798: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13979c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1397a0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1397a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1397a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1397a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1397a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1397ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1397acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1397b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1397b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1397b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1397B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1397B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1397BCu;
    // 0x1397bc: 0x0  nop
    ctx->pc = 0x1397bcu;
    // NOP
    ctx->pc = 0x1397c0u;
}
