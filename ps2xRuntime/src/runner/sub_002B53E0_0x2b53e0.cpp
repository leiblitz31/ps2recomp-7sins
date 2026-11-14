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

// Function: sub_002B53E0
// Address: 0x2b53e0 - 0x2b5850
void sub_002B53E0_0x2b53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B53E0_0x2b53e0");
#endif

    switch (ctx->pc) {
        case 0x2b5440u: goto label_2b5440;
        case 0x2b5454u: goto label_2b5454;
        case 0x2b5484u: goto label_2b5484;
        case 0x2b5494u: goto label_2b5494;
        case 0x2b54a0u: goto label_2b54a0;
        case 0x2b54b4u: goto label_2b54b4;
        case 0x2b54e0u: goto label_2b54e0;
        case 0x2b5534u: goto label_2b5534;
        case 0x2b5548u: goto label_2b5548;
        case 0x2b5598u: goto label_2b5598;
        case 0x2b55a8u: goto label_2b55a8;
        case 0x2b55c4u: goto label_2b55c4;
        case 0x2b5610u: goto label_2b5610;
        case 0x2b564cu: goto label_2b564c;
        case 0x2b5688u: goto label_2b5688;
        case 0x2b56e4u: goto label_2b56e4;
        case 0x2b571cu: goto label_2b571c;
        case 0x2b5750u: goto label_2b5750;
        case 0x2b5760u: goto label_2b5760;
        case 0x2b577cu: goto label_2b577c;
        case 0x2b57b4u: goto label_2b57b4;
        case 0x2b5810u: goto label_2b5810;
        case 0x2b5820u: goto label_2b5820;
        default: break;
    }

    ctx->pc = 0x2b53e0u;

    // 0x2b53e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2b53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2b53e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b53e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b53ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b53f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b53f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b53f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b53fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b53fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5404: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2b5404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2b5408: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2b5408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2b540c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2b540cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2b5410: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2b5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b5414: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2b5414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b5418: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b541c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5420: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5424: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b5424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5428: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b542c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b5430: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b5430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5434: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b5438: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B5438u;
    SET_GPR_U32(ctx, 31, 0x2B5440u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B5438u, 0x2B5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5440u;
label_2b5440:
    // 0x2b5440: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5444: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b5444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b5448: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b5448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b544c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2B544Cu;
    SET_GPR_U32(ctx, 31, 0x2B5454u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2B544Cu, 0x2B5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5454u;
label_2b5454:
    // 0x2b5454: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b5458: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2b5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b545c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5460: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b5460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5464: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5468: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b5468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b546c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b546cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b5470: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b5474: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b5474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5478: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b547c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B547Cu;
    SET_GPR_U32(ctx, 31, 0x2B5484u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B547Cu, 0x2B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5484u;
label_2b5484:
    // 0x2b5484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5488: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x2b5488u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b548c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2B548Cu;
    SET_GPR_U32(ctx, 31, 0x2B5494u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B548Cu, 0x2B5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5494u;
label_2b5494:
    // 0x2b5494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5498: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2B5498u;
    SET_GPR_U32(ctx, 31, 0x2B54A0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2B5498u, 0x2B54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54A0u;
label_2b54a0:
    // 0x2b54a0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2b54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2b54a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b54ac: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2B54ACu;
    SET_GPR_U32(ctx, 31, 0x2B54B4u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2B54ACu, 0x2B54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54B4u;
label_2b54b4:
    // 0x2b54b4: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B54B4u;
    {
        const bool branch_taken_0x2b54b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b54b4) {
            ctx->pc = 0x2B54CCu;
            goto label_2b54cc;
        }
    }
    ctx->pc = 0x2B54BCu;
    // 0x2b54bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b54c0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2b54c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b54c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B54C4u;
    {
        const bool branch_taken_0x2b54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b54c4) {
            ctx->pc = 0x2B54D0u;
            goto label_2b54d0;
        }
    }
    ctx->pc = 0x2B54CCu;
label_2b54cc:
    // 0x2b54cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b54ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b54d0:
    // 0x2b54d0: 0x325400ff  andi        $s4, $s2, 0xFF
    ctx->pc = 0x2b54d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2b54d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b54d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54d8: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x2B54D8u;
    SET_GPR_U32(ctx, 31, 0x2B54E0u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2B54D8u, 0x2B54E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54E0u;
label_2b54e0:
    // 0x2b54e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B54E0u;
    {
        const bool branch_taken_0x2b54e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b54e0) {
            ctx->pc = 0x2B5550u;
            goto label_2b5550;
        }
    }
    ctx->pc = 0x2B54E8u;
    // 0x2b54e8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2b54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b54ec: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b54f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b54f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b54f4: 0x450000ca  bc1f        . + 4 + (0xCA << 2)
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B5820u;
            goto label_2b5820;
        }
    }
    ctx->pc = 0x2B54FCu;
    // 0x2b54fc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2b54fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5500: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5504: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b5504u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5508: 0x450000c5  bc1f        . + 4 + (0xC5 << 2)
    ctx->pc = 0x2B5508u;
    {
        const bool branch_taken_0x2b5508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5508) {
            ctx->pc = 0x2B5820u;
            goto label_2b5820;
        }
    }
    ctx->pc = 0x2B5510u;
    // 0x2b5510: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2b5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5514: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b5514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5518: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b5518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b551c: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
    ctx->pc = 0x2B551Cu;
    {
        const bool branch_taken_0x2b551c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b551c) {
            ctx->pc = 0x2B5820u;
            goto label_2b5820;
        }
    }
    ctx->pc = 0x2B5524u;
    // 0x2b5524: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b5524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5528: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b5528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b552c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B552Cu;
    SET_GPR_U32(ctx, 31, 0x2B5534u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B552Cu, 0x2B5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5534u;
label_2b5534:
    // 0x2b5534: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b5534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b5538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b553c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5540: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2B5540u;
    SET_GPR_U32(ctx, 31, 0x2B5548u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2B5540u, 0x2B5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5548u;
label_2b5548:
    // 0x2b5548: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2B5548u;
    {
        const bool branch_taken_0x2b5548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5548) {
            ctx->pc = 0x2B5820u;
            goto label_2b5820;
        }
    }
    ctx->pc = 0x2B5550u;
label_2b5550:
    // 0x2b5550: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2b5550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5554: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5558: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b5558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b555c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2B555Cu;
    {
        const bool branch_taken_0x2b555c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b555c) {
            ctx->pc = 0x2B558Cu;
            goto label_2b558c;
        }
    }
    ctx->pc = 0x2B5564u;
    // 0x2b5564: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2b5564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5568: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b556c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b556cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5570: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5570u;
    {
        const bool branch_taken_0x2b5570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5570) {
            ctx->pc = 0x2B558Cu;
            goto label_2b558c;
        }
    }
    ctx->pc = 0x2B5578u;
    // 0x2b5578: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2b5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b557c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5580: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b5580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5584: 0x450100a6  bc1t        . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B5584u;
    {
        const bool branch_taken_0x2b5584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5584) {
            ctx->pc = 0x2B5820u;
            goto label_2b5820;
        }
    }
    ctx->pc = 0x2B558Cu;
label_2b558c:
    // 0x2b558c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2b558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2b5590: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2B5590u;
    SET_GPR_U32(ctx, 31, 0x2B5598u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2B5590u, 0x2B5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5598u;
label_2b5598:
    // 0x2b5598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b559c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b55a0: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2B55A0u;
    SET_GPR_U32(ctx, 31, 0x2B55A8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2B55A0u, 0x2B55A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55A8u;
label_2b55a8:
    // 0x2b55a8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2b55ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b55acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b55b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2b55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b55b4: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2B55B4u;
    {
        const bool branch_taken_0x2b55b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b55b4) {
            ctx->pc = 0x2B5744u;
            goto label_2b5744;
        }
    }
    ctx->pc = 0x2B55BCu;
    // 0x2b55bc: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2B55BCu;
    SET_GPR_U32(ctx, 31, 0x2B55C4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B55BCu, 0x2B55C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55C4u;
label_2b55c4:
    // 0x2b55c4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2b55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b55c8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B55C8u;
    {
        const bool branch_taken_0x2b55c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b55c8) {
            ctx->pc = 0x2B56B0u;
            goto label_2b56b0;
        }
    }
    ctx->pc = 0x2B55D0u;
    // 0x2b55d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b55d4: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B55D4u;
    {
        const bool branch_taken_0x2b55d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b55d4) {
            ctx->pc = 0x2B5674u;
            goto label_2b5674;
        }
    }
    ctx->pc = 0x2B55DCu;
    // 0x2b55dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b55e0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B55E0u;
    {
        const bool branch_taken_0x2b55e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b55e0) {
            ctx->pc = 0x2B5638u;
            goto label_2b5638;
        }
    }
    ctx->pc = 0x2B55E8u;
    // 0x2b55e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b55ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B55ECu;
    {
        const bool branch_taken_0x2b55ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b55ec) {
            ctx->pc = 0x2B55FCu;
            goto label_2b55fc;
        }
    }
    ctx->pc = 0x2B55F4u;
    // 0x2b55f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B55F4u;
    {
        const bool branch_taken_0x2b55f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b55f4) {
            ctx->pc = 0x2B56B0u;
            goto label_2b56b0;
        }
    }
    ctx->pc = 0x2B55FCu;
label_2b55fc:
    // 0x2b55fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b55fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5600: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b5600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b5604: 0x24a5dfc8  addiu       $a1, $a1, -0x2038
    ctx->pc = 0x2b5604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
    // 0x2b5608: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B5608u;
    SET_GPR_U32(ctx, 31, 0x2B5610u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B5608u, 0x2B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5610u;
label_2b5610:
    // 0x2b5610: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b5610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b5614: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5618: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2B5618u;
    {
        const bool branch_taken_0x2b5618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5618) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B5620u;
    // 0x2b5620: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2b5624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5628: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b562c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b562cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5630: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2B5630u;
    {
        const bool branch_taken_0x2b5630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5630) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B5638u;
label_2b5638:
    // 0x2b5638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b563c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b5640: 0x24a5dfd8  addiu       $a1, $a1, -0x2028
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
    // 0x2b5644: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B5644u;
    SET_GPR_U32(ctx, 31, 0x2B564Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B5644u, 0x2B564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B564Cu;
label_2b564c:
    // 0x2b564c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b564cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b5650: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5654: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2B5654u;
    {
        const bool branch_taken_0x2b5654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5654) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B565Cu;
    // 0x2b565c: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2b565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2b5660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5664: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5668: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b566c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B566Cu;
    {
        const bool branch_taken_0x2b566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b566c) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B5674u;
label_2b5674:
    // 0x2b5674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5678: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b5678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b567c: 0x24a5dfe8  addiu       $a1, $a1, -0x2018
    ctx->pc = 0x2b567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
    // 0x2b5680: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B5680u;
    SET_GPR_U32(ctx, 31, 0x2B5688u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B5680u, 0x2B5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5688u;
label_2b5688:
    // 0x2b5688: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b5688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b568c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5690: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2B5690u;
    {
        const bool branch_taken_0x2b5690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5690) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B5698u;
    // 0x2b5698: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2b569c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b56a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b56a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b56a8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2B56A8u;
    {
        const bool branch_taken_0x2b56a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56a8) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B56B0u;
label_2b56b0:
    // 0x2b56b0: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x2b56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
    // 0x2b56b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B56B4u;
    {
        const bool branch_taken_0x2b56b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56b4) {
            ctx->pc = 0x2B570Cu;
            goto label_2b570c;
        }
    }
    ctx->pc = 0x2B56BCu;
    // 0x2b56bc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2b56c0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2b56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2b56c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b56c8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B56C8u;
    {
        const bool branch_taken_0x2b56c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b56c8) {
            ctx->pc = 0x2B570Cu;
            goto label_2b570c;
        }
    }
    ctx->pc = 0x2B56D0u;
    // 0x2b56d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b56d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b56d8: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x2b56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
    // 0x2b56dc: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B56DCu;
    SET_GPR_U32(ctx, 31, 0x2B56E4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B56DCu, 0x2B56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56E4u;
label_2b56e4:
    // 0x2b56e4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b56e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b56ec: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B56ECu;
    {
        const bool branch_taken_0x2b56ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56ec) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B56F4u;
    // 0x2b56f4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2b56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2b56f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5700: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5704: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B5704u;
    {
        const bool branch_taken_0x2b5704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5704) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B570Cu;
label_2b570c:
    // 0x2b570c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5710: 0x2785a4a0  addiu       $a1, $gp, -0x5B60
    ctx->pc = 0x2b5710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943904));
    // 0x2b5714: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B5714u;
    SET_GPR_U32(ctx, 31, 0x2B571Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B5714u, 0x2B571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B571Cu;
label_2b571c:
    // 0x2b571c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b5720: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5724: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B5724u;
    {
        const bool branch_taken_0x2b5724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5724) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B572Cu;
    // 0x2b572c: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x2b5730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5734: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5738: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b573c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B573Cu;
    {
        const bool branch_taken_0x2b573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b573c) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B5744u;
label_2b5744:
    // 0x2b5744: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b5744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b5748: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2B5748u;
    SET_GPR_U32(ctx, 31, 0x2B5750u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2B5748u, 0x2B5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5750u;
label_2b5750:
    // 0x2b5750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5754: 0x2785a4a8  addiu       $a1, $gp, -0x5B58
    ctx->pc = 0x2b5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943912));
    // 0x2b5758: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2B5758u;
    SET_GPR_U32(ctx, 31, 0x2B5760u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2B5758u, 0x2B5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5760u;
label_2b5760:
    // 0x2b5760: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5760u;
    {
        const bool branch_taken_0x2b5760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5760) {
            ctx->pc = 0x2B57A4u;
            goto label_2b57a4;
        }
    }
    ctx->pc = 0x2B5768u;
    // 0x2b5768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b576c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b576cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b5770: 0x24a5e038  addiu       $a1, $a1, -0x1FC8
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
    // 0x2b5774: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B5774u;
    SET_GPR_U32(ctx, 31, 0x2B577Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B5774u, 0x2B577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B577Cu;
label_2b577c:
    // 0x2b577c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b5780: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5784: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B5784u;
    {
        const bool branch_taken_0x2b5784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5784) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B578Cu;
    // 0x2b578c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x2b578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x2b5790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5794: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b5798: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b579c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B579Cu;
    {
        const bool branch_taken_0x2b579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b579c) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B57A4u;
label_2b57a4:
    // 0x2b57a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57a8: 0x2785a4a0  addiu       $a1, $gp, -0x5B60
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943904));
    // 0x2b57ac: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2B57ACu;
    SET_GPR_U32(ctx, 31, 0x2B57B4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B57ACu, 0x2B57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57B4u;
label_2b57b4:
    // 0x2b57b4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b57b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b57bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B57BCu;
    {
        const bool branch_taken_0x2b57bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b57bc) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B57C4u;
    // 0x2b57c4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B57C4u;
    {
        const bool branch_taken_0x2b57c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b57c4) {
            ctx->pc = 0x2B57E4u;
            goto label_2b57e4;
        }
    }
    ctx->pc = 0x2B57CCu;
    // 0x2b57cc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2b57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2b57d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b57d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b57d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b57d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b57d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b57dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B57DCu;
    {
        const bool branch_taken_0x2b57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b57dc) {
            ctx->pc = 0x2B57F4u;
            goto label_2b57f4;
        }
    }
    ctx->pc = 0x2B57E4u;
label_2b57e4:
    // 0x2b57e4: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x2b57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x2b57e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b57e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b57ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b57f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b57f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b57f4:
    // 0x2b57f4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2b57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x2b57f8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2b57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b57fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b5800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b5800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5808: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2B5808u;
    SET_GPR_U32(ctx, 31, 0x2B5810u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2B5808u, 0x2B5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5810u;
label_2b5810:
    // 0x2b5810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b5814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5818: 0xc096994  jal         func_25A650
    ctx->pc = 0x2B5818u;
    SET_GPR_U32(ctx, 31, 0x2B5820u);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x2B5818u, 0x2B5820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5820u;
label_2b5820:
    // 0x2b5820: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b5824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b5828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b582c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b582cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b583c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5840: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2b5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2b5844: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B584Cu;
    // 0x2b584c: 0x0  nop
    ctx->pc = 0x2b584cu;
    // NOP
    ctx->pc = 0x2b5850u;
}
