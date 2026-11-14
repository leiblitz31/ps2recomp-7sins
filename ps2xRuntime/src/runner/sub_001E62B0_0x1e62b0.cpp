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

// Function: sub_001E62B0
// Address: 0x1e62b0 - 0x1e6350
void sub_001E62B0_0x1e62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E62B0_0x1e62b0");
#endif

    switch (ctx->pc) {
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6328u: goto label_1e6328;
        default: break;
    }

    ctx->pc = 0x1e62b0u;

    // 0x1e62b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e62b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e62b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e62bc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1e62bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e62c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62c4: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1e62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e62c8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e62cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e62ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e62d0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1E62D0u;
    {
        const bool branch_taken_0x1e62d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e62d0) {
            ctx->pc = 0x1E6340u;
            goto label_1e6340;
        }
    }
    ctx->pc = 0x1E62D8u;
    // 0x1e62d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62dc: 0xc0794b8  jal         func_1E52E0
    ctx->pc = 0x1E62DCu;
    SET_GPR_U32(ctx, 31, 0x1E62E4u);
    ctx->pc = 0x1E52E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52E0u, 0x1E62DCu, 0x1E62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62E4u;
label_1e62e4:
    // 0x1e62e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e62ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e62ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e62f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e62f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e62f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e62fc: 0xc07956c  jal         func_1E55B0
    ctx->pc = 0x1E62FCu;
    SET_GPR_U32(ctx, 31, 0x1E6304u);
    ctx->pc = 0x1E55B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55B0u, 0x1E62FCu, 0x1E6304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6304u;
label_1e6304:
    // 0x1e6304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6308: 0xc079108  jal         func_1E4420
    ctx->pc = 0x1E6308u;
    SET_GPR_U32(ctx, 31, 0x1E6310u);
    ctx->pc = 0x1E4420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4420u, 0x1E6308u, 0x1E6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6310u;
label_1e6310:
    // 0x1e6310: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6314: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E6314u;
    SET_GPR_U32(ctx, 31, 0x1E631Cu);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E6314u, 0x1E631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E631Cu;
label_1e631c:
    // 0x1e631c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6320: 0xc07975c  jal         func_1E5D70
    ctx->pc = 0x1E6320u;
    SET_GPR_U32(ctx, 31, 0x1E6328u);
    ctx->pc = 0x1E5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D70u, 0x1E6320u, 0x1E6328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6328u;
label_1e6328:
    // 0x1e6328: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e632c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1e632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6330: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6334: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e6334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6338: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e6338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e633c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1e633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_1e6340:
    // 0x1e6340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6344: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e6344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6348: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6350u;
}
