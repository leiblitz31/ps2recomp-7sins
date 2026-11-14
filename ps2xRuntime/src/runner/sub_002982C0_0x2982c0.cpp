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

// Function: sub_002982C0
// Address: 0x2982c0 - 0x298640
void sub_002982C0_0x2982c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002982C0_0x2982c0");
#endif

    switch (ctx->pc) {
        case 0x29841cu: goto label_29841c;
        case 0x298448u: goto label_298448;
        case 0x2984a4u: goto label_2984a4;
        case 0x2984b8u: goto label_2984b8;
        case 0x2985e4u: goto label_2985e4;
        case 0x29860cu: goto label_29860c;
        default: break;
    }

    ctx->pc = 0x2982c0u;

    // 0x2982c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2982c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2982c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2982c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2982c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2982c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2982cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2982ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2982d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2982d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2982d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2982d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2982d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2982d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2982dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2982dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2982e0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2982e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2982e4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2982e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2982e8: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x2982e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x2982ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2982ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2982f0: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2982F0u;
    {
        const bool branch_taken_0x2982f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2982f0) {
            ctx->pc = 0x298450u;
            goto label_298450;
        }
    }
    ctx->pc = 0x2982F8u;
    // 0x2982f8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2982f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2982fc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2982fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x298300: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x298300u;
    {
        const bool branch_taken_0x298300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298300) {
            ctx->pc = 0x298320u;
            goto label_298320;
        }
    }
    ctx->pc = 0x298308u;
    // 0x298308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29830c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x29830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298310: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x298310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x298314: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x298314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x298318: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29831c: 0x2475003c  addiu       $s5, $v1, 0x3C
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_298320:
    // 0x298320: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298324: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x298324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x298328: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x298328u;
    {
        const bool branch_taken_0x298328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298328) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298330u;
    // 0x298330: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298334: 0x906300b8  lbu         $v1, 0xB8($v1)
    ctx->pc = 0x298334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x298338: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x298338u;
    {
        const bool branch_taken_0x298338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298338) {
            ctx->pc = 0x29839Cu;
            goto label_29839c;
        }
    }
    ctx->pc = 0x298340u;
    // 0x298340: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298344: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x298344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x298348: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29834c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x298350: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x298350u;
    {
        const bool branch_taken_0x298350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298350) {
            ctx->pc = 0x29836Cu;
            goto label_29836c;
        }
    }
    ctx->pc = 0x298358u;
    // 0x298358: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29835c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x298360: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298364: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298368: 0x24740034  addiu       $s4, $v1, 0x34
    ctx->pc = 0x298368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_29836c:
    // 0x29836c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x29836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298370: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x298370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x298374: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x298374u;
    {
        const bool branch_taken_0x298374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298374) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x29837Cu;
    // 0x29837c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298380: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298384: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x298384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x298388: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x298388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x29838c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x29838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298390: 0x24730038  addiu       $s3, $v1, 0x38
    ctx->pc = 0x298390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x298394: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x298394u;
    {
        const bool branch_taken_0x298394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298394) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x29839Cu;
label_29839c:
    // 0x29839c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2983a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2983a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2983a4: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x2983a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2983a8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2983a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2983ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2983acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2983b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2983b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2983b4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2983b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2983b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2983bc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2983bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2983c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2983c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2983c4: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x2983c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983c8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2983c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2983ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2983d0: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x2983d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2983d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2983d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2983d8: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x2983d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2983dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2983e0: 0x0  nop
    ctx->pc = 0x2983e0u;
    // NOP
    // 0x2983e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2983e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2983e8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2983E8u;
    {
        const bool branch_taken_0x2983e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2983e8) {
            ctx->pc = 0x298430u;
            goto label_298430;
        }
    }
    ctx->pc = 0x2983F0u;
    // 0x2983f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2983f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2983f4: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2983f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2983f8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2983f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2983fc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2983fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298400: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x298400u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x298404: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298408: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x298408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29840c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29840cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298410: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x298410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x298414: 0xc121910  jal         func_486440
    ctx->pc = 0x298414u;
    SET_GPR_U32(ctx, 31, 0x29841Cu);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x298414u, 0x29841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29841Cu;
label_29841c:
    // 0x29841c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29841cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298420: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298424: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x298424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x298428: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x298428u;
    {
        const bool branch_taken_0x298428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298428) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298430u;
label_298430:
    // 0x298430: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x298430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298434: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x298434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298438: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x298438u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x29843c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x29843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x298440: 0xc121910  jal         func_486440
    ctx->pc = 0x298440u;
    SET_GPR_U32(ctx, 31, 0x298448u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x298440u, 0x298448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298448u;
label_298448:
    // 0x298448: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x298448u;
    {
        const bool branch_taken_0x298448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298448) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298450u;
label_298450:
    // 0x298450: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298454: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x298454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x298458: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29845c: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x29845Cu;
    {
        const bool branch_taken_0x29845c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29845c) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298464u;
    // 0x298464: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298468: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x298468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x29846c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29846Cu;
    {
        const bool branch_taken_0x29846c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29846c) {
            ctx->pc = 0x2984D4u;
            goto label_2984d4;
        }
    }
    ctx->pc = 0x298474u;
    // 0x298474: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298478: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x29847c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29847Cu;
    {
        const bool branch_taken_0x29847c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29847c) {
            ctx->pc = 0x298494u;
            goto label_298494;
        }
    }
    ctx->pc = 0x298484u;
    // 0x298484: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298488: 0x906300b8  lbu         $v1, 0xB8($v1)
    ctx->pc = 0x298488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x29848c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29848Cu;
    {
        const bool branch_taken_0x29848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29848c) {
            ctx->pc = 0x2984D4u;
            goto label_2984d4;
        }
    }
    ctx->pc = 0x298494u;
label_298494:
    // 0x298494: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298498: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x298498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x29849c: 0xc048b18  jal         func_122C60
    ctx->pc = 0x29849Cu;
    SET_GPR_U32(ctx, 31, 0x2984A4u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x29849Cu, 0x2984A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984A4u;
label_2984a4:
    // 0x2984a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2984a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2984ac: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x2984acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x2984b0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2984B0u;
    SET_GPR_U32(ctx, 31, 0x2984B8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2984B0u, 0x2984B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984B8u;
label_2984b8:
    // 0x2984b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2984B8u;
    {
        const bool branch_taken_0x2984b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2984b8) {
            ctx->pc = 0x2984D4u;
            goto label_2984d4;
        }
    }
    ctx->pc = 0x2984C0u;
    // 0x2984c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2984c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2984c4: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2984c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2984c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2984cc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2984ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2984d0: 0x2472003c  addiu       $s2, $v1, 0x3C
    ctx->pc = 0x2984d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2984d4:
    // 0x2984d4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2984d8: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x2984d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x2984dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2984dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984e0: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2984E0u;
    {
        const bool branch_taken_0x2984e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2984e0) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x2984E8u;
    // 0x2984e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2984ec: 0x906300b8  lbu         $v1, 0xB8($v1)
    ctx->pc = 0x2984ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x2984f0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2984F0u;
    {
        const bool branch_taken_0x2984f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2984f0) {
            ctx->pc = 0x298558u;
            goto label_298558;
        }
    }
    ctx->pc = 0x2984F8u;
    // 0x2984f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984fc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2984fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298500: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x298500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
    // 0x298504: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298508: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x298508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x29850c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29850Cu;
    {
        const bool branch_taken_0x29850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29850c) {
            ctx->pc = 0x29852Cu;
            goto label_29852c;
        }
    }
    ctx->pc = 0x298514u;
    // 0x298514: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298518: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29851c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x29851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x298520: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x298520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x298524: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298528: 0x24710034  addiu       $s1, $v1, 0x34
    ctx->pc = 0x298528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_29852c:
    // 0x29852c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x29852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298530: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x298530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x298534: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x298534u;
    {
        const bool branch_taken_0x298534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298534) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x29853Cu;
    // 0x29853c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298540: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x298540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x298544: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298548: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29854c: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x29854cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x298550: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x298550u;
    {
        const bool branch_taken_0x298550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298550) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298558u;
label_298558:
    // 0x298558: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29855c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298560: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x298560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x298564: 0xc780828c  lwc1        $f0, -0x7D74($gp)
    ctx->pc = 0x298564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298568: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x298568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29856c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x29856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x298570: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x298570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x298574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298578: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x298578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29857c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29857cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298580: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x298580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x298584: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x298584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298588: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x298588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29858c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x29858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298590: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298594: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x298594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x298598: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x298598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29859c: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x29859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985a0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2985a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2985a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2985a8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2985A8u;
    {
        const bool branch_taken_0x2985a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2985a8) {
            ctx->pc = 0x2985F8u;
            goto label_2985f8;
        }
    }
    ctx->pc = 0x2985B0u;
    // 0x2985b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2985b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2985b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985b8: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x2985b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2985bc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2985bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2985c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985c4: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x2985c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985c8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2985c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2985ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2985d0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2985d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985d4: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2985d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2985d8: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2985d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2985dc: 0xc121910  jal         func_486440
    ctx->pc = 0x2985DCu;
    SET_GPR_U32(ctx, 31, 0x2985E4u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2985DCu, 0x2985E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985E4u;
label_2985e4:
    // 0x2985e4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2985e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985ec: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x2985ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x2985f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2985F0u;
    {
        const bool branch_taken_0x2985f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2985f0) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x2985F8u;
label_2985f8:
    // 0x2985f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2985f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985fc: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x298600: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x298600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298604: 0xc121910  jal         func_486440
    ctx->pc = 0x298604u;
    SET_GPR_U32(ctx, 31, 0x29860Cu);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x298604u, 0x29860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29860Cu;
label_29860c:
    // 0x29860c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x298610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x298614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x298618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29861c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29861cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298628: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x298628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29862c: 0x3e00008  jr          $ra
    ctx->pc = 0x29862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29862Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298634u;
    // 0x298634: 0x0  nop
    ctx->pc = 0x298634u;
    // NOP
    // 0x298638: 0x0  nop
    ctx->pc = 0x298638u;
    // NOP
    // 0x29863c: 0x0  nop
    ctx->pc = 0x29863cu;
    // NOP
    ctx->pc = 0x298640u;
}
