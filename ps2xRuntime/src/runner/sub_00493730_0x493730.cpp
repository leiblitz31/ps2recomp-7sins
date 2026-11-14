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

// Function: sub_00493730
// Address: 0x493730 - 0x4938b0
void sub_00493730_0x493730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493730_0x493730");
#endif

    switch (ctx->pc) {
        case 0x493774u: goto label_493774;
        case 0x4937b0u: goto label_4937b0;
        case 0x4937c4u: goto label_4937c4;
        case 0x4937dcu: goto label_4937dc;
        case 0x4937ecu: goto label_4937ec;
        case 0x493804u: goto label_493804;
        default: break;
    }

    ctx->pc = 0x493730u;

    // 0x493730: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x493730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x493734: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x493734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x493738: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x493738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49373c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x493740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x493740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x493744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x493744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x493748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x493748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49374c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493750: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x493750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x493754: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x493754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x493758: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x493758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x49375c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x493760: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x493760u;
    {
        const bool branch_taken_0x493760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493760) {
            ctx->pc = 0x493784u;
            goto label_493784;
        }
    }
    ctx->pc = 0x493768u;
    // 0x493768: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x493768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49376c: 0xc0e1fec  jal         func_387FB0
    ctx->pc = 0x49376Cu;
    SET_GPR_U32(ctx, 31, 0x493774u);
    ctx->pc = 0x387FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387FB0u, 0x49376Cu, 0x493774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493774u;
label_493774:
    // 0x493774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x493774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493778: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x493778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49377c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49377Cu;
    {
        const bool branch_taken_0x49377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49377c) {
            ctx->pc = 0x493788u;
            goto label_493788;
        }
    }
    ctx->pc = 0x493784u;
label_493784:
    // 0x493784: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x493784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493788:
    // 0x493788: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x493788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49378c: 0x2452001c  addiu       $s2, $v0, 0x1C
    ctx->pc = 0x49378cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x493790: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x493790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493794: 0x8f82c100  lw          $v0, -0x3F00($gp)
    ctx->pc = 0x493794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951168)));
    // 0x493798: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x493798u;
    {
        const bool branch_taken_0x493798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493798) {
            ctx->pc = 0x4937CCu;
            goto label_4937cc;
        }
    }
    ctx->pc = 0x4937A0u;
    // 0x4937a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4937a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4937a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4937a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4937a8: 0xc106784  jal         func_419E10
    ctx->pc = 0x4937A8u;
    SET_GPR_U32(ctx, 31, 0x4937B0u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x4937A8u, 0x4937B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937B0u;
label_4937b0:
    // 0x4937b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4937b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4937b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4937b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4937b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4937b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4937bc: 0xc104d64  jal         func_413590
    ctx->pc = 0x4937BCu;
    SET_GPR_U32(ctx, 31, 0x4937C4u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x4937BCu, 0x4937C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937C4u;
label_4937c4:
    // 0x4937c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4937C4u;
    {
        const bool branch_taken_0x4937c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4937c4) {
            ctx->pc = 0x4937ECu;
            goto label_4937ec;
        }
    }
    ctx->pc = 0x4937CCu;
label_4937cc:
    // 0x4937cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4937ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4937d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4937d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4937d4: 0xc106784  jal         func_419E10
    ctx->pc = 0x4937D4u;
    SET_GPR_U32(ctx, 31, 0x4937DCu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x4937D4u, 0x4937DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937DCu;
label_4937dc:
    // 0x4937dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4937dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4937e0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x4937e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4937e4: 0xc041d58  jal         func_107560
    ctx->pc = 0x4937E4u;
    SET_GPR_U32(ctx, 31, 0x4937ECu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x4937E4u, 0x4937ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4937ECu;
label_4937ec:
    // 0x4937ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4937ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4937f0: 0x8c42e880  lw          $v0, -0x1780($v0)
    ctx->pc = 0x4937f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x4937f4: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x4937f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4937f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4937f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4937fc: 0xc106784  jal         func_419E10
    ctx->pc = 0x4937FCu;
    SET_GPR_U32(ctx, 31, 0x493804u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x4937FCu, 0x493804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493804u;
label_493804:
    // 0x493804: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x493804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x493808: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x493808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49380c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x49380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x493810: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x493810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x493814: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x493814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x493818: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x493818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49381c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x49381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x493820: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x493820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x493824: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x493824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x493828: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x493828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49382c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x49382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x493830: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x493830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x493834: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x493834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x493838: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x493838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x49383c: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x49383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x493840: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x493840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x493844: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x493844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x493848: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x493848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49384c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x49384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x493850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x493850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x493854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x493854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x493858: 0x0  nop
    ctx->pc = 0x493858u;
    // NOP
    // 0x49385c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x49385cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x493860: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x493860u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x493864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x493864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x493868: 0x0  nop
    ctx->pc = 0x493868u;
    // NOP
    // 0x49386c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x49386cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x493870: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x493870u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x493874: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x493874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x493878: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x493878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x49387c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x49387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x493880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x493880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x493884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x493884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x493888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x493888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49388c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49388cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x493890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x493894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493898: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x493898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x49389c: 0x3e00008  jr          $ra
    ctx->pc = 0x49389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4938A4u;
    // 0x4938a4: 0x0  nop
    ctx->pc = 0x4938a4u;
    // NOP
    // 0x4938a8: 0x0  nop
    ctx->pc = 0x4938a8u;
    // NOP
    // 0x4938ac: 0x0  nop
    ctx->pc = 0x4938acu;
    // NOP
    ctx->pc = 0x4938b0u;
}
