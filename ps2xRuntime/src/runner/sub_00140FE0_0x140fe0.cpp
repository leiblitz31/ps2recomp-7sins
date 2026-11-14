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

// Function: sub_00140FE0
// Address: 0x140fe0 - 0x1410f0
void sub_00140FE0_0x140fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140FE0_0x140fe0");
#endif

    switch (ctx->pc) {
        case 0x141008u: goto label_141008;
        case 0x14102cu: goto label_14102c;
        case 0x141054u: goto label_141054;
        default: break;
    }

    ctx->pc = 0x140fe0u;

    // 0x140fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x140fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x140fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140fec: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x140fecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x140ff0: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x140ff0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x140ff4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x140ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140ff8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x140ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ffc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x140ffcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141000: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x141000u;
    SET_GPR_U32(ctx, 31, 0x141008u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x141000u, 0x141008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141008u;
label_141008:
    // 0x141008: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x141008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x14100c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x14100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x141010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x141010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x141014: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x141014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141018: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x141018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14101c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141020: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x141020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141024: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x141024u;
    SET_GPR_U32(ctx, 31, 0x14102Cu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x141024u, 0x14102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14102Cu;
label_14102c:
    // 0x14102c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x14102cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x141030: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x141030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141034: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x141038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14103c: 0x0  nop
    ctx->pc = 0x14103cu;
    // NOP
    // 0x141040: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x141040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141044: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x141044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141048: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x141048u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14104c: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x14104Cu;
    SET_GPR_U32(ctx, 31, 0x141054u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x14104Cu, 0x141054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141054u;
label_141054:
    // 0x141054: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x141054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x141058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14105c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x14105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141060: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x141060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x141064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141068: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x141068u;
    {
        const bool branch_taken_0x141068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141068) {
            ctx->pc = 0x14108Cu;
            goto label_14108c;
        }
    }
    ctx->pc = 0x141070u;
    // 0x141070: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x141070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141074: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x141074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x141078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14107c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14107Cu;
    {
        const bool branch_taken_0x14107c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14107c) {
            ctx->pc = 0x14108Cu;
            goto label_14108c;
        }
    }
    ctx->pc = 0x141084u;
    // 0x141084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141088: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14108c:
    // 0x14108c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14108Cu;
    {
        const bool branch_taken_0x14108c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14108c) {
            ctx->pc = 0x1410A4u;
            goto label_1410a4;
        }
    }
    ctx->pc = 0x141094u;
    // 0x141094: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x141094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141098: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x141098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14109c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14109Cu;
    {
        const bool branch_taken_0x14109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14109c) {
            ctx->pc = 0x1410D8u;
            goto label_1410d8;
        }
    }
    ctx->pc = 0x1410A4u;
label_1410a4:
    // 0x1410a4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1410a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1410a8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1410a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1410acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1410b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1410B0u;
    {
        const bool branch_taken_0x1410b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1410b0) {
            ctx->pc = 0x1410C8u;
            goto label_1410c8;
        }
    }
    ctx->pc = 0x1410B8u;
    // 0x1410b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1410b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1410bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1410c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1410C0u;
    {
        const bool branch_taken_0x1410c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1410c0) {
            ctx->pc = 0x1410D0u;
            goto label_1410d0;
        }
    }
    ctx->pc = 0x1410C8u;
label_1410c8:
    // 0x1410c8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1410c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1410ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1410d0:
    // 0x1410d0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1410d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1410d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1410d8:
    // 0x1410d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1410d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1410dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1410e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1410e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1410e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1410e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1410E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1410E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1410F0u;
}
