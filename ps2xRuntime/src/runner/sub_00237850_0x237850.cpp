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

// Function: sub_00237850
// Address: 0x237850 - 0x237a90
void sub_00237850_0x237850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237850_0x237850");
#endif

    ctx->pc = 0x237850u;

    // 0x237850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237854: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x237858: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x237858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23785c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237860: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x237864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237868: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x237868u;
    {
        const bool branch_taken_0x237868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237868) {
            ctx->pc = 0x2378B0u;
            goto label_2378b0;
        }
    }
    ctx->pc = 0x237870u;
    // 0x237870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237874: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x237874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x237878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237878u;
    {
        const bool branch_taken_0x237878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237878) {
            ctx->pc = 0x237898u;
            goto label_237898;
        }
    }
    ctx->pc = 0x237880u;
    // 0x237880: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x237884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237888: 0x0  nop
    ctx->pc = 0x237888u;
    // NOP
    // 0x23788c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237890u;
    {
        const bool branch_taken_0x237890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237890) {
            ctx->pc = 0x2378A4u;
            goto label_2378a4;
        }
    }
    ctx->pc = 0x237898u;
label_237898:
    // 0x237898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23789c: 0x0  nop
    ctx->pc = 0x23789cu;
    // NOP
    // 0x2378a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2378a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2378a4:
    // 0x2378a4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2378a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2378a8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2378A8u;
    {
        const bool branch_taken_0x2378a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2378a8) {
            ctx->pc = 0x237A78u;
            goto label_237a78;
        }
    }
    ctx->pc = 0x2378B0u;
label_2378b0:
    // 0x2378b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2378b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2378b4: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2378b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2378b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2378bc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2378BCu;
    {
        const bool branch_taken_0x2378bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2378bc) {
            ctx->pc = 0x237904u;
            goto label_237904;
        }
    }
    ctx->pc = 0x2378C4u;
    // 0x2378c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2378c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2378c8: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x2378cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2378CCu;
    {
        const bool branch_taken_0x2378cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2378cc) {
            ctx->pc = 0x2378ECu;
            goto label_2378ec;
        }
    }
    ctx->pc = 0x2378D4u;
    // 0x2378d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2378d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2378d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2378d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378dc: 0x0  nop
    ctx->pc = 0x2378dcu;
    // NOP
    // 0x2378e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2378e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2378e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2378E4u;
    {
        const bool branch_taken_0x2378e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2378e4) {
            ctx->pc = 0x2378F8u;
            goto label_2378f8;
        }
    }
    ctx->pc = 0x2378ECu;
label_2378ec:
    // 0x2378ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2378ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378f0: 0x0  nop
    ctx->pc = 0x2378f0u;
    // NOP
    // 0x2378f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2378f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2378f8:
    // 0x2378f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2378f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2378fc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2378FCu;
    {
        const bool branch_taken_0x2378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2378fc) {
            ctx->pc = 0x237A78u;
            goto label_237a78;
        }
    }
    ctx->pc = 0x237904u;
label_237904:
    // 0x237904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237908: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x237908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x23790c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237910: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x237910u;
    {
        const bool branch_taken_0x237910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237910) {
            ctx->pc = 0x2379A8u;
            goto label_2379a8;
        }
    }
    ctx->pc = 0x237918u;
    // 0x237918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237918u;
    {
        const bool branch_taken_0x237918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237918) {
            ctx->pc = 0x237928u;
            goto label_237928;
        }
    }
    ctx->pc = 0x237920u;
    // 0x237920: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x237920u;
    {
        const bool branch_taken_0x237920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237920) {
            ctx->pc = 0x237A24u;
            goto label_237a24;
        }
    }
    ctx->pc = 0x237928u;
label_237928:
    // 0x237928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23792c: 0x2c41004e  sltiu       $at, $v0, 0x4E
    ctx->pc = 0x23792cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
    // 0x237930: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x237930u;
    {
        const bool branch_taken_0x237930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x237930) {
            ctx->pc = 0x237940u;
            goto label_237940;
        }
    }
    ctx->pc = 0x237938u;
    // 0x237938: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x23793c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x23793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_237940:
    // 0x237940: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x237940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x237944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237948: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x237948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23794c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23794Cu;
    {
        const bool branch_taken_0x23794c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23794c) {
            ctx->pc = 0x237968u;
            goto label_237968;
        }
    }
    ctx->pc = 0x237954u;
    // 0x237954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237958: 0x0  nop
    ctx->pc = 0x237958u;
    // NOP
    // 0x23795c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23795cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x237960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x237960u;
    {
        const bool branch_taken_0x237960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237960) {
            ctx->pc = 0x237984u;
            goto label_237984;
        }
    }
    ctx->pc = 0x237968u;
label_237968:
    // 0x237968: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23796c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x237970: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x237974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237978: 0x0  nop
    ctx->pc = 0x237978u;
    // NOP
    // 0x23797c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23797cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x237980: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x237980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_237984:
    // 0x237984: 0x3c02429a  lui         $v0, 0x429A
    ctx->pc = 0x237984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17050 << 16));
    // 0x237988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23798c: 0x0  nop
    ctx->pc = 0x23798cu;
    // NOP
    // 0x237990: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x237990u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x237994: 0x0  nop
    ctx->pc = 0x237994u;
    // NOP
    // 0x237998: 0x0  nop
    ctx->pc = 0x237998u;
    // NOP
    // 0x23799c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2379a0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2379A0u;
    {
        const bool branch_taken_0x2379a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379a0) {
            ctx->pc = 0x237A74u;
            goto label_237a74;
        }
    }
    ctx->pc = 0x2379A8u;
label_2379a8:
    // 0x2379a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2379ac: 0x2c4100b1  sltiu       $at, $v0, 0xB1
    ctx->pc = 0x2379acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)177) ? 1 : 0);
    // 0x2379b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2379B0u;
    {
        const bool branch_taken_0x2379b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379b0) {
            ctx->pc = 0x2379C0u;
            goto label_2379c0;
        }
    }
    ctx->pc = 0x2379B8u;
    // 0x2379b8: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x2379b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2379bc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2379c0:
    // 0x2379c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2379c4: 0x2442ff4f  addiu       $v0, $v0, -0xB1
    ctx->pc = 0x2379c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967119));
    // 0x2379c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2379C8u;
    {
        const bool branch_taken_0x2379c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2379c8) {
            ctx->pc = 0x2379E4u;
            goto label_2379e4;
        }
    }
    ctx->pc = 0x2379D0u;
    // 0x2379d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2379d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2379d4: 0x0  nop
    ctx->pc = 0x2379d4u;
    // NOP
    // 0x2379d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2379d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2379dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2379DCu;
    {
        const bool branch_taken_0x2379dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379dc) {
            ctx->pc = 0x237A00u;
            goto label_237a00;
        }
    }
    ctx->pc = 0x2379E4u;
label_2379e4:
    // 0x2379e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2379e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2379e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2379ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2379ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2379f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2379f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2379f4: 0x0  nop
    ctx->pc = 0x2379f4u;
    // NOP
    // 0x2379f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2379f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2379fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2379fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_237a00:
    // 0x237a00: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x237a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x237a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a08: 0x0  nop
    ctx->pc = 0x237a08u;
    // NOP
    // 0x237a0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x237a0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x237a10: 0x0  nop
    ctx->pc = 0x237a10u;
    // NOP
    // 0x237a14: 0x0  nop
    ctx->pc = 0x237a14u;
    // NOP
    // 0x237a18: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x237a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x237a1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x237A1Cu;
    {
        const bool branch_taken_0x237a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a1c) {
            ctx->pc = 0x237A74u;
            goto label_237a74;
        }
    }
    ctx->pc = 0x237A24u;
label_237a24:
    // 0x237a24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237a28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237A28u;
    {
        const bool branch_taken_0x237a28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237a28) {
            ctx->pc = 0x237A44u;
            goto label_237a44;
        }
    }
    ctx->pc = 0x237A30u;
    // 0x237a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a34: 0x0  nop
    ctx->pc = 0x237a34u;
    // NOP
    // 0x237a38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x237a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x237a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x237A3Cu;
    {
        const bool branch_taken_0x237a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a3c) {
            ctx->pc = 0x237A60u;
            goto label_237a60;
        }
    }
    ctx->pc = 0x237A44u;
label_237a44:
    // 0x237a44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x237a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x237a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x237a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a54: 0x0  nop
    ctx->pc = 0x237a54u;
    // NOP
    // 0x237a58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x237a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x237a5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x237a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_237a60:
    // 0x237a60: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x237a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a68: 0x0  nop
    ctx->pc = 0x237a68u;
    // NOP
    // 0x237a6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x237a6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x237a70: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x237a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_237a74:
    // 0x237a74: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x237a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237a78:
    // 0x237a78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x237A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A84u;
    // 0x237a84: 0x0  nop
    ctx->pc = 0x237a84u;
    // NOP
    // 0x237a88: 0x0  nop
    ctx->pc = 0x237a88u;
    // NOP
    // 0x237a8c: 0x0  nop
    ctx->pc = 0x237a8cu;
    // NOP
    ctx->pc = 0x237a90u;
}
