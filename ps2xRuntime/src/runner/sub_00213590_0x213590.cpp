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

// Function: sub_00213590
// Address: 0x213590 - 0x2137f0
void sub_00213590_0x213590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213590_0x213590");
#endif

    switch (ctx->pc) {
        case 0x213664u: goto label_213664;
        case 0x2136dcu: goto label_2136dc;
        case 0x2136f0u: goto label_2136f0;
        case 0x213704u: goto label_213704;
        case 0x213718u: goto label_213718;
        case 0x213754u: goto label_213754;
        case 0x213784u: goto label_213784;
        case 0x21379cu: goto label_21379c;
        case 0x2137bcu: goto label_2137bc;
        case 0x2137c8u: goto label_2137c8;
        case 0x2137d8u: goto label_2137d8;
        default: break;
    }

    ctx->pc = 0x213590u;

    // 0x213590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x213594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x213594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x213598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21359c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x21359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2135a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2135a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2135a8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2135ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135b0: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x2135b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2135b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135b8: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x2135b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2135bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2135bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135c4: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2135c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2135c8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2135c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2135ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2135d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2135d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2135d4: 0x0  nop
    ctx->pc = 0x2135d4u;
    // NOP
    // 0x2135d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2135d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2135dc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2135dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2135e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2135e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2135e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135e8: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x2135e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2135ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135f0: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2135f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2135f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2135f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2135f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135fc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2135fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213600: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x213600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213604: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21360c: 0x0  nop
    ctx->pc = 0x21360cu;
    // NOP
    // 0x213610: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213610u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x213614: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x213614u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x213618: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x213618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21361c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213620: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x213620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213624: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x213624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213628: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x213628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21362c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213630: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x213630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213634: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x213634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213638: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x213638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21363c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21363cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213644: 0x0  nop
    ctx->pc = 0x213644u;
    // NOP
    // 0x213648: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213648u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21364c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x21364cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x213650: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x213650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x213654: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x213654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213658: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x213658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21365c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x21365Cu;
    SET_GPR_U32(ctx, 31, 0x213664u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x21365Cu, 0x213664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213664u;
label_213664:
    // 0x213664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x213668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21366c: 0x0  nop
    ctx->pc = 0x21366cu;
    // NOP
    // 0x213670: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x213670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x213674: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x213674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x213678: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x213678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21367c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21367cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213680: 0x0  nop
    ctx->pc = 0x213680u;
    // NOP
    // 0x213684: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x213684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x213688: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x213688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21368c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x21368cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x213690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213694: 0x0  nop
    ctx->pc = 0x213694u;
    // NOP
    // 0x213698: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x213698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x21369c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x21369cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2136a0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2136a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2136a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2136a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2136a8: 0x0  nop
    ctx->pc = 0x2136a8u;
    // NOP
    // 0x2136ac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2136acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2136b0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2136b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2136b4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2136b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2136b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2136b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2136bc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2136bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2136c0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2136c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2136c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2136c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2136c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2136c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2136cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2136ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2136d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2136d4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2136D4u;
    SET_GPR_U32(ctx, 31, 0x2136DCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2136D4u, 0x2136DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136DCu;
label_2136dc:
    // 0x2136dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2136dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2136e0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2136e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2136e4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2136e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2136e8: 0xc041d58  jal         func_107560
    ctx->pc = 0x2136E8u;
    SET_GPR_U32(ctx, 31, 0x2136F0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2136E8u, 0x2136F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136F0u;
label_2136f0:
    // 0x2136f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2136f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2136f4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2136f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2136f8: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x2136f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2136fc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2136FCu;
    SET_GPR_U32(ctx, 31, 0x213704u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2136FCu, 0x213704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213704u;
label_213704:
    // 0x213704: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x213704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213708: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x213708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21370c: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x21370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x213710: 0xc041d58  jal         func_107560
    ctx->pc = 0x213710u;
    SET_GPR_U32(ctx, 31, 0x213718u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x213710u, 0x213718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213718u;
label_213718:
    // 0x213718: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21371c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x21371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x213720: 0x24430068  addiu       $v1, $v0, 0x68
    ctx->pc = 0x213720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x213724: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x213724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x213728: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x213728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21372c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x21372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213730: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x213730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x213734: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x213734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x213738: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x213738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21373c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x213740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213744: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x213744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213748: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x213748u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21374c: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x21374Cu;
    SET_GPR_U32(ctx, 31, 0x213754u);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x21374Cu, 0x213754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213754u;
label_213754:
    // 0x213754: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x213754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x213758: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x213758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21375c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x21375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213760: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213764: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x213764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213768: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x213768u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x21376c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x213770: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213774: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x213774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x213778: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x213778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21377c: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x21377Cu;
    SET_GPR_U32(ctx, 31, 0x213784u);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x21377Cu, 0x213784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213784u;
label_213784:
    // 0x213784: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x213784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213788: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x213788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21378c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21378cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213790: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x213790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x213794: 0xc10604c  jal         func_418130
    ctx->pc = 0x213794u;
    SET_GPR_U32(ctx, 31, 0x21379Cu);
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x213794u, 0x21379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21379Cu;
label_21379c:
    // 0x21379c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2137a0: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x2137a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x2137a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2137a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2137a8: 0x0  nop
    ctx->pc = 0x2137a8u;
    // NOP
    // 0x2137ac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2137acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2137b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2137b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2137b4: 0xc106080  jal         func_418200
    ctx->pc = 0x2137B4u;
    SET_GPR_U32(ctx, 31, 0x2137BCu);
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x2137B4u, 0x2137BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137BCu;
label_2137bc:
    // 0x2137bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2137bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137c0: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x2137C0u;
    SET_GPR_U32(ctx, 31, 0x2137C8u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x2137C0u, 0x2137C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137C8u;
label_2137c8:
    // 0x2137c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2137c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2137cc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2137ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2137d0: 0xc106794  jal         func_419E50
    ctx->pc = 0x2137D0u;
    SET_GPR_U32(ctx, 31, 0x2137D8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x2137D0u, 0x2137D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137D8u;
label_2137d8:
    // 0x2137d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2137d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2137dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2137dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2137e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2137e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2137E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2137ECu;
    // 0x2137ec: 0x0  nop
    ctx->pc = 0x2137ecu;
    // NOP
    ctx->pc = 0x2137f0u;
}
