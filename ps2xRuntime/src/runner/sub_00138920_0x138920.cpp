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

// Function: sub_00138920
// Address: 0x138920 - 0x138c20
void sub_00138920_0x138920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138920_0x138920");
#endif

    switch (ctx->pc) {
        case 0x138964u: goto label_138964;
        case 0x138b2cu: goto label_138b2c;
        case 0x138b34u: goto label_138b34;
        case 0x138b48u: goto label_138b48;
        case 0x138b64u: goto label_138b64;
        case 0x138b74u: goto label_138b74;
        case 0x138b9cu: goto label_138b9c;
        case 0x138ba4u: goto label_138ba4;
        case 0x138bb8u: goto label_138bb8;
        case 0x138bccu: goto label_138bcc;
        case 0x138be0u: goto label_138be0;
        default: break;
    }

    ctx->pc = 0x138920u;

    // 0x138920: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x138920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x138924: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x138924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x138928: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x138928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13892c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x138930: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138934: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x138938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13893c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138944: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x138944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x138948: 0xa3a500b0  sb          $a1, 0xB0($sp)
    ctx->pc = 0x138948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 5));
    // 0x13894c: 0x9382ba6c  lbu         $v0, -0x4594($gp)
    ctx->pc = 0x13894cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949484)));
    // 0x138950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x138950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138954: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x138954u;
    {
        const bool branch_taken_0x138954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138954) {
            ctx->pc = 0x138B74u;
            goto label_138b74;
        }
    }
    ctx->pc = 0x13895Cu;
    // 0x13895c: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x13895Cu;
    SET_GPR_U32(ctx, 31, 0x138964u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x13895Cu, 0x138964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138964u;
label_138964:
    // 0x138964: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x138968: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13896c: 0x8e350010  lw          $s5, 0x10($s1)
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x138970: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x138974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138978: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138978u;
    {
        const bool branch_taken_0x138978 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x138978) {
            ctx->pc = 0x138994u;
            goto label_138994;
        }
    }
    ctx->pc = 0x138980u;
    // 0x138980: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x138980u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138984: 0x0  nop
    ctx->pc = 0x138984u;
    // NOP
    // 0x138988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13898c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13898Cu;
    {
        const bool branch_taken_0x13898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13898c) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x138994u;
label_138994:
    // 0x138994: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x138998: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x138998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x13899c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13899cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1389a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1389a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1389a4: 0x0  nop
    ctx->pc = 0x1389a4u;
    // NOP
    // 0x1389a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1389a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1389ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1389acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1389b0:
    // 0x1389b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1389b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1389b4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1389b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1389b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1389b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1389bc: 0x0  nop
    ctx->pc = 0x1389bcu;
    // NOP
    // 0x1389c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1389c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1389c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1389c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1389c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1389c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1389cc: 0x0  nop
    ctx->pc = 0x1389ccu;
    // NOP
    // 0x1389d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1389d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1389d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1389D4u;
    {
        const bool branch_taken_0x1389d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1389d4) {
            ctx->pc = 0x1389ECu;
            goto label_1389ec;
        }
    }
    ctx->pc = 0x1389DCu;
    // 0x1389dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1389dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1389e0: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x1389e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x1389e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1389E4u;
    {
        const bool branch_taken_0x1389e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389e4) {
            ctx->pc = 0x138A00u;
            goto label_138a00;
        }
    }
    ctx->pc = 0x1389ECu;
label_1389ec:
    // 0x1389ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1389ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1389f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1389f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1389f4: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x1389f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x1389f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1389fc: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1389fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_138a00:
    // 0x138a00: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x138a04: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x138a04u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x138a08: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138A08u;
    {
        const bool branch_taken_0x138a08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x138a08) {
            ctx->pc = 0x138A24u;
            goto label_138a24;
        }
    }
    ctx->pc = 0x138A10u;
    // 0x138a10: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x138a10u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a14: 0x0  nop
    ctx->pc = 0x138a14u;
    // NOP
    // 0x138a18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x138a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138a1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138A1Cu;
    {
        const bool branch_taken_0x138a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a1c) {
            ctx->pc = 0x138A40u;
            goto label_138a40;
        }
    }
    ctx->pc = 0x138A24u;
label_138a24:
    // 0x138a24: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x138a28: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x138a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x138a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x138a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a34: 0x0  nop
    ctx->pc = 0x138a34u;
    // NOP
    // 0x138a38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x138a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138a3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x138a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_138a40:
    // 0x138a40: 0xc7808c68  lwc1        $f0, -0x7398($gp)
    ctx->pc = 0x138a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138a44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x138a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x138a48: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x138a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x138a4c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x138a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138a50: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x138a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x138a54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a58: 0x0  nop
    ctx->pc = 0x138a58u;
    // NOP
    // 0x138a5c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x138a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138a60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x138a64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x138a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138a68: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x138a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138a6c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138A6Cu;
    {
        const bool branch_taken_0x138a6c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x138a6c) {
            ctx->pc = 0x138A88u;
            goto label_138a88;
        }
    }
    ctx->pc = 0x138A74u;
    // 0x138a74: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x138a74u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a78: 0x0  nop
    ctx->pc = 0x138a78u;
    // NOP
    // 0x138a7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x138a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138a80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138A80u;
    {
        const bool branch_taken_0x138a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a80) {
            ctx->pc = 0x138AA4u;
            goto label_138aa4;
        }
    }
    ctx->pc = 0x138A88u;
label_138a88:
    // 0x138a88: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x138a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x138a8c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x138a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x138a90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x138a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138a98: 0x0  nop
    ctx->pc = 0x138a98u;
    // NOP
    // 0x138a9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x138a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138aa0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x138aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_138aa4:
    // 0x138aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138aa8: 0x0  nop
    ctx->pc = 0x138aa8u;
    // NOP
    // 0x138aac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x138aacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x138ab0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x138ab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x138ab4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x138ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x138ab8: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x138AB8u;
    {
        const bool branch_taken_0x138ab8 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x138ab8) {
            ctx->pc = 0x138AD4u;
            goto label_138ad4;
        }
    }
    ctx->pc = 0x138AC0u;
    // 0x138ac0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x138ac0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138ac4: 0x0  nop
    ctx->pc = 0x138ac4u;
    // NOP
    // 0x138ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138acc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138ACCu;
    {
        const bool branch_taken_0x138acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138acc) {
            ctx->pc = 0x138AF0u;
            goto label_138af0;
        }
    }
    ctx->pc = 0x138AD4u;
label_138ad4:
    // 0x138ad4: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x138ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x138ad8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x138ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x138adc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x138adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138ae4: 0x0  nop
    ctx->pc = 0x138ae4u;
    // NOP
    // 0x138ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138aec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x138aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_138af0:
    // 0x138af0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x138af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x138af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138afc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x138afcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138b00: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B00u;
    {
        const bool branch_taken_0x138b00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b00) {
            ctx->pc = 0x138B18u;
            goto label_138b18;
        }
    }
    ctx->pc = 0x138B08u;
    // 0x138b08: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x138b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x138b0c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x138b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x138b10: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x138B10u;
    {
        const bool branch_taken_0x138b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b10) {
            ctx->pc = 0x138B74u;
            goto label_138b74;
        }
    }
    ctx->pc = 0x138B18u;
label_138b18:
    // 0x138b18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x138b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x138b1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x138b20: 0x24a52710  addiu       $a1, $a1, 0x2710
    ctx->pc = 0x138b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10000));
    // 0x138b24: 0xc040304  jal         func_100C10
    ctx->pc = 0x138B24u;
    SET_GPR_U32(ctx, 31, 0x138B2Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x138B24u, 0x138B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B2Cu;
label_138b2c:
    // 0x138b2c: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x138B2Cu;
    SET_GPR_U32(ctx, 31, 0x138B34u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x138B2Cu, 0x138B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B34u;
label_138b34:
    // 0x138b34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b38: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x138b3c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x138b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x138b40: 0xc089a88  jal         func_226A20
    ctx->pc = 0x138B40u;
    SET_GPR_U32(ctx, 31, 0x138B48u);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x138B40u, 0x138B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B48u;
label_138b48:
    // 0x138b48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b50: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x138b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x138b54: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x138b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b5c: 0xc04e598  jal         func_139660
    ctx->pc = 0x138B5Cu;
    SET_GPR_U32(ctx, 31, 0x138B64u);
    ctx->pc = 0x139660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139660u, 0x138B5Cu, 0x138B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B64u;
label_138b64:
    // 0x138b64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x138b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x138b68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138b6c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x138B6Cu;
    SET_GPR_U32(ctx, 31, 0x138B74u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x138B6Cu, 0x138B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B74u;
label_138b74:
    // 0x138b74: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x138b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x138b78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138b80: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x138B80u;
    {
        const bool branch_taken_0x138b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x138b80) {
            ctx->pc = 0x138BD4u;
            goto label_138bd4;
        }
    }
    ctx->pc = 0x138B88u;
    // 0x138b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138b8c: 0xa382ba68  sb          $v0, -0x4598($gp)
    ctx->pc = 0x138b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949480), (uint8_t)GPR_U32(ctx, 2));
    // 0x138b90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x138b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138b94: 0xc04f974  jal         func_13E5D0
    ctx->pc = 0x138B94u;
    SET_GPR_U32(ctx, 31, 0x138B9Cu);
    ctx->pc = 0x13E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5D0u, 0x138B94u, 0x138B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B9Cu;
label_138b9c:
    // 0x138b9c: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x138B9Cu;
    SET_GPR_U32(ctx, 31, 0x138BA4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x138B9Cu, 0x138BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BA4u;
label_138ba4:
    // 0x138ba4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138ba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ba8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x138ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x138bac: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x138bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x138bb0: 0xc089a88  jal         func_226A20
    ctx->pc = 0x138BB0u;
    SET_GPR_U32(ctx, 31, 0x138BB8u);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x138BB0u, 0x138BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BB8u;
label_138bb8:
    // 0x138bb8: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x138bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x138bbc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x138bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x138bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc4: 0xc1226f4  jal         func_489BD0
    ctx->pc = 0x138BC4u;
    SET_GPR_U32(ctx, 31, 0x138BCCu);
    ctx->pc = 0x489BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489BD0u, 0x138BC4u, 0x138BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BCCu;
label_138bcc:
    // 0x138bcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138BCCu;
    {
        const bool branch_taken_0x138bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138bcc) {
            ctx->pc = 0x138BE0u;
            goto label_138be0;
        }
    }
    ctx->pc = 0x138BD4u;
label_138bd4:
    // 0x138bd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x138bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138bd8: 0xc04f974  jal         func_13E5D0
    ctx->pc = 0x138BD8u;
    SET_GPR_U32(ctx, 31, 0x138BE0u);
    ctx->pc = 0x13E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5D0u, 0x138BD8u, 0x138BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BE0u;
label_138be0:
    // 0x138be0: 0x93a400b0  lbu         $a0, 0xB0($sp)
    ctx->pc = 0x138be0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x138be4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x138be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x138be8: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x138be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x138bec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x138becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138bf0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x138bf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138bf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138bf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138bf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138c0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x138c10: 0x3e00008  jr          $ra
    ctx->pc = 0x138C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138C18u;
    // 0x138c18: 0x0  nop
    ctx->pc = 0x138c18u;
    // NOP
    // 0x138c1c: 0x0  nop
    ctx->pc = 0x138c1cu;
    // NOP
    ctx->pc = 0x138c20u;
}
