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

// Function: sub_0018F090
// Address: 0x18f090 - 0x18f480
void sub_0018F090_0x18f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F090_0x18f090");
#endif

    switch (ctx->pc) {
        case 0x18f378u: goto label_18f378;
        case 0x18f388u: goto label_18f388;
        case 0x18f3a0u: goto label_18f3a0;
        case 0x18f3c4u: goto label_18f3c4;
        case 0x18f3f8u: goto label_18f3f8;
        case 0x18f464u: goto label_18f464;
        default: break;
    }

    ctx->pc = 0x18f090u;

    // 0x18f090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18f094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f0a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x18f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x18f0a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18f0ac: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x18f0acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x18f0b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f0b8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x18f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18f0bc: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x18F0BCu;
    {
        const bool branch_taken_0x18f0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0bc) {
            ctx->pc = 0x18F25Cu;
            goto label_18f25c;
        }
    }
    ctx->pc = 0x18F0C4u;
    // 0x18f0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f0c8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F0C8u;
    {
        const bool branch_taken_0x18f0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f0c8) {
            ctx->pc = 0x18F140u;
            goto label_18f140;
        }
    }
    ctx->pc = 0x18F0D0u;
    // 0x18f0d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f0d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F0D4u;
    {
        const bool branch_taken_0x18f0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f0d4) {
            ctx->pc = 0x18F0E4u;
            goto label_18f0e4;
        }
    }
    ctx->pc = 0x18F0DCu;
    // 0x18f0dc: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x18F0DCu;
    {
        const bool branch_taken_0x18f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0dc) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F0E4u;
label_18f0e4:
    // 0x18f0e4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f0e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f0ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18f0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f0f0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x18f0f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f0f4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f0f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f0fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18f0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f100: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f104: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x18f104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18f108: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f10c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x18f110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18f114: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x18f114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18f118: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f11c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f120: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18f120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f124: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f128: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x18F128u;
    {
        const bool branch_taken_0x18f128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f128) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F130u;
    // 0x18f130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f134: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x18f134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f138: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x18F138u;
    {
        const bool branch_taken_0x18f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f138) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F140u;
label_18f140:
    // 0x18f140: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f144: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f148: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f14c: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x18f14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f150: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F150u;
    {
        const bool branch_taken_0x18f150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f150) {
            ctx->pc = 0x18F16Cu;
            goto label_18f16c;
        }
    }
    ctx->pc = 0x18F158u;
    // 0x18f158: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f15c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18f15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f160: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18f160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18f164: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F164u;
    {
        const bool branch_taken_0x18f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f164) {
            ctx->pc = 0x18F17Cu;
            goto label_18f17c;
        }
    }
    ctx->pc = 0x18F16Cu;
label_18f16c:
    // 0x18f16c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f170: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f174: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18f174u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18f178: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18f178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_18f17c:
    // 0x18f17c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f180: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f184: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x18f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f188: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18f18c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x18f18cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f194: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f198: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f19c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18f1a0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1ac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f1b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f1b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18f1b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18f1b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f1bc: 0x0  nop
    ctx->pc = 0x18f1bcu;
    // NOP
    // 0x18f1c0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x18f1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18f1c4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18F1C4u;
    {
        const bool branch_taken_0x18f1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1c4) {
            ctx->pc = 0x18F1F0u;
            goto label_18f1f0;
        }
    }
    ctx->pc = 0x18F1CCu;
    // 0x18f1cc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1d0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f1d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f1d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18f1d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x18f1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f1dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18f1e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18F1E8u;
    {
        const bool branch_taken_0x18f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1e8) {
            ctx->pc = 0x18F238u;
            goto label_18f238;
        }
    }
    ctx->pc = 0x18F1F0u;
label_18f1f0:
    // 0x18f1f0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f1f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f200: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f204: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f204u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18f208: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18f208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f20c: 0x0  nop
    ctx->pc = 0x18f20cu;
    // NOP
    // 0x18f210: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x18f210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18f214: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F214u;
    {
        const bool branch_taken_0x18f214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f214) {
            ctx->pc = 0x18F238u;
            goto label_18f238;
        }
    }
    ctx->pc = 0x18F21Cu;
    // 0x18f21c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f220: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f224: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18f228: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x18f228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f22c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f230: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f234: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18f234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_18f238:
    // 0x18f238: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f23c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f240: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f244: 0x12230041  beq         $s1, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f250: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x18f250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f254: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x18F254u;
    {
        const bool branch_taken_0x18f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f254) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F25Cu;
label_18f25c:
    // 0x18f25c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f260: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f264: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f268: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x18f268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x18f26c: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x18f26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f270: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F270u;
    {
        const bool branch_taken_0x18f270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f270) {
            ctx->pc = 0x18F28Cu;
            goto label_18f28c;
        }
    }
    ctx->pc = 0x18F278u;
    // 0x18f278: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f27c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f280: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18f284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F284u;
    {
        const bool branch_taken_0x18f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f284) {
            ctx->pc = 0x18F29Cu;
            goto label_18f29c;
        }
    }
    ctx->pc = 0x18F28Cu;
label_18f28c:
    // 0x18f28c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f290: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f294: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18f294u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18f298: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18f29c:
    // 0x18f29c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f2a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f2a8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x18f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18f2b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f2b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18f2b8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f2c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f2c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2c8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f2ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2d0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18F2D0u;
    {
        const bool branch_taken_0x18f2d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f2d0) {
            ctx->pc = 0x18F2F4u;
            goto label_18f2f4;
        }
    }
    ctx->pc = 0x18F2D8u;
    // 0x18f2d8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2e0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f2e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18f2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18f2ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18F2ECu;
    {
        const bool branch_taken_0x18f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2ec) {
            ctx->pc = 0x18F328u;
            goto label_18f328;
        }
    }
    ctx->pc = 0x18F2F4u;
label_18f2f4:
    // 0x18f2f4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f2f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f2fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f300: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f304: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f30c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18F30Cu;
    {
        const bool branch_taken_0x18f30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f30c) {
            ctx->pc = 0x18F328u;
            goto label_18f328;
        }
    }
    ctx->pc = 0x18F314u;
    // 0x18f314: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f318: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f31c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f320: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f324: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18f324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_18f328:
    // 0x18f328: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x18f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f32c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f334: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f338: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18f338u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f33c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18F33Cu;
    {
        const bool branch_taken_0x18f33c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f33c) {
            ctx->pc = 0x18F34Cu;
            goto label_18f34c;
        }
    }
    ctx->pc = 0x18F344u;
    // 0x18f344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f348: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x18f348u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18f34c:
    // 0x18f34c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F34Cu;
    {
        const bool branch_taken_0x18f34c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f34c) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F354u;
    // 0x18f354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f35c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x18f360: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18f364: 0x24a55a20  addiu       $a1, $a1, 0x5A20
    ctx->pc = 0x18f364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
    // 0x18f368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f36c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18f36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f370: 0xc08f558  jal         func_23D560
    ctx->pc = 0x18F370u;
    SET_GPR_U32(ctx, 31, 0x18F378u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x18F370u, 0x18F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F378u;
label_18f378:
    // 0x18f378: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f37c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x18f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f380: 0xc063d20  jal         func_18F480
    ctx->pc = 0x18F380u;
    SET_GPR_U32(ctx, 31, 0x18F388u);
    ctx->pc = 0x18F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F480u, 0x18F380u, 0x18F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F388u;
label_18f388:
    // 0x18f388: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f38c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18f390: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18f390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18f394: 0x24a55928  addiu       $a1, $a1, 0x5928
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22824));
    // 0x18f398: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x18F398u;
    SET_GPR_U32(ctx, 31, 0x18F3A0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x18F398u, 0x18F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3A0u;
label_18f3a0:
    // 0x18f3a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F3A0u;
    {
        const bool branch_taken_0x18f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f3a0) {
            ctx->pc = 0x18F3C4u;
            goto label_18f3c4;
        }
    }
    ctx->pc = 0x18F3A8u;
    // 0x18f3a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f3ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f3b0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x18f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x18f3b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f3b8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x18f3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f3bc: 0xc08f770  jal         func_23DDC0
    ctx->pc = 0x18F3BCu;
    SET_GPR_U32(ctx, 31, 0x18F3C4u);
    ctx->pc = 0x23DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DDC0u, 0x18F3BCu, 0x18F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3C4u;
label_18f3c4:
    // 0x18f3c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f3c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f3d4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x18f3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F3E0u;
    // 0x18f3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f3e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18f3ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f3f0: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x18F3F0u;
    SET_GPR_U32(ctx, 31, 0x18F3F8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x18F3F0u, 0x18F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3F8u;
label_18f3f8:
    // 0x18f3f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f3fc: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x18f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f404: 0x0  nop
    ctx->pc = 0x18f404u;
    // NOP
    // 0x18f408: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18f408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f40c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x18F40Cu;
    {
        const bool branch_taken_0x18f40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f40c) {
            ctx->pc = 0x18F464u;
            goto label_18f464;
        }
    }
    ctx->pc = 0x18F414u;
    // 0x18f414: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x18f414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x18f418: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x18f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f41c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f420: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x18f420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f424: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18f424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f428: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x18f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x18f42c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f430: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x18f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f438: 0x0  nop
    ctx->pc = 0x18f438u;
    // NOP
    // 0x18f43c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f440: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18F440u;
    {
        const bool branch_taken_0x18f440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f440) {
            ctx->pc = 0x18F464u;
            goto label_18f464;
        }
    }
    ctx->pc = 0x18F448u;
    // 0x18f448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f44c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f450: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x18f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x18f454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f45c: 0xc125d14  jal         func_497450
    ctx->pc = 0x18F45Cu;
    SET_GPR_U32(ctx, 31, 0x18F464u);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x18F45Cu, 0x18F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F464u;
label_18f464:
    // 0x18f464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f468: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F474u;
    // 0x18f474: 0x0  nop
    ctx->pc = 0x18f474u;
    // NOP
    // 0x18f478: 0x0  nop
    ctx->pc = 0x18f478u;
    // NOP
    // 0x18f47c: 0x0  nop
    ctx->pc = 0x18f47cu;
    // NOP
    ctx->pc = 0x18f480u;
}
