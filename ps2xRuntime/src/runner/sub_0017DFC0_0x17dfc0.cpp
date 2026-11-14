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

// Function: sub_0017DFC0
// Address: 0x17dfc0 - 0x17e350
void sub_0017DFC0_0x17dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DFC0_0x17dfc0");
#endif

    switch (ctx->pc) {
        case 0x17e000u: goto label_17e000;
        case 0x17e010u: goto label_17e010;
        case 0x17e020u: goto label_17e020;
        case 0x17e084u: goto label_17e084;
        case 0x17e098u: goto label_17e098;
        case 0x17e0ccu: goto label_17e0cc;
        case 0x17e0e4u: goto label_17e0e4;
        case 0x17e12cu: goto label_17e12c;
        case 0x17e150u: goto label_17e150;
        case 0x17e178u: goto label_17e178;
        case 0x17e190u: goto label_17e190;
        case 0x17e19cu: goto label_17e19c;
        case 0x17e1b0u: goto label_17e1b0;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e1d8u: goto label_17e1d8;
        case 0x17e238u: goto label_17e238;
        case 0x17e248u: goto label_17e248;
        case 0x17e254u: goto label_17e254;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e27cu: goto label_17e27c;
        case 0x17e28cu: goto label_17e28c;
        case 0x17e29cu: goto label_17e29c;
        case 0x17e2b4u: goto label_17e2b4;
        case 0x17e2c8u: goto label_17e2c8;
        case 0x17e2dcu: goto label_17e2dc;
        case 0x17e2f8u: goto label_17e2f8;
        case 0x17e308u: goto label_17e308;
        case 0x17e318u: goto label_17e318;
        default: break;
    }

    ctx->pc = 0x17dfc0u;

    // 0x17dfc0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x17dfc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17dfc8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17dfcc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17dfd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17dfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17dfd4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17dfd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17dfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17dfdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17dfe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17dfe4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17dfe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17dfe8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x17dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x17dfec: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x17dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x17dff0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17dff4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17dff8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x17DFF8u;
    SET_GPR_U32(ctx, 31, 0x17E000u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x17DFF8u, 0x17E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E000u;
label_17e000:
    // 0x17e000: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17e000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e008: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x17E008u;
    SET_GPR_U32(ctx, 31, 0x17E010u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x17E008u, 0x17E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E010u;
label_17e010:
    // 0x17e010: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17e010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e014: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17e014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e018: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x17E018u;
    {
        const bool branch_taken_0x17e018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e018) {
            ctx->pc = 0x17E17Cu;
            goto label_17e17c;
        }
    }
    ctx->pc = 0x17E020u;
label_17e020:
    // 0x17e020: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e024: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e02c: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x17e02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x17e030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e034: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17E034u;
    {
        const bool branch_taken_0x17e034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e034) {
            ctx->pc = 0x17E070u;
            goto label_17e070;
        }
    }
    ctx->pc = 0x17E03Cu;
    // 0x17e03c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e040: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E040u;
    {
        const bool branch_taken_0x17e040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e040) {
            ctx->pc = 0x17E064u;
            goto label_17e064;
        }
    }
    ctx->pc = 0x17E048u;
    // 0x17e048: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E048u;
    {
        const bool branch_taken_0x17e048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e048) {
            ctx->pc = 0x17E058u;
            goto label_17e058;
        }
    }
    ctx->pc = 0x17E050u;
    // 0x17e050: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17E050u;
    {
        const bool branch_taken_0x17e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e050) {
            ctx->pc = 0x17E178u;
            goto label_17e178;
        }
    }
    ctx->pc = 0x17E058u;
label_17e058:
    // 0x17e058: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e05c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17E05Cu;
    {
        const bool branch_taken_0x17e05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e05c) {
            ctx->pc = 0x17E074u;
            goto label_17e074;
        }
    }
    ctx->pc = 0x17E064u;
label_17e064:
    // 0x17e064: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E068u;
    {
        const bool branch_taken_0x17e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e068) {
            ctx->pc = 0x17E074u;
            goto label_17e074;
        }
    }
    ctx->pc = 0x17E070u;
label_17e070:
    // 0x17e070: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17e074:
    // 0x17e074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e07c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17E07Cu;
    SET_GPR_U32(ctx, 31, 0x17E084u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17E07Cu, 0x17E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E084u;
label_17e084:
    // 0x17e084: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x17e084u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e090: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17E090u;
    SET_GPR_U32(ctx, 31, 0x17E098u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17E090u, 0x17E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E098u;
label_17e098:
    // 0x17e098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e09c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x17e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e0a0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e0a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17e0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e0a8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x17e0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e0b0: 0x0  nop
    ctx->pc = 0x17e0b0u;
    // NOP
    // 0x17e0b4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x17e0b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17e0b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e0bc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17e0c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0c4: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17E0C4u;
    SET_GPR_U32(ctx, 31, 0x17E0CCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17E0C4u, 0x17E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0CCu;
label_17e0cc:
    // 0x17e0cc: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x17e0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e0d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e0d4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17e0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0dc: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17E0DCu;
    SET_GPR_U32(ctx, 31, 0x17E0E4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17E0DCu, 0x17E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0E4u;
label_17e0e4:
    // 0x17e0e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e0e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e0f0: 0x0  nop
    ctx->pc = 0x17e0f0u;
    // NOP
    // 0x17e0f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17e0f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e0f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17E0F8u;
    {
        const bool branch_taken_0x17e0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e0f8) {
            ctx->pc = 0x17E118u;
            goto label_17e118;
        }
    }
    ctx->pc = 0x17E100u;
    // 0x17e100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e108: 0x0  nop
    ctx->pc = 0x17e108u;
    // NOP
    // 0x17e10c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17e10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x17e110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17E110u;
    {
        const bool branch_taken_0x17e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e110) {
            ctx->pc = 0x17E134u;
            goto label_17e134;
        }
    }
    ctx->pc = 0x17E118u;
label_17e118:
    // 0x17e118: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e11c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17e120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e124: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17E124u;
    SET_GPR_U32(ctx, 31, 0x17E12Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17E124u, 0x17E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E12Cu;
label_17e12c:
    // 0x17e12c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e130: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17e130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_17e134:
    // 0x17e134: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x17e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e138: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17e138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x17e13c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e140: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17e144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17e144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e148: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E148u;
    SET_GPR_U32(ctx, 31, 0x17E150u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E148u, 0x17E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E150u;
label_17e150:
    // 0x17e150: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e154: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e158: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e15c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17e15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e160: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17e164: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x17e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e16c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17e16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e170: 0xc08c544  jal         func_231510
    ctx->pc = 0x17E170u;
    SET_GPR_U32(ctx, 31, 0x17E178u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x17E170u, 0x17E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E178u;
label_17e178:
    // 0x17e178: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17e17c:
    // 0x17e17c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x17e17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e180: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x17E180u;
    {
        const bool branch_taken_0x17e180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e180) {
            ctx->pc = 0x17E020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e020;
        }
    }
    ctx->pc = 0x17E188u;
    // 0x17e188: 0xc08ef64  jal         func_23BD90
    ctx->pc = 0x17E188u;
    SET_GPR_U32(ctx, 31, 0x17E190u);
    ctx->pc = 0x23BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD90u, 0x17E188u, 0x17E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E190u;
label_17e190:
    // 0x17e190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e194: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x17E194u;
    SET_GPR_U32(ctx, 31, 0x17E19Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x17E194u, 0x17E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E19Cu;
label_17e19c:
    // 0x17e19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e1a0: 0x1043005d  beq         $v0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x17E1A0u;
    {
        const bool branch_taken_0x17e1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e1a0) {
            ctx->pc = 0x17E318u;
            goto label_17e318;
        }
    }
    ctx->pc = 0x17E1A8u;
    // 0x17e1a8: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x17E1A8u;
    SET_GPR_U32(ctx, 31, 0x17E1B0u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x17E1A8u, 0x17E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1B0u;
label_17e1b0:
    // 0x17e1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b4: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x17E1B4u;
    SET_GPR_U32(ctx, 31, 0x17E1BCu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x17E1B4u, 0x17E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1BCu;
label_17e1bc:
    // 0x17e1bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e1c0: 0x10430055  beq         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x17E1C0u;
    {
        const bool branch_taken_0x17e1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e1c0) {
            ctx->pc = 0x17E318u;
            goto label_17e318;
        }
    }
    ctx->pc = 0x17E1C8u;
    // 0x17e1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17e1d0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17E1D0u;
    SET_GPR_U32(ctx, 31, 0x17E1D8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17E1D0u, 0x17E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1D8u;
label_17e1d8:
    // 0x17e1d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e1dc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e1e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17e1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e1e8: 0x0  nop
    ctx->pc = 0x17e1e8u;
    // NOP
    // 0x17e1ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17e1ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e1f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17E1F0u;
    {
        const bool branch_taken_0x17e1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e1f0) {
            ctx->pc = 0x17E208u;
            goto label_17e208;
        }
    }
    ctx->pc = 0x17E1F8u;
    // 0x17e1f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17e1f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17e1fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x17e1fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17e200: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E200u;
    {
        const bool branch_taken_0x17e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e200) {
            ctx->pc = 0x17E21Cu;
            goto label_17e21c;
        }
    }
    ctx->pc = 0x17E208u;
label_17e208:
    // 0x17e208: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17e208u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17e20c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17e20cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17e210: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x17e210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17e214: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17e218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17e218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17e21c:
    // 0x17e21c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e220: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x17e220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x17e224: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17e228: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17e228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17e22c: 0x24a55020  addiu       $a1, $a1, 0x5020
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20512));
    // 0x17e230: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17E230u;
    SET_GPR_U32(ctx, 31, 0x17E238u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17E230u, 0x17E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E238u;
label_17e238:
    // 0x17e238: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e23c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e240: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x17E240u;
    SET_GPR_U32(ctx, 31, 0x17E248u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x17E240u, 0x17E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E248u;
label_17e248:
    // 0x17e248: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e24c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x17E24Cu;
    SET_GPR_U32(ctx, 31, 0x17E254u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x17E24Cu, 0x17E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E254u;
label_17e254:
    // 0x17e254: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e258: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x17e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e25c: 0x24450094  addiu       $a1, $v0, 0x94
    ctx->pc = 0x17e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x17e260: 0x278690f0  addiu       $a2, $gp, -0x6F10
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938864));
    // 0x17e264: 0xc05f8d4  jal         func_17E350
    ctx->pc = 0x17E264u;
    SET_GPR_U32(ctx, 31, 0x17E26Cu);
    ctx->pc = 0x17E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E350u, 0x17E264u, 0x17E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E26Cu;
label_17e26c:
    // 0x17e26c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e270: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e274: 0xc1195a4  jal         func_465690
    ctx->pc = 0x17E274u;
    SET_GPR_U32(ctx, 31, 0x17E27Cu);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x17E274u, 0x17E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E27Cu;
label_17e27c:
    // 0x17e27c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x17e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x17e280: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e284: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x17E284u;
    SET_GPR_U32(ctx, 31, 0x17E28Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x17E284u, 0x17E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E28Cu;
label_17e28c:
    // 0x17e28c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x17e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e290: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17e294: 0xc059640  jal         func_165900
    ctx->pc = 0x17E294u;
    SET_GPR_U32(ctx, 31, 0x17E29Cu);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x17E294u, 0x17E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E29Cu;
label_17e29c:
    // 0x17e29c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17e29cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2a0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x17e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e2a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e2ac: 0xc059668  jal         func_1659A0
    ctx->pc = 0x17E2ACu;
    SET_GPR_U32(ctx, 31, 0x17E2B4u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x17E2ACu, 0x17E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2B4u;
label_17e2b4:
    // 0x17e2b4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x17e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e2b8: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e2bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17e2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c0: 0xc059698  jal         func_165A60
    ctx->pc = 0x17E2C0u;
    SET_GPR_U32(ctx, 31, 0x17E2C8u);
    ctx->pc = 0x165A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A60u, 0x17E2C0u, 0x17E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2C8u;
label_17e2c8:
    // 0x17e2c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e2cc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17e2d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e2d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17E2D4u;
    SET_GPR_U32(ctx, 31, 0x17E2DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17E2D4u, 0x17E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2DCu;
label_17e2dc:
    // 0x17e2dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e2e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17e2e4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17e2e8: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e2ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e2f0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17E2F0u;
    SET_GPR_U32(ctx, 31, 0x17E2F8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17E2F0u, 0x17E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2F8u;
label_17e2f8:
    // 0x17e2f8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17e2fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e300: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17E300u;
    SET_GPR_U32(ctx, 31, 0x17E308u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17E300u, 0x17E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E308u;
label_17e308:
    // 0x17e308: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x17e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x17e30c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e310: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17E310u;
    SET_GPR_U32(ctx, 31, 0x17E318u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17E310u, 0x17E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E318u;
label_17e318:
    // 0x17e318: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17e318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e31c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17e31cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e320: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17e320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e324: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17e324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e328: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17e328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e32c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e338: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e33c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x17e33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17e340: 0x3e00008  jr          $ra
    ctx->pc = 0x17E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E348u;
    // 0x17e348: 0x0  nop
    ctx->pc = 0x17e348u;
    // NOP
    // 0x17e34c: 0x0  nop
    ctx->pc = 0x17e34cu;
    // NOP
    ctx->pc = 0x17e350u;
}
