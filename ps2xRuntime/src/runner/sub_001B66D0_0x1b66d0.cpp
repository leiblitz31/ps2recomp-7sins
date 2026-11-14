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

// Function: sub_001B66D0
// Address: 0x1b66d0 - 0x1b6850
void sub_001B66D0_0x1b66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B66D0_0x1b66d0");
#endif

    switch (ctx->pc) {
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b6808u: goto label_1b6808;
        default: break;
    }

    ctx->pc = 0x1b66d0u;

    // 0x1b66d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b66d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b66d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b66dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b66e0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b66e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b66e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b66e8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b66ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b66f0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B66F0u;
    SET_GPR_U32(ctx, 31, 0x1B66F8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B66F0u, 0x1B66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66F8u;
label_1b66f8:
    // 0x1b66f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b66f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66fc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6700: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6704: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6704u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6708: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b670c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b670cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6710: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6714: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6718: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b671c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b671cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6720: 0x0  nop
    ctx->pc = 0x1b6720u;
    // NOP
    // 0x1b6724: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6728: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B6728u;
    {
        const bool branch_taken_0x1b6728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6728) {
            ctx->pc = 0x1B6770u;
            goto label_1b6770;
        }
    }
    ctx->pc = 0x1B6730u;
    // 0x1b6730: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6734: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x1b6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6738: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b673c: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x1b673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6740: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b6740u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6744: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1b6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6748: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b674c: 0xc4610160  lwc1        $f1, 0x160($v1)
    ctx->pc = 0x1b674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6754: 0x0  nop
    ctx->pc = 0x1b6754u;
    // NOP
    // 0x1b6758: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b6758u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b675c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6760: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6764: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x1b6764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
    // 0x1b6768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6780u;
            goto label_1b6780;
        }
    }
    ctx->pc = 0x1B6770u;
label_1b6770:
    // 0x1b6770: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6774: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x1b6774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6778: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b677c: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x1b677cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_1b6780:
    // 0x1b6780: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6784: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b678c: 0x0  nop
    ctx->pc = 0x1b678cu;
    // NOP
    // 0x1b6790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6794: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B6794u;
    {
        const bool branch_taken_0x1b6794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6794) {
            ctx->pc = 0x1B67F0u;
            goto label_1b67f0;
        }
    }
    ctx->pc = 0x1B679Cu;
    // 0x1b679c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b67a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b67a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b67a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b67a8: 0x0  nop
    ctx->pc = 0x1b67a8u;
    // NOP
    // 0x1b67ac: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1b67acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b67b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67b4: 0xc462014c  lwc1        $f2, 0x14C($v1)
    ctx->pc = 0x1b67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b67b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67bc: 0xc461013c  lwc1        $f1, 0x13C($v1)
    ctx->pc = 0x1b67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b67c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b67c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b67c4: 0x0  nop
    ctx->pc = 0x1b67c4u;
    // NOP
    // 0x1b67c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b67c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b67cc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b67ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b67d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67d4: 0xe4600134  swc1        $f0, 0x134($v1)
    ctx->pc = 0x1b67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 308), bits); }
    // 0x1b67d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67dc: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x1b67dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b67e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67e4: 0xe4600138  swc1        $f0, 0x138($v1)
    ctx->pc = 0x1b67e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 312), bits); }
    // 0x1b67e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B67E8u;
    {
        const bool branch_taken_0x1b67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67e8) {
            ctx->pc = 0x1B6808u;
            goto label_1b6808;
        }
    }
    ctx->pc = 0x1B67F0u;
label_1b67f0:
    // 0x1b67f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67f8: 0x24640134  addiu       $a0, $v1, 0x134
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
    // 0x1b67fc: 0x2445013c  addiu       $a1, $v0, 0x13C
    ctx->pc = 0x1b67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 316));
    // 0x1b6800: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B6800u;
    SET_GPR_U32(ctx, 31, 0x1B6808u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B6800u, 0x1B6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6808u;
label_1b6808:
    // 0x1b6808: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b680c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6814: 0x0  nop
    ctx->pc = 0x1b6814u;
    // NOP
    // 0x1b6818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b681c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B681Cu;
    {
        const bool branch_taken_0x1b681c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b681c) {
            ctx->pc = 0x1B6834u;
            goto label_1b6834;
        }
    }
    ctx->pc = 0x1B6824u;
    // 0x1b6824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6828: 0x0  nop
    ctx->pc = 0x1b6828u;
    // NOP
    // 0x1b682c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b682cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6830: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6834:
    // 0x1b6834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b683c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6840: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6848u;
    // 0x1b6848: 0x0  nop
    ctx->pc = 0x1b6848u;
    // NOP
    // 0x1b684c: 0x0  nop
    ctx->pc = 0x1b684cu;
    // NOP
    ctx->pc = 0x1b6850u;
}
