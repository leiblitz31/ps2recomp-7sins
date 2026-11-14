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

// Function: sub_001FC6E0
// Address: 0x1fc6e0 - 0x1fc940
void sub_001FC6E0_0x1fc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC6E0_0x1fc6e0");
#endif

    switch (ctx->pc) {
        case 0x1fc740u: goto label_1fc740;
        case 0x1fc758u: goto label_1fc758;
        case 0x1fc774u: goto label_1fc774;
        case 0x1fc804u: goto label_1fc804;
        case 0x1fc858u: goto label_1fc858;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc900u: goto label_1fc900;
        default: break;
    }

    ctx->pc = 0x1fc6e0u;

    // 0x1fc6e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fc6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc6e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc6ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc6f8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1fc6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1fc6fc: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1fc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1fc700: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1fc700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1fc704: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x1fc704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fc708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc70c: 0x0  nop
    ctx->pc = 0x1fc70cu;
    // NOP
    // 0x1fc710: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fc710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fc714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc718: 0x0  nop
    ctx->pc = 0x1fc718u;
    // NOP
    // 0x1fc71c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fc720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc724: 0x0  nop
    ctx->pc = 0x1fc724u;
    // NOP
    // 0x1fc728: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fc72c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc730: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc734: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc738: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FC738u;
    SET_GPR_U32(ctx, 31, 0x1FC740u);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FC738u, 0x1FC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC740u;
label_1fc740:
    // 0x1fc740: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc744: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc748: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc74c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc750: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FC750u;
    SET_GPR_U32(ctx, 31, 0x1FC758u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FC750u, 0x1FC758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC758u;
label_1fc758:
    // 0x1fc758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc75c: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1fc75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fc760: 0xdf829998  ld          $v0, -0x6668($gp)
    ctx->pc = 0x1fc760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941080)));
    // 0x1fc764: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fc764u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1fc768: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc76c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FC76Cu;
    SET_GPR_U32(ctx, 31, 0x1FC774u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FC76Cu, 0x1FC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC774u;
label_1fc774:
    // 0x1fc774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc778: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc77c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc784: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fc788: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc78c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc790: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc794: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc798: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc79c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc7a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fc7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc7a8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1fc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1fc7ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc7b0: 0x0  nop
    ctx->pc = 0x1fc7b0u;
    // NOP
    // 0x1fc7b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fc7b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fc7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fc7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc7c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fc7c4: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fc7c4u;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc7c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fc7c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fc7cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fc7d0: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1fc7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc7d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1fc7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fc7d8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc7dc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc7e0: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc7e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fc7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc7e8: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fc7ec: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fc7f0: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x1fc7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fc7f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fc7f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7fc: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FC7FCu;
    SET_GPR_U32(ctx, 31, 0x1FC804u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FC7FCu, 0x1FC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC804u;
label_1fc804:
    // 0x1fc804: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1fc804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc808: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc80c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fc810: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fc814: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fc818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fc818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc81c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fc820: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fc820u;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc824: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fc824u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fc828: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fc82c: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x1fc82cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fc830: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fc830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fc834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc838: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fc83c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fc83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc840: 0x27a7006f  addiu       $a3, $sp, 0x6F
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x1fc844: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fc844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fc848: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc84c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc850: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FC850u;
    SET_GPR_U32(ctx, 31, 0x1FC858u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FC850u, 0x1FC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc85c: 0xa3a2006f  sb          $v0, 0x6F($sp)
    ctx->pc = 0x1fc85cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc860: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fc860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fc864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc868: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fc86c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc870: 0x27a7006f  addiu       $a3, $sp, 0x6F
    ctx->pc = 0x1fc870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x1fc874: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fc874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fc878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc87c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc87cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc880: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FC880u;
    SET_GPR_U32(ctx, 31, 0x1FC888u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FC880u, 0x1FC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC888u;
label_1fc888:
    // 0x1fc888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc890: 0x0  nop
    ctx->pc = 0x1fc890u;
    // NOP
    // 0x1fc894: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fc894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fc898: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fc898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fc89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fc8a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc8a8: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1fc8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1fc8ac: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fc8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fc8b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FC8B8u;
    SET_GPR_U32(ctx, 31, 0x1FC8C0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FC8B8u, 0x1FC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8C0u;
label_1fc8c0:
    // 0x1fc8c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc8c8: 0x0  nop
    ctx->pc = 0x1fc8c8u;
    // NOP
    // 0x1fc8cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1fc8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fc8d0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fc8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc8d4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fc8d8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fc8dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc8e0: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1fc8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1fc8e4: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1fc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fc8e8: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x1fc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fc8ec: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1fc8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x1fc8f0: 0x2529ee20  addiu       $t1, $t1, -0x11E0
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962720));
    // 0x1fc8f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fc8f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8f8: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FC8F8u;
    SET_GPR_U32(ctx, 31, 0x1FC900u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FC8F8u, 0x1FC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC900u;
label_1fc900:
    // 0x1fc900: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1fc900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc904: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1fc904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc908: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fc90c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fc910: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1fc910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc914: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fc914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc91c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc928: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1fc928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fc92c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC934u;
    // 0x1fc934: 0x0  nop
    ctx->pc = 0x1fc934u;
    // NOP
    // 0x1fc938: 0x0  nop
    ctx->pc = 0x1fc938u;
    // NOP
    // 0x1fc93c: 0x0  nop
    ctx->pc = 0x1fc93cu;
    // NOP
    ctx->pc = 0x1fc940u;
}
