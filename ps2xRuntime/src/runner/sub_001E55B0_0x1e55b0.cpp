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

// Function: sub_001E55B0
// Address: 0x1e55b0 - 0x1e5910
void sub_001E55B0_0x1e55b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E55B0_0x1e55b0");
#endif

    switch (ctx->pc) {
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e5600u: goto label_1e5600;
        case 0x1e5618u: goto label_1e5618;
        case 0x1e5764u: goto label_1e5764;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e58ecu: goto label_1e58ec;
        default: break;
    }

    ctx->pc = 0x1e55b0u;

    // 0x1e55b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e55b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e55b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e55b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e55b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e55bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e55bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e55c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e55c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e55c4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1e55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1e55c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e55cc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e55d0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E55D0u;
    SET_GPR_U32(ctx, 31, 0x1E55D8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E55D0u, 0x1E55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55D8u;
label_1e55d8:
    // 0x1e55d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e55dc: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e55e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e55e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55e4: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1e55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e55e8: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E55E8u;
    SET_GPR_U32(ctx, 31, 0x1E55F0u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E55E8u, 0x1E55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55F0u;
label_1e55f0:
    // 0x1e55f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e55f4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e55f8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E55F8u;
    SET_GPR_U32(ctx, 31, 0x1E5600u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E55F8u, 0x1E5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5600u;
label_1e5600:
    // 0x1e5600: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5604: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e560c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1e560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5610: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1E5610u;
    SET_GPR_U32(ctx, 31, 0x1E5618u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1E5610u, 0x1E5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5618u;
label_1e5618:
    // 0x1e5618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e561c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e561cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5624: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5628: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e562c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1e562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5630: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1e5630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5638: 0x0  nop
    ctx->pc = 0x1e5638u;
    // NOP
    // 0x1e563c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e563cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5640: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1e5640u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5644: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e5644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5648: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1e5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e564c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e564cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5650: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e5650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e5654: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5658: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e565c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1e565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5660: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1e5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5668: 0x0  nop
    ctx->pc = 0x1e5668u;
    // NOP
    // 0x1e566c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e566cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5670: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1e5670u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5674: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5678: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1e5678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e567c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e567cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5680: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e5680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e5684: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e5684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5688: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e568c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5690: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1e5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5698: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e5698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e569c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e56a0: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e56a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e56a8: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1e56a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e56ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e56acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e56b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e56b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e56b4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1e56b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e56b8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e56bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e56bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e56c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E56C0u;
    {
        const bool branch_taken_0x1e56c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e56c0) {
            ctx->pc = 0x1E56E0u;
            goto label_1e56e0;
        }
    }
    ctx->pc = 0x1E56C8u;
    // 0x1e56c8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1e56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e56cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e56d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e56d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e56d4: 0x0  nop
    ctx->pc = 0x1e56d4u;
    // NOP
    // 0x1e56d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e56d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e56dc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e56dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1e56e0:
    // 0x1e56e0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e56e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e56e4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e56e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e56e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e56e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e56ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E56ECu;
    {
        const bool branch_taken_0x1e56ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e56ec) {
            ctx->pc = 0x1E570Cu;
            goto label_1e570c;
        }
    }
    ctx->pc = 0x1E56F4u;
    // 0x1e56f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1e56f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e56f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e56fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e56fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5700: 0x0  nop
    ctx->pc = 0x1e5700u;
    // NOP
    // 0x1e5704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5708: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e5708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e570c:
    // 0x1e570c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5714: 0x0  nop
    ctx->pc = 0x1e5714u;
    // NOP
    // 0x1e5718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e571c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E571Cu;
    {
        const bool branch_taken_0x1e571c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e571c) {
            ctx->pc = 0x1E5730u;
            goto label_1e5730;
        }
    }
    ctx->pc = 0x1E5724u;
    // 0x1e5724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5728: 0x0  nop
    ctx->pc = 0x1e5728u;
    // NOP
    // 0x1e572c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e5730:
    // 0x1e5730: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e5730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5738: 0x0  nop
    ctx->pc = 0x1e5738u;
    // NOP
    // 0x1e573c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e573cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5740: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5740u;
    {
        const bool branch_taken_0x1e5740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5740) {
            ctx->pc = 0x1E5754u;
            goto label_1e5754;
        }
    }
    ctx->pc = 0x1E5748u;
    // 0x1e5748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e574c: 0x0  nop
    ctx->pc = 0x1e574cu;
    // NOP
    // 0x1e5750: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e5750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e5754:
    // 0x1e5754: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e5754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5758: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e5758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e575c: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E575Cu;
    SET_GPR_U32(ctx, 31, 0x1E5764u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E575Cu, 0x1E5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5764u;
label_1e5764:
    // 0x1e5764: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5764u;
    {
        const bool branch_taken_0x1e5764 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e5764) {
            ctx->pc = 0x1E5780u;
            goto label_1e5780;
        }
    }
    ctx->pc = 0x1E576Cu;
    // 0x1e576c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e576cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5770: 0x0  nop
    ctx->pc = 0x1e5770u;
    // NOP
    // 0x1e5774: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e5774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5778u;
    {
        const bool branch_taken_0x1e5778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5778) {
            ctx->pc = 0x1E579Cu;
            goto label_1e579c;
        }
    }
    ctx->pc = 0x1E5780u;
label_1e5780:
    // 0x1e5780: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e5780u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e5784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e578c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e578cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5790: 0x0  nop
    ctx->pc = 0x1e5790u;
    // NOP
    // 0x1e5794: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e5794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5798: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e5798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e579c:
    // 0x1e579c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e57a0: 0x0  nop
    ctx->pc = 0x1e57a0u;
    // NOP
    // 0x1e57a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e57a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e57a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e57a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e57ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e57b0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e57b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e57b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57b8: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E57B8u;
    SET_GPR_U32(ctx, 31, 0x1E57C0u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E57B8u, 0x1E57C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57C0u;
label_1e57c0:
    // 0x1e57c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e57c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57c4: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E57C4u;
    SET_GPR_U32(ctx, 31, 0x1E57CCu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E57C4u, 0x1E57CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57CCu;
label_1e57cc:
    // 0x1e57cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E57CCu;
    {
        const bool branch_taken_0x1e57cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e57cc) {
            ctx->pc = 0x1E57E8u;
            goto label_1e57e8;
        }
    }
    ctx->pc = 0x1E57D4u;
    // 0x1e57d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e57d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e57d8: 0x0  nop
    ctx->pc = 0x1e57d8u;
    // NOP
    // 0x1e57dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e57dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e57e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E57E0u;
    {
        const bool branch_taken_0x1e57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e57e0) {
            ctx->pc = 0x1E5804u;
            goto label_1e5804;
        }
    }
    ctx->pc = 0x1E57E8u;
label_1e57e8:
    // 0x1e57e8: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1e57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e57ec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1e57ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e57f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e57f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e57f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e57f8: 0x0  nop
    ctx->pc = 0x1e57f8u;
    // NOP
    // 0x1e57fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e57fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e5800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e5804:
    // 0x1e5804: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e5804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5808: 0x0  nop
    ctx->pc = 0x1e5808u;
    // NOP
    // 0x1e580c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e580cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e5810: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1e5810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e5814: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1e5814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5818: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e5818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e581c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e581cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5820: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e5820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e5824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5828: 0x0  nop
    ctx->pc = 0x1e5828u;
    // NOP
    // 0x1e582c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e582cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5830: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5830u;
    {
        const bool branch_taken_0x1e5830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5830) {
            ctx->pc = 0x1E5848u;
            goto label_1e5848;
        }
    }
    ctx->pc = 0x1E5838u;
    // 0x1e5838: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e583c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e583cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e5840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5840u;
    {
        const bool branch_taken_0x1e5840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5840) {
            ctx->pc = 0x1E585Cu;
            goto label_1e585c;
        }
    }
    ctx->pc = 0x1E5848u;
label_1e5848:
    // 0x1e5848: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e5848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e584c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e584cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5850: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e5850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e5854: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e5854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e5858: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1e5858u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_1e585c:
    // 0x1e585c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5860: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1e5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5864: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e5864u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5868: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e5868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e586c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e586cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5870: 0x0  nop
    ctx->pc = 0x1e5870u;
    // NOP
    // 0x1e5874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5878: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5878u;
    {
        const bool branch_taken_0x1e5878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5878) {
            ctx->pc = 0x1E5890u;
            goto label_1e5890;
        }
    }
    ctx->pc = 0x1E5880u;
    // 0x1e5880: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5884: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1e5884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e5888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5888u;
    {
        const bool branch_taken_0x1e5888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5888) {
            ctx->pc = 0x1E58A4u;
            goto label_1e58a4;
        }
    }
    ctx->pc = 0x1E5890u;
label_1e5890:
    // 0x1e5890: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e5890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5894: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5898: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1e5898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e589c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e58a0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1e58a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_1e58a4:
    // 0x1e58a4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e58a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e58a8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e58ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1e58acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e58b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1e58b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e58b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e58b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e58b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e58b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e58bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1e58bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e58c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e58c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e58c4: 0x0  nop
    ctx->pc = 0x1e58c4u;
    // NOP
    // 0x1e58c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e58c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e58cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E58CCu;
    {
        const bool branch_taken_0x1e58cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e58cc) {
            ctx->pc = 0x1E58ECu;
            goto label_1e58ec;
        }
    }
    ctx->pc = 0x1E58D4u;
    // 0x1e58d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e58d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e58d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e58dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58e0: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1e58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e58e4: 0xc079644  jal         func_1E5910
    ctx->pc = 0x1E58E4u;
    SET_GPR_U32(ctx, 31, 0x1E58ECu);
    ctx->pc = 0x1E5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5910u, 0x1E58E4u, 0x1E58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E58ECu;
label_1e58ec:
    // 0x1e58ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e58ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e58f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e58f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e58f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e58f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e58f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e58f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e58fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5900: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5908u;
    // 0x1e5908: 0x0  nop
    ctx->pc = 0x1e5908u;
    // NOP
    // 0x1e590c: 0x0  nop
    ctx->pc = 0x1e590cu;
    // NOP
    ctx->pc = 0x1e5910u;
}
