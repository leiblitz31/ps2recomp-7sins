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

// Function: sub_001402F0
// Address: 0x1402f0 - 0x1404d0
void sub_001402F0_0x1402f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001402F0_0x1402f0");
#endif

    switch (ctx->pc) {
        case 0x14032cu: goto label_14032c;
        case 0x140338u: goto label_140338;
        case 0x140358u: goto label_140358;
        case 0x140364u: goto label_140364;
        case 0x1403a8u: goto label_1403a8;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404b0u: goto label_1404b0;
        default: break;
    }

    ctx->pc = 0x1402f0u;

    // 0x1402f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1402f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1402f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1402f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1402f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1402fc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1402fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x140300: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140304: 0x1002006a  beq         $zero, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x140304u;
    {
        const bool branch_taken_0x140304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x140304) {
            ctx->pc = 0x1404B0u;
            goto label_1404b0;
        }
    }
    ctx->pc = 0x14030Cu;
    // 0x14030c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140310: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x140310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x140314: 0x10020066  beq         $zero, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x140314u;
    {
        const bool branch_taken_0x140314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x140314) {
            ctx->pc = 0x1404B0u;
            goto label_1404b0;
        }
    }
    ctx->pc = 0x14031Cu;
    // 0x14031c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140320: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x140324: 0xc097444  jal         func_25D110
    ctx->pc = 0x140324u;
    SET_GPR_U32(ctx, 31, 0x14032Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x140324u, 0x14032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14032Cu;
label_14032c:
    // 0x14032c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140330: 0xc089ad0  jal         func_226B40
    ctx->pc = 0x140330u;
    SET_GPR_U32(ctx, 31, 0x140338u);
    ctx->pc = 0x226B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B40u, 0x140330u, 0x140338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140338u;
label_140338:
    // 0x140338: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x140338u;
    {
        const bool branch_taken_0x140338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140338) {
            ctx->pc = 0x1404B0u;
            goto label_1404b0;
        }
    }
    ctx->pc = 0x140340u;
    // 0x140340: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x140340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x140344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140348: 0x0  nop
    ctx->pc = 0x140348u;
    // NOP
    // 0x14034c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x140350: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x140350u;
    SET_GPR_U32(ctx, 31, 0x140358u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x140350u, 0x140358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140358u;
label_140358:
    // 0x140358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14035c: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x14035Cu;
    SET_GPR_U32(ctx, 31, 0x140364u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x14035Cu, 0x140364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140364u;
label_140364:
    // 0x140364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140368: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140368u;
    {
        const bool branch_taken_0x140368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140368) {
            ctx->pc = 0x140384u;
            goto label_140384;
        }
    }
    ctx->pc = 0x140370u;
    // 0x140370: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x140374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140378: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x140378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14037c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14037cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x140380: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x140380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_140384:
    // 0x140384: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x140384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x140388: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x140388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14038c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x140390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x140394: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x140394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x140398: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x140398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14039c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1403a0: 0xc08de14  jal         func_237850
    ctx->pc = 0x1403A0u;
    SET_GPR_U32(ctx, 31, 0x1403A8u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x1403A0u, 0x1403A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403A8u;
label_1403a8:
    // 0x1403a8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1403a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1403acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1403b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1403b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1403b4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403b8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1403b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403bc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1403bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1403c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1403c4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1403c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1403c8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403cc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1403ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403d0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403d4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1403d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1403d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1403dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1403DCu;
    {
        const bool branch_taken_0x1403dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1403dc) {
            ctx->pc = 0x1403F4u;
            goto label_1403f4;
        }
    }
    ctx->pc = 0x1403E4u;
    // 0x1403e4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403e8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1403e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403ec: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403f0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1403f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_1403f4:
    // 0x1403f4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1403f8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1403f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403fc: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1403fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140400: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140404: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x140404u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140408: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x14040c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x14040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140410: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140414: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140418: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x140418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14041c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x14041cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x140420: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x140420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x140424: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140428: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x140428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14042c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140430: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140434: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x140434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140438: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x140438u;
    {
        const bool branch_taken_0x140438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140438) {
            ctx->pc = 0x14044Cu;
            goto label_14044c;
        }
    }
    ctx->pc = 0x140440u;
    // 0x140440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140444: 0x0  nop
    ctx->pc = 0x140444u;
    // NOP
    // 0x140448: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x140448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14044c:
    // 0x14044c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140450: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x140450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140454: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140458: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x140458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14045c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x14045cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140460: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x140460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140464: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140468: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x140468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14046c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140470: 0x0  nop
    ctx->pc = 0x140470u;
    // NOP
    // 0x140474: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x140474u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x140478: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x140478u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14047c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140480: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x140480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x140484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140488: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x14048c: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x14048cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x140490: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140494: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x140498: 0xc097444  jal         func_25D110
    ctx->pc = 0x140498u;
    SET_GPR_U32(ctx, 31, 0x1404A0u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x140498u, 0x1404A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404A0u;
label_1404a0:
    // 0x1404a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1404a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1404a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1404a8: 0xc089ad8  jal         func_226B60
    ctx->pc = 0x1404A8u;
    SET_GPR_U32(ctx, 31, 0x1404B0u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x1404A8u, 0x1404B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404B0u;
label_1404b0:
    // 0x1404b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1404b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1404b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1404b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1404b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1404bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1404BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1404BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1404C4u;
    // 0x1404c4: 0x0  nop
    ctx->pc = 0x1404c4u;
    // NOP
    // 0x1404c8: 0x0  nop
    ctx->pc = 0x1404c8u;
    // NOP
    // 0x1404cc: 0x0  nop
    ctx->pc = 0x1404ccu;
    // NOP
    ctx->pc = 0x1404d0u;
}
