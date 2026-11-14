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

// Function: sub_001C2F10
// Address: 0x1c2f10 - 0x1c31c0
void sub_001C2F10_0x1c2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2F10_0x1c2f10");
#endif

    switch (ctx->pc) {
        case 0x1c2f48u: goto label_1c2f48;
        case 0x1c2fe8u: goto label_1c2fe8;
        case 0x1c30c0u: goto label_1c30c0;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c314cu: goto label_1c314c;
        case 0x1c3158u: goto label_1c3158;
        case 0x1c317cu: goto label_1c317c;
        default: break;
    }

    ctx->pc = 0x1c2f10u;

    // 0x1c2f10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c2f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c2f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c2f18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c2f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c2f1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c2f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c2f20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c2f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c2f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2f28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c2f28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c2f2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c2f2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c2f30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c2f34: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1c2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1c2f38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c2f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f40: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1C2F40u;
    {
        const bool branch_taken_0x1c2f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f40) {
            ctx->pc = 0x1C3180u;
            goto label_1c3180;
        }
    }
    ctx->pc = 0x1C2F48u;
label_1c2f48:
    // 0x1c2f48: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2f4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c2f50: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2f54: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2f5c: 0x24700100  addiu       $s0, $v1, 0x100
    ctx->pc = 0x1c2f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1c2f60: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c2f64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c2f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2f68: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c2f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2f6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c2f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2f70: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x1C2F70u;
    {
        const bool branch_taken_0x1c2f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2f70) {
            ctx->pc = 0x1C317Cu;
            goto label_1c317c;
        }
    }
    ctx->pc = 0x1C2F78u;
    // 0x1c2f78: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2f7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c2f80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2f84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2f8c: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1c2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2f90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2f94: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c2f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2f98: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1c2f98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c2f9c: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1c2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2fa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c2fa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c2fa4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c2fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c2fa8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1c2fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2fb0: 0x0  nop
    ctx->pc = 0x1c2fb0u;
    // NOP
    // 0x1c2fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2fb8: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x1C2FB8u;
    {
        const bool branch_taken_0x1c2fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2fb8) {
            ctx->pc = 0x1C312Cu;
            goto label_1c312c;
        }
    }
    ctx->pc = 0x1C2FC0u;
    // 0x1c2fc0: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1c2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2fcc: 0x0  nop
    ctx->pc = 0x1c2fccu;
    // NOP
    // 0x1c2fd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c2fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2fd4: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x1C2FD4u;
    {
        const bool branch_taken_0x1c2fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2fd4) {
            ctx->pc = 0x1C312Cu;
            goto label_1c312c;
        }
    }
    ctx->pc = 0x1C2FDCu;
    // 0x1c2fdc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2fe0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C2FE0u;
    SET_GPR_U32(ctx, 31, 0x1C2FE8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C2FE0u, 0x1C2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FE8u;
label_1c2fe8:
    // 0x1c2fe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c2fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2ff0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1c2ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2ff4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2FF4u;
    {
        const bool branch_taken_0x1c2ff4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c2ff4) {
            ctx->pc = 0x1C3010u;
            goto label_1c3010;
        }
    }
    ctx->pc = 0x1C2FFCu;
    // 0x1c2ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3000: 0x0  nop
    ctx->pc = 0x1c3000u;
    // NOP
    // 0x1c3004: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x1c3004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1c3008: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3008u;
    {
        const bool branch_taken_0x1c3008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3008) {
            ctx->pc = 0x1C302Cu;
            goto label_1c302c;
        }
    }
    ctx->pc = 0x1C3010u;
label_1c3010:
    // 0x1c3010: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c3010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c3014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3018: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c3018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c301c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c301cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3020: 0x0  nop
    ctx->pc = 0x1c3020u;
    // NOP
    // 0x1c3024: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x1c3024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1c3028: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x1c3028u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_1c302c:
    // 0x1c302c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c3030: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1c3030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1c3034: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3034u;
    {
        const bool branch_taken_0x1c3034 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3034) {
            ctx->pc = 0x1C3050u;
            goto label_1c3050;
        }
    }
    ctx->pc = 0x1C303Cu;
    // 0x1c303c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c303cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3040: 0x0  nop
    ctx->pc = 0x1c3040u;
    // NOP
    // 0x1c3044: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x1c3044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1c3048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3048u;
    {
        const bool branch_taken_0x1c3048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3048) {
            ctx->pc = 0x1C306Cu;
            goto label_1c306c;
        }
    }
    ctx->pc = 0x1C3050u;
label_1c3050:
    // 0x1c3050: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c3050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c3054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3058: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c3058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c305c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c305cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3060: 0x0  nop
    ctx->pc = 0x1c3060u;
    // NOP
    // 0x1c3064: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x1c3064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1c3068: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1c3068u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_1c306c:
    // 0x1c306c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c3070: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c3070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1c3074: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3074u;
    {
        const bool branch_taken_0x1c3074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3074) {
            ctx->pc = 0x1C3090u;
            goto label_1c3090;
        }
    }
    ctx->pc = 0x1C307Cu;
    // 0x1c307c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c307cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3080: 0x0  nop
    ctx->pc = 0x1c3080u;
    // NOP
    // 0x1c3084: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1c3084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1c3088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3088u;
    {
        const bool branch_taken_0x1c3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3088) {
            ctx->pc = 0x1C30ACu;
            goto label_1c30ac;
        }
    }
    ctx->pc = 0x1C3090u;
label_1c3090:
    // 0x1c3090: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c3094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c3098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c309c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c309cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c30a0: 0x0  nop
    ctx->pc = 0x1c30a0u;
    // NOP
    // 0x1c30a4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1c30a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1c30a8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1c30a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_1c30ac:
    // 0x1c30ac: 0xc78182e0  lwc1        $f1, -0x7D20($gp)
    ctx->pc = 0x1c30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c30b0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c30b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1c30b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c30b8: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1C30B8u;
    SET_GPR_U32(ctx, 31, 0x1C30C0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1C30B8u, 0x1C30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30C0u;
label_1c30c0:
    // 0x1c30c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c30c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c30c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1c30c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1c30cc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1c30ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1c30d0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1c30d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c30d4: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x1c30d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x1c30d8: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x1C30D8u;
    SET_GPR_U32(ctx, 31, 0x1C30E0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1C30D8u, 0x1C30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30E0u;
label_1c30e0:
    // 0x1c30e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c30e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c30e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c30e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c30e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c30ec: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30f0: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1c30f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c30f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c30f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c30f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c30fc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3100: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x1c3100u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c3104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3108: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c3108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c310c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3110: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3114: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c3118: 0xc0705c4  jal         func_1C1710
    ctx->pc = 0x1C3118u;
    SET_GPR_U32(ctx, 31, 0x1C3120u);
    ctx->pc = 0x1C1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1710u, 0x1C3118u, 0x1C3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3120u;
label_1c3120:
    // 0x1c3120: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c3124: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C317Cu;
            goto label_1c317c;
        }
    }
    ctx->pc = 0x1C312Cu;
label_1c312c:
    // 0x1c312c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3130: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C3130u, 0x1C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c313c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c313cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3144: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1C3144u;
    SET_GPR_U32(ctx, 31, 0x1C314Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1C3144u, 0x1C314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C314Cu;
label_1c314c:
    // 0x1c314c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3150: 0xc06e5e0  jal         func_1B9780
    ctx->pc = 0x1C3150u;
    SET_GPR_U32(ctx, 31, 0x1C3158u);
    ctx->pc = 0x1B9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9780u, 0x1C3150u, 0x1C3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3158u;
label_1c3158:
    // 0x1c3158: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c3158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c315c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c3160: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3164: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c3164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c316c: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x1c316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1c3170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3174: 0xc070c70  jal         func_1C31C0
    ctx->pc = 0x1C3174u;
    SET_GPR_U32(ctx, 31, 0x1C317Cu);
    ctx->pc = 0x1C31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C31C0u, 0x1C3174u, 0x1C317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317Cu;
label_1c317c:
    // 0x1c317c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c317cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3180:
    // 0x1c3180: 0x2e230064  sltiu       $v1, $s1, 0x64
    ctx->pc = 0x1c3180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c3184: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x1C3184u;
    {
        const bool branch_taken_0x1c3184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3184) {
            ctx->pc = 0x1C2F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2f48;
        }
    }
    ctx->pc = 0x1C318Cu;
    // 0x1c318c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c318cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3190: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c3190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3194: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c3194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3198: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c319c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c319cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31a0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c31a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c31a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c31a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c31ac: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c31acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c31b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31B8u;
    // 0x1c31b8: 0x0  nop
    ctx->pc = 0x1c31b8u;
    // NOP
    // 0x1c31bc: 0x0  nop
    ctx->pc = 0x1c31bcu;
    // NOP
    ctx->pc = 0x1c31c0u;
}
