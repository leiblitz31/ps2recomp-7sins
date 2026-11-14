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

// Function: sub_00253830
// Address: 0x253830 - 0x253a10
void sub_00253830_0x253830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253830_0x253830");
#endif

    switch (ctx->pc) {
        case 0x253858u: goto label_253858;
        case 0x2538b4u: goto label_2538b4;
        case 0x253920u: goto label_253920;
        case 0x253970u: goto label_253970;
        default: break;
    }

    ctx->pc = 0x253830u;

    // 0x253830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x253830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x253834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253838: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x253838u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25383c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25383cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253840: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x253840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x253844: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x253844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x253848: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x253848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25384c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x25384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253850: 0xc094ecc  jal         func_253B30
    ctx->pc = 0x253850u;
    SET_GPR_U32(ctx, 31, 0x253858u);
    ctx->pc = 0x253B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B30u, 0x253850u, 0x253858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253858u;
label_253858:
    // 0x253858: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x253858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25385c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253860: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x253860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253864: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253868: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x253868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25386c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25386cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253870: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x253870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x253874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253878: 0x0  nop
    ctx->pc = 0x253878u;
    // NOP
    // 0x25387c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25387cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253880: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x253884: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x253884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x253888: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x253888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25388c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25388cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x253890: 0x1012  mflo        $v0
    ctx->pc = 0x253890u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x253894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253898: 0x0  nop
    ctx->pc = 0x253898u;
    // NOP
    // 0x25389c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25389cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2538a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2538a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2538a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2538a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2538a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2538a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2538ac: 0xc094e84  jal         func_253A10
    ctx->pc = 0x2538ACu;
    SET_GPR_U32(ctx, 31, 0x2538B4u);
    ctx->pc = 0x253A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A10u, 0x2538ACu, 0x2538B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538B4u;
label_2538b4:
    // 0x2538b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2538b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2538b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2538b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2538bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2538bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2538c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2538c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2538c4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2538c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2538c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2538c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2538cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2538ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2538d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2538d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538d4: 0x0  nop
    ctx->pc = 0x2538d4u;
    // NOP
    // 0x2538d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2538d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2538dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2538dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2538e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2538e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2538e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2538e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2538e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2538e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2538ec: 0x1012  mflo        $v0
    ctx->pc = 0x2538ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2538f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2538f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538f4: 0x0  nop
    ctx->pc = 0x2538f4u;
    // NOP
    // 0x2538f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2538f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2538fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2538fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253900: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x253900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x253904: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253908: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x253908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25390c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253910: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x253910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253914: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x253914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253918: 0xc094ecc  jal         func_253B30
    ctx->pc = 0x253918u;
    SET_GPR_U32(ctx, 31, 0x253920u);
    ctx->pc = 0x253B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B30u, 0x253918u, 0x253920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253920u;
label_253920:
    // 0x253920: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x253920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253924: 0x0  nop
    ctx->pc = 0x253924u;
    // NOP
    // 0x253928: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x253928u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x25392c: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x25392cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x253930: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253934: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x253934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x253938: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x253938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25393c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253940: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253944: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x253944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253948: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25394c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253950: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x253950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x253954: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x253954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253958: 0xc4550008  lwc1        $f21, 0x8($v0)
    ctx->pc = 0x253958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25395c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253960: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x253960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253964: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x253964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253968: 0xc094e84  jal         func_253A10
    ctx->pc = 0x253968u;
    SET_GPR_U32(ctx, 31, 0x253970u);
    ctx->pc = 0x253A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A10u, 0x253968u, 0x253970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253970u;
label_253970:
    // 0x253970: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x253970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253974: 0x0  nop
    ctx->pc = 0x253974u;
    // NOP
    // 0x253978: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x253978u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x25397c: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x25397cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x253980: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x253980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253984: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x253984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x253988: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x253988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25398c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x25398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253990: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x253990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253994: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x253994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25399c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x25399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2539a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2539a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2539a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2539a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2539a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2539ac: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2539acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2539b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2539b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2539b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2539b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2539b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2539bc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2539bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2539c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2539c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2539c4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2539c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2539c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2539cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2539ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2539d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2539d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2539d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2539d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2539d8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2539d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2539dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2539dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2539e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2539e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539e4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2539e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2539e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2539e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2539ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2539ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2539f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2539f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2539f4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2539f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2539f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2539f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2539fc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2539fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253a00: 0x3e00008  jr          $ra
    ctx->pc = 0x253A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253A08u;
    // 0x253a08: 0x0  nop
    ctx->pc = 0x253a08u;
    // NOP
    // 0x253a0c: 0x0  nop
    ctx->pc = 0x253a0cu;
    // NOP
    ctx->pc = 0x253a10u;
}
