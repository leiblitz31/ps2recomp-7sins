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

// Function: sub_00235760
// Address: 0x235760 - 0x2357d0
void sub_00235760_0x235760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235760_0x235760");
#endif

    switch (ctx->pc) {
        case 0x235780u: goto label_235780;
        case 0x23579cu: goto label_23579c;
        default: break;
    }

    ctx->pc = 0x235760u;

    // 0x235760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235768: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x235768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23576c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23576cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235770: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235774: 0x2405054f  addiu       $a1, $zero, 0x54F
    ctx->pc = 0x235774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
    // 0x235778: 0xc042090  jal         func_108240
    ctx->pc = 0x235778u;
    SET_GPR_U32(ctx, 31, 0x235780u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x235778u, 0x235780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235780u;
label_235780:
    // 0x235780: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x235780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x235784: 0x3c0242de  lui         $v0, 0x42DE
    ctx->pc = 0x235784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17118 << 16));
    // 0x235788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x235788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23578c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235790: 0x24050550  addiu       $a1, $zero, 0x550
    ctx->pc = 0x235790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
    // 0x235794: 0xc042090  jal         func_108240
    ctx->pc = 0x235794u;
    SET_GPR_U32(ctx, 31, 0x23579Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x235794u, 0x23579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23579Cu;
label_23579c:
    // 0x23579c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x23579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2357a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2357a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2357a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2357a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2357a8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2357a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2357ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2357acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2357b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2357b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2357b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2357b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2357b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2357b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2357bc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2357bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2357c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2357c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2357c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2357c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2357C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2357C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2357D0u;
}
