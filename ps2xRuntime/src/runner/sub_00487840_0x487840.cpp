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

// Function: sub_00487840
// Address: 0x487840 - 0x4879a0
void sub_00487840_0x487840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487840_0x487840");
#endif

    switch (ctx->pc) {
        case 0x487860u: goto label_487860;
        case 0x487874u: goto label_487874;
        case 0x487884u: goto label_487884;
        case 0x487890u: goto label_487890;
        case 0x4878a0u: goto label_4878a0;
        case 0x4878acu: goto label_4878ac;
        case 0x4878bcu: goto label_4878bc;
        case 0x487944u: goto label_487944;
        default: break;
    }

    ctx->pc = 0x487840u;

    // 0x487840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x487840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x487844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x487844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x487848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48784c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x487850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487854: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x487854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x487858: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x487858u;
    SET_GPR_U32(ctx, 31, 0x487860u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x487858u, 0x487860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487860u;
label_487860:
    // 0x487860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x487860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487864: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x487864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x487868: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x487868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48786c: 0xc106784  jal         func_419E10
    ctx->pc = 0x48786Cu;
    SET_GPR_U32(ctx, 31, 0x487874u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x48786Cu, 0x487874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487874u;
label_487874:
    // 0x487874: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x487874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x487878: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x487878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x48787c: 0xc041d58  jal         func_107560
    ctx->pc = 0x48787Cu;
    SET_GPR_U32(ctx, 31, 0x487884u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48787Cu, 0x487884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487884u;
label_487884:
    // 0x487884: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x487884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x487888: 0xc106784  jal         func_419E10
    ctx->pc = 0x487888u;
    SET_GPR_U32(ctx, 31, 0x487890u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x487888u, 0x487890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487890u;
label_487890:
    // 0x487890: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x487890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x487894: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x487894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x487898: 0xc041d58  jal         func_107560
    ctx->pc = 0x487898u;
    SET_GPR_U32(ctx, 31, 0x4878A0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x487898u, 0x4878A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878A0u;
label_4878a0:
    // 0x4878a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4878a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4878a4: 0xc106784  jal         func_419E10
    ctx->pc = 0x4878A4u;
    SET_GPR_U32(ctx, 31, 0x4878ACu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x4878A4u, 0x4878ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878ACu;
label_4878ac:
    // 0x4878ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4878acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4878b0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x4878b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4878b4: 0xc041d58  jal         func_107560
    ctx->pc = 0x4878B4u;
    SET_GPR_U32(ctx, 31, 0x4878BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x4878B4u, 0x4878BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878BCu;
label_4878bc:
    // 0x4878bc: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x4878bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4878c0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x4878c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4878c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4878c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4878c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4878c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4878cc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x4878ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4878d0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x4878d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4878d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4878d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4878d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4878d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4878dc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x4878dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4878e0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x4878e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4878e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4878e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4878e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4878e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4878ec: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x4878ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4878f0: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x4878f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4878f4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x4878f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4878f8: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x4878f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4878fc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x4878fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x487900: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x487900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x487904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x487908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48790c: 0x0  nop
    ctx->pc = 0x48790cu;
    // NOP
    // 0x487910: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x487910u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x487914: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x487914u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x487918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x487918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48791c: 0x0  nop
    ctx->pc = 0x48791cu;
    // NOP
    // 0x487920: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x487920u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x487924: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x487924u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x487928: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x487928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x48792c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x48792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x487930: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x487930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x487934: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x487934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x487938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x487938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48793c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48793Cu;
    {
        const bool branch_taken_0x48793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48793c) {
            ctx->pc = 0x487970u;
            goto label_487970;
        }
    }
    ctx->pc = 0x487944u;
label_487944:
    // 0x487944: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x487944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x487948: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x487948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48794c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x48794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x487950: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x487950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487954: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x487954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x487958: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x487958u;
    {
        const bool branch_taken_0x487958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x487958) {
            ctx->pc = 0x48796Cu;
            goto label_48796c;
        }
    }
    ctx->pc = 0x487960u;
    // 0x487960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x487964u;
    {
        const bool branch_taken_0x487964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487964) {
            ctx->pc = 0x487980u;
            goto label_487980;
        }
    }
    ctx->pc = 0x48796Cu;
label_48796c:
    // 0x48796c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48796cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_487970:
    // 0x487970: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x487970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x487974: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x487974u;
    {
        const bool branch_taken_0x487974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487974) {
            ctx->pc = 0x487944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487944;
        }
    }
    ctx->pc = 0x48797Cu;
    // 0x48797c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_487980:
    // 0x487980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x487980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x487984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x487988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48798c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48798cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487990: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x487990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x487994: 0x3e00008  jr          $ra
    ctx->pc = 0x487994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48799Cu;
    // 0x48799c: 0x0  nop
    ctx->pc = 0x48799cu;
    // NOP
    ctx->pc = 0x4879a0u;
}
