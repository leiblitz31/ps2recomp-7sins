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

// Function: sub_002444C0
// Address: 0x2444c0 - 0x2445d0
void sub_002444C0_0x2444c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002444C0_0x2444c0");
#endif

    switch (ctx->pc) {
        case 0x2444e8u: goto label_2444e8;
        case 0x24450cu: goto label_24450c;
        case 0x244534u: goto label_244534;
        default: break;
    }

    ctx->pc = 0x2444c0u;

    // 0x2444c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2444c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2444c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2444c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2444c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2444cc: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x2444ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2444d0: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x2444d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2444d4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2444d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2444d8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2444d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2444dc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2444dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2444e0: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x2444E0u;
    SET_GPR_U32(ctx, 31, 0x2444E8u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2444E0u, 0x2444E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444E8u;
label_2444e8:
    // 0x2444e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2444e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2444ec: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2444f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2444f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2444f4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2444f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2444f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2444f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2444fc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2444fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244500: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x244500u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244504: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x244504u;
    SET_GPR_U32(ctx, 31, 0x24450Cu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x244504u, 0x24450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24450Cu;
label_24450c:
    // 0x24450c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x244510: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x244510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244514: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x244514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x244518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
    // 0x244520: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x244520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244524: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x244524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244528: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x244528u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24452c: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x24452Cu;
    SET_GPR_U32(ctx, 31, 0x244534u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x24452Cu, 0x244534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244534u;
label_244534:
    // 0x244534: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x244534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x244538: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24453c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x24453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244540: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x244540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244548: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x244548u;
    {
        const bool branch_taken_0x244548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244548) {
            ctx->pc = 0x24456Cu;
            goto label_24456c;
        }
    }
    ctx->pc = 0x244550u;
    // 0x244550: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x244550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244554: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x244554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24455c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24455Cu;
    {
        const bool branch_taken_0x24455c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24455c) {
            ctx->pc = 0x24456Cu;
            goto label_24456c;
        }
    }
    ctx->pc = 0x244564u;
    // 0x244564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244568: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24456c:
    // 0x24456c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24456Cu;
    {
        const bool branch_taken_0x24456c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24456c) {
            ctx->pc = 0x244584u;
            goto label_244584;
        }
    }
    ctx->pc = 0x244574u;
    // 0x244574: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x244574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244578: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x244578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24457c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24457Cu;
    {
        const bool branch_taken_0x24457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24457c) {
            ctx->pc = 0x2445B8u;
            goto label_2445b8;
        }
    }
    ctx->pc = 0x244584u;
label_244584:
    // 0x244584: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x244584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244588: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x244588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24458c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24458cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244590: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x244590u;
    {
        const bool branch_taken_0x244590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244590) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x244598u;
    // 0x244598: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x244598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24459c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x24459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2445a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x2445B0u;
            goto label_2445b0;
        }
    }
    ctx->pc = 0x2445A8u;
label_2445a8:
    // 0x2445a8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2445a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2445acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2445b0:
    // 0x2445b0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2445b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2445b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2445b8:
    // 0x2445b8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2445b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2445c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2445c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2445c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2445c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2445c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2445C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2445D0u;
}
