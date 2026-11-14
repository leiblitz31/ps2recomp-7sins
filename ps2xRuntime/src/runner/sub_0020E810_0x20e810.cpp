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

// Function: sub_0020E810
// Address: 0x20e810 - 0x20ed40
void sub_0020E810_0x20e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E810_0x20e810");
#endif

    switch (ctx->pc) {
        case 0x20e86cu: goto label_20e86c;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e944u: goto label_20e944;
        case 0x20e968u: goto label_20e968;
        case 0x20e978u: goto label_20e978;
        case 0x20e994u: goto label_20e994;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eba0u: goto label_20eba0;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ed10u: goto label_20ed10;
        default: break;
    }

    ctx->pc = 0x20e810u;

    // 0x20e810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20e814: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20e818: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20e81c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20e820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20e824: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20e824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20e828: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x20e828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x20e82c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x20e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x20e830: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x20e830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x20e834: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e838: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20e838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20e83c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x20e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20e840: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e844: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x20e844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x20e848: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e84c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20e850: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e854: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e858: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20e85c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e860: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x20e860u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e864: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20E864u;
    SET_GPR_U32(ctx, 31, 0x20E86Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20E864u, 0x20E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E86Cu;
label_20e86c:
    // 0x20e86c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E86Cu;
    {
        const bool branch_taken_0x20e86c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20e86c) {
            ctx->pc = 0x20E888u;
            goto label_20e888;
        }
    }
    ctx->pc = 0x20E874u;
    // 0x20e874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e878: 0x0  nop
    ctx->pc = 0x20e878u;
    // NOP
    // 0x20e87c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20e87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E880u;
    {
        const bool branch_taken_0x20e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e880) {
            ctx->pc = 0x20E8A4u;
            goto label_20e8a4;
        }
    }
    ctx->pc = 0x20E888u;
label_20e888:
    // 0x20e888: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20e88c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20e890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20e894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e898: 0x0  nop
    ctx->pc = 0x20e898u;
    // NOP
    // 0x20e89c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20e89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e8a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20e8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20e8a4:
    // 0x20e8a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20e8a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8ac: 0x0  nop
    ctx->pc = 0x20e8acu;
    // NOP
    // 0x20e8b0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x20e8b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20e8b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e8b8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20e8bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8c4: 0x0  nop
    ctx->pc = 0x20e8c4u;
    // NOP
    // 0x20e8c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20e8c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20e8cc: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x20e8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x20e8d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e8d4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x20e8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x20e8d8: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x20e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x20e8dc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x20E8DCu;
    SET_GPR_U32(ctx, 31, 0x20E8E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20E8DCu, 0x20E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8E4u;
label_20e8e4:
    // 0x20e8e4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x20e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x20e8e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20E8ECu;
    SET_GPR_U32(ctx, 31, 0x20E8F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20E8ECu, 0x20E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8F4u;
label_20e8f4:
    // 0x20e8f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8F8u;
    {
        const bool branch_taken_0x20e8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8f8) {
            ctx->pc = 0x20E910u;
            goto label_20e910;
        }
    }
    ctx->pc = 0x20E900u;
    // 0x20e900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e904: 0xc1216ec  jal         func_485BB0
    ctx->pc = 0x20E904u;
    SET_GPR_U32(ctx, 31, 0x20E90Cu);
    ctx->pc = 0x485BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BB0u, 0x20E904u, 0x20E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E90Cu;
label_20e90c:
    // 0x20e90c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e910:
    // 0x20e910: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e914: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x20e914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x20e918: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e91c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20e920: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x20e920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x20e924: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20E924u;
    SET_GPR_U32(ctx, 31, 0x20E92Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20E924u, 0x20E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E92Cu;
label_20e92c:
    // 0x20e92c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x20e930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e934: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20e934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e938: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e93c: 0xc08a320  jal         func_228C80
    ctx->pc = 0x20E93Cu;
    SET_GPR_U32(ctx, 31, 0x20E944u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x20E93Cu, 0x20E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E944u;
label_20e944:
    // 0x20e944: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x20e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e948: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20e948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20e94c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x20e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e950: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e954: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20e958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e960: 0xc12174c  jal         func_485D30
    ctx->pc = 0x20E960u;
    SET_GPR_U32(ctx, 31, 0x20E968u);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x20E960u, 0x20E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E968u;
label_20e968:
    // 0x20e968: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e96c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e970: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x20E970u;
    SET_GPR_U32(ctx, 31, 0x20E978u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x20E970u, 0x20E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E978u;
label_20e978:
    // 0x20e978: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20E978u;
    {
        const bool branch_taken_0x20e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e978) {
            ctx->pc = 0x20E9C8u;
            goto label_20e9c8;
        }
    }
    ctx->pc = 0x20E980u;
    // 0x20e980: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x20e984: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e988: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20e988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e98c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x20E98Cu;
    SET_GPR_U32(ctx, 31, 0x20E994u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20E98Cu, 0x20E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E994u;
label_20e994:
    // 0x20e994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20e994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e99c: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x20E99Cu;
    SET_GPR_U32(ctx, 31, 0x20E9A4u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x20E99Cu, 0x20E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9A4u;
label_20e9a4:
    // 0x20e9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9a8: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x20E9A8u;
    SET_GPR_U32(ctx, 31, 0x20E9B0u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x20E9A8u, 0x20E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9B0u;
label_20e9b0:
    // 0x20e9b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e9c0: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x20E9C0u;
    SET_GPR_U32(ctx, 31, 0x20E9C8u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x20E9C0u, 0x20E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9C8u;
label_20e9c8:
    // 0x20e9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e9cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e9d0: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x20e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x20e9d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e9d8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20e9dc: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20e9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20e9e0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20E9E0u;
    {
        const bool branch_taken_0x20e9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e9e0) {
            ctx->pc = 0x20EABCu;
            goto label_20eabc;
        }
    }
    ctx->pc = 0x20E9E8u;
    // 0x20e9e8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20E9E8u;
    SET_GPR_U32(ctx, 31, 0x20E9F0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20E9E8u, 0x20E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9F0u;
label_20e9f0:
    // 0x20e9f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E9F0u;
    {
        const bool branch_taken_0x20e9f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20e9f0) {
            ctx->pc = 0x20EA0Cu;
            goto label_20ea0c;
        }
    }
    ctx->pc = 0x20E9F8u;
    // 0x20e9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9fc: 0x0  nop
    ctx->pc = 0x20e9fcu;
    // NOP
    // 0x20ea00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ea00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ea04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EA04u;
    {
        const bool branch_taken_0x20ea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea04) {
            ctx->pc = 0x20EA28u;
            goto label_20ea28;
        }
    }
    ctx->pc = 0x20EA0Cu;
label_20ea0c:
    // 0x20ea0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20ea10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ea14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20ea14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20ea18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ea18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea1c: 0x0  nop
    ctx->pc = 0x20ea1cu;
    // NOP
    // 0x20ea20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ea20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ea24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20ea24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20ea28:
    // 0x20ea28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20ea2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea30: 0x0  nop
    ctx->pc = 0x20ea30u;
    // NOP
    // 0x20ea34: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20ea34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20ea38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20ea3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ea3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea40: 0x0  nop
    ctx->pc = 0x20ea40u;
    // NOP
    // 0x20ea44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20ea44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ea48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20EA48u;
    {
        const bool branch_taken_0x20ea48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ea48) {
            ctx->pc = 0x20EA68u;
            goto label_20ea68;
        }
    }
    ctx->pc = 0x20EA50u;
    // 0x20ea50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x20ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x20ea54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ea54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea58: 0x0  nop
    ctx->pc = 0x20ea58u;
    // NOP
    // 0x20ea5c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x20ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x20ea60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20EA60u;
    {
        const bool branch_taken_0x20ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea60) {
            ctx->pc = 0x20EA78u;
            goto label_20ea78;
        }
    }
    ctx->pc = 0x20EA68u;
label_20ea68:
    // 0x20ea68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ea6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ea6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea70: 0x0  nop
    ctx->pc = 0x20ea70u;
    // NOP
    // 0x20ea74: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x20ea74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_20ea78:
    // 0x20ea78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20ea7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20ea7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20ea80: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x20ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ea84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20ea88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ea8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ea8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea90: 0x0  nop
    ctx->pc = 0x20ea90u;
    // NOP
    // 0x20ea94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ea94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20ea98: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ea98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20ea9c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eaa0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x20eaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20eaa4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20eaa8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eaac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eab0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20eab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x20eab4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x20EAB4u;
    {
        const bool branch_taken_0x20eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eab4) {
            ctx->pc = 0x20EB98u;
            goto label_20eb98;
        }
    }
    ctx->pc = 0x20EABCu;
label_20eabc:
    // 0x20eabc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20EABCu;
    SET_GPR_U32(ctx, 31, 0x20EAC4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20EABCu, 0x20EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAC4u;
label_20eac4:
    // 0x20eac4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EAC4u;
    {
        const bool branch_taken_0x20eac4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20eac4) {
            ctx->pc = 0x20EAE0u;
            goto label_20eae0;
        }
    }
    ctx->pc = 0x20EACCu;
    // 0x20eacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ead0: 0x0  nop
    ctx->pc = 0x20ead0u;
    // NOP
    // 0x20ead4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ead4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ead8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EAD8u;
    {
        const bool branch_taken_0x20ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ead8) {
            ctx->pc = 0x20EAFCu;
            goto label_20eafc;
        }
    }
    ctx->pc = 0x20EAE0u;
label_20eae0:
    // 0x20eae0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20eae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20eae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20eaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20eaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eaf0: 0x0  nop
    ctx->pc = 0x20eaf0u;
    // NOP
    // 0x20eaf4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20eaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20eaf8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20eaf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20eafc:
    // 0x20eafc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20eb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb04: 0x0  nop
    ctx->pc = 0x20eb04u;
    // NOP
    // 0x20eb08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20eb08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20eb0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20eb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb14: 0x0  nop
    ctx->pc = 0x20eb14u;
    // NOP
    // 0x20eb18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20eb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20eb1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20EB1Cu;
    {
        const bool branch_taken_0x20eb1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20eb1c) {
            ctx->pc = 0x20EB3Cu;
            goto label_20eb3c;
        }
    }
    ctx->pc = 0x20EB24u;
    // 0x20eb24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x20eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x20eb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb2c: 0x0  nop
    ctx->pc = 0x20eb2cu;
    // NOP
    // 0x20eb30: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20eb34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20EB34u;
    {
        const bool branch_taken_0x20eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eb34) {
            ctx->pc = 0x20EB4Cu;
            goto label_20eb4c;
        }
    }
    ctx->pc = 0x20EB3Cu;
label_20eb3c:
    // 0x20eb3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20eb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb44: 0x0  nop
    ctx->pc = 0x20eb44u;
    // NOP
    // 0x20eb48: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20eb4c:
    // 0x20eb4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20eb50: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20eb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20eb54: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x20eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20eb58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20eb5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eb60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20eb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb64: 0x0  nop
    ctx->pc = 0x20eb64u;
    // NOP
    // 0x20eb68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20eb68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20eb6c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20eb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20eb70: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eb74: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x20eb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20eb78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20eb7c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eb80: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x20eb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb88: 0x0  nop
    ctx->pc = 0x20eb88u;
    // NOP
    // 0x20eb8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20eb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20eb90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eb94: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20eb98:
    // 0x20eb98: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20EB98u;
    SET_GPR_U32(ctx, 31, 0x20EBA0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20EB98u, 0x20EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBA0u;
label_20eba0:
    // 0x20eba0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EBA0u;
    {
        const bool branch_taken_0x20eba0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20eba0) {
            ctx->pc = 0x20EBBCu;
            goto label_20ebbc;
        }
    }
    ctx->pc = 0x20EBA8u;
    // 0x20eba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebac: 0x0  nop
    ctx->pc = 0x20ebacu;
    // NOP
    // 0x20ebb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ebb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ebb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EBB4u;
    {
        const bool branch_taken_0x20ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ebb4) {
            ctx->pc = 0x20EBD8u;
            goto label_20ebd8;
        }
    }
    ctx->pc = 0x20EBBCu;
label_20ebbc:
    // 0x20ebbc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20ebc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ebc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20ebc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20ebc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ebc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebcc: 0x0  nop
    ctx->pc = 0x20ebccu;
    // NOP
    // 0x20ebd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20ebd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20ebd4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20ebd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20ebd8:
    // 0x20ebd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20ebdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ebdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebe0: 0x0  nop
    ctx->pc = 0x20ebe0u;
    // NOP
    // 0x20ebe4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x20ebe4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20ebe8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20ebec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20ebecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20ebf0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20ebf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ebf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ebf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebfc: 0x0  nop
    ctx->pc = 0x20ebfcu;
    // NOP
    // 0x20ec00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ec00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20ec04: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x20ec04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x20ec08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x20ec0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ec0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ec10: 0x0  nop
    ctx->pc = 0x20ec10u;
    // NOP
    // 0x20ec14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20ec14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20ec18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ec1c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x20ec1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x20ec20: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x20ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ec24: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20ec28: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x20EC28u;
    SET_GPR_U32(ctx, 31, 0x20EC30u);
    ctx->pc = 0x20FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA20u, 0x20EC28u, 0x20EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC30u;
label_20ec30:
    // 0x20ec30: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ec34: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20ec38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ec3c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x20ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x20ec40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ec44: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20ec48: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20ec48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20ec4c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20EC4Cu;
    {
        const bool branch_taken_0x20ec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ec4c) {
            ctx->pc = 0x20ED18u;
            goto label_20ed18;
        }
    }
    ctx->pc = 0x20EC54u;
    // 0x20ec54: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20EC54u;
    SET_GPR_U32(ctx, 31, 0x20EC5Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20EC54u, 0x20EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC5Cu;
label_20ec5c:
    // 0x20ec5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20ec60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20ec60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20ec64: 0x1810  mfhi        $v1
    ctx->pc = 0x20ec64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20ec68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ec6c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20EC6Cu;
    {
        const bool branch_taken_0x20ec6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20ec6c) {
            ctx->pc = 0x20ECF0u;
            goto label_20ecf0;
        }
    }
    ctx->pc = 0x20EC74u;
    // 0x20ec74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ec78: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20EC78u;
    {
        const bool branch_taken_0x20ec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20ec78) {
            ctx->pc = 0x20ECC0u;
            goto label_20ecc0;
        }
    }
    ctx->pc = 0x20EC80u;
    // 0x20ec80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC80u;
    {
        const bool branch_taken_0x20ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec80) {
            ctx->pc = 0x20EC90u;
            goto label_20ec90;
        }
    }
    ctx->pc = 0x20EC88u;
    // 0x20ec88: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20ED18u;
            goto label_20ed18;
        }
    }
    ctx->pc = 0x20EC90u;
label_20ec90:
    // 0x20ec90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ec94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ec94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ec98: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20ec9c: 0x27859b18  addiu       $a1, $gp, -0x64E8
    ctx->pc = 0x20ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941464));
    // 0x20eca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eca4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eca8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20ECA8u;
    SET_GPR_U32(ctx, 31, 0x20ECB0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20ECA8u, 0x20ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECB0u;
label_20ecb0:
    // 0x20ecb0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x20ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ecb4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x20ecb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20ECB8u;
    {
        const bool branch_taken_0x20ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ecb8) {
            ctx->pc = 0x20ED18u;
            goto label_20ed18;
        }
    }
    ctx->pc = 0x20ECC0u;
label_20ecc0:
    // 0x20ecc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ecc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ecc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ecc8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20eccc: 0x27859b20  addiu       $a1, $gp, -0x64E0
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941472));
    // 0x20ecd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ecd4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20ecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ecd8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20ECD8u;
    SET_GPR_U32(ctx, 31, 0x20ECE0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20ECD8u, 0x20ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECE0u;
label_20ece0:
    // 0x20ece0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ece4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x20ece8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20ECE8u;
    {
        const bool branch_taken_0x20ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ece8) {
            ctx->pc = 0x20ED18u;
            goto label_20ed18;
        }
    }
    ctx->pc = 0x20ECF0u;
label_20ecf0:
    // 0x20ecf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ecf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ecf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ecf8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20ecfc: 0x27859b28  addiu       $a1, $gp, -0x64D8
    ctx->pc = 0x20ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941480));
    // 0x20ed00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ed04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ed08: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20ED08u;
    SET_GPR_U32(ctx, 31, 0x20ED10u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20ED08u, 0x20ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED10u;
label_20ed10:
    // 0x20ed10: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ed14: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_20ed18:
    // 0x20ed18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ed1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ed1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ed20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ed20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ed24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ed24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ed28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ed2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ed30: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x20ED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ED3Cu;
    // 0x20ed3c: 0x0  nop
    ctx->pc = 0x20ed3cu;
    // NOP
    ctx->pc = 0x20ed40u;
}
