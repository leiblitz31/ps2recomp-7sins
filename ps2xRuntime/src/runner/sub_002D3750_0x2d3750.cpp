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

// Function: sub_002D3750
// Address: 0x2d3750 - 0x2d4c70
void sub_002D3750_0x2d3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3750_0x2d3750");
#endif

    switch (ctx->pc) {
        case 0x2d3798u: goto label_2d3798;
        case 0x2d37a4u: goto label_2d37a4;
        case 0x2d37f0u: goto label_2d37f0;
        case 0x2d37fcu: goto label_2d37fc;
        case 0x2d38b4u: goto label_2d38b4;
        case 0x2d38e0u: goto label_2d38e0;
        case 0x2d38f4u: goto label_2d38f4;
        case 0x2d3930u: goto label_2d3930;
        case 0x2d3940u: goto label_2d3940;
        case 0x2d3958u: goto label_2d3958;
        case 0x2d39a4u: goto label_2d39a4;
        case 0x2d39d0u: goto label_2d39d0;
        case 0x2d39dcu: goto label_2d39dc;
        case 0x2d3a1cu: goto label_2d3a1c;
        case 0x2d3a30u: goto label_2d3a30;
        case 0x2d3a98u: goto label_2d3a98;
        case 0x2d3ab0u: goto label_2d3ab0;
        case 0x2d3ac0u: goto label_2d3ac0;
        case 0x2d3af0u: goto label_2d3af0;
        case 0x2d3b44u: goto label_2d3b44;
        case 0x2d3b54u: goto label_2d3b54;
        case 0x2d3b78u: goto label_2d3b78;
        case 0x2d3b88u: goto label_2d3b88;
        case 0x2d3bacu: goto label_2d3bac;
        case 0x2d3bc0u: goto label_2d3bc0;
        case 0x2d3bd4u: goto label_2d3bd4;
        case 0x2d3c1cu: goto label_2d3c1c;
        case 0x2d3c34u: goto label_2d3c34;
        case 0x2d3c5cu: goto label_2d3c5c;
        case 0x2d3c70u: goto label_2d3c70;
        case 0x2d3c8cu: goto label_2d3c8c;
        case 0x2d3ca0u: goto label_2d3ca0;
        case 0x2d3cb4u: goto label_2d3cb4;
        case 0x2d3cecu: goto label_2d3cec;
        case 0x2d3d00u: goto label_2d3d00;
        case 0x2d3d10u: goto label_2d3d10;
        case 0x2d3d44u: goto label_2d3d44;
        case 0x2d3da0u: goto label_2d3da0;
        case 0x2d3e74u: goto label_2d3e74;
        case 0x2d3e8cu: goto label_2d3e8c;
        case 0x2d3ea0u: goto label_2d3ea0;
        case 0x2d3ee0u: goto label_2d3ee0;
        case 0x2d3f00u: goto label_2d3f00;
        case 0x2d3f7cu: goto label_2d3f7c;
        case 0x2d3f8cu: goto label_2d3f8c;
        case 0x2d3fc4u: goto label_2d3fc4;
        case 0x2d3fe0u: goto label_2d3fe0;
        case 0x2d4018u: goto label_2d4018;
        case 0x2d4034u: goto label_2d4034;
        case 0x2d4098u: goto label_2d4098;
        case 0x2d40ccu: goto label_2d40cc;
        case 0x2d40ecu: goto label_2d40ec;
        case 0x2d4100u: goto label_2d4100;
        case 0x2d4150u: goto label_2d4150;
        case 0x2d4160u: goto label_2d4160;
        case 0x2d417cu: goto label_2d417c;
        case 0x2d4190u: goto label_2d4190;
        case 0x2d41b8u: goto label_2d41b8;
        case 0x2d41ccu: goto label_2d41cc;
        case 0x2d41f0u: goto label_2d41f0;
        case 0x2d4200u: goto label_2d4200;
        case 0x2d4228u: goto label_2d4228;
        case 0x2d4238u: goto label_2d4238;
        case 0x2d4254u: goto label_2d4254;
        case 0x2d4264u: goto label_2d4264;
        case 0x2d42b8u: goto label_2d42b8;
        case 0x2d42e8u: goto label_2d42e8;
        case 0x2d42fcu: goto label_2d42fc;
        case 0x2d432cu: goto label_2d432c;
        case 0x2d433cu: goto label_2d433c;
        case 0x2d4368u: goto label_2d4368;
        case 0x2d437cu: goto label_2d437c;
        case 0x2d4398u: goto label_2d4398;
        case 0x2d43ccu: goto label_2d43cc;
        case 0x2d43f0u: goto label_2d43f0;
        case 0x2d4400u: goto label_2d4400;
        case 0x2d4418u: goto label_2d4418;
        case 0x2d4468u: goto label_2d4468;
        case 0x2d447cu: goto label_2d447c;
        case 0x2d44dcu: goto label_2d44dc;
        case 0x2d451cu: goto label_2d451c;
        case 0x2d4530u: goto label_2d4530;
        case 0x2d4564u: goto label_2d4564;
        case 0x2d4580u: goto label_2d4580;
        case 0x2d463cu: goto label_2d463c;
        case 0x2d4680u: goto label_2d4680;
        case 0x2d46bcu: goto label_2d46bc;
        case 0x2d46d0u: goto label_2d46d0;
        case 0x2d4704u: goto label_2d4704;
        case 0x2d4728u: goto label_2d4728;
        case 0x2d473cu: goto label_2d473c;
        case 0x2d4754u: goto label_2d4754;
        case 0x2d4770u: goto label_2d4770;
        case 0x2d478cu: goto label_2d478c;
        case 0x2d47a4u: goto label_2d47a4;
        case 0x2d4814u: goto label_2d4814;
        case 0x2d4828u: goto label_2d4828;
        case 0x2d483cu: goto label_2d483c;
        case 0x2d4854u: goto label_2d4854;
        case 0x2d4864u: goto label_2d4864;
        case 0x2d4878u: goto label_2d4878;
        case 0x2d48c0u: goto label_2d48c0;
        case 0x2d48d4u: goto label_2d48d4;
        case 0x2d48e8u: goto label_2d48e8;
        case 0x2d4940u: goto label_2d4940;
        case 0x2d494cu: goto label_2d494c;
        case 0x2d4970u: goto label_2d4970;
        case 0x2d4990u: goto label_2d4990;
        case 0x2d49e8u: goto label_2d49e8;
        case 0x2d4a0cu: goto label_2d4a0c;
        case 0x2d4a20u: goto label_2d4a20;
        case 0x2d4a40u: goto label_2d4a40;
        case 0x2d4a70u: goto label_2d4a70;
        case 0x2d4aa8u: goto label_2d4aa8;
        case 0x2d4ac4u: goto label_2d4ac4;
        case 0x2d4b00u: goto label_2d4b00;
        case 0x2d4b28u: goto label_2d4b28;
        case 0x2d4b3cu: goto label_2d4b3c;
        case 0x2d4b54u: goto label_2d4b54;
        case 0x2d4b60u: goto label_2d4b60;
        case 0x2d4b80u: goto label_2d4b80;
        case 0x2d4bc0u: goto label_2d4bc0;
        case 0x2d4c30u: goto label_2d4c30;
        default: break;
    }

    ctx->pc = 0x2d3750u;

    // 0x2d3750: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2d3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x2d3754: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2d3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2d3758: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2d3758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2d375c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2d375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2d3760: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2d3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2d3764: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2d3764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2d3768: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d376c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d3770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d3770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d3774: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d3778: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d377c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d377cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d3780: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x2d3780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
    // 0x2d3784: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x2d3784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
    // 0x2d3788: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2d3788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d378c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d3790: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D3790u;
    SET_GPR_U32(ctx, 31, 0x2D3798u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D3790u, 0x2D3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3798u;
label_2d3798:
    // 0x2d3798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d379c: 0x10000520  b           . + 4 + (0x520 << 2)
    ctx->pc = 0x2D379Cu;
    {
        const bool branch_taken_0x2d379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d379c) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D37A4u;
label_2d37a4:
    // 0x2d37a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d37a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D37A8u;
    {
        const bool branch_taken_0x2d37a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d37a8) {
            ctx->pc = 0x2D37C0u;
            goto label_2d37c0;
        }
    }
    ctx->pc = 0x2D37B0u;
    // 0x2d37b0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2d37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d37b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d37b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37b8: 0x10000519  b           . + 4 + (0x519 << 2)
    ctx->pc = 0x2D37B8u;
    {
        const bool branch_taken_0x2d37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d37b8) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D37C0u;
label_2d37c0:
    // 0x2d37c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d37c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d37c4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2d37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d37c8: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2d37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d37cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d37d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D37D0u;
    {
        const bool branch_taken_0x2d37d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d37d0) {
            ctx->pc = 0x2D37E8u;
            goto label_2d37e8;
        }
    }
    ctx->pc = 0x2D37D8u;
    // 0x2d37d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d37dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d37dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37e0: 0x1000050f  b           . + 4 + (0x50F << 2)
    ctx->pc = 0x2D37E0u;
    {
        const bool branch_taken_0x2d37e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d37e0) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D37E8u;
label_2d37e8:
    // 0x2d37e8: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2D37E8u;
    SET_GPR_U32(ctx, 31, 0x2D37F0u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2D37E8u, 0x2D37F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37F0u;
label_2d37f0:
    // 0x2d37f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d37f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37f4: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2D37F4u;
    SET_GPR_U32(ctx, 31, 0x2D37FCu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2D37F4u, 0x2D37FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37FCu;
label_2d37fc:
    // 0x2d37fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3800: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3800u;
    {
        const bool branch_taken_0x2d3800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d3800) {
            ctx->pc = 0x2D3820u;
            goto label_2d3820;
        }
    }
    ctx->pc = 0x2D3808u;
    // 0x2d3808: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d3808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d380c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d380cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3810: 0x0  nop
    ctx->pc = 0x2d3810u;
    // NOP
    // 0x2d3814: 0xe7a10268  swc1        $f1, 0x268($sp)
    ctx->pc = 0x2d3814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2d3818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3818u;
    {
        const bool branch_taken_0x2d3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3818) {
            ctx->pc = 0x2D3830u;
            goto label_2d3830;
        }
    }
    ctx->pc = 0x2D3820u;
label_2d3820:
    // 0x2d3820: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d3820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3828: 0x0  nop
    ctx->pc = 0x2d3828u;
    // NOP
    // 0x2d382c: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2d382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_2d3830:
    // 0x2d3830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d3830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3834: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d3834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3838: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x2d3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d383c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2d383cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3840: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x2d3840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    // 0x2d3844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3848: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2d384c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d384cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3850: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D3850u;
    {
        const bool branch_taken_0x2d3850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3850) {
            ctx->pc = 0x2D38C4u;
            goto label_2d38c4;
        }
    }
    ctx->pc = 0x2D3858u;
    // 0x2d3858: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2d3858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2d385c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2d385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3864: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2d3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d386c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d3870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3874: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2d3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3878: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x2d3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d387c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d387cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3880: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3880u;
    {
        const bool branch_taken_0x2d3880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3880) {
            ctx->pc = 0x2D389Cu;
            goto label_2d389c;
        }
    }
    ctx->pc = 0x2D3888u;
    // 0x2d3888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d388c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3890: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2d3890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2d3894: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D3894u;
    {
        const bool branch_taken_0x2d3894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3894) {
            ctx->pc = 0x2D38CCu;
            goto label_2d38cc;
        }
    }
    ctx->pc = 0x2D389Cu;
label_2d389c:
    // 0x2d389c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d38a0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d38a4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d38a8: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2d38a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2d38ac: 0xc0b60d0  jal         func_2D8340
    ctx->pc = 0x2D38ACu;
    SET_GPR_U32(ctx, 31, 0x2D38B4u);
    ctx->pc = 0x2D8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8340u, 0x2D38ACu, 0x2D38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38B4u;
label_2d38b4:
    // 0x2d38b4: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2d38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d38b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d38b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38bc: 0x100004d8  b           . + 4 + (0x4D8 << 2)
    ctx->pc = 0x2D38BCu;
    {
        const bool branch_taken_0x2d38bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d38bc) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D38C4u;
label_2d38c4:
    // 0x2d38c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d38c8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2d38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_2d38cc:
    // 0x2d38cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d38d0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2d38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d38d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d38d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D38D8u;
    SET_GPR_U32(ctx, 31, 0x2D38E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D38D8u, 0x2D38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38E0u;
label_2d38e0:
    // 0x2d38e0: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2d38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x2d38e4: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x2d38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2d38e8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2d38e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2d38ec: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D38ECu;
    SET_GPR_U32(ctx, 31, 0x2D38F4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D38ECu, 0x2D38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38F4u;
label_2d38f4:
    // 0x2d38f4: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2d38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2d38f8: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x2d38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x2d38fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d38fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3900: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3904: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3908: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2d3908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d390c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d390cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d3910: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d3910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d3914: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x2d3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2d3918: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d3918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d391c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d391cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3920: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2d3920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d3924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d3928: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D3928u;
    SET_GPR_U32(ctx, 31, 0x2D3930u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D3928u, 0x2D3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3930u;
label_2d3930:
    // 0x2d3930: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d3930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d3934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3938: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D3938u;
    SET_GPR_U32(ctx, 31, 0x2D3940u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D3938u, 0x2D3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3940u;
label_2d3940:
    // 0x2d3940: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3944: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3944u;
    {
        const bool branch_taken_0x2d3944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3944) {
            ctx->pc = 0x2D396Cu;
            goto label_2d396c;
        }
    }
    ctx->pc = 0x2D394Cu;
    // 0x2d394c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3950: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D3950u;
    SET_GPR_U32(ctx, 31, 0x2D3958u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D3950u, 0x2D3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3958u;
label_2d3958:
    // 0x2d3958: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d395c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3960: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2d3960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d3964: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3964u;
    {
        const bool branch_taken_0x2d3964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3964) {
            ctx->pc = 0x2D397Cu;
            goto label_2d397c;
        }
    }
    ctx->pc = 0x2D396Cu;
label_2d396c:
    // 0x2d396c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2d396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3974: 0x100004aa  b           . + 4 + (0x4AA << 2)
    ctx->pc = 0x2D3974u;
    {
        const bool branch_taken_0x2d3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3974) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D397Cu;
label_2d397c:
    // 0x2d397c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d397cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3980: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2d3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3984: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x2d3984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x2d3988: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x2d3988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x2d398c: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x2d398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
    // 0x2d3990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3994: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2d3994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2d3998: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d399c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D399Cu;
    SET_GPR_U32(ctx, 31, 0x2D39A4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D399Cu, 0x2D39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39A4u;
label_2d39a4:
    // 0x2d39a4: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x2d39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2d39a8: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x2d39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x2d39ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d39b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39b8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d39b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d39bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d39bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d39c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d39c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d39c4: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2d39c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2d39c8: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2D39C8u;
    SET_GPR_U32(ctx, 31, 0x2D39D0u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2D39C8u, 0x2D39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39D0u;
label_2d39d0:
    // 0x2d39d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d39d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39d4: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2D39D4u;
    {
        const bool branch_taken_0x2d39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39d4) {
            ctx->pc = 0x2D40C0u;
            goto label_2d40c0;
        }
    }
    ctx->pc = 0x2D39DCu;
label_2d39dc:
    // 0x2d39dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d39e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D39E0u;
    {
        const bool branch_taken_0x2d39e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d39e0) {
            ctx->pc = 0x2D39F0u;
            goto label_2d39f0;
        }
    }
    ctx->pc = 0x2D39E8u;
    // 0x2d39e8: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2D39E8u;
    {
        const bool branch_taken_0x2d39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39e8) {
            ctx->pc = 0x2D40D4u;
            goto label_2d40d4;
        }
    }
    ctx->pc = 0x2D39F0u;
label_2d39f0:
    // 0x2d39f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d39f4: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2d39f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d39f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d39fc: 0x8c57002c  lw          $s7, 0x2C($v0)
    ctx->pc = 0x2d39fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d3a00: 0x10d701ae  beq         $a2, $s7, . + 4 + (0x1AE << 2)
    ctx->pc = 0x2D3A00u;
    {
        const bool branch_taken_0x2d3a00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 23));
        if (branch_taken_0x2d3a00) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D3A08u;
    // 0x2d3a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3a0c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d3a10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d3a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d3a14: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D3A14u;
    SET_GPR_U32(ctx, 31, 0x2D3A1Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D3A14u, 0x2D3A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A1Cu;
label_2d3a1c:
    // 0x2d3a1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d3a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a20: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2d3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2d3a24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a28: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D3A28u;
    SET_GPR_U32(ctx, 31, 0x2D3A30u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D3A28u, 0x2D3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A30u;
label_2d3a30:
    // 0x2d3a30: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2d3a34: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x2d3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2d3a38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3a3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a44: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2d3a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d3a48: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d3a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d3a4c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d3a50: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x2d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a54: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2d3a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d3a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3a5c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2d3a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2d3a60: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x2d3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a64: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2d3a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d3a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3a6c: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2d3a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2d3a70: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2d3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a74: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2d3a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d3a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3a7c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2d3a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2d3a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3a84: 0x0  nop
    ctx->pc = 0x2d3a84u;
    // NOP
    // 0x2d3a88: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2d3a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2d3a8c: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x2d3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x2d3a90: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D3A90u;
    SET_GPR_U32(ctx, 31, 0x2D3A98u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D3A90u, 0x2D3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A98u;
label_2d3a98:
    // 0x2d3a98: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x2d3a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2d3a9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3aa0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d3aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d3aa4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d3aa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D3AA8u;
    SET_GPR_U32(ctx, 31, 0x2D3AB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D3AA8u, 0x2D3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AB0u;
label_2d3ab0:
    // 0x2d3ab0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d3ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ab8: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D3AB8u;
    SET_GPR_U32(ctx, 31, 0x2D3AC0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D3AB8u, 0x2D3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AC0u;
label_2d3ac0:
    // 0x2d3ac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d3ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ac4: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x2d3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
    // 0x2d3ac8: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2d3acc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3ACCu;
    {
        const bool branch_taken_0x2d3acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3acc) {
            ctx->pc = 0x2D3AE4u;
            goto label_2d3ae4;
        }
    }
    ctx->pc = 0x2D3AD4u;
    // 0x2d3ad4: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2d3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2d3ad8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d3ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3adc: 0x14850177  bne         $a0, $a1, . + 4 + (0x177 << 2)
    ctx->pc = 0x2D3ADCu;
    {
        const bool branch_taken_0x2d3adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d3adc) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D3AE4u;
label_2d3ae4:
    // 0x2d3ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ae8: 0xc096e38  jal         func_25B8E0
    ctx->pc = 0x2D3AE8u;
    SET_GPR_U32(ctx, 31, 0x2D3AF0u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x2D3AE8u, 0x2D3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AF0u;
label_2d3af0:
    // 0x2d3af0: 0x14400172  bnez        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2D3AF0u;
    {
        const bool branch_taken_0x2d3af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3af0) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D3AF8u;
    // 0x2d3af8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3afc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2d3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d3b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3b04: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d3b08: 0x10640105  beq         $v1, $a0, . + 4 + (0x105 << 2)
    ctx->pc = 0x2D3B08u;
    {
        const bool branch_taken_0x2d3b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d3b08) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3B10u;
    // 0x2d3b10: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2d3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b14: 0xc7a0025c  lwc1        $f0, 0x25C($sp)
    ctx->pc = 0x2d3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3b1c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2D3B1Cu;
    {
        const bool branch_taken_0x2d3b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3b1c) {
            ctx->pc = 0x2D3B5Cu;
            goto label_2d3b5c;
        }
    }
    ctx->pc = 0x2D3B24u;
    // 0x2d3b24: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x2d3b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b28: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x2d3b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x2d3b2c: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x2d3b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x2d3b30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d3b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b34: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x2d3b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x2d3b38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d3b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b3c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B44u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D3B3Cu, 0x2D3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B44u;
label_2d3b44:
    // 0x2d3b44: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x2d3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x2d3b48: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x2d3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2d3b4c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D3B4Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B54u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D3B4Cu, 0x2D3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B54u;
label_2d3b54:
    // 0x2d3b54: 0xafb20258  sw          $s2, 0x258($sp)
    ctx->pc = 0x2d3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 18));
    // 0x2d3b58: 0xafb60254  sw          $s6, 0x254($sp)
    ctx->pc = 0x2d3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 22));
label_2d3b5c:
    // 0x2d3b5c: 0xa3a0026f  sb          $zero, 0x26F($sp)
    ctx->pc = 0x2d3b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3b60: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3b64: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2d3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2d3b68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d3b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b70: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3B70u;
    SET_GPR_U32(ctx, 31, 0x2D3B78u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3B70u, 0x2D3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B78u;
label_2d3b78:
    // 0x2d3b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3b7c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d3b80: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D3B80u;
    SET_GPR_U32(ctx, 31, 0x2D3B88u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D3B80u, 0x2D3B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B88u;
label_2d3b88:
    // 0x2d3b88: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x2d3b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d3b8c: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D3B8Cu;
    {
        const bool branch_taken_0x2d3b8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b8c) {
            ctx->pc = 0x2D3CD4u;
            goto label_2d3cd4;
        }
    }
    ctx->pc = 0x2D3B94u;
    // 0x2d3b94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3b98: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2d3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d3b9c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d3ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ba4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3BA4u;
    SET_GPR_U32(ctx, 31, 0x2D3BACu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3BA4u, 0x2D3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BACu;
label_2d3bac:
    // 0x2d3bac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3bb0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d3bb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3bb8: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2D3BB8u;
    SET_GPR_U32(ctx, 31, 0x2D3BC0u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2D3BB8u, 0x2D3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BC0u;
label_2d3bc0:
    // 0x2d3bc0: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x2d3bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x2d3bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d3bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bc8: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x2d3bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2d3bcc: 0xc0b5b24  jal         func_2D6C90
    ctx->pc = 0x2D3BCCu;
    SET_GPR_U32(ctx, 31, 0x2D3BD4u);
    ctx->pc = 0x2D6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C90u, 0x2D3BCCu, 0x2D3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BD4u;
label_2d3bd4:
    // 0x2d3bd4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d3bd8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d3bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d3bdc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2d3bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d3be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d3be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3be4: 0x0  nop
    ctx->pc = 0x2d3be4u;
    // NOP
    // 0x2d3be8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3bec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3BECu;
    {
        const bool branch_taken_0x2d3bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3bec) {
            ctx->pc = 0x2D3C04u;
            goto label_2d3c04;
        }
    }
    ctx->pc = 0x2D3BF4u;
    // 0x2d3bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3bf8: 0xa3a2026f  sb          $v0, 0x26F($sp)
    ctx->pc = 0x2d3bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d3bfc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D3BFCu;
    {
        const bool branch_taken_0x2d3bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3bfc) {
            ctx->pc = 0x2D3CD4u;
            goto label_2d3cd4;
        }
    }
    ctx->pc = 0x2D3C04u;
label_2d3c04:
    // 0x2d3c04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3c08: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d3c0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d3c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c14: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3C14u;
    SET_GPR_U32(ctx, 31, 0x2D3C1Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3C14u, 0x2D3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C1Cu;
label_2d3c1c:
    // 0x2d3c1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c20: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2d3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d3c24: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2d3c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2d3c28: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2d3c28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d3c2c: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D3C2Cu;
    SET_GPR_U32(ctx, 31, 0x2D3C34u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D3C2Cu, 0x2D3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C34u;
label_2d3c34:
    // 0x2d3c34: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x2d3c34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d3c38: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D3C38u;
    {
        const bool branch_taken_0x2d3c38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c38) {
            ctx->pc = 0x2D3CD4u;
            goto label_2d3cd4;
        }
    }
    ctx->pc = 0x2D3C40u;
    // 0x2d3c40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3c44: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d3c48: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x2d3c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d3c4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d3c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c54: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3C54u;
    SET_GPR_U32(ctx, 31, 0x2D3C5Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3C54u, 0x2D3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C5Cu;
label_2d3c5c:
    // 0x2d3c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c60: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d3c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d3c64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3c68: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2D3C68u;
    SET_GPR_U32(ctx, 31, 0x2D3C70u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2D3C68u, 0x2D3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C70u;
label_2d3c70:
    // 0x2d3c70: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2d3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2d3c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3c78: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d3c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d3c7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d3c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c84: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D3C84u;
    SET_GPR_U32(ctx, 31, 0x2D3C8Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D3C84u, 0x2D3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C8Cu;
label_2d3c8c:
    // 0x2d3c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c90: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d3c94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d3c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3c98: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2D3C98u;
    SET_GPR_U32(ctx, 31, 0x2D3CA0u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2D3C98u, 0x2D3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CA0u;
label_2d3ca0:
    // 0x2d3ca0: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2d3ca0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d3ca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d3ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca8: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x2d3ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2d3cac: 0xc0b5b24  jal         func_2D6C90
    ctx->pc = 0x2D3CACu;
    SET_GPR_U32(ctx, 31, 0x2D3CB4u);
    ctx->pc = 0x2D6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C90u, 0x2D3CACu, 0x2D3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CB4u;
label_2d3cb4:
    // 0x2d3cb4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d3cb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d3cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3cbc: 0x0  nop
    ctx->pc = 0x2d3cbcu;
    // NOP
    // 0x2d3cc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3cc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3CC4u;
    {
        const bool branch_taken_0x2d3cc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3cc4) {
            ctx->pc = 0x2D3CD4u;
            goto label_2d3cd4;
        }
    }
    ctx->pc = 0x2D3CCCu;
    // 0x2d3ccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3cd0: 0xa3a4026f  sb          $a0, 0x26F($sp)
    ctx->pc = 0x2d3cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 4));
label_2d3cd4:
    // 0x2d3cd4: 0x93a2026f  lbu         $v0, 0x26F($sp)
    ctx->pc = 0x2d3cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 623)));
    // 0x2d3cd8: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2D3CD8u;
    {
        const bool branch_taken_0x2d3cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3cd8) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3CE0u;
    // 0x2d3ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ce4: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x2D3CE4u;
    SET_GPR_U32(ctx, 31, 0x2D3CECu);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2D3CE4u, 0x2D3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CECu;
label_2d3cec:
    // 0x2d3cec: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D3CECu;
    {
        const bool branch_taken_0x2d3cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3cec) {
            ctx->pc = 0x2D3E50u;
            goto label_2d3e50;
        }
    }
    ctx->pc = 0x2D3CF4u;
    // 0x2d3cf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d3cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cf8: 0xc091008  jal         func_244020
    ctx->pc = 0x2D3CF8u;
    SET_GPR_U32(ctx, 31, 0x2D3D00u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D3CF8u, 0x2D3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D00u;
label_2d3d00:
    // 0x2d3d00: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2d3d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2d3d04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d08: 0xc091008  jal         func_244020
    ctx->pc = 0x2D3D08u;
    SET_GPR_U32(ctx, 31, 0x2D3D10u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D3D08u, 0x2D3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D10u;
label_2d3d10:
    // 0x2d3d10: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2d3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x2d3d14: 0xc7a10244  lwc1        $f1, 0x244($sp)
    ctx->pc = 0x2d3d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d18: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2d3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3d1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d3d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3d20: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2d3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2d3d24: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d2c: 0x0  nop
    ctx->pc = 0x2d3d2cu;
    // NOP
    // 0x2d3d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3d34: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3D34u;
    {
        const bool branch_taken_0x2d3d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3d34) {
            ctx->pc = 0x2D3D7Cu;
            goto label_2d3d7c;
        }
    }
    ctx->pc = 0x2D3D3Cu;
    // 0x2d3d3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3D3Cu;
    {
        const bool branch_taken_0x2d3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d3c) {
            ctx->pc = 0x2D3D5Cu;
            goto label_2d3d5c;
        }
    }
    ctx->pc = 0x2D3D44u;
label_2d3d44:
    // 0x2d3d44: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d48: 0x3c0543b4  lui         $a1, 0x43B4
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
    // 0x2d3d4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d3d4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d50: 0x0  nop
    ctx->pc = 0x2d3d50u;
    // NOP
    // 0x2d3d54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d3d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3d58: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2d3d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2d3d5c:
    // 0x2d3d5c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d64: 0x0  nop
    ctx->pc = 0x2d3d64u;
    // NOP
    // 0x2d3d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3d6c: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
    ctx->pc = 0x2D3D6Cu;
    {
        const bool branch_taken_0x2d3d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3d6c) {
            ctx->pc = 0x2D3D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3d44;
        }
    }
    ctx->pc = 0x2D3D74u;
    // 0x2d3d74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D3D74u;
    {
        const bool branch_taken_0x2d3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d74) {
            ctx->pc = 0x2D3DD4u;
            goto label_2d3dd4;
        }
    }
    ctx->pc = 0x2D3D7Cu;
label_2d3d7c:
    // 0x2d3d7c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d80: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2d3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2d3d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d88: 0x0  nop
    ctx->pc = 0x2d3d88u;
    // NOP
    // 0x2d3d8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d3d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3d90: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3D90u;
    {
        const bool branch_taken_0x2d3d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3d90) {
            ctx->pc = 0x2D3DD4u;
            goto label_2d3dd4;
        }
    }
    ctx->pc = 0x2D3D98u;
    // 0x2d3d98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3D98u;
    {
        const bool branch_taken_0x2d3d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d98) {
            ctx->pc = 0x2D3DB8u;
            goto label_2d3db8;
        }
    }
    ctx->pc = 0x2D3DA0u;
label_2d3da0:
    // 0x2d3da0: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3da4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2d3da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3dac: 0x0  nop
    ctx->pc = 0x2d3dacu;
    // NOP
    // 0x2d3db0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d3db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3db4: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2d3db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2d3db8:
    // 0x2d3db8: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3dbc: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2d3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2d3dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3dc4: 0x0  nop
    ctx->pc = 0x2d3dc4u;
    // NOP
    // 0x2d3dc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d3dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3dcc: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x2D3DCCu;
    {
        const bool branch_taken_0x2d3dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3dcc) {
            ctx->pc = 0x2D3DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3da0;
        }
    }
    ctx->pc = 0x2D3DD4u;
label_2d3dd4:
    // 0x2d3dd4: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3dd8: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x2d3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
    // 0x2d3ddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d3ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3de0: 0x0  nop
    ctx->pc = 0x2d3de0u;
    // NOP
    // 0x2d3de4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d3de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3de8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2D3DE8u;
    {
        const bool branch_taken_0x2d3de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3de8) {
            ctx->pc = 0x2D3E3Cu;
            goto label_2d3e3c;
        }
    }
    ctx->pc = 0x2D3DF0u;
    // 0x2d3df0: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2d3df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3df4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2d3df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3dfc: 0x0  nop
    ctx->pc = 0x2d3dfcu;
    // NOP
    // 0x2d3e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3e04: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D3E04u;
    {
        const bool branch_taken_0x2d3e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3e04) {
            ctx->pc = 0x2D3E3Cu;
            goto label_2d3e3c;
        }
    }
    ctx->pc = 0x2D3E0Cu;
    // 0x2d3e0c: 0x292082b  sltu        $at, $s4, $s2
    ctx->pc = 0x2d3e0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d3e10: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3E10u;
    {
        const bool branch_taken_0x2d3e10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e10) {
            ctx->pc = 0x2D3E2Cu;
            goto label_2d3e2c;
        }
    }
    ctx->pc = 0x2D3E18u;
    // 0x2d3e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3e1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3e20: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2d3e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2d3e24: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2D3E24u;
    {
        const bool branch_taken_0x2d3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e24) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3E2Cu;
label_2d3e2c:
    // 0x2d3e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3e30: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2d3e30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d3e34: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D3E34u;
    {
        const bool branch_taken_0x2d3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e34) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3E3Cu;
label_2d3e3c:
    // 0x2d3e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3e40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3e44: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x2d3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x2d3e48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D3E48u;
    {
        const bool branch_taken_0x2d3e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e48) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3E50u;
label_2d3e50:
    // 0x2d3e50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3e54: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d3e58: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2d3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x2d3e5c: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2d3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2d3e60: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D3E60u;
    {
        const bool branch_taken_0x2d3e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e60) {
            ctx->pc = 0x2D3F18u;
            goto label_2d3f18;
        }
    }
    ctx->pc = 0x2D3E68u;
    // 0x2d3e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e6c: 0xc0969d4  jal         func_25A750
    ctx->pc = 0x2D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E74u);
    ctx->pc = 0x25A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A750u, 0x2D3E6Cu, 0x2D3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E74u;
label_2d3e74:
    // 0x2d3e74: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D3E74u;
    {
        const bool branch_taken_0x2d3e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e74) {
            ctx->pc = 0x2D3F18u;
            goto label_2d3f18;
        }
    }
    ctx->pc = 0x2D3E7Cu;
    // 0x2d3e7c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d3e80: 0x8fa5023c  lw          $a1, 0x23C($sp)
    ctx->pc = 0x2d3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2d3e84: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D3E84u;
    SET_GPR_U32(ctx, 31, 0x2D3E8Cu);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D3E84u, 0x2D3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E8Cu;
label_2d3e8c:
    // 0x2d3e8c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3E8Cu;
    {
        const bool branch_taken_0x2d3e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e8c) {
            ctx->pc = 0x2D3F18u;
            goto label_2d3f18;
        }
    }
    ctx->pc = 0x2D3E94u;
    // 0x2d3e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e98: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2D3E98u;
    SET_GPR_U32(ctx, 31, 0x2D3EA0u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2D3E98u, 0x2D3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EA0u;
label_2d3ea0:
    // 0x2d3ea0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D3EA0u;
    {
        const bool branch_taken_0x2d3ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ea0) {
            ctx->pc = 0x2D3F18u;
            goto label_2d3f18;
        }
    }
    ctx->pc = 0x2D3EA8u;
    // 0x2d3ea8: 0x27a501e8  addiu       $a1, $sp, 0x1E8
    ctx->pc = 0x2d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x2d3eac: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x2d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2d3eb0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d3eb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d3eb4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d3eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3eb8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2d3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2d3ebc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d3ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d3ec0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d3ec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d3ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3ec8: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x2d3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2d3ecc: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x2d3eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2d3ed0: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x2d3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2d3ed4: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x2d3ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2d3ed8: 0xc0b5e3c  jal         func_2D78F0
    ctx->pc = 0x2D3ED8u;
    SET_GPR_U32(ctx, 31, 0x2D3EE0u);
    ctx->pc = 0x2D78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78F0u, 0x2D3ED8u, 0x2D3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EE0u;
label_2d3ee0:
    // 0x2d3ee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3EE0u;
    {
        const bool branch_taken_0x2d3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ee0) {
            ctx->pc = 0x2D3F08u;
            goto label_2d3f08;
        }
    }
    ctx->pc = 0x2D3EE8u;
    // 0x2d3ee8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d3eec: 0x8fa5023c  lw          $a1, 0x23C($sp)
    ctx->pc = 0x2d3eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2d3ef0: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2d3ef4: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x2d3ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d3ef8: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D3EF8u;
    SET_GPR_U32(ctx, 31, 0x2D3F00u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D3EF8u, 0x2D3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F00u;
label_2d3f00:
    // 0x2d3f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3F00u;
    {
        const bool branch_taken_0x2d3f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f00) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3F08u;
label_2d3f08:
    // 0x2d3f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f0c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2d3f0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d3f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F10u;
    {
        const bool branch_taken_0x2d3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f10) {
            ctx->pc = 0x2D3F20u;
            goto label_2d3f20;
        }
    }
    ctx->pc = 0x2D3F18u;
label_2d3f18:
    // 0x2d3f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f1c: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x2d3f1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2d3f20:
    // 0x2d3f20: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2d3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3f24: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d3f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3f2c: 0x0  nop
    ctx->pc = 0x2d3f2cu;
    // NOP
    // 0x2d3f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3f34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3F34u;
    {
        const bool branch_taken_0x2d3f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3f34) {
            ctx->pc = 0x2D3F54u;
            goto label_2d3f54;
        }
    }
    ctx->pc = 0x2D3F3Cu;
    // 0x2d3f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f40: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3f44: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2d3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2d3f48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d3f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f4c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2D3F4Cu;
    {
        const bool branch_taken_0x2d3f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f4c) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D3F54u;
label_2d3f54:
    // 0x2d3f54: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2d3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3f58: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x2d3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
    // 0x2d3f5c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2d3f5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3f60: 0x0  nop
    ctx->pc = 0x2d3f60u;
    // NOP
    // 0x2d3f64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3f68: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x2D3F68u;
    {
        const bool branch_taken_0x2d3f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3f68) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D3F70u;
    // 0x2d3f70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f74: 0xc091008  jal         func_244020
    ctx->pc = 0x2D3F74u;
    SET_GPR_U32(ctx, 31, 0x2D3F7Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D3F74u, 0x2D3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F7Cu;
label_2d3f7c:
    // 0x2d3f7c: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2d3f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2d3f80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d3f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f84: 0xc091008  jal         func_244020
    ctx->pc = 0x2D3F84u;
    SET_GPR_U32(ctx, 31, 0x2D3F8Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D3F84u, 0x2D3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F8Cu;
label_2d3f8c:
    // 0x2d3f8c: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2d3f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2d3f90: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x2d3f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3f94: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2d3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d3f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d3f9c: 0x3c074334  lui         $a3, 0x4334
    ctx->pc = 0x2d3f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17204 << 16));
    // 0x2d3fa0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2d3fa0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3fa4: 0x0  nop
    ctx->pc = 0x2d3fa4u;
    // NOP
    // 0x2d3fa8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d3fa8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d3fac: 0xc78081f8  lwc1        $f0, -0x7E08($gp)
    ctx->pc = 0x2d3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3fb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3fb4: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2d3fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2d3fb8: 0xc7ac0238  lwc1        $f12, 0x238($sp)
    ctx->pc = 0x2d3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3fbc: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D3FBCu;
    SET_GPR_U32(ctx, 31, 0x2D3FC4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D3FBCu, 0x2D3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FC4u;
label_2d3fc4:
    // 0x2d3fc4: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2d3fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2d3fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3fcc: 0x0  nop
    ctx->pc = 0x2d3fccu;
    // NOP
    // 0x2d3fd0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2d3fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x2d3fd4: 0xc7ac0238  lwc1        $f12, 0x238($sp)
    ctx->pc = 0x2d3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3fd8: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D3FD8u;
    SET_GPR_U32(ctx, 31, 0x2D3FE0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D3FD8u, 0x2D3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FE0u;
label_2d3fe0:
    // 0x2d3fe0: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2d3fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2d3fe4: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x2d3fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3fe8: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x2d3fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3fec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d3fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d3ff0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2d3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2d3ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3ff8: 0x0  nop
    ctx->pc = 0x2d3ff8u;
    // NOP
    // 0x2d3ffc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d3ffcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d4000: 0xc78081f8  lwc1        $f0, -0x7E08($gp)
    ctx->pc = 0x2d4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d4004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d4008: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2d4008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2d400c: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x2d400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4010: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D4010u;
    SET_GPR_U32(ctx, 31, 0x2D4018u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D4010u, 0x2D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4018u;
label_2d4018:
    // 0x2d4018: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2d4018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2d401c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d401cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4020: 0x0  nop
    ctx->pc = 0x2d4020u;
    // NOP
    // 0x2d4024: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x2d4024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x2d4028: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x2d4028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d402c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D402Cu;
    SET_GPR_U32(ctx, 31, 0x2D4034u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D402Cu, 0x2D4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4034u;
label_2d4034:
    // 0x2d4034: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2d4034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2d4038: 0xc7a501b0  lwc1        $f5, 0x1B0($sp)
    ctx->pc = 0x2d4038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d403c: 0xc7a401d0  lwc1        $f4, 0x1D0($sp)
    ctx->pc = 0x2d403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d4040: 0xc7a301a8  lwc1        $f3, 0x1A8($sp)
    ctx->pc = 0x2d4040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4044: 0xc7a201c8  lwc1        $f2, 0x1C8($sp)
    ctx->pc = 0x2d4044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4048: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x2d4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d404c: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2d404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d4050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4058: 0x0  nop
    ctx->pc = 0x2d4058u;
    // NOP
    // 0x2d405c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d405cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d4060: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d4060u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d4064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4068: 0x0  nop
    ctx->pc = 0x2d4068u;
    // NOP
    // 0x2d406c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d406cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d4070: 0x4604289c  madd.s      $f2, $f5, $f4
    ctx->pc = 0x2d4070u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d4074: 0xc7818264  lwc1        $f1, -0x7D9C($gp)
    ctx->pc = 0x2d4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4078: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x2d4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d407c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d407cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4080: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d4080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4084: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D4084u;
    {
        const bool branch_taken_0x2d4084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4084) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D408Cu;
    // 0x2d408c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4090: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x2D4090u;
    SET_GPR_U32(ctx, 31, 0x2D4098u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2D4090u, 0x2D4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4098u;
label_2d4098:
    // 0x2d4098: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4098u;
    {
        const bool branch_taken_0x2d4098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4098) {
            ctx->pc = 0x2D40B0u;
            goto label_2d40b0;
        }
    }
    ctx->pc = 0x2D40A0u;
    // 0x2d40a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d40a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d40a4: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x2d40a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d40a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D40A8u;
    {
        const bool branch_taken_0x2d40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40a8) {
            ctx->pc = 0x2D40BCu;
            goto label_2d40bc;
        }
    }
    ctx->pc = 0x2D40B0u;
label_2d40b0:
    // 0x2d40b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d40b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d40b4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2d40b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d40b8: 0xad07002c  sw          $a3, 0x2C($t0)
    ctx->pc = 0x2d40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 7));
label_2d40bc:
    // 0x2d40bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d40bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d40c0:
    // 0x2d40c0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2d40c4: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2D40C4u;
    SET_GPR_U32(ctx, 31, 0x2D40CCu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2D40C4u, 0x2D40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40CCu;
label_2d40cc:
    // 0x2d40cc: 0x1622fe43  bne         $s1, $v0, . + 4 + (-0x1BD << 2)
    ctx->pc = 0x2D40CCu;
    {
        const bool branch_taken_0x2d40cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d40cc) {
            ctx->pc = 0x2D39DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d39dc;
        }
    }
    ctx->pc = 0x2D40D4u;
label_2d40d4:
    // 0x2d40d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d40d8: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d40dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d40e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40e4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D40E4u;
    SET_GPR_U32(ctx, 31, 0x2D40ECu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D40E4u, 0x2D40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40ECu;
label_2d40ec:
    // 0x2d40ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d40f0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2d40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d40f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40f8: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D40F8u;
    SET_GPR_U32(ctx, 31, 0x2D4100u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D40F8u, 0x2D4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4100u;
label_2d4100:
    // 0x2d4100: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d4100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4104: 0x126001f8  beqz        $s3, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x2D4104u;
    {
        const bool branch_taken_0x2d4104 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4104) {
            ctx->pc = 0x2D48E8u;
            goto label_2d48e8;
        }
    }
    ctx->pc = 0x2D410Cu;
    // 0x2d410c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4110: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2d4110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2d4114: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x2d4114u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d4118: 0x38a70001  xori        $a3, $a1, 0x1
    ctx->pc = 0x2d4118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2d411c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2d411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2d4120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4124: 0x144301f0  bne         $v0, $v1, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x2D4124u;
    {
        const bool branch_taken_0x2d4124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4124) {
            ctx->pc = 0x2D48E8u;
            goto label_2d48e8;
        }
    }
    ctx->pc = 0x2D412Cu;
    // 0x2d412c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4130: 0x16e200c4  bne         $s7, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2D4130u;
    {
        const bool branch_taken_0x2d4130 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4130) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D4138u;
    // 0x2d4138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d413c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d4140: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4148: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4148u;
    SET_GPR_U32(ctx, 31, 0x2D4150u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4148u, 0x2D4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4150u;
label_2d4150:
    // 0x2d4150: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4154: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d4158: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4158u;
    SET_GPR_U32(ctx, 31, 0x2D4160u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4158u, 0x2D4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4160u;
label_2d4160:
    // 0x2d4160: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x2d4160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d4164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4168: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2d4168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d416c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4174: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4174u;
    SET_GPR_U32(ctx, 31, 0x2D417Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4174u, 0x2D417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D417Cu;
label_2d417c:
    // 0x2d417c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4180: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2d4180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4184: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4188: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4188u;
    SET_GPR_U32(ctx, 31, 0x2D4190u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4188u, 0x2D4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4190u;
label_2d4190:
    // 0x2d4190: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2d4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4194: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2d4194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d4198: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2d4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2d419c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d41a0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2d41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d41a4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2d41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d41a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d41a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d41acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b0: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D41B0u;
    SET_GPR_U32(ctx, 31, 0x2D41B8u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D41B0u, 0x2D41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41B8u;
label_2d41b8:
    // 0x2d41b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2d41b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d41bc: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x2d41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2d41c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c4: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D41C4u;
    SET_GPR_U32(ctx, 31, 0x2D41CCu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D41C4u, 0x2D41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41CCu;
label_2d41cc:
    // 0x2d41cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d41ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41d0: 0xc494001c  lwc1        $f20, 0x1C($a0)
    ctx->pc = 0x2d41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d41d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d41d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d41d8: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2d41d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d41dc: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2d41dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d41e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d41e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41e8: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D41E8u;
    SET_GPR_U32(ctx, 31, 0x2D41F0u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D41E8u, 0x2D41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41F0u;
label_2d41f0:
    // 0x2d41f0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2d41f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d41f4: 0x25240004  addiu       $a0, $t1, 0x4
    ctx->pc = 0x2d41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2d41f8: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D41F8u;
    SET_GPR_U32(ctx, 31, 0x2D4200u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D41F8u, 0x2D4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4200u;
label_2d4200:
    // 0x2d4200: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2d4200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4204: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2d4204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d4208: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x2d4208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2d420c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4210: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d4214: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2d4214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d4218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d421c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4220: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4220u;
    SET_GPR_U32(ctx, 31, 0x2D4228u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4220u, 0x2D4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4228u;
label_2d4228:
    // 0x2d4228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d422c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4230: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4230u;
    SET_GPR_U32(ctx, 31, 0x2D4238u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4230u, 0x2D4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4238u;
label_2d4238:
    // 0x2d4238: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x2d4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d423c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4240: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d4244: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d4244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d4248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d424c: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D424Cu;
    SET_GPR_U32(ctx, 31, 0x2D4254u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D424Cu, 0x2D4254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4254u;
label_2d4254:
    // 0x2d4254: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4258: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d425c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D425Cu;
    SET_GPR_U32(ctx, 31, 0x2D4264u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D425Cu, 0x2D4264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4264u;
label_2d4264:
    // 0x2d4264: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x2d4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4268: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2d4268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d426c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2d426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2d4270: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d4270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d4274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d4274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4278: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2d4278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d427c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d427cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4280: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2d4280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2d4284: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d4288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d4288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d428c: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x2d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d4290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4294: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x2d4294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2d4298: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d4298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d429c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d429cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d42a0: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2d42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d42a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d42a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d42a8: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2d42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2d42ac: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x2d42acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2d42b0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D42B0u;
    SET_GPR_U32(ctx, 31, 0x2D42B8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D42B0u, 0x2D42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42B8u;
label_2d42b8:
    // 0x2d42b8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2d42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2d42bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d42bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d42c0: 0x0  nop
    ctx->pc = 0x2d42c0u;
    // NOP
    // 0x2d42c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d42c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42c8: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x2D42C8u;
    {
        const bool branch_taken_0x2d42c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d42c8) {
            ctx->pc = 0x2D4438u;
            goto label_2d4438;
        }
    }
    ctx->pc = 0x2D42D0u;
    // 0x2d42d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d42d4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d42d8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d42dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d42dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42e0: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D42E0u;
    SET_GPR_U32(ctx, 31, 0x2D42E8u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D42E0u, 0x2D42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42E8u;
label_2d42e8:
    // 0x2d42e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d42ec: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2d42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d42f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d42f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42f4: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D42F4u;
    SET_GPR_U32(ctx, 31, 0x2D42FCu);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D42F4u, 0x2D42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42FCu;
label_2d42fc:
    // 0x2d42fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d42fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4300: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2d4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4304: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x2d4304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4308: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d4308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d430c: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x2d430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2d4310: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4314: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2d4314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d4318: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2d4318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d431c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4324: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4324u;
    SET_GPR_U32(ctx, 31, 0x2D432Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4324u, 0x2D432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D432Cu;
label_2d432c:
    // 0x2d432c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4330: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4334: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D4334u;
    SET_GPR_U32(ctx, 31, 0x2D433Cu);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D4334u, 0x2D433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D433Cu;
label_2d433c:
    // 0x2d433c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4340: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2d4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4344: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x2d4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4348: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d4348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d434c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2d434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2d4350: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4354: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2d4354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d4358: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d435c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d435cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4360: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4360u;
    SET_GPR_U32(ctx, 31, 0x2D4368u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4360u, 0x2D4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4368u;
label_2d4368:
    // 0x2d4368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d436c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4370: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4374: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D4374u;
    SET_GPR_U32(ctx, 31, 0x2D437Cu);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D4374u, 0x2D437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D437Cu;
label_2d437c:
    // 0x2d437c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4380: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2d4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4384: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d4384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d4388: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2d4388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2d438c: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x2d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2d4390: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D4390u;
    SET_GPR_U32(ctx, 31, 0x2D4398u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D4390u, 0x2D4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4398u;
label_2d4398:
    // 0x2d4398: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x2d4398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x2d439c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d439cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d43a0: 0x0  nop
    ctx->pc = 0x2d43a0u;
    // NOP
    // 0x2d43a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d43a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d43a8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2D43A8u;
    {
        const bool branch_taken_0x2d43a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d43a8) {
            ctx->pc = 0x2D4424u;
            goto label_2d4424;
        }
    }
    ctx->pc = 0x2D43B0u;
    // 0x2d43b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d43b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d43b4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2d43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d43b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d43bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d43bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d43c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43c4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D43C4u;
    SET_GPR_U32(ctx, 31, 0x2D43CCu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D43C4u, 0x2D43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43CCu;
label_2d43cc:
    // 0x2d43cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d43ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d43d4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2d43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2d43d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d43dc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d43e0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d43e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d43e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d43e8: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D43E8u;
    SET_GPR_U32(ctx, 31, 0x2D43F0u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D43E8u, 0x2D43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43F0u;
label_2d43f0:
    // 0x2d43f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d43f4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d43f8: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D43F8u;
    SET_GPR_U32(ctx, 31, 0x2D4400u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D43F8u, 0x2D4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4400u;
label_2d4400:
    // 0x2d4400: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2d4400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d4404: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d4404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d4408: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x2d4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d440c: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2d4410: 0xc0b531c  jal         func_2D4C70
    ctx->pc = 0x2D4410u;
    SET_GPR_U32(ctx, 31, 0x2D4418u);
    ctx->pc = 0x2D4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C70u, 0x2D4410u, 0x2D4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4418u;
label_2d4418:
    // 0x2d4418: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2d441c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D441Cu;
    {
        const bool branch_taken_0x2d441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d441c) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D4424u;
label_2d4424:
    // 0x2d4424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d442c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2d442cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2d4430: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4430u;
    {
        const bool branch_taken_0x2d4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4430) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D4438u;
label_2d4438:
    // 0x2d4438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d443c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4440: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x2d4440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
label_2d4444:
    // 0x2d4444: 0x2ee10005  sltiu       $at, $s7, 0x5
    ctx->pc = 0x2d4444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d4448: 0x14200127  bnez        $at, . + 4 + (0x127 << 2)
    ctx->pc = 0x2D4448u;
    {
        const bool branch_taken_0x2d4448 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4448) {
            ctx->pc = 0x2D48E8u;
            goto label_2d48e8;
        }
    }
    ctx->pc = 0x2D4450u;
    // 0x2d4450: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4454: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2d4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d4458: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d445c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4460: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4460u;
    SET_GPR_U32(ctx, 31, 0x2D4468u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4460u, 0x2D4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4468u;
label_2d4468:
    // 0x2d4468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d446c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4470: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4474: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4474u;
    SET_GPR_U32(ctx, 31, 0x2D447Cu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4474u, 0x2D447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D447Cu;
label_2d447c:
    // 0x2d447c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d447cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4480: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x2d4480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2d4484: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x2d4484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2d4488: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d448c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4490: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4494: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d4494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d4498: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d4498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d449c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d449cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d44a0: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2d44a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d44a4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2d44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d44a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d44a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d44ac: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d44acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d44b0: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x2d44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d44b4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2d44b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d44b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d44b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d44bc: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d44bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2d44c0: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x2d44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d44c4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2d44c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d44c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d44c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d44cc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d44ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2d44d0: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x2d44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d44d4: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D44D4u;
    SET_GPR_U32(ctx, 31, 0x2D44DCu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D44D4u, 0x2D44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44DCu;
label_2d44dc:
    // 0x2d44dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d44dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d44e0: 0x0  nop
    ctx->pc = 0x2d44e0u;
    // NOP
    // 0x2d44e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d44e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d44e8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2D44E8u;
    {
        const bool branch_taken_0x2d44e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d44e8) {
            ctx->pc = 0x2D4524u;
            goto label_2d4524;
        }
    }
    ctx->pc = 0x2D44F0u;
    // 0x2d44f0: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d44f4: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x2d44f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2d44f8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d44f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d44fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d44fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4500: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d4500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d4504: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2d4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4508: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d4508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2d450c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x2d450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d4510: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2d4510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d4514: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2D4514u;
    SET_GPR_U32(ctx, 31, 0x2D451Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2D4514u, 0x2D451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D451Cu;
label_2d451c:
    // 0x2d451c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D451Cu;
    {
        const bool branch_taken_0x2d451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d451c) {
            ctx->pc = 0x2D4584u;
            goto label_2d4584;
        }
    }
    ctx->pc = 0x2D4524u;
label_2d4524:
    // 0x2d4524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4528: 0xc091008  jal         func_244020
    ctx->pc = 0x2D4528u;
    SET_GPR_U32(ctx, 31, 0x2D4530u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D4528u, 0x2D4530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4530u;
label_2d4530:
    // 0x2d4530: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x2d4530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x2d4534: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x2d4534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4538: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x2d4538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d453c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d453cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4540: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2d4540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2d4544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4548: 0x0  nop
    ctx->pc = 0x2d4548u;
    // NOP
    // 0x2d454c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d454cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d4550: 0x0  nop
    ctx->pc = 0x2d4550u;
    // NOP
    // 0x2d4554: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x2d4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x2d4558: 0xc7ac022c  lwc1        $f12, 0x22C($sp)
    ctx->pc = 0x2d4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d455c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D455Cu;
    SET_GPR_U32(ctx, 31, 0x2D4564u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D455Cu, 0x2D4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4564u;
label_2d4564:
    // 0x2d4564: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d4564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d4568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d456c: 0x0  nop
    ctx->pc = 0x2d456cu;
    // NOP
    // 0x2d4570: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d4570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2d4574: 0xc7ac022c  lwc1        $f12, 0x22C($sp)
    ctx->pc = 0x2d4574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4578: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D4578u;
    SET_GPR_U32(ctx, 31, 0x2D4580u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D4578u, 0x2D4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4580u;
label_2d4580:
    // 0x2d4580: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d4580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2d4584:
    // 0x2d4584: 0xc7a50170  lwc1        $f5, 0x170($sp)
    ctx->pc = 0x2d4584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d4588: 0xc7a40210  lwc1        $f4, 0x210($sp)
    ctx->pc = 0x2d4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d458c: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x2d458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4590: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x2d4590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4594: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x2d4594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4598: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2d4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d459c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d459cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d45a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d45a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d45a4: 0x0  nop
    ctx->pc = 0x2d45a4u;
    // NOP
    // 0x2d45a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d45a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d45ac: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2d45acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d45b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d45b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d45b4: 0x0  nop
    ctx->pc = 0x2d45b4u;
    // NOP
    // 0x2d45b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d45b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d45bc: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x2d45bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2d45c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d45c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d45c4: 0x0  nop
    ctx->pc = 0x2d45c4u;
    // NOP
    // 0x2d45c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d45c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d45cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D45CCu;
    {
        const bool branch_taken_0x2d45cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d45cc) {
            ctx->pc = 0x2D45ECu;
            goto label_2d45ec;
        }
    }
    ctx->pc = 0x2D45D4u;
    // 0x2d45d4: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d45d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d45d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d45d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d45dc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d45dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d45e0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d45e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d45e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d45e8: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d45e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2d45ec:
    // 0x2d45ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d45f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d45f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d45f4: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d45f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d45f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d45f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d45fc: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d45fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d4600: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2d4600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2d4604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d4604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4608: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d460c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d460cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4610: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d4610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2d4614: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d4618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d4618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d461c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d4620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d4624: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d4624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2d4628: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d462c: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2d462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d4630: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d4630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4634: 0xc0b5bcc  jal         func_2D6F30
    ctx->pc = 0x2D4634u;
    SET_GPR_U32(ctx, 31, 0x2D463Cu);
    ctx->pc = 0x2D6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F30u, 0x2D4634u, 0x2D463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D463Cu;
label_2d463c:
    // 0x2d463c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4640: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2d4640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4644: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D4644u;
    {
        const bool branch_taken_0x2d4644 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4644) {
            ctx->pc = 0x2D4688u;
            goto label_2d4688;
        }
    }
    ctx->pc = 0x2D464Cu;
    // 0x2d464c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4650: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d4650u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4654: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2d4654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2d4658: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d4658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d465c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d465cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4660: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2d4660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2d4664: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2d4664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d4668: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d466c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2d466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2d4670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4674: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d4674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4678: 0xc0b5bcc  jal         func_2D6F30
    ctx->pc = 0x2D4678u;
    SET_GPR_U32(ctx, 31, 0x2D4680u);
    ctx->pc = 0x2D6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F30u, 0x2D4678u, 0x2D4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4680u;
label_2d4680:
    // 0x2d4680: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d4680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4684: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2d4684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4688:
    // 0x2d4688: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4688u;
    {
        const bool branch_taken_0x2d4688 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4688) {
            ctx->pc = 0x2D46A4u;
            goto label_2d46a4;
        }
    }
    ctx->pc = 0x2D4690u;
    // 0x2d4690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4694: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4698: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2d469c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2D469Cu;
    {
        const bool branch_taken_0x2d469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d469c) {
            ctx->pc = 0x2D48E8u;
            goto label_2d48e8;
        }
    }
    ctx->pc = 0x2D46A4u;
label_2d46a4:
    // 0x2d46a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d46a8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2d46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d46ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d46acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d46b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d46b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46b4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D46B4u;
    SET_GPR_U32(ctx, 31, 0x2D46BCu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D46B4u, 0x2D46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46BCu;
label_2d46bc:
    // 0x2d46bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d46c0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2d46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d46c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46c8: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D46C8u;
    SET_GPR_U32(ctx, 31, 0x2D46D0u);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D46C8u, 0x2D46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46D0u;
label_2d46d0:
    // 0x2d46d0: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2d46d4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d46d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d46dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d46e0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2d46e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d46e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d46e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d46e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d46e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d46ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d46f0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2d46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d46f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d46f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d46f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d46f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46fc: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D46FCu;
    SET_GPR_U32(ctx, 31, 0x2D4704u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D46FCu, 0x2D4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4704u;
label_2d4704:
    // 0x2d4704: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d4704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4708: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d470c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2d470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2d4710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4714: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d4718: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d471c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4720: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4720u;
    SET_GPR_U32(ctx, 31, 0x2D4728u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4720u, 0x2D4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4728u;
label_2d4728:
    // 0x2d4728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d472c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4730: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4734: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4734u;
    SET_GPR_U32(ctx, 31, 0x2D473Cu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4734u, 0x2D473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D473Cu;
label_2d473c:
    // 0x2d473c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2d473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2d4740: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x2d4740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2d4744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d4748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d474c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D474Cu;
    SET_GPR_U32(ctx, 31, 0x2D4754u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D474Cu, 0x2D4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4754u;
label_2d4754:
    // 0x2d4754: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2d4754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4758: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d475c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2d475cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4760: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2d4760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d4764: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2d4768: 0xc0b531c  jal         func_2D4C70
    ctx->pc = 0x2D4768u;
    SET_GPR_U32(ctx, 31, 0x2D4770u);
    ctx->pc = 0x2D4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C70u, 0x2D4768u, 0x2D4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4770u;
label_2d4770:
    // 0x2d4770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4774: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d4774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d4778: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2d4778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d477c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4784: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4784u;
    SET_GPR_U32(ctx, 31, 0x2D478Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4784u, 0x2D478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D478Cu;
label_2d478c:
    // 0x2d478c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2d478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2d4790: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2d4790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4798: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d479c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D479Cu;
    SET_GPR_U32(ctx, 31, 0x2D47A4u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D479Cu, 0x2D47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47A4u;
label_2d47a4:
    // 0x2d47a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47a8: 0x24820024  addiu       $v0, $a0, 0x24
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2d47ac: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x2d47acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d47b0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d47b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d47b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d47b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d47bc: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d47bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d47c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d47c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d47c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d47c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d47c8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x2d47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d47cc: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d47d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d47d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d47d4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2d47d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2d47d8: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x2d47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d47dc: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d47e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d47e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d47e4: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2d47e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2d47e8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2d47e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d47ec: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d47f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d47f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d47f4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2d47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2d47f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d47fc: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d4800: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d4804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d480c: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D480Cu;
    SET_GPR_U32(ctx, 31, 0x2D4814u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D480Cu, 0x2D4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4814u;
label_2d4814:
    // 0x2d4814: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d4814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4818: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d481c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4820: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D4820u;
    SET_GPR_U32(ctx, 31, 0x2D4828u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D4820u, 0x2D4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4828u;
label_2d4828:
    // 0x2d4828: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2d4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d482c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4830: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x2d4830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d4834: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D4834u;
    SET_GPR_U32(ctx, 31, 0x2D483Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D4834u, 0x2D483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D483Cu;
label_2d483c:
    // 0x2d483c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4840: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d4840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d4844: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d484c: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D484Cu;
    SET_GPR_U32(ctx, 31, 0x2D4854u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D484Cu, 0x2D4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4854u;
label_2d4854:
    // 0x2d4854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4858: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d485c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D485Cu;
    SET_GPR_U32(ctx, 31, 0x2D4864u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D485Cu, 0x2D4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4864u;
label_2d4864:
    // 0x2d4864: 0x27b30138  addiu       $s3, $sp, 0x138
    ctx->pc = 0x2d4864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d4868: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d486c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2d486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d4870: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D4870u;
    SET_GPR_U32(ctx, 31, 0x2D4878u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D4870u, 0x2D4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4878u;
label_2d4878:
    // 0x2d4878: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x2d4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d487c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2d487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d4880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4884: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2d4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2d4888: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x2d4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d488c: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2d488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4890: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d4890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4894: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2d4894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2d4898: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2d4898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d489c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2d489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d48a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d48a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d48a4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2d48a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2d48a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d48ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d48b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d48b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d48b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d48b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48b8: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D48B8u;
    SET_GPR_U32(ctx, 31, 0x2D48C0u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D48B8u, 0x2D48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48C0u;
label_2d48c0:
    // 0x2d48c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d48c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d48c4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2d48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d48c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d48c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48cc: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D48CCu;
    SET_GPR_U32(ctx, 31, 0x2D48D4u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D48CCu, 0x2D48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48D4u;
label_2d48d4:
    // 0x2d48d4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2d48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d48d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d48d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48dc: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x2d48dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2d48e0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D48E0u;
    SET_GPR_U32(ctx, 31, 0x2D48E8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D48E0u, 0x2D48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48E8u;
label_2d48e8:
    // 0x2d48e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d48ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2d48f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d48f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d48f4: 0x144400b0  bne         $v0, $a0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D48F4u;
    {
        const bool branch_taken_0x2d48f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d48f4) {
            ctx->pc = 0x2D4BB8u;
            goto label_2d4bb8;
        }
    }
    ctx->pc = 0x2D48FCu;
    // 0x2d48fc: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x2d48fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2d4900: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4904: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d4904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4908: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d490c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d490cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d4910: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2d4910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2d4914: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4918: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x2d4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d491c: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x2d491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d4920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4924: 0x45010099  bc1t        . + 4 + (0x99 << 2)
    ctx->pc = 0x2D4924u;
    {
        const bool branch_taken_0x2d4924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4924) {
            ctx->pc = 0x2D4B8Cu;
            goto label_2d4b8c;
        }
    }
    ctx->pc = 0x2D492Cu;
    // 0x2d492c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4930: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2d4930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2d4934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d4934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4938: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2D4938u;
    SET_GPR_U32(ctx, 31, 0x2D4940u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2D4938u, 0x2D4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4940u;
label_2d4940:
    // 0x2d4940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4944: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2D4944u;
    SET_GPR_U32(ctx, 31, 0x2D494Cu);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2D4944u, 0x2D494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D494Cu;
label_2d494c:
    // 0x2d494c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4950: 0xafa50228  sw          $a1, 0x228($sp)
    ctx->pc = 0x2d4950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 5));
    // 0x2d4954: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4958: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x2d4958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d495c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4960: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2d4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2d4964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4968: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D4968u;
    SET_GPR_U32(ctx, 31, 0x2D4970u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D4968u, 0x2D4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4970u;
label_2d4970:
    // 0x2d4970: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D4970u;
    {
        const bool branch_taken_0x2d4970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4970) {
            ctx->pc = 0x2D499Cu;
            goto label_2d499c;
        }
    }
    ctx->pc = 0x2D4978u;
    // 0x2d4978: 0x8fb30228  lw          $s3, 0x228($sp)
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2d497c: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D497Cu;
    {
        const bool branch_taken_0x2d497c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d497c) {
            ctx->pc = 0x2D4A48u;
            goto label_2d4a48;
        }
    }
    ctx->pc = 0x2D4984u;
    // 0x2d4984: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x2d4984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2d4988: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2D4988u;
    SET_GPR_U32(ctx, 31, 0x2D4990u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2D4988u, 0x2D4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4990u;
label_2d4990:
    // 0x2d4990: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d4990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4994: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D4994u;
    {
        const bool branch_taken_0x2d4994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4994) {
            ctx->pc = 0x2D4A48u;
            goto label_2d4a48;
        }
    }
    ctx->pc = 0x2D499Cu;
label_2d499c:
    // 0x2d499c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49a0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2d49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d49a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D49A4u;
    {
        const bool branch_taken_0x2d49a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d49a4) {
            ctx->pc = 0x2D49F4u;
            goto label_2d49f4;
        }
    }
    ctx->pc = 0x2D49ACu;
    // 0x2d49ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d49acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49b0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49b4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2d49b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49bc: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2d49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d49c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49c4: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x2d49c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d49c8: 0x8cd30024  lw          $s3, 0x24($a2)
    ctx->pc = 0x2d49c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2d49cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d49ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49d0: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d49d4: 0x8c680028  lw          $t0, 0x28($v1)
    ctx->pc = 0x2d49d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d49d8: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d49dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d49dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49e0: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D49E0u;
    SET_GPR_U32(ctx, 31, 0x2D49E8u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D49E0u, 0x2D49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49E8u;
label_2d49e8:
    // 0x2d49e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d49e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49ec: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2D49ECu;
    {
        const bool branch_taken_0x2d49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d49ec) {
            ctx->pc = 0x2D4C18u;
            goto label_2d4c18;
        }
    }
    ctx->pc = 0x2D49F4u;
label_2d49f4:
    // 0x2d49f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d49f8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d49fc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a04: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D4A04u;
    SET_GPR_U32(ctx, 31, 0x2D4A0Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D4A04u, 0x2D4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A0Cu;
label_2d4a0c:
    // 0x2d4a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a14: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d4a18: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D4A18u;
    SET_GPR_U32(ctx, 31, 0x2D4A20u);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D4A18u, 0x2D4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A20u;
label_2d4a20:
    // 0x2d4a20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d4a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a2c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d4a30: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d4a34: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x2d4a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d4a38: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D4A38u;
    SET_GPR_U32(ctx, 31, 0x2D4A40u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D4A38u, 0x2D4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A40u;
label_2d4a40:
    // 0x2d4a40: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2D4A40u;
    {
        const bool branch_taken_0x2d4a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a40) {
            ctx->pc = 0x2D4C18u;
            goto label_2d4c18;
        }
    }
    ctx->pc = 0x2D4A48u;
label_2d4a48:
    // 0x2d4a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4a4c: 0xa3a3026e  sb          $v1, 0x26E($sp)
    ctx->pc = 0x2d4a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 622), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a54: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2d4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d4a58: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D4A58u;
    {
        const bool branch_taken_0x2d4a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a58) {
            ctx->pc = 0x2D4B10u;
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4A60u;
    // 0x2d4a60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a64: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d4a68: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2D4A68u;
    SET_GPR_U32(ctx, 31, 0x2D4A70u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2D4A68u, 0x2D4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A70u;
label_2d4a70:
    // 0x2d4a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4a74: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D4A74u;
    {
        const bool branch_taken_0x2d4a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4a74) {
            ctx->pc = 0x2D4B10u;
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4A7Cu;
    // 0x2d4a7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a80: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2d4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d4a84: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d4a88: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D4A88u;
    {
        const bool branch_taken_0x2d4a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d4a88) {
            ctx->pc = 0x2D4B10u;
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4A90u;
    // 0x2d4a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a94: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d4a98: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2d4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d4a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4aa0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D4AA0u;
    SET_GPR_U32(ctx, 31, 0x2D4AA8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D4AA0u, 0x2D4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AA8u;
label_2d4aa8:
    // 0x2d4aa8: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x2d4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x2d4aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4ab0: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x2d4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x2d4ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ab8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2d4ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d4abc: 0xc0976f8  jal         func_25DBE0
    ctx->pc = 0x2D4ABCu;
    SET_GPR_U32(ctx, 31, 0x2D4AC4u);
    ctx->pc = 0x25DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBE0u, 0x2D4ABCu, 0x2D4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AC4u;
label_2d4ac4:
    // 0x2d4ac4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D4AC4u;
    {
        const bool branch_taken_0x2d4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ac4) {
            ctx->pc = 0x2D4B10u;
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4ACCu;
    // 0x2d4acc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4ad0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4ad4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2d4ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4ad8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4adc: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d4ae0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x2d4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d4ae4: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x2d4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d4ae8: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x2d4ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d4aec: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d4af0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d4af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4af4: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2d4af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d4af8: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D4AF8u;
    SET_GPR_U32(ctx, 31, 0x2D4B00u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D4AF8u, 0x2D4B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B00u;
label_2d4b00:
    // 0x2d4b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b04: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4B04u;
    {
        const bool branch_taken_0x2d4b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b04) {
            ctx->pc = 0x2D4B10u;
            goto label_2d4b10;
        }
    }
    ctx->pc = 0x2D4B0Cu;
    // 0x2d4b0c: 0xa3a0026e  sb          $zero, 0x26E($sp)
    ctx->pc = 0x2d4b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 622), (uint8_t)GPR_U32(ctx, 0));
label_2d4b10:
    // 0x2d4b10: 0x93a2026e  lbu         $v0, 0x26E($sp)
    ctx->pc = 0x2d4b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 622)));
    // 0x2d4b14: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D4B14u;
    {
        const bool branch_taken_0x2d4b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b14) {
            ctx->pc = 0x2D4C18u;
            goto label_2d4c18;
        }
    }
    ctx->pc = 0x2D4B1Cu;
    // 0x2d4b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b20: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2D4B20u;
    SET_GPR_U32(ctx, 31, 0x2D4B28u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2D4B20u, 0x2D4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B28u;
label_2d4b28:
    // 0x2d4b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b34: 0xc0b62c4  jal         func_2D8B10
    ctx->pc = 0x2D4B34u;
    SET_GPR_U32(ctx, 31, 0x2D4B3Cu);
    ctx->pc = 0x2D8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B10u, 0x2D4B34u, 0x2D4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B3Cu;
label_2d4b3c:
    // 0x2d4b3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4b40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4B40u;
    {
        const bool branch_taken_0x2d4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b40) {
            ctx->pc = 0x2D4B68u;
            goto label_2d4b68;
        }
    }
    ctx->pc = 0x2D4B48u;
    // 0x2d4b48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4b4c: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D4B4Cu;
    SET_GPR_U32(ctx, 31, 0x2D4B54u);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D4B4Cu, 0x2D4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B54u;
label_2d4b54:
    // 0x2d4b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4b58: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D4B58u;
    SET_GPR_U32(ctx, 31, 0x2D4B60u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D4B58u, 0x2D4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B60u;
label_2d4b60:
    // 0x2d4b60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d4b60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d4b68:
    // 0x2d4b68: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2d4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d4b6c: 0x24820028  addiu       $v0, $a0, 0x28
    ctx->pc = 0x2d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2d4b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b78: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D4B78u;
    SET_GPR_U32(ctx, 31, 0x2D4B80u);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D4B78u, 0x2D4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B80u;
label_2d4b80:
    // 0x2d4b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D4B84u;
    {
        const bool branch_taken_0x2d4b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b84) {
            ctx->pc = 0x2D4C20u;
            goto label_2d4c20;
        }
    }
    ctx->pc = 0x2D4B8Cu;
label_2d4b8c:
    // 0x2d4b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4b90: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2d4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4b94: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x2d4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d4b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4b9c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2D4B9Cu;
    {
        const bool branch_taken_0x2d4b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4b9c) {
            ctx->pc = 0x2D4C18u;
            goto label_2d4c18;
        }
    }
    ctx->pc = 0x2D4BA4u;
    // 0x2d4ba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4ba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4bac: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2d4bb0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D4BB0u;
    {
        const bool branch_taken_0x2d4bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4bb0) {
            ctx->pc = 0x2D4C18u;
            goto label_2d4c18;
        }
    }
    ctx->pc = 0x2D4BB8u;
label_2d4bb8:
    // 0x2d4bb8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2D4BB8u;
    SET_GPR_U32(ctx, 31, 0x2D4BC0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2D4BB8u, 0x2D4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BC0u;
label_2d4bc0:
    // 0x2d4bc0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d4bc4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d4bc4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d4bc8: 0x2010  mfhi        $a0
    ctx->pc = 0x2d4bc8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d4bcc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4BCCu;
    {
        const bool branch_taken_0x2d4bcc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2d4bcc) {
            ctx->pc = 0x2D4BE8u;
            goto label_2d4be8;
        }
    }
    ctx->pc = 0x2D4BD4u;
    // 0x2d4bd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d4bd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4bd8: 0x0  nop
    ctx->pc = 0x2d4bd8u;
    // NOP
    // 0x2d4bdc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d4bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d4be0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4BE0u;
    {
        const bool branch_taken_0x2d4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4be0) {
            ctx->pc = 0x2D4C04u;
            goto label_2d4c04;
        }
    }
    ctx->pc = 0x2D4BE8u;
label_2d4be8:
    // 0x2d4be8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2d4bec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2d4becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d4bf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4bf8: 0x0  nop
    ctx->pc = 0x2d4bf8u;
    // NOP
    // 0x2d4bfc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d4bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d4c00: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d4c00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d4c04:
    // 0x2d4c04: 0xc7818260  lwc1        $f1, -0x7DA0($gp)
    ctx->pc = 0x2d4c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4c08: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x2d4c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d4c0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d4c0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d4c10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4c14: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d4c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2d4c18:
    // 0x2d4c18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d4c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4c20:
    // 0x2d4c20: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d4c24: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d4c28: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D4C28u;
    SET_GPR_U32(ctx, 31, 0x2D4C30u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D4C28u, 0x2D4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C30u;
label_2d4c30:
    // 0x2d4c30: 0x1602fadc  bne         $s0, $v0, . + 4 + (-0x524 << 2)
    ctx->pc = 0x2D4C30u;
    {
        const bool branch_taken_0x2d4c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4c30) {
            ctx->pc = 0x2D37A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d37a4;
        }
    }
    ctx->pc = 0x2D4C38u;
    // 0x2d4c38: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2d4c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4c3c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2d4c3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4c40: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2d4c40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4c44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2d4c44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4c48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2d4c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4c4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d4c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4c50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d4c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4c54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d4c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d4c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4c5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4c60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d4c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d4c64: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x2d4c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2d4c68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4C70u;
}
