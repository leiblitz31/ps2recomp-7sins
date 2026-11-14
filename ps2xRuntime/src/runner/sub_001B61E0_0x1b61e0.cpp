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

// Function: sub_001B61E0
// Address: 0x1b61e0 - 0x1b65b0
void sub_001B61E0_0x1b61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B61E0_0x1b61e0");
#endif

    switch (ctx->pc) {
        case 0x1b6210u: goto label_1b6210;
        case 0x1b62f4u: goto label_1b62f4;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b63b4u: goto label_1b63b4;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b644cu: goto label_1b644c;
        case 0x1b6474u: goto label_1b6474;
        case 0x1b64d0u: goto label_1b64d0;
        case 0x1b64f4u: goto label_1b64f4;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b654cu: goto label_1b654c;
        case 0x1b658cu: goto label_1b658c;
        default: break;
    }

    ctx->pc = 0x1b61e0u;

    // 0x1b61e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b61e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b61e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b61e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b61ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b61f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b61f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b61f8: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x1b61f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b61fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6200: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6204: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b6204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6208: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6208u;
    SET_GPR_U32(ctx, 31, 0x1B6210u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6208u, 0x1B6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6210u;
label_1b6210:
    // 0x1b6210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6214: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1b6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6218: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b621c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b621cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6220: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6228: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b622c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6230: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6238: 0x0  nop
    ctx->pc = 0x1b6238u;
    // NOP
    // 0x1b623c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b623cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6240: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B6240u;
    {
        const bool branch_taken_0x1b6240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6240) {
            ctx->pc = 0x1B6288u;
            goto label_1b6288;
        }
    }
    ctx->pc = 0x1B6248u;
    // 0x1b6248: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b624c: 0xc4610160  lwc1        $f1, 0x160($v1)
    ctx->pc = 0x1b624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6250: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6254: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x1b6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6258: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b6258u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b625c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1b625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6260: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6264: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x1b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b626c: 0x0  nop
    ctx->pc = 0x1b626cu;
    // NOP
    // 0x1b6270: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b6270u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b6274: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b6274u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6278: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b627c: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x1b627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
    // 0x1b6280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6280u;
    {
        const bool branch_taken_0x1b6280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6280) {
            ctx->pc = 0x1B6298u;
            goto label_1b6298;
        }
    }
    ctx->pc = 0x1B6288u;
label_1b6288:
    // 0x1b6288: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b628c: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x1b628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6290: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6294: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x1b6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_1b6298:
    // 0x1b6298: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b629c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b62a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b62a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62a4: 0x0  nop
    ctx->pc = 0x1b62a4u;
    // NOP
    // 0x1b62a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b62a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b62ac: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B62ACu;
    {
        const bool branch_taken_0x1b62ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b62ac) {
            ctx->pc = 0x1B6324u;
            goto label_1b6324;
        }
    }
    ctx->pc = 0x1B62B4u;
    // 0x1b62b4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1b62b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b62b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b62bc: 0xc442014c  lwc1        $f2, 0x14C($v0)
    ctx->pc = 0x1b62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b62c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b62c4: 0xc441013c  lwc1        $f1, 0x13C($v0)
    ctx->pc = 0x1b62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b62c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62cc: 0x0  nop
    ctx->pc = 0x1b62ccu;
    // NOP
    // 0x1b62d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b62d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b62d4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b62d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b62d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b62dc: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x1b62dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
    // 0x1b62e0: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b62e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62e4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b62e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1b62e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b62ec: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1B62ECu;
    SET_GPR_U32(ctx, 31, 0x1B62F4u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1B62ECu, 0x1B62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62F4u;
label_1b62f4:
    // 0x1b62f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b62f8: 0xc4630150  lwc1        $f3, 0x150($v1)
    ctx->pc = 0x1b62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b62fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6300: 0xc4620140  lwc1        $f2, 0x140($v1)
    ctx->pc = 0x1b6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6304: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b6304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6308: 0x0  nop
    ctx->pc = 0x1b6308u;
    // NOP
    // 0x1b630c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1b630cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1b6310: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1b6310u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1b6314: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6318: 0xe4600138  swc1        $f0, 0x138($v1)
    ctx->pc = 0x1b6318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 312), bits); }
    // 0x1b631c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B631Cu;
    {
        const bool branch_taken_0x1b631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b631c) {
            ctx->pc = 0x1B6350u;
            goto label_1b6350;
        }
    }
    ctx->pc = 0x1B6324u;
label_1b6324:
    // 0x1b6324: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6328: 0xc461013c  lwc1        $f1, 0x13C($v1)
    ctx->pc = 0x1b6328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b632c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6330: 0xc460014c  lwc1        $f0, 0x14C($v1)
    ctx->pc = 0x1b6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6338: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b633c: 0xe4600134  swc1        $f0, 0x134($v1)
    ctx->pc = 0x1b633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 308), bits); }
    // 0x1b6340: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6344: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x1b6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6348: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b634c: 0xe4600138  swc1        $f0, 0x138($v1)
    ctx->pc = 0x1b634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 312), bits); }
label_1b6350:
    // 0x1b6350: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6354: 0xc7808394  lwc1        $f0, -0x7C6C($gp)
    ctx->pc = 0x1b6354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b635c: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1B635Cu;
    {
        const bool branch_taken_0x1b635c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b635c) {
            ctx->pc = 0x1B64A0u;
            goto label_1b64a0;
        }
    }
    ctx->pc = 0x1B6364u;
    // 0x1b6364: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6368: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1b636c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1B636Cu;
    {
        const bool branch_taken_0x1b636c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b636c) {
            ctx->pc = 0x1B64A0u;
            goto label_1b64a0;
        }
    }
    ctx->pc = 0x1B6374u;
    // 0x1b6374: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b6374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6378: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b637c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6380: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6384: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6384u;
    SET_GPR_U32(ctx, 31, 0x1B638Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6384u, 0x1B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B638Cu;
label_1b638c:
    // 0x1b638c: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1b638cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b6390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6394: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6398: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x1b6398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x1b639c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63a4: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x1b63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1b63a8: 0x244500c8  addiu       $a1, $v0, 0xC8
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1b63ac: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B63ACu;
    SET_GPR_U32(ctx, 31, 0x1B63B4u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B63ACu, 0x1B63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63B4u;
label_1b63b4:
    // 0x1b63b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b63b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b63b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63bc: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1b63bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1b63c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b63c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b63c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63c8: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1b63c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1b63cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b63ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b63d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63d4: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x1b63d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x1b63d8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1B63D8u;
    SET_GPR_U32(ctx, 31, 0x1B63E0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1B63D8u, 0x1B63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63E0u;
label_1b63e0:
    // 0x1b63e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b63e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b63e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b63e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b63e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b63ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b63f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63f4: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1b63f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    // 0x1b63f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b63fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b63fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6400: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b6404: 0x27859530  addiu       $a1, $gp, -0x6AD0
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939952));
    // 0x1b6408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b640c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6410: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B6410u;
    SET_GPR_U32(ctx, 31, 0x1B6418u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B6410u, 0x1B6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6418u;
label_1b6418:
    // 0x1b6418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b641c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B641Cu;
    {
        const bool branch_taken_0x1b641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b641c) {
            ctx->pc = 0x1B6494u;
            goto label_1b6494;
        }
    }
    ctx->pc = 0x1B6424u;
label_1b6424:
    // 0x1b6424: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b6428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b642c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b642cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b6430: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6434: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b643c: 0x246400f8  addiu       $a0, $v1, 0xF8
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 248));
    // 0x1b6440: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x1b6440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1b6444: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B6444u;
    SET_GPR_U32(ctx, 31, 0x1B644Cu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B6444u, 0x1B644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B644Cu;
label_1b644c:
    // 0x1b644c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b6450: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b6450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b6454: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b6458: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b645c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6460: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6464: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x1b6464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1b6468: 0x244500d8  addiu       $a1, $v0, 0xD8
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1b646c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B646Cu;
    SET_GPR_U32(ctx, 31, 0x1B6474u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B646Cu, 0x1B6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6474u;
label_1b6474:
    // 0x1b6474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6478: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b647c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b6480: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6484: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b648c: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1b648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1b6490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b6490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b6494:
    // 0x1b6494: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x1b6494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6498: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B6424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6424;
        }
    }
    ctx->pc = 0x1B64A0u;
label_1b64a0:
    // 0x1b64a0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b64a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b64a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b64a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b64ac: 0x0  nop
    ctx->pc = 0x1b64acu;
    // NOP
    // 0x1b64b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b64b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b64b4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B64B4u;
    {
        const bool branch_taken_0x1b64b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b64b4) {
            ctx->pc = 0x1B64F8u;
            goto label_1b64f8;
        }
    }
    ctx->pc = 0x1B64BCu;
    // 0x1b64bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b64c0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b64c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b64c8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B64C8u;
    SET_GPR_U32(ctx, 31, 0x1B64D0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B64C8u, 0x1B64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64D0u;
label_1b64d0:
    // 0x1b64d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b64d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b64d4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B64D4u;
    {
        const bool branch_taken_0x1b64d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b64d4) {
            ctx->pc = 0x1B64F8u;
            goto label_1b64f8;
        }
    }
    ctx->pc = 0x1B64DCu;
    // 0x1b64dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b64e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b64e4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b64e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b64ec: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B64ECu;
    SET_GPR_U32(ctx, 31, 0x1B64F4u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B64ECu, 0x1B64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64F4u;
label_1b64f4:
    // 0x1b64f4: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1b64f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1b64f8:
    // 0x1b64f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b64f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b64fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6504: 0x0  nop
    ctx->pc = 0x1b6504u;
    // NOP
    // 0x1b6508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b650c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B650Cu;
    {
        const bool branch_taken_0x1b650c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b650c) {
            ctx->pc = 0x1B6550u;
            goto label_1b6550;
        }
    }
    ctx->pc = 0x1B6514u;
    // 0x1b6514: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6518: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b651c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b6520: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6520u;
    SET_GPR_U32(ctx, 31, 0x1B6528u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6520u, 0x1B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6528u;
label_1b6528:
    // 0x1b6528: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b6528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b652c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B652Cu;
    {
        const bool branch_taken_0x1b652c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b652c) {
            ctx->pc = 0x1B6550u;
            goto label_1b6550;
        }
    }
    ctx->pc = 0x1B6534u;
    // 0x1b6534: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b6534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b653c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b6544: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6544u;
    SET_GPR_U32(ctx, 31, 0x1B654Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6544u, 0x1B654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B654Cu;
label_1b654c:
    // 0x1b654c: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1b654cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1b6550:
    // 0x1b6550: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6554: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1b6554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6558: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b655c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1B655Cu;
    {
        const bool branch_taken_0x1b655c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b655c) {
            ctx->pc = 0x1B6590u;
            goto label_1b6590;
        }
    }
    ctx->pc = 0x1B6564u;
    // 0x1b6564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6568: 0x0  nop
    ctx->pc = 0x1b6568u;
    // NOP
    // 0x1b656c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6570: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6574: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6578: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b657c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6580: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6584: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6584u;
    SET_GPR_U32(ctx, 31, 0x1B658Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6584u, 0x1B658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B658Cu;
label_1b658c:
    // 0x1b658c: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1b658cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1b6590:
    // 0x1b6590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b659c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b659cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b65a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b65a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b65a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B65A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B65A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B65ACu;
    // 0x1b65ac: 0x0  nop
    ctx->pc = 0x1b65acu;
    // NOP
    ctx->pc = 0x1b65b0u;
}
