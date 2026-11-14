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

// Function: sub_00244210
// Address: 0x244210 - 0x244450
void sub_00244210_0x244210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244210_0x244210");
#endif

    switch (ctx->pc) {
        case 0x2442c0u: goto label_2442c0;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442f8u: goto label_2442f8;
        case 0x244384u: goto label_244384;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443e0u: goto label_2443e0;
        case 0x244430u: goto label_244430;
        default: break;
    }

    ctx->pc = 0x244210u;

    // 0x244210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x244214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244218: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x244218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24421c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x24421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x244220: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244224: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x244224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244228: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x244228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24422c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x24422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244230: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x244230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244234: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x244234u;
    {
        const bool branch_taken_0x244234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244234) {
            ctx->pc = 0x244430u;
            goto label_244430;
        }
    }
    ctx->pc = 0x24423Cu;
    // 0x24423c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244240: 0x9063004a  lbu         $v1, 0x4A($v1)
    ctx->pc = 0x244240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x244244: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x244244u;
    {
        const bool branch_taken_0x244244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244244) {
            ctx->pc = 0x244430u;
            goto label_244430;
        }
    }
    ctx->pc = 0x24424Cu;
    // 0x24424c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244250: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x244250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x244254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x244258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24425c: 0x0  nop
    ctx->pc = 0x24425cu;
    // NOP
    // 0x244260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244264: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x244264u;
    {
        const bool branch_taken_0x244264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244264) {
            ctx->pc = 0x2442A0u;
            goto label_2442a0;
        }
    }
    ctx->pc = 0x24426Cu;
    // 0x24426c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x24426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x244270: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x244270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244274: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x244274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x244278: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x244278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24427c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244280: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x244280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244288: 0x0  nop
    ctx->pc = 0x244288u;
    // NOP
    // 0x24428c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x24428cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x244290: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x244290u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x244294: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x244294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x244298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244298) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x2442A0u;
label_2442a0:
    // 0x2442a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2442a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2442a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2442a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2442a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442ac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2442acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2442b0:
    // 0x2442b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442b4: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x2442b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2442b8: 0xc091120  jal         func_244480
    ctx->pc = 0x2442B8u;
    SET_GPR_U32(ctx, 31, 0x2442C0u);
    ctx->pc = 0x244480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244480u, 0x2442B8u, 0x2442C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442C0u;
label_2442c0:
    // 0x2442c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442c4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2442c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2442c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442cc: 0xc44c0038  lwc1        $f12, 0x38($v0)
    ctx->pc = 0x2442ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2442d0: 0xc091120  jal         func_244480
    ctx->pc = 0x2442D0u;
    SET_GPR_U32(ctx, 31, 0x2442D8u);
    ctx->pc = 0x244480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244480u, 0x2442D0u, 0x2442D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442D8u;
label_2442d8:
    // 0x2442d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442dc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2442dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2442e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442e8: 0xc46c003c  lwc1        $f12, 0x3C($v1)
    ctx->pc = 0x2442e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2442ec: 0xc44d0038  lwc1        $f13, 0x38($v0)
    ctx->pc = 0x2442ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2442f0: 0xc091130  jal         func_2444C0
    ctx->pc = 0x2442F0u;
    SET_GPR_U32(ctx, 31, 0x2442F8u);
    ctx->pc = 0x2444C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2444C0u, 0x2442F0u, 0x2442F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442F8u;
label_2442f8:
    // 0x2442f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2442f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2442fc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2442fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244300: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x244304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244308: 0x0  nop
    ctx->pc = 0x244308u;
    // NOP
    // 0x24430c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24430cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244310: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x244310u;
    {
        const bool branch_taken_0x244310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244310) {
            ctx->pc = 0x244414u;
            goto label_244414;
        }
    }
    ctx->pc = 0x244318u;
    // 0x244318: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24431c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x24431cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x244320: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x244320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244324: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x244324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244328: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x244328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24432c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x244330: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x244330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x244338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24433c: 0x0  nop
    ctx->pc = 0x24433cu;
    // NOP
    // 0x244340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244344: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x244344u;
    {
        const bool branch_taken_0x244344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244344) {
            ctx->pc = 0x24435Cu;
            goto label_24435c;
        }
    }
    ctx->pc = 0x24434Cu;
    // 0x24434c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x244350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244354: 0x0  nop
    ctx->pc = 0x244354u;
    // NOP
    // 0x244358: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x244358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_24435c:
    // 0x24435c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x24435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244360: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x244360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244368: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x244368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24436c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24436cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244370: 0x0  nop
    ctx->pc = 0x244370u;
    // NOP
    // 0x244374: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x244374u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x244378: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x244378u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x24437c: 0xc091120  jal         func_244480
    ctx->pc = 0x24437Cu;
    SET_GPR_U32(ctx, 31, 0x244384u);
    ctx->pc = 0x244480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244480u, 0x24437Cu, 0x244384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244384u;
label_244384:
    // 0x244384: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x244384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x244388: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x244388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24438c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x24438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244390: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244394: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x244394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24439c: 0x0  nop
    ctx->pc = 0x24439cu;
    // NOP
    // 0x2443a0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2443a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2443a4: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x2443a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2443a8: 0xc091120  jal         func_244480
    ctx->pc = 0x2443A8u;
    SET_GPR_U32(ctx, 31, 0x2443B0u);
    ctx->pc = 0x244480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244480u, 0x2443A8u, 0x2443B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443B0u;
label_2443b0:
    // 0x2443b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2443b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2443b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2443b8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2443b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2443bc: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x2443bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2443c0: 0xc091130  jal         func_2444C0
    ctx->pc = 0x2443C0u;
    SET_GPR_U32(ctx, 31, 0x2443C8u);
    ctx->pc = 0x2444C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2444C0u, 0x2443C0u, 0x2443C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443C8u;
label_2443c8:
    // 0x2443c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2443c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2443cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2443d0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2443d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2443d4: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x2443d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2443d8: 0xc091130  jal         func_2444C0
    ctx->pc = 0x2443D8u;
    SET_GPR_U32(ctx, 31, 0x2443E0u);
    ctx->pc = 0x2444C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2444C0u, 0x2443D8u, 0x2443E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443E0u;
label_2443e0:
    // 0x2443e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2443e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2443e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2443E4u;
    {
        const bool branch_taken_0x2443e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2443e4) {
            ctx->pc = 0x244400u;
            goto label_244400;
        }
    }
    ctx->pc = 0x2443ECu;
    // 0x2443ec: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2443ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2443f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2443f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2443f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2443f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2443f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2443F8u;
    {
        const bool branch_taken_0x2443f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2443f8) {
            ctx->pc = 0x244424u;
            goto label_244424;
        }
    }
    ctx->pc = 0x244400u;
label_244400:
    // 0x244400: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x244400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244404: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244408: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x244408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x24440c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24440Cu;
    {
        const bool branch_taken_0x24440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24440c) {
            ctx->pc = 0x244424u;
            goto label_244424;
        }
    }
    ctx->pc = 0x244414u;
label_244414:
    // 0x244414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x244414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244418: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x244418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24441c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244420: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x244420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_244424:
    // 0x244424: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x244424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244428: 0xc091050  jal         func_244140
    ctx->pc = 0x244428u;
    SET_GPR_U32(ctx, 31, 0x244430u);
    ctx->pc = 0x244140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244140u, 0x244428u, 0x244430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244430u;
label_244430:
    // 0x244430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x244434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244438: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24443c: 0x3e00008  jr          $ra
    ctx->pc = 0x24443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244444u;
    // 0x244444: 0x0  nop
    ctx->pc = 0x244444u;
    // NOP
    // 0x244448: 0x0  nop
    ctx->pc = 0x244448u;
    // NOP
    // 0x24444c: 0x0  nop
    ctx->pc = 0x24444cu;
    // NOP
    ctx->pc = 0x244450u;
}
