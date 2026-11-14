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

// Function: sub_002D78F0
// Address: 0x2d78f0 - 0x2d7c10
void sub_002D78F0_0x2d78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D78F0_0x2d78f0");
#endif

    switch (ctx->pc) {
        case 0x2d7930u: goto label_2d7930;
        case 0x2d7950u: goto label_2d7950;
        case 0x2d79a8u: goto label_2d79a8;
        case 0x2d79d8u: goto label_2d79d8;
        case 0x2d7a14u: goto label_2d7a14;
        case 0x2d7a90u: goto label_2d7a90;
        case 0x2d7ab0u: goto label_2d7ab0;
        case 0x2d7accu: goto label_2d7acc;
        case 0x2d7adcu: goto label_2d7adc;
        case 0x2d7afcu: goto label_2d7afc;
        case 0x2d7b10u: goto label_2d7b10;
        case 0x2d7b24u: goto label_2d7b24;
        case 0x2d7b3cu: goto label_2d7b3c;
        case 0x2d7b58u: goto label_2d7b58;
        case 0x2d7b6cu: goto label_2d7b6c;
        case 0x2d7b84u: goto label_2d7b84;
        case 0x2d7ba0u: goto label_2d7ba0;
        case 0x2d7bb8u: goto label_2d7bb8;
        case 0x2d7bd0u: goto label_2d7bd0;
        case 0x2d7be4u: goto label_2d7be4;
        default: break;
    }

    ctx->pc = 0x2d78f0u;

    // 0x2d78f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d78f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d78f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d78fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d7900: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d7900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d7904: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d7904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2d7908: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x2d7908u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d790c: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x2d790cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x2d7910: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7914: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d7914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7918: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d791c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7920: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d7920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7924: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d7924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7928: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2D7928u;
    SET_GPR_U32(ctx, 31, 0x2D7930u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2D7928u, 0x2D7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7930u;
label_2d7930:
    // 0x2d7930: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2d7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2d7934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7938: 0x0  nop
    ctx->pc = 0x2d7938u;
    // NOP
    // 0x2d793c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d793cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d7940: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d7940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d7944: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7948: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2D7948u;
    {
        const bool branch_taken_0x2d7948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7948) {
            ctx->pc = 0x2D7A2Cu;
            goto label_2d7a2c;
        }
    }
    ctx->pc = 0x2D7950u;
label_2d7950:
    // 0x2d7950: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2d7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7954: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7954u;
    {
        const bool branch_taken_0x2d7954 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2d7954) {
            ctx->pc = 0x2D7970u;
            goto label_2d7970;
        }
    }
    ctx->pc = 0x2D795Cu;
    // 0x2d795c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2d795cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7960: 0x0  nop
    ctx->pc = 0x2d7960u;
    // NOP
    // 0x2d7964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7968u;
    {
        const bool branch_taken_0x2d7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7968) {
            ctx->pc = 0x2D798Cu;
            goto label_2d798c;
        }
    }
    ctx->pc = 0x2D7970u;
label_2d7970:
    // 0x2d7970: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2d7970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2d7974: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2d7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2d7978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d7978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d797c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d797cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7980: 0x0  nop
    ctx->pc = 0x2d7980u;
    // NOP
    // 0x2d7984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7988: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d7988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d798c:
    // 0x2d798c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d798cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7990: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x2d7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d7994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7998: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d799c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2d799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d79a0: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2D79A0u;
    SET_GPR_U32(ctx, 31, 0x2D79A8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2D79A0u, 0x2D79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79A8u;
label_2d79a8:
    // 0x2d79a8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2d79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d79ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d79b0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d79b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d79b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d79b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d79b8: 0x0  nop
    ctx->pc = 0x2d79b8u;
    // NOP
    // 0x2d79bc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2d79bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x2d79c0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2d79c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2d79c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d79c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d79c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d79cc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2d79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d79d0: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2D79D0u;
    SET_GPR_U32(ctx, 31, 0x2D79D8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2D79D0u, 0x2D79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79D8u;
label_2d79d8:
    // 0x2d79d8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2d79d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d79dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d79e0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2d79e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d79e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d79e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d79e8: 0x0  nop
    ctx->pc = 0x2d79e8u;
    // NOP
    // 0x2d79ec: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2d79ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x2d79f0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2d79f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2d79f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d79f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d79f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d79fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7a00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7a04: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7a08: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2d7a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7a0c: 0xc0b5cfc  jal         func_2D73F0
    ctx->pc = 0x2D7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A14u);
    ctx->pc = 0x2D73F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73F0u, 0x2D7A0Cu, 0x2D7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A14u;
label_2d7a14:
    // 0x2d7a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7A14u;
    {
        const bool branch_taken_0x2d7a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a14) {
            ctx->pc = 0x2D7A28u;
            goto label_2d7a28;
        }
    }
    ctx->pc = 0x2D7A1Cu;
    // 0x2d7a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7A20u;
    {
        const bool branch_taken_0x2d7a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a20) {
            ctx->pc = 0x2D7A3Cu;
            goto label_2d7a3c;
        }
    }
    ctx->pc = 0x2D7A28u;
label_2d7a28:
    // 0x2d7a28: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x2d7a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2d7a2c:
    // 0x2d7a2c: 0x2e020168  sltiu       $v0, $s0, 0x168
    ctx->pc = 0x2d7a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)360) ? 1 : 0);
    // 0x2d7a30: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2D7A30u;
    {
        const bool branch_taken_0x2d7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a30) {
            ctx->pc = 0x2D7950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7950;
        }
    }
    ctx->pc = 0x2D7A38u;
    // 0x2d7a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a3c:
    // 0x2d7a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7a44: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d7a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d7a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7A50u;
    // 0x2d7a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7a54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7a58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7A60u;
    // 0x2d7a60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d7a64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7a68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d7a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d7a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d7a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7a78: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2d7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2d7a7c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2d7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2d7a80: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d7a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7a84: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2d7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7a88: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D7A88u;
    SET_GPR_U32(ctx, 31, 0x2D7A90u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D7A88u, 0x2D7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A90u;
label_2d7a90:
    // 0x2d7a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a94: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2d7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d7a98: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D7A98u;
    {
        const bool branch_taken_0x2d7a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a98) {
            ctx->pc = 0x2D7BC0u;
            goto label_2d7bc0;
        }
    }
    ctx->pc = 0x2D7AA0u;
    // 0x2d7aa0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d7aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d7aa4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d7aa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D7AA8u;
    SET_GPR_U32(ctx, 31, 0x2D7AB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D7AA8u, 0x2D7AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AB0u;
label_2d7ab0:
    // 0x2d7ab0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d7ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ab4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d7ab8: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D7AB8u;
    {
        const bool branch_taken_0x2d7ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ab8) {
            ctx->pc = 0x2D7BE4u;
            goto label_2d7be4;
        }
    }
    ctx->pc = 0x2D7AC0u;
    // 0x2d7ac0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7ac4: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2D7AC4u;
    SET_GPR_U32(ctx, 31, 0x2D7ACCu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2D7AC4u, 0x2D7ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7ACCu;
label_2d7acc:
    // 0x2d7acc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d7accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7ad0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d7ad4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D7AD4u;
    SET_GPR_U32(ctx, 31, 0x2D7ADCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D7AD4u, 0x2D7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7ADCu;
label_2d7adc:
    // 0x2d7adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d7ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ae4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7ae8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2d7ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d7aec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d7aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7af0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7af4: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x2D7AF4u;
    SET_GPR_U32(ctx, 31, 0x2D7AFCu);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x2D7AF4u, 0x2D7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AFCu;
label_2d7afc:
    // 0x2d7afc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7AFCu;
    {
        const bool branch_taken_0x2d7afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7afc) {
            ctx->pc = 0x2D7BA8u;
            goto label_2d7ba8;
        }
    }
    ctx->pc = 0x2D7B04u;
    // 0x2d7b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b08: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2D7B08u;
    SET_GPR_U32(ctx, 31, 0x2D7B10u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2D7B08u, 0x2D7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B10u;
label_2d7b10:
    // 0x2d7b10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7B10u;
    {
        const bool branch_taken_0x2d7b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b10) {
            ctx->pc = 0x2D7B60u;
            goto label_2d7b60;
        }
    }
    ctx->pc = 0x2D7B18u;
    // 0x2d7b18: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2d7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d7b1c: 0xc048094  jal         func_120250
    ctx->pc = 0x2D7B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D7B24u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2D7B1Cu, 0x2D7B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B24u;
label_2d7b24:
    // 0x2d7b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b28: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d7b2c: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60
    ctx->pc = 0x2d7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
    // 0x2d7b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b34: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2D7B34u;
    SET_GPR_U32(ctx, 31, 0x2D7B3Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2D7B34u, 0x2D7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B3Cu;
label_2d7b3c:
    // 0x2d7b3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7b40: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2d7b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d7b44: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7b48: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d7b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b50: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2D7B50u;
    SET_GPR_U32(ctx, 31, 0x2D7B58u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2D7B50u, 0x2D7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B58u;
label_2d7b58:
    // 0x2d7b58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D7B58u;
    {
        const bool branch_taken_0x2d7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b58) {
            ctx->pc = 0x2D7BE4u;
            goto label_2d7be4;
        }
    }
    ctx->pc = 0x2D7B60u;
label_2d7b60:
    // 0x2d7b60: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2d7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d7b64: 0xc048094  jal         func_120250
    ctx->pc = 0x2D7B64u;
    SET_GPR_U32(ctx, 31, 0x2D7B6Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2D7B64u, 0x2D7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B6Cu;
label_2d7b6c:
    // 0x2d7b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b70: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d7b74: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60
    ctx->pc = 0x2d7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
    // 0x2d7b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b7c: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7B84u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2D7B7Cu, 0x2D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B84u;
label_2d7b84:
    // 0x2d7b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7b88: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2d7b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d7b8c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7b90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d7b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b98: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2D7B98u;
    SET_GPR_U32(ctx, 31, 0x2D7BA0u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2D7B98u, 0x2D7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BA0u;
label_2d7ba0:
    // 0x2d7ba0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7BA0u;
    {
        const bool branch_taken_0x2d7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ba0) {
            ctx->pc = 0x2D7BE4u;
            goto label_2d7be4;
        }
    }
    ctx->pc = 0x2D7BA8u;
label_2d7ba8:
    // 0x2d7ba8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d7ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7bac: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2d7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7bb0: 0xc0b6124  jal         func_2D8490
    ctx->pc = 0x2D7BB0u;
    SET_GPR_U32(ctx, 31, 0x2D7BB8u);
    ctx->pc = 0x2D8490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8490u, 0x2D7BB0u, 0x2D7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BB8u;
label_2d7bb8:
    // 0x2d7bb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D7BB8u;
    {
        const bool branch_taken_0x2d7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bb8) {
            ctx->pc = 0x2D7BE4u;
            goto label_2d7be4;
        }
    }
    ctx->pc = 0x2D7BC0u;
label_2d7bc0:
    // 0x2d7bc0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d7bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7bc4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d7bc8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D7BC8u;
    SET_GPR_U32(ctx, 31, 0x2D7BD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D7BC8u, 0x2D7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BD0u;
label_2d7bd0:
    // 0x2d7bd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d7bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d7bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d7bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bdc: 0xc0ad2dc  jal         func_2B4B70
    ctx->pc = 0x2D7BDCu;
    SET_GPR_U32(ctx, 31, 0x2D7BE4u);
    ctx->pc = 0x2B4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B70u, 0x2D7BDCu, 0x2D7BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BE4u;
label_2d7be4:
    // 0x2d7be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d7be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7bf8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d7bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d7bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C04u;
    // 0x2d7c04: 0x0  nop
    ctx->pc = 0x2d7c04u;
    // NOP
    // 0x2d7c08: 0x0  nop
    ctx->pc = 0x2d7c08u;
    // NOP
    // 0x2d7c0c: 0x0  nop
    ctx->pc = 0x2d7c0cu;
    // NOP
    ctx->pc = 0x2d7c10u;
}
