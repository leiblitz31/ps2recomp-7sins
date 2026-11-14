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

// Function: sub_0017CCB0
// Address: 0x17ccb0 - 0x17d780
void sub_0017CCB0_0x17ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCB0_0x17ccb0");
#endif

    switch (ctx->pc) {
        case 0x17cd04u: goto label_17cd04;
        case 0x17cd90u: goto label_17cd90;
        case 0x17cda8u: goto label_17cda8;
        case 0x17ce24u: goto label_17ce24;
        case 0x17ce48u: goto label_17ce48;
        case 0x17ce68u: goto label_17ce68;
        case 0x17ce88u: goto label_17ce88;
        case 0x17ce9cu: goto label_17ce9c;
        case 0x17ceb4u: goto label_17ceb4;
        case 0x17cf04u: goto label_17cf04;
        case 0x17cf34u: goto label_17cf34;
        case 0x17cf70u: goto label_17cf70;
        case 0x17cf84u: goto label_17cf84;
        case 0x17cfb0u: goto label_17cfb0;
        case 0x17cfc4u: goto label_17cfc4;
        case 0x17cfecu: goto label_17cfec;
        case 0x17d018u: goto label_17d018;
        case 0x17d034u: goto label_17d034;
        case 0x17d048u: goto label_17d048;
        case 0x17d05cu: goto label_17d05c;
        case 0x17d084u: goto label_17d084;
        case 0x17d0b4u: goto label_17d0b4;
        case 0x17d0ccu: goto label_17d0cc;
        case 0x17d0e0u: goto label_17d0e0;
        case 0x17d0f8u: goto label_17d0f8;
        case 0x17d164u: goto label_17d164;
        case 0x17d174u: goto label_17d174;
        case 0x17d188u: goto label_17d188;
        case 0x17d198u: goto label_17d198;
        case 0x17d1e0u: goto label_17d1e0;
        case 0x17d20cu: goto label_17d20c;
        case 0x17d220u: goto label_17d220;
        case 0x17d22cu: goto label_17d22c;
        case 0x17d240u: goto label_17d240;
        case 0x17d26cu: goto label_17d26c;
        case 0x17d29cu: goto label_17d29c;
        case 0x17d2b8u: goto label_17d2b8;
        case 0x17d2c4u: goto label_17d2c4;
        case 0x17d2e0u: goto label_17d2e0;
        case 0x17d2ecu: goto label_17d2ec;
        case 0x17d300u: goto label_17d300;
        case 0x17d31cu: goto label_17d31c;
        case 0x17d350u: goto label_17d350;
        case 0x17d36cu: goto label_17d36c;
        case 0x17d384u: goto label_17d384;
        case 0x17d39cu: goto label_17d39c;
        case 0x17d3b0u: goto label_17d3b0;
        case 0x17d3e8u: goto label_17d3e8;
        case 0x17d3f8u: goto label_17d3f8;
        case 0x17d404u: goto label_17d404;
        case 0x17d440u: goto label_17d440;
        case 0x17d450u: goto label_17d450;
        case 0x17d46cu: goto label_17d46c;
        case 0x17d47cu: goto label_17d47c;
        case 0x17d498u: goto label_17d498;
        case 0x17d4a8u: goto label_17d4a8;
        case 0x17d4c4u: goto label_17d4c4;
        case 0x17d4d4u: goto label_17d4d4;
        case 0x17d4f0u: goto label_17d4f0;
        case 0x17d500u: goto label_17d500;
        case 0x17d51cu: goto label_17d51c;
        case 0x17d52cu: goto label_17d52c;
        case 0x17d548u: goto label_17d548;
        case 0x17d558u: goto label_17d558;
        case 0x17d56cu: goto label_17d56c;
        case 0x17d588u: goto label_17d588;
        case 0x17d59cu: goto label_17d59c;
        case 0x17d5c0u: goto label_17d5c0;
        case 0x17d5ecu: goto label_17d5ec;
        case 0x17d62cu: goto label_17d62c;
        case 0x17d654u: goto label_17d654;
        case 0x17d688u: goto label_17d688;
        case 0x17d6acu: goto label_17d6ac;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d6fcu: goto label_17d6fc;
        case 0x17d710u: goto label_17d710;
        case 0x17d728u: goto label_17d728;
        case 0x17d738u: goto label_17d738;
        default: break;
    }

    ctx->pc = 0x17ccb0u;

    // 0x17ccb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x17ccb4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17ccb8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17ccbc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17ccc0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17ccc4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17ccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17ccc8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17cccc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17ccd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17ccd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ccd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ccdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17ccdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17cce0: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x17cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x17cce4: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x17cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x17cce8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ccec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ccecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ccf0: 0x0  nop
    ctx->pc = 0x17ccf0u;
    // NOP
    // 0x17ccf4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17ccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17ccf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ccf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccfc: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x17CCFCu;
    {
        const bool branch_taken_0x17ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ccfc) {
            ctx->pc = 0x17D324u;
            goto label_17d324;
        }
    }
    ctx->pc = 0x17CD04u;
label_17cd04:
    // 0x17cd04: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17cd08: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x17cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cd0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x17cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17cd10: 0x8c720088  lw          $s2, 0x88($v1)
    ctx->pc = 0x17cd10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x17cd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd18: 0x12430012  beq         $s2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17CD18u;
    {
        const bool branch_taken_0x17cd18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17cd18) {
            ctx->pc = 0x17CD64u;
            goto label_17cd64;
        }
    }
    ctx->pc = 0x17CD20u;
    // 0x17cd20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17cd24: 0x1244000a  beq         $s2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CD24u;
    {
        const bool branch_taken_0x17cd24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x17cd24) {
            ctx->pc = 0x17CD50u;
            goto label_17cd50;
        }
    }
    ctx->pc = 0x17CD2Cu;
    // 0x17cd2c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CD2Cu;
    {
        const bool branch_taken_0x17cd2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd2c) {
            ctx->pc = 0x17CD3Cu;
            goto label_17cd3c;
        }
    }
    ctx->pc = 0x17CD34u;
    // 0x17cd34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17CD34u;
    {
        const bool branch_taken_0x17cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd34) {
            ctx->pc = 0x17CD78u;
            goto label_17cd78;
        }
    }
    ctx->pc = 0x17CD3Cu;
label_17cd3c:
    // 0x17cd3c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17cd40: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd44: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x17cd44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17cd48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17CD48u;
    {
        const bool branch_taken_0x17cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd48) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD50u;
label_17cd50:
    // 0x17cd50: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x17cd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17cd54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x17cd54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd58: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x17cd58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17cd5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CD5Cu;
    {
        const bool branch_taken_0x17cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd5c) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD64u;
label_17cd64:
    // 0x17cd64: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17cd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17cd68: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x17cd68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cd6c: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x17cd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17cd70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CD70u;
    {
        const bool branch_taken_0x17cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd70) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD78u;
label_17cd78:
    // 0x17cd78: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x17CD78u;
    {
        const bool branch_taken_0x17cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd78) {
            ctx->pc = 0x17D73Cu;
            goto label_17d73c;
        }
    }
    ctx->pc = 0x17CD80u;
label_17cd80:
    // 0x17cd80: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x17cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17cd84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd88: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17CD88u;
    SET_GPR_U32(ctx, 31, 0x17CD90u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17CD88u, 0x17CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD90u;
label_17cd90:
    // 0x17cd90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cd94: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x17cd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x17cd98: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x17cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17cd9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cda0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17CDA0u;
    SET_GPR_U32(ctx, 31, 0x17CDA8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17CDA0u, 0x17CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDA8u;
label_17cda8:
    // 0x17cda8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cdac: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x17cdacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17cdb0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cdb4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x17cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cdb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17cdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cdbc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x17cdc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cdc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cdc4: 0x0  nop
    ctx->pc = 0x17cdc4u;
    // NOP
    // 0x17cdc8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17cdc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17cdcc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x17cdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x17cdd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x17cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x17cdd4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17cdd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cdd8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x17cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cde0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17CDE0u;
    {
        const bool branch_taken_0x17cde0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cde0) {
            ctx->pc = 0x17CE00u;
            goto label_17ce00;
        }
    }
    ctx->pc = 0x17CDE8u;
    // 0x17cde8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cdf0: 0x0  nop
    ctx->pc = 0x17cdf0u;
    // NOP
    // 0x17cdf4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x17cdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x17cdf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CDF8u;
    {
        const bool branch_taken_0x17cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cdf8) {
            ctx->pc = 0x17CE08u;
            goto label_17ce08;
        }
    }
    ctx->pc = 0x17CE00u;
label_17ce00:
    // 0x17ce00: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x17ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ce04: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x17ce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_17ce08:
    // 0x17ce08: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x17ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ce0c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x17ce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x17ce10: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17ce14: 0x24a40068  addiu       $a0, $a1, 0x68
    ctx->pc = 0x17ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x17ce18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce1c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17CE1Cu;
    SET_GPR_U32(ctx, 31, 0x17CE24u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17CE1Cu, 0x17CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE24u;
label_17ce24:
    // 0x17ce24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ce28: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x17ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ce2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x17ce2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ce30: 0x4501013b  bc1t        . + 4 + (0x13B << 2)
    ctx->pc = 0x17CE30u;
    {
        const bool branch_taken_0x17ce30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ce30) {
            ctx->pc = 0x17D320u;
            goto label_17d320;
        }
    }
    ctx->pc = 0x17CE38u;
    // 0x17ce38: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17ce3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce40: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17CE40u;
    SET_GPR_U32(ctx, 31, 0x17CE48u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17CE40u, 0x17CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE48u;
label_17ce48:
    // 0x17ce48: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x17ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ce4c: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x17ce4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x17ce50: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x17CE50u;
    {
        const bool branch_taken_0x17ce50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce50) {
            ctx->pc = 0x17D020u;
            goto label_17d020;
        }
    }
    ctx->pc = 0x17CE58u;
    // 0x17ce58: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17ce5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ce5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce60: 0xc040a90  jal         func_102A40
    ctx->pc = 0x17CE60u;
    SET_GPR_U32(ctx, 31, 0x17CE68u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x17CE60u, 0x17CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE68u;
label_17ce68:
    // 0x17ce68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ce6c: 0xa0a00020  sb          $zero, 0x20($a1)
    ctx->pc = 0x17ce6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ce70: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17ce74: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x17ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17ce78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17CE80u;
    SET_GPR_U32(ctx, 31, 0x17CE88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17CE80u, 0x17CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE88u;
label_17ce88:
    // 0x17ce88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ce8c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17ce90: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17ce94: 0xc08c910  jal         func_232440
    ctx->pc = 0x17CE94u;
    SET_GPR_U32(ctx, 31, 0x17CE9Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17CE94u, 0x17CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE9Cu;
label_17ce9c:
    // 0x17ce9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ce9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cea0: 0x0  nop
    ctx->pc = 0x17cea0u;
    // NOP
    // 0x17cea4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17cea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x17cea8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17CEACu;
    {
        const bool branch_taken_0x17ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ceac) {
            ctx->pc = 0x17CF50u;
            goto label_17cf50;
        }
    }
    ctx->pc = 0x17CEB4u;
label_17ceb4:
    // 0x17ceb4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17ceb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ceb8: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x17ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x17cebc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CEBCu;
    {
        const bool branch_taken_0x17cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cebc) {
            ctx->pc = 0x17CEDCu;
            goto label_17cedc;
        }
    }
    ctx->pc = 0x17CEC4u;
    // 0x17cec4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x17cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x17cec8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cecc: 0x0  nop
    ctx->pc = 0x17ceccu;
    // NOP
    // 0x17ced0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x17ced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x17ced4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17CED4u;
    {
        const bool branch_taken_0x17ced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ced4) {
            ctx->pc = 0x17CEE8u;
            goto label_17cee8;
        }
    }
    ctx->pc = 0x17CEDCu;
label_17cedc:
    // 0x17cedc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cedcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cee0: 0x0  nop
    ctx->pc = 0x17cee0u;
    // NOP
    // 0x17cee4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x17cee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_17cee8:
    // 0x17cee8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x17cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ceec: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x17ceecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x17cef0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cef4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17cef8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17cef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cefc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17CEFCu;
    SET_GPR_U32(ctx, 31, 0x17CF04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17CEFCu, 0x17CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF04u;
label_17cf04:
    // 0x17cf04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cf08: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cf0c: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x17cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x17cf10: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x17cf10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17cf14: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17cf18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17cf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cf1c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x17cf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17cf20: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x17cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17cf24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17cf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cf28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf2c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17CF2Cu;
    SET_GPR_U32(ctx, 31, 0x17CF34u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17CF2Cu, 0x17CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF34u;
label_17cf34:
    // 0x17cf34: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x17cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf38: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x17cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x17cf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf40: 0x0  nop
    ctx->pc = 0x17cf40u;
    // NOP
    // 0x17cf44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17cf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf48: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x17cf4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17cf4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17cf50:
    // 0x17cf50: 0x2ec2000c  sltiu       $v0, $s6, 0xC
    ctx->pc = 0x17cf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x17cf54: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17CF54u;
    {
        const bool branch_taken_0x17cf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cf54) {
            ctx->pc = 0x17CEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ceb4;
        }
    }
    ctx->pc = 0x17CF5Cu;
    // 0x17cf5c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cf60: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17cf64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17CF68u;
    SET_GPR_U32(ctx, 31, 0x17CF70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17CF68u, 0x17CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cf74: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cf78: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17cf7c: 0xc08c910  jal         func_232440
    ctx->pc = 0x17CF7Cu;
    SET_GPR_U32(ctx, 31, 0x17CF84u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17CF7Cu, 0x17CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF84u;
label_17cf84:
    // 0x17cf84: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x17cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17cf88: 0xdf8290e8  ld          $v0, -0x6F18($gp)
    ctx->pc = 0x17cf88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x17cf8c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x17cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x17cf90: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x17cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cf94: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x17cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x17cf98: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x17cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x17cf9c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cfa0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17cfa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfa8: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17CFA8u;
    SET_GPR_U32(ctx, 31, 0x17CFB0u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17CFA8u, 0x17CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFB0u;
label_17cfb0:
    // 0x17cfb0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cfb4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x17cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cfb8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x17cfb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17cfbc: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x17CFBCu;
    SET_GPR_U32(ctx, 31, 0x17CFC4u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x17CFBCu, 0x17CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFC4u;
label_17cfc4:
    // 0x17cfc4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x17cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x17cfc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cfcc: 0x0  nop
    ctx->pc = 0x17cfccu;
    // NOP
    // 0x17cfd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17cfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cfd4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x17cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x17cfd8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cfdc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17cfe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17CFE4u;
    SET_GPR_U32(ctx, 31, 0x17CFECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17CFE4u, 0x17CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFECu;
label_17cfec:
    // 0x17cfec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cff0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17cff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17cff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17cff8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17cffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d000: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17d004: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x17d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17d008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d00c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d010: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17D010u;
    SET_GPR_U32(ctx, 31, 0x17D018u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17D010u, 0x17D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D018u;
label_17d018:
    // 0x17d018: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17D018u;
    {
        const bool branch_taken_0x17d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d018) {
            ctx->pc = 0x17D084u;
            goto label_17d084;
        }
    }
    ctx->pc = 0x17D020u;
label_17d020:
    // 0x17d020: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d024: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17d024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17d028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d02c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D02Cu;
    SET_GPR_U32(ctx, 31, 0x17D034u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D02Cu, 0x17D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D034u;
label_17d034:
    // 0x17d034: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d038: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d03c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d040: 0xc08c910  jal         func_232440
    ctx->pc = 0x17D040u;
    SET_GPR_U32(ctx, 31, 0x17D048u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17D040u, 0x17D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D048u;
label_17d048:
    // 0x17d048: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d04c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17d050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d054: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D054u;
    SET_GPR_U32(ctx, 31, 0x17D05Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D054u, 0x17D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D05Cu;
label_17d05c:
    // 0x17d05c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d060: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17d068: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17d068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17d06c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17d070: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x17d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17d078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d07c: 0xc08c544  jal         func_231510
    ctx->pc = 0x17D07Cu;
    SET_GPR_U32(ctx, 31, 0x17D084u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x17D07Cu, 0x17D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D084u;
label_17d084:
    // 0x17d084: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x17d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d088: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x17d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x17d08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d090: 0x0  nop
    ctx->pc = 0x17d090u;
    // NOP
    // 0x17d094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d098: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x17D098u;
    {
        const bool branch_taken_0x17d098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d098) {
            ctx->pc = 0x17D2A4u;
            goto label_17d2a4;
        }
    }
    ctx->pc = 0x17D0A0u;
    // 0x17d0a0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d0a4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17d0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D0ACu;
    SET_GPR_U32(ctx, 31, 0x17D0B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D0ACu, 0x17D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0B4u;
label_17d0b4:
    // 0x17d0b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d0b8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d0bc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d0c0: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x17d0c4: 0xc08c744  jal         func_231D10
    ctx->pc = 0x17D0C4u;
    SET_GPR_U32(ctx, 31, 0x17D0CCu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x17D0C4u, 0x17D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0CCu;
label_17d0cc:
    // 0x17d0cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d0d0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17d0d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D0D8u;
    SET_GPR_U32(ctx, 31, 0x17D0E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D0D8u, 0x17D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0E0u;
label_17d0e0:
    // 0x17d0e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d0e4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d0e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d0ec: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17d0f0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x17D0F0u;
    SET_GPR_U32(ctx, 31, 0x17D0F8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x17D0F0u, 0x17D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0F8u;
label_17d0f8:
    // 0x17d0f8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0fc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x17d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d100: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17d100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d104: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17d108: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17d10c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17d10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17d110: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x17d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d114: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x17d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d11c: 0x0  nop
    ctx->pc = 0x17d11cu;
    // NOP
    // 0x17d120: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x17d120u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x17d124: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x17d124u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x17d128: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17d128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x17d12c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17d130: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17d134: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x17d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d138: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x17d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d140: 0x0  nop
    ctx->pc = 0x17d140u;
    // NOP
    // 0x17d144: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x17d144u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x17d148: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x17d148u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x17d14c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17d150: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d154: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d15c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D15Cu;
    SET_GPR_U32(ctx, 31, 0x17D164u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D15Cu, 0x17D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D164u;
label_17d164:
    // 0x17d164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d168: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x17d16c: 0xc084400  jal         func_211000
    ctx->pc = 0x17D16Cu;
    SET_GPR_U32(ctx, 31, 0x17D174u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x17D16Cu, 0x17D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D174u;
label_17d174:
    // 0x17d174: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d178: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d180: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D180u;
    SET_GPR_U32(ctx, 31, 0x17D188u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D180u, 0x17D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D188u;
label_17d188:
    // 0x17d188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d18c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x17d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17d190: 0xc084410  jal         func_211040
    ctx->pc = 0x17D190u;
    SET_GPR_U32(ctx, 31, 0x17D198u);
    ctx->pc = 0x211040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211040u, 0x17D190u, 0x17D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D198u;
label_17d198:
    // 0x17d198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17d19c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d1a0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x17d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d1a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17d1a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d1a8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x17d1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1b0: 0x0  nop
    ctx->pc = 0x17d1b0u;
    // NOP
    // 0x17d1b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17d1b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17d1b8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x17d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x17d1bc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x17d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d1c0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x17d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17d1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d1c8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x17d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x17d1cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d1d0: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1d8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D1D8u;
    SET_GPR_U32(ctx, 31, 0x17D1E0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D1D8u, 0x17D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1E0u;
label_17d1e0:
    // 0x17d1e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x17d1e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17d1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17d1e8: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x17d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d1ec: 0xc7818044  lwc1        $f1, -0x7FBC($gp)
    ctx->pc = 0x17d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d1f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1f4: 0x0  nop
    ctx->pc = 0x17d1f4u;
    // NOP
    // 0x17d1f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x17d1f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x17d1fc: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x17d1fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x17d200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d204: 0xc084434  jal         func_2110D0
    ctx->pc = 0x17D204u;
    SET_GPR_U32(ctx, 31, 0x17D20Cu);
    ctx->pc = 0x2110D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110D0u, 0x17D204u, 0x17D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D20Cu;
label_17d20c:
    // 0x17d20c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d210: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d218: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D218u;
    SET_GPR_U32(ctx, 31, 0x17D220u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D218u, 0x17D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D220u;
label_17d220:
    // 0x17d220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d224: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x17D224u;
    SET_GPR_U32(ctx, 31, 0x17D22Cu);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x17D224u, 0x17D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D22Cu;
label_17d22c:
    // 0x17d22c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d230: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17d234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d238: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17D238u;
    SET_GPR_U32(ctx, 31, 0x17D240u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17D238u, 0x17D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D240u;
label_17d240:
    // 0x17d240: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d248: 0x0  nop
    ctx->pc = 0x17d248u;
    // NOP
    // 0x17d24c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d250: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x17D250u;
    {
        const bool branch_taken_0x17d250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d250) {
            ctx->pc = 0x17D2ECu;
            goto label_17d2ec;
        }
    }
    ctx->pc = 0x17D258u;
    // 0x17d258: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d25c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17d260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d264: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17D264u;
    SET_GPR_U32(ctx, 31, 0x17D26Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17D264u, 0x17D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D26Cu;
label_17d26c:
    // 0x17d26c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d270: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x17d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x17d274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d278: 0x0  nop
    ctx->pc = 0x17d278u;
    // NOP
    // 0x17d27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d280: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x17D280u;
    {
        const bool branch_taken_0x17d280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d280) {
            ctx->pc = 0x17D2ECu;
            goto label_17d2ec;
        }
    }
    ctx->pc = 0x17D288u;
    // 0x17d288: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d28c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d294: 0xc08cc40  jal         func_233100
    ctx->pc = 0x17D294u;
    SET_GPR_U32(ctx, 31, 0x17D29Cu);
    ctx->pc = 0x233100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233100u, 0x17D294u, 0x17D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D29Cu;
label_17d29c:
    // 0x17d29c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D29Cu;
    {
        const bool branch_taken_0x17d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d29c) {
            ctx->pc = 0x17D2ECu;
            goto label_17d2ec;
        }
    }
    ctx->pc = 0x17D2A4u;
label_17d2a4:
    // 0x17d2a4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d2a8: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2b0: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D2B0u;
    SET_GPR_U32(ctx, 31, 0x17D2B8u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D2B0u, 0x17D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2B8u;
label_17d2b8:
    // 0x17d2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2bc: 0xc0843f8  jal         func_210FE0
    ctx->pc = 0x17D2BCu;
    SET_GPR_U32(ctx, 31, 0x17D2C4u);
    ctx->pc = 0x210FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FE0u, 0x17D2BCu, 0x17D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2C4u;
label_17d2c4:
    // 0x17d2c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D2C4u;
    {
        const bool branch_taken_0x17d2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d2c4) {
            ctx->pc = 0x17D2ECu;
            goto label_17d2ec;
        }
    }
    ctx->pc = 0x17D2CCu;
    // 0x17d2cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d2d0: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17d2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2d8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17D2D8u;
    SET_GPR_U32(ctx, 31, 0x17D2E0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17D2D8u, 0x17D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2E0u;
label_17d2e0:
    // 0x17d2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2e4: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x17D2E4u;
    SET_GPR_U32(ctx, 31, 0x17D2ECu);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x17D2E4u, 0x17D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2ECu;
label_17d2ec:
    // 0x17d2ec: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d2f0: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17d2f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2f8: 0xc05f190  jal         func_17C640
    ctx->pc = 0x17D2F8u;
    SET_GPR_U32(ctx, 31, 0x17D300u);
    ctx->pc = 0x17C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C640u, 0x17D2F8u, 0x17D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D300u;
label_17d300:
    // 0x17d300: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17d300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17d304: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x17d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d308: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d30c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17d310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d314: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17D314u;
    SET_GPR_U32(ctx, 31, 0x17D31Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17D314u, 0x17D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D31Cu;
label_17d31c:
    // 0x17d31c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x17d31cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17d320:
    // 0x17d320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17d324:
    // 0x17d324: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x17d324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17d328: 0x1460fe76  bnez        $v1, . + 4 + (-0x18A << 2)
    ctx->pc = 0x17D328u;
    {
        const bool branch_taken_0x17d328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d328) {
            ctx->pc = 0x17CD04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17cd04;
        }
    }
    ctx->pc = 0x17D330u;
    // 0x17d330: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x17d334: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x17d334u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d338: 0x10170100  beq         $zero, $s7, . + 4 + (0x100 << 2)
    ctx->pc = 0x17D338u;
    {
        const bool branch_taken_0x17d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x17d338) {
            ctx->pc = 0x17D73Cu;
            goto label_17d73c;
        }
    }
    ctx->pc = 0x17D340u;
    // 0x17d340: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17d340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d344: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17d348: 0xc085538  jal         func_2154E0
    ctx->pc = 0x17D348u;
    SET_GPR_U32(ctx, 31, 0x17D350u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x17D348u, 0x17D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D350u;
label_17d350:
    // 0x17d350: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17d350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d354: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d358: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x17d35c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x17d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x17d360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d364: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x17D364u;
    SET_GPR_U32(ctx, 31, 0x17D36Cu);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x17D364u, 0x17D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D36Cu;
label_17d36c:
    // 0x17d36c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x17d36cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17d370: 0x106200f2  beq         $v1, $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x17D370u;
    {
        const bool branch_taken_0x17d370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d370) {
            ctx->pc = 0x17D73Cu;
            goto label_17d73c;
        }
    }
    ctx->pc = 0x17D378u;
    // 0x17d378: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d37c: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x17D37Cu;
    SET_GPR_U32(ctx, 31, 0x17D384u);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x17D37Cu, 0x17D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D384u;
label_17d384:
    // 0x17d384: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d388: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x17d38c: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d394: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x17D394u;
    SET_GPR_U32(ctx, 31, 0x17D39Cu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x17D394u, 0x17D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D39Cu;
label_17d39c:
    // 0x17d39c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x17d39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17d3a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17d3a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3a8: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x17D3A8u;
    SET_GPR_U32(ctx, 31, 0x17D3B0u);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x17D3A8u, 0x17D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3B0u;
label_17d3b0:
    // 0x17d3b0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d3b4: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x17d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
    // 0x17d3b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17d3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d3bc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x17d3bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d3c0: 0x0  nop
    ctx->pc = 0x17d3c0u;
    // NOP
    // 0x17d3c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d3c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d3cc: 0x450000d3  bc1f        . + 4 + (0xD3 << 2)
    ctx->pc = 0x17D3CCu;
    {
        const bool branch_taken_0x17d3cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d3cc) {
            ctx->pc = 0x17D71Cu;
            goto label_17d71c;
        }
    }
    ctx->pc = 0x17D3D4u;
    // 0x17d3d4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d3d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d3dc: 0x24a54f78  addiu       $a1, $a1, 0x4F78
    ctx->pc = 0x17d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20344));
    // 0x17d3e0: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D3E0u;
    SET_GPR_U32(ctx, 31, 0x17D3E8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D3E0u, 0x17D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3E8u;
label_17d3e8:
    // 0x17d3e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d3ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3f0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x17D3F0u;
    SET_GPR_U32(ctx, 31, 0x17D3F8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x17D3F0u, 0x17D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3F8u;
label_17d3f8:
    // 0x17d3f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3fc: 0xc096e90  jal         func_25BA40
    ctx->pc = 0x17D3FCu;
    SET_GPR_U32(ctx, 31, 0x17D404u);
    ctx->pc = 0x25BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA40u, 0x17D3FCu, 0x17D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D404u;
label_17d404:
    // 0x17d404: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17d408: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x17D408u;
    {
        const bool branch_taken_0x17d408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d408) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D410u;
    // 0x17d410: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17d414: 0x24638630  addiu       $v1, $v1, -0x79D0
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936112));
    // 0x17d418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d424: 0x400008  jr          $v0
    ctx->pc = 0x17D424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D42Cu: goto label_17d42c;
            case 0x17D458u: goto label_17d458;
            case 0x17D484u: goto label_17d484;
            case 0x17D4B0u: goto label_17d4b0;
            case 0x17D4DCu: goto label_17d4dc;
            case 0x17D508u: goto label_17d508;
            case 0x17D534u: goto label_17d534;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D424u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17D42Cu;
label_17d42c:
    // 0x17d42c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d430: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d434: 0x24a54f88  addiu       $a1, $a1, 0x4F88
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20360));
    // 0x17d438: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D438u;
    SET_GPR_U32(ctx, 31, 0x17D440u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D438u, 0x17D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D440u;
label_17d440:
    // 0x17d440: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d448: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D448u;
    SET_GPR_U32(ctx, 31, 0x17D450u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D448u, 0x17D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D450u;
label_17d450:
    // 0x17d450: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17D450u;
    {
        const bool branch_taken_0x17d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d450) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D458u;
label_17d458:
    // 0x17d458: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d45c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d460: 0x24a54f98  addiu       $a1, $a1, 0x4F98
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20376));
    // 0x17d464: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D464u;
    SET_GPR_U32(ctx, 31, 0x17D46Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D464u, 0x17D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D46Cu;
label_17d46c:
    // 0x17d46c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d474: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D474u;
    SET_GPR_U32(ctx, 31, 0x17D47Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D474u, 0x17D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D47Cu;
label_17d47c:
    // 0x17d47c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17D47Cu;
    {
        const bool branch_taken_0x17d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d47c) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D484u;
label_17d484:
    // 0x17d484: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d488: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d48c: 0x24a54fa8  addiu       $a1, $a1, 0x4FA8
    ctx->pc = 0x17d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20392));
    // 0x17d490: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D490u;
    SET_GPR_U32(ctx, 31, 0x17D498u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D490u, 0x17D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D498u;
label_17d498:
    // 0x17d498: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d49c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4a0: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D4A0u;
    SET_GPR_U32(ctx, 31, 0x17D4A8u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D4A0u, 0x17D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4A8u;
label_17d4a8:
    // 0x17d4a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x17D4A8u;
    {
        const bool branch_taken_0x17d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4a8) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D4B0u;
label_17d4b0:
    // 0x17d4b0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d4b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d4b8: 0x24a54fb8  addiu       $a1, $a1, 0x4FB8
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20408));
    // 0x17d4bc: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D4BCu;
    SET_GPR_U32(ctx, 31, 0x17D4C4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D4BCu, 0x17D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4C4u;
label_17d4c4:
    // 0x17d4c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d4c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4cc: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D4CCu;
    SET_GPR_U32(ctx, 31, 0x17D4D4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D4CCu, 0x17D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4D4u;
label_17d4d4:
    // 0x17d4d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17D4D4u;
    {
        const bool branch_taken_0x17d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4d4) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D4DCu;
label_17d4dc:
    // 0x17d4dc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d4e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d4e4: 0x24a54fc8  addiu       $a1, $a1, 0x4FC8
    ctx->pc = 0x17d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20424));
    // 0x17d4e8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D4E8u;
    SET_GPR_U32(ctx, 31, 0x17D4F0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D4E8u, 0x17D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4F0u;
label_17d4f0:
    // 0x17d4f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4f8: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D4F8u;
    SET_GPR_U32(ctx, 31, 0x17D500u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D4F8u, 0x17D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D500u;
label_17d500:
    // 0x17d500: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17D500u;
    {
        const bool branch_taken_0x17d500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d500) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D508u;
label_17d508:
    // 0x17d508: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d50c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d510: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8
    ctx->pc = 0x17d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
    // 0x17d514: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D514u;
    SET_GPR_U32(ctx, 31, 0x17D51Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D514u, 0x17D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D51Cu;
label_17d51c:
    // 0x17d51c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d524: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D524u;
    SET_GPR_U32(ctx, 31, 0x17D52Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D524u, 0x17D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D52Cu;
label_17d52c:
    // 0x17d52c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D52Cu;
    {
        const bool branch_taken_0x17d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d52c) {
            ctx->pc = 0x17D558u;
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D534u;
label_17d534:
    // 0x17d534: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x17d538: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17d538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17d53c: 0x24a54fe8  addiu       $a1, $a1, 0x4FE8
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20456));
    // 0x17d540: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x17D540u;
    SET_GPR_U32(ctx, 31, 0x17D548u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17D540u, 0x17D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D548u;
label_17d548:
    // 0x17d548: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d550: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17D550u;
    SET_GPR_U32(ctx, 31, 0x17D558u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17D550u, 0x17D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D558u;
label_17d558:
    // 0x17d558: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d55c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17d560: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d564: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D564u;
    SET_GPR_U32(ctx, 31, 0x17D56Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D564u, 0x17D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D56Cu;
label_17d56c:
    // 0x17d56c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d570: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d574: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d578: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x17d578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d57c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d580: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17D580u;
    SET_GPR_U32(ctx, 31, 0x17D588u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17D580u, 0x17D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D588u;
label_17d588:
    // 0x17d588: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d58c: 0x2464005c  addiu       $a0, $v1, 0x5C
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x17d590: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d594: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D594u;
    SET_GPR_U32(ctx, 31, 0x17D59Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D594u, 0x17D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D59Cu;
label_17d59c:
    // 0x17d59c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17d59cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5a0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d5a4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d5a8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17d5ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17d5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d5b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17d5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5b8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17D5B8u;
    SET_GPR_U32(ctx, 31, 0x17D5C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17D5B8u, 0x17D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5C0u;
label_17d5c0:
    // 0x17d5c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17d5c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d5c8: 0x0  nop
    ctx->pc = 0x17d5c8u;
    // NOP
    // 0x17d5cc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17d5d0: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d5d4: 0x26b1005c  addiu       $s1, $s5, 0x5C
    ctx->pc = 0x17d5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
    // 0x17d5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5dc: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x17d5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d5e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17d5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D5E4u;
    SET_GPR_U32(ctx, 31, 0x17D5ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D5E4u, 0x17D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5ECu;
label_17d5ec:
    // 0x17d5ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17d5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5f0: 0x8e3e0000  lw          $fp, 0x0($s1)
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17d5f4: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x17d5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d5f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17d5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d5fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17d5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17d600: 0x8ea40034  lw          $a0, 0x34($s5)
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x17d604: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x17d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d60c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17d60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d610: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x17d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x17d614: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x17d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x17d618: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x17d618u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17d61c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d61cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d624: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17D624u;
    SET_GPR_U32(ctx, 31, 0x17D62Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17D624u, 0x17D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D62Cu;
label_17d62c:
    // 0x17d62c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17d634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d638: 0x0  nop
    ctx->pc = 0x17d638u;
    // NOP
    // 0x17d63c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17d63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17d640: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d644: 0x2464005c  addiu       $a0, $v1, 0x5C
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x17d648: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d64c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D64Cu;
    SET_GPR_U32(ctx, 31, 0x17D654u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D64Cu, 0x17D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D654u;
label_17d654:
    // 0x17d654: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d658: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d65c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17d660: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17d660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17d664: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17d668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d66c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d670: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x17d674: 0xc78c8290  lwc1        $f12, -0x7D70($gp)
    ctx->pc = 0x17d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d67c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d680: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17D680u;
    SET_GPR_U32(ctx, 31, 0x17D688u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17D680u, 0x17D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D688u;
label_17d688:
    // 0x17d688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d68c: 0x0  nop
    ctx->pc = 0x17d68cu;
    // NOP
    // 0x17d690: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17d690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17d694: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d698: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x17d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17d69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d6a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17D6A4u;
    SET_GPR_U32(ctx, 31, 0x17D6ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17D6A4u, 0x17D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6ACu;
label_17d6ac:
    // 0x17d6ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17d6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d6b0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d6b4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x17d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x17d6b8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x17d6b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d6bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17d6c0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x17d6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17d6c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d6c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17d6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d6d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17d6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6d4: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x17d6d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6e0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17D6E0u;
    SET_GPR_U32(ctx, 31, 0x17D6E8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17D6E0u, 0x17D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6E8u;
label_17d6e8:
    // 0x17d6e8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x17d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d6ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17d6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6f4: 0xc05fdd4  jal         func_17F750
    ctx->pc = 0x17D6F4u;
    SET_GPR_U32(ctx, 31, 0x17D6FCu);
    ctx->pc = 0x17F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F750u, 0x17D6F4u, 0x17D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6FCu;
label_17d6fc:
    // 0x17d6fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d700: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d708: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17D708u;
    SET_GPR_U32(ctx, 31, 0x17D710u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17D708u, 0x17D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D710u;
label_17d710:
    // 0x17d710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d714: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D714u;
    {
        const bool branch_taken_0x17d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d714) {
            ctx->pc = 0x17D73Cu;
            goto label_17d73c;
        }
    }
    ctx->pc = 0x17D71Cu;
label_17d71c:
    // 0x17d71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d720: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x17D720u;
    SET_GPR_U32(ctx, 31, 0x17D728u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x17D720u, 0x17D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D728u;
label_17d728:
    // 0x17d728: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x17d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d72c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d730: 0xc05fed0  jal         func_17FB40
    ctx->pc = 0x17D730u;
    SET_GPR_U32(ctx, 31, 0x17D738u);
    ctx->pc = 0x17FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB40u, 0x17D730u, 0x17D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D738u;
label_17d738:
    // 0x17d738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d73c:
    // 0x17d73c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17d73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17d740: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17d740u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17d744: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17d744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d748: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17d748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d74c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17d74cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d750: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17d750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d754: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17d754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d758: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17d758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d75c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17d75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d764: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d768: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x17d768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17d76c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D774u;
    // 0x17d774: 0x0  nop
    ctx->pc = 0x17d774u;
    // NOP
    // 0x17d778: 0x0  nop
    ctx->pc = 0x17d778u;
    // NOP
    // 0x17d77c: 0x0  nop
    ctx->pc = 0x17d77cu;
    // NOP
    ctx->pc = 0x17d780u;
}
