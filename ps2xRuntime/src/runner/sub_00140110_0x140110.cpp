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

// Function: sub_00140110
// Address: 0x140110 - 0x1402f0
void sub_00140110_0x140110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140110_0x140110");
#endif

    switch (ctx->pc) {
        case 0x14014cu: goto label_14014c;
        case 0x140158u: goto label_140158;
        case 0x140178u: goto label_140178;
        case 0x140184u: goto label_140184;
        case 0x1401c8u: goto label_1401c8;
        case 0x1402c0u: goto label_1402c0;
        case 0x1402d0u: goto label_1402d0;
        default: break;
    }

    ctx->pc = 0x140110u;

    // 0x140110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140118: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x140118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14011c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x14011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x140120: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140124: 0x1002006a  beq         $zero, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x140124u;
    {
        const bool branch_taken_0x140124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x140124) {
            ctx->pc = 0x1402D0u;
            goto label_1402d0;
        }
    }
    ctx->pc = 0x14012Cu;
    // 0x14012c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140130: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x140130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x140134: 0x10020066  beq         $zero, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x140134u;
    {
        const bool branch_taken_0x140134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x140134) {
            ctx->pc = 0x1402D0u;
            goto label_1402d0;
        }
    }
    ctx->pc = 0x14013Cu;
    // 0x14013c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140140: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x140140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x140144: 0xc097444  jal         func_25D110
    ctx->pc = 0x140144u;
    SET_GPR_U32(ctx, 31, 0x14014Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x140144u, 0x14014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14014Cu;
label_14014c:
    // 0x14014c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140150: 0xc089ad0  jal         func_226B40
    ctx->pc = 0x140150u;
    SET_GPR_U32(ctx, 31, 0x140158u);
    ctx->pc = 0x226B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B40u, 0x140150u, 0x140158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140158u;
label_140158:
    // 0x140158: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x140158u;
    {
        const bool branch_taken_0x140158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140158) {
            ctx->pc = 0x1402D0u;
            goto label_1402d0;
        }
    }
    ctx->pc = 0x140160u;
    // 0x140160: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x140160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x140164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140168: 0x0  nop
    ctx->pc = 0x140168u;
    // NOP
    // 0x14016c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x140170: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x140170u;
    SET_GPR_U32(ctx, 31, 0x140178u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x140170u, 0x140178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140178u;
label_140178:
    // 0x140178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14017c: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x14017Cu;
    SET_GPR_U32(ctx, 31, 0x140184u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x14017Cu, 0x140184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140184u;
label_140184:
    // 0x140184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140188: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140188u;
    {
        const bool branch_taken_0x140188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140188) {
            ctx->pc = 0x1401A4u;
            goto label_1401a4;
        }
    }
    ctx->pc = 0x140190u;
    // 0x140190: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x140194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140198: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x140198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14019c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14019cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1401a0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1401a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1401a4:
    // 0x1401a4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1401a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1401a8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1401a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1401ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1401acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1401b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1401b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1401b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1401b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1401b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1401bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1401bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1401c0: 0xc08de14  jal         func_237850
    ctx->pc = 0x1401C0u;
    SET_GPR_U32(ctx, 31, 0x1401C8u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x1401C0u, 0x1401C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401C8u;
label_1401c8:
    // 0x1401c8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1401c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1401cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1401ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1401d0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1401d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1401d4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1401d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1401d8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1401d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1401dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1401dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1401e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1401e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1401e4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1401e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1401e8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1401e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1401ec: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1401ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1401f0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1401f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1401f4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1401f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1401f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1401f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1401fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1401FCu;
    {
        const bool branch_taken_0x1401fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1401fc) {
            ctx->pc = 0x140214u;
            goto label_140214;
        }
    }
    ctx->pc = 0x140204u;
    // 0x140204: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140208: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14020c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140210: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x140210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_140214:
    // 0x140214: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140218: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x140218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14021c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140220: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140224: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x140224u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140228: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x14022c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x14022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140230: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140234: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140238: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x140238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14023c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x14023cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x140240: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x140240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x140244: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140248: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x140248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14024c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140250: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140254: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x140254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140258: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x140258u;
    {
        const bool branch_taken_0x140258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140258) {
            ctx->pc = 0x14026Cu;
            goto label_14026c;
        }
    }
    ctx->pc = 0x140260u;
    // 0x140260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140264: 0x0  nop
    ctx->pc = 0x140264u;
    // NOP
    // 0x140268: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x140268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14026c:
    // 0x14026c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140270: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x140270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140274: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140278: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x140278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14027c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x14027cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140280: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x140280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140284: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140288: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x140288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14028c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14028cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140290: 0x0  nop
    ctx->pc = 0x140290u;
    // NOP
    // 0x140294: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x140294u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x140298: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x140298u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14029c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1402a0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1402a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1402a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1402a8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1402ac: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1402acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1402b0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1402b4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x1402b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1402b8: 0xc097444  jal         func_25D110
    ctx->pc = 0x1402B8u;
    SET_GPR_U32(ctx, 31, 0x1402C0u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1402B8u, 0x1402C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402C0u;
label_1402c0:
    // 0x1402c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1402c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1402c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1402c8: 0xc089ad8  jal         func_226B60
    ctx->pc = 0x1402C8u;
    SET_GPR_U32(ctx, 31, 0x1402D0u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x1402C8u, 0x1402D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402D0u;
label_1402d0:
    // 0x1402d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1402d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1402d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1402d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1402dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1402DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1402E4u;
    // 0x1402e4: 0x0  nop
    ctx->pc = 0x1402e4u;
    // NOP
    // 0x1402e8: 0x0  nop
    ctx->pc = 0x1402e8u;
    // NOP
    // 0x1402ec: 0x0  nop
    ctx->pc = 0x1402ecu;
    // NOP
    ctx->pc = 0x1402f0u;
}
