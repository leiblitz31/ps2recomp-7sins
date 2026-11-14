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

// Function: sub_00299210
// Address: 0x299210 - 0x2993c0
void sub_00299210_0x299210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299210_0x299210");
#endif

    switch (ctx->pc) {
        case 0x2992c8u: goto label_2992c8;
        case 0x299334u: goto label_299334;
        case 0x29937cu: goto label_29937c;
        default: break;
    }

    ctx->pc = 0x299210u;

    // 0x299210: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29921c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299220: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x299220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x299224: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x299224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x299228: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29922c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x299230: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x299230u;
    {
        const bool branch_taken_0x299230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299230) {
            ctx->pc = 0x29939Cu;
            goto label_29939c;
        }
    }
    ctx->pc = 0x299238u;
    // 0x299238: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x299238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29923c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299244: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x299244u;
    {
        const bool branch_taken_0x299244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299244) {
            ctx->pc = 0x299364u;
            goto label_299364;
        }
    }
    ctx->pc = 0x29924Cu;
    // 0x29924c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299250: 0x24430038  addiu       $v1, $v0, 0x38
    ctx->pc = 0x299250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x299254: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x299254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299258: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x299258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29925c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x29925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299260: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x299260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299264: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x299264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299268: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x299268u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29926c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x29926cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x299270: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x299270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x299274: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x299274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x299278: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x299278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29927c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299280: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x299280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299288: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x299288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29928c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299290: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x299290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299294: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x299294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29929c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x29929cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2992a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2992a4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2992a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2992a8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x2992a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2992ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2992acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2992b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2992b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2992b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2992b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2992b8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2992bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2992c0: 0xc0e3656  jal         func_38D958
    ctx->pc = 0x2992C0u;
    SET_GPR_U32(ctx, 31, 0x2992C8u);
    ctx->pc = 0x38D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D958u, 0x2992C0u, 0x2992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2992cc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2992d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2992d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2992d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2992d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2992d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2992dc: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x2992dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x2992e0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2992e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2992e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2992e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2992e8: 0x0  nop
    ctx->pc = 0x2992e8u;
    // NOP
    // 0x2992ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2992ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2992f0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2992F0u;
    {
        const bool branch_taken_0x2992f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2992f0) {
            ctx->pc = 0x299328u;
            goto label_299328;
        }
    }
    ctx->pc = 0x2992F8u;
    // 0x2992f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2992f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2992fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2992fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299300: 0x0  nop
    ctx->pc = 0x299300u;
    // NOP
    // 0x299304: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x299304u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299308: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x299308u;
    {
        const bool branch_taken_0x299308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299308) {
            ctx->pc = 0x299328u;
            goto label_299328;
        }
    }
    ctx->pc = 0x299310u;
    // 0x299310: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x299310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299318: 0x0  nop
    ctx->pc = 0x299318u;
    // NOP
    // 0x29931c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29931cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299320: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x299320u;
    {
        const bool branch_taken_0x299320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299320) {
            ctx->pc = 0x299348u;
            goto label_299348;
        }
    }
    ctx->pc = 0x299328u;
label_299328:
    // 0x299328: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x299328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29932c: 0xc0a64f0  jal         func_2993C0
    ctx->pc = 0x29932Cu;
    SET_GPR_U32(ctx, 31, 0x299334u);
    ctx->pc = 0x2993C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2993C0u, 0x29932Cu, 0x299334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299334u;
label_299334:
    // 0x299334: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x299334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299338: 0x0  nop
    ctx->pc = 0x299338u;
    // NOP
    // 0x29933c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29933cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299340: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x299340u;
    {
        const bool branch_taken_0x299340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299340) {
            ctx->pc = 0x29939Cu;
            goto label_29939c;
        }
    }
    ctx->pc = 0x299348u;
label_299348:
    // 0x299348: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29934c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x299350: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x299350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x299354: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299358: 0x24710034  addiu       $s1, $v1, 0x34
    ctx->pc = 0x299358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x29935c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29935Cu;
    {
        const bool branch_taken_0x29935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29935c) {
            ctx->pc = 0x29939Cu;
            goto label_29939c;
        }
    }
    ctx->pc = 0x299364u;
label_299364:
    // 0x299364: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299368: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x299368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29936c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x29936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x299370: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x299370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x299374: 0xc0e3656  jal         func_38D958
    ctx->pc = 0x299374u;
    SET_GPR_U32(ctx, 31, 0x29937Cu);
    ctx->pc = 0x38D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D958u, 0x299374u, 0x29937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29937Cu;
label_29937c:
    // 0x29937c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299380: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x299380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x299384: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x299384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x299388: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29938c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x299390: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x299390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x299394: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x299394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299398: 0x24700034  addiu       $s0, $v1, 0x34
    ctx->pc = 0x299398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_29939c:
    // 0x29939c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2993a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2993a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2993a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2993a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2993a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2993a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2993ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2993ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2993ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2993B4u;
    // 0x2993b4: 0x0  nop
    ctx->pc = 0x2993b4u;
    // NOP
    // 0x2993b8: 0x0  nop
    ctx->pc = 0x2993b8u;
    // NOP
    // 0x2993bc: 0x0  nop
    ctx->pc = 0x2993bcu;
    // NOP
    ctx->pc = 0x2993c0u;
}
