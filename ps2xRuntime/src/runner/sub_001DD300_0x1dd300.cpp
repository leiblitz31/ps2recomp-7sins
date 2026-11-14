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

// Function: sub_001DD300
// Address: 0x1dd300 - 0x1dd970
void sub_001DD300_0x1dd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD300_0x1dd300");
#endif

    switch (ctx->pc) {
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd4bcu: goto label_1dd4bc;
        case 0x1dd4d4u: goto label_1dd4d4;
        case 0x1dd4e4u: goto label_1dd4e4;
        case 0x1dd4fcu: goto label_1dd4fc;
        case 0x1dd50cu: goto label_1dd50c;
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd5b4u: goto label_1dd5b4;
        case 0x1dd5f8u: goto label_1dd5f8;
        case 0x1dd608u: goto label_1dd608;
        case 0x1dd618u: goto label_1dd618;
        case 0x1dd648u: goto label_1dd648;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd730u: goto label_1dd730;
        case 0x1dd744u: goto label_1dd744;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd760u: goto label_1dd760;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd7a8u: goto label_1dd7a8;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd810u: goto label_1dd810;
        case 0x1dd824u: goto label_1dd824;
        case 0x1dd83cu: goto label_1dd83c;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd948u: goto label_1dd948;
        default: break;
    }

    ctx->pc = 0x1dd300u;

    // 0x1dd300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dd304: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dd304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dd308: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1dd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1dd30c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dd310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dd314: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1dd314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dd318: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1dd318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1dd31c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd320: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x1dd320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd324: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd328: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x1dd328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd32c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd330: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd334: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1dd334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dd338: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1dd338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1dd33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd340: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd344: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1dd344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1dd348: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1dd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd34c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd350: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x1dd350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x1dd354: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd358: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1dd358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd35c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd360: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x1dd360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x1dd364: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd368: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd36c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD36Cu;
    SET_GPR_U32(ctx, 31, 0x1DD374u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD36Cu, 0x1DD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD374u;
label_1dd374:
    // 0x1dd374: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd378: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd384: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD384u;
    SET_GPR_U32(ctx, 31, 0x1DD38Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD384u, 0x1DD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD38Cu;
label_1dd38c:
    // 0x1dd38c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd390: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd394: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD394u;
    SET_GPR_U32(ctx, 31, 0x1DD39Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD394u, 0x1DD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD39Cu;
label_1dd39c:
    // 0x1dd39c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3a0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dd3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dd3a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd3ac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD3ACu;
    SET_GPR_U32(ctx, 31, 0x1DD3B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD3ACu, 0x1DD3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3B4u;
label_1dd3b4:
    // 0x1dd3b4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1dd3b8: 0x24847fe0  addiu       $a0, $a0, 0x7FE0
    ctx->pc = 0x1dd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
    // 0x1dd3bc: 0xc101f6e  jal         func_407DB8
    ctx->pc = 0x1DD3BCu;
    SET_GPR_U32(ctx, 31, 0x1DD3C4u);
    ctx->pc = 0x407DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407DB8u, 0x1DD3BCu, 0x1DD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3C4u;
label_1dd3c4:
    // 0x1dd3c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3c8: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1dd3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1dd3cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dd3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dd3d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3d8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1dd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dd3dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD3DCu;
    {
        const bool branch_taken_0x1dd3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd3dc) {
            ctx->pc = 0x1DD3F8u;
            goto label_1dd3f8;
        }
    }
    ctx->pc = 0x1DD3E4u;
    // 0x1dd3e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3e8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dd3ec: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd3f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3f4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dd3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1dd3f8:
    // 0x1dd3f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3fc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dd400: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dd404: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd408: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dd408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dd40c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd410: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dd414: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1dd414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd418: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd41c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1dd41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1dd420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd424: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd428: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1dd428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1dd42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd430: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd434: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1dd434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1dd438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd43c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd440: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x1dd440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1dd444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd448: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd44c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1dd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1dd450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd454: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd458: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1dd458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1dd45c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd460: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd464: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1dd464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1dd468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd46c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd470: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1dd470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1dd474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd478: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd47c: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x1dd47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x1dd480: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x1dd480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd484: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd488: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x1dd488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x1dd48c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd490: 0xa04000a8  sb          $zero, 0xA8($v0)
    ctx->pc = 0x1dd490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd494: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd498: 0xa04000a9  sb          $zero, 0xA9($v0)
    ctx->pc = 0x1dd498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd49c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4a0: 0xa04000aa  sb          $zero, 0xAA($v0)
    ctx->pc = 0x1dd4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 170), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd4a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4a8: 0xa04000ab  sb          $zero, 0xAB($v0)
    ctx->pc = 0x1dd4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 171), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd4ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd4b4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD4B4u;
    SET_GPR_U32(ctx, 31, 0x1DD4BCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD4B4u, 0x1DD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4BCu;
label_1dd4bc:
    // 0x1dd4bc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4c0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dd4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dd4c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4c8: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x1dd4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1dd4cc: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DD4CCu;
    SET_GPR_U32(ctx, 31, 0x1DD4D4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DD4CCu, 0x1DD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4D4u;
label_1dd4d4:
    // 0x1dd4d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd4dc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD4DCu;
    SET_GPR_U32(ctx, 31, 0x1DD4E4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD4DCu, 0x1DD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4E4u;
label_1dd4e4:
    // 0x1dd4e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd4e8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4f0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dd4f4: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DD4F4u;
    SET_GPR_U32(ctx, 31, 0x1DD4FCu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DD4F4u, 0x1DD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4FCu;
label_1dd4fc:
    // 0x1dd4fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd500: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd504: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD504u;
    SET_GPR_U32(ctx, 31, 0x1DD50Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD504u, 0x1DD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD50Cu;
label_1dd50c:
    // 0x1dd50c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd510: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd518: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1dd518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dd51c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DD51Cu;
    SET_GPR_U32(ctx, 31, 0x1DD524u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DD51Cu, 0x1DD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD524u;
label_1dd524:
    // 0x1dd524: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1dd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd528: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd52c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1dd52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1dd530: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1dd530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd534: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1dd534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd538: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1dd538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dd53c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1dd53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd540: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dd544: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd548: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1dd548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1dd54c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dd54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd550: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd554: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1dd554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1dd558: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1dd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd55c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dd55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd560: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1dd560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dd564: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dd56c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd570: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1dd570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1dd574: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dd578: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1dd578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1dd57c: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dd580: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1dd580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1dd584: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dd584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dd588: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1dd588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1dd58c: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dd590: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1dd590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1dd594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd598: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x1dd598u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x1dd59c: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x1dd59cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1dd5a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd5a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd5a8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD5A8u;
    {
        const bool branch_taken_0x1dd5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5a8) {
            ctx->pc = 0x1DD5D0u;
            goto label_1dd5d0;
        }
    }
    ctx->pc = 0x1DD5B0u;
    // 0x1dd5b0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1dd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1dd5b4:
    // 0x1dd5b4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1dd5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd5b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dd5bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dd5c0: 0x0  nop
    ctx->pc = 0x1dd5c0u;
    // NOP
    // 0x1dd5c4: 0x0  nop
    ctx->pc = 0x1dd5c4u;
    // NOP
    // 0x1dd5c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD5C8u;
    {
        const bool branch_taken_0x1dd5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5c8) {
            ctx->pc = 0x1DD5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd5b4;
        }
    }
    ctx->pc = 0x1DD5D0u;
label_1dd5d0:
    // 0x1dd5d0: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dd5d4: 0xdf829800  ld          $v0, -0x6800($gp)
    ctx->pc = 0x1dd5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940672)));
    // 0x1dd5d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1dd5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1dd5dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd5e0: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x1dd5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x1dd5e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd5e8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd5ec: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1dd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1dd5f0: 0xc056708  jal         func_159C20
    ctx->pc = 0x1DD5F0u;
    SET_GPR_U32(ctx, 31, 0x1DD5F8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1DD5F0u, 0x1DD5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5F8u;
label_1dd5f8:
    // 0x1dd5f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd600: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1DD600u;
    {
        const bool branch_taken_0x1dd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd600) {
            ctx->pc = 0x1DD6E0u;
            goto label_1dd6e0;
        }
    }
    ctx->pc = 0x1DD608u;
label_1dd608:
    // 0x1dd608: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd60c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd610: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD610u;
    SET_GPR_U32(ctx, 31, 0x1DD618u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD610u, 0x1DD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD618u;
label_1dd618:
    // 0x1dd618: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dd618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dd61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd620: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1dd620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1dd624: 0x24a58020  addiu       $a1, $a1, -0x7FE0
    ctx->pc = 0x1dd624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934560));
    // 0x1dd628: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd62c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1dd62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd630: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dd634: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dd634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd638: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dd638u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd63c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dd63cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd640: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DD640u;
    SET_GPR_U32(ctx, 31, 0x1DD648u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DD640u, 0x1DD648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD648u;
label_1dd648:
    // 0x1dd648: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd64c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd650: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd658: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD658u;
    SET_GPR_U32(ctx, 31, 0x1DD660u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD658u, 0x1DD660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD660u;
label_1dd660:
    // 0x1dd660: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1dd660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1dd664: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd668: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd66c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD66Cu;
    SET_GPR_U32(ctx, 31, 0x1DD674u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD66Cu, 0x1DD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD674u;
label_1dd674:
    // 0x1dd674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd678: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd67c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd684: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD684u;
    SET_GPR_U32(ctx, 31, 0x1DD68Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD684u, 0x1DD68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD68Cu;
label_1dd68c:
    // 0x1dd68c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd698: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD698u;
    SET_GPR_U32(ctx, 31, 0x1DD6A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD698u, 0x1DD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6A0u;
label_1dd6a0:
    // 0x1dd6a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd6a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd6a8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD6A8u;
    SET_GPR_U32(ctx, 31, 0x1DD6B0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD6A8u, 0x1DD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6B0u;
label_1dd6b0:
    // 0x1dd6b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd6b8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD6C0u;
    SET_GPR_U32(ctx, 31, 0x1DD6C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD6C0u, 0x1DD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6C8u;
label_1dd6c8:
    // 0x1dd6c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d0: 0xc78c80ac  lwc1        $f12, -0x7F54($gp)
    ctx->pc = 0x1dd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd6d4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DD6D4u;
    SET_GPR_U32(ctx, 31, 0x1DD6DCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DD6D4u, 0x1DD6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6DCu;
label_1dd6dc:
    // 0x1dd6dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd6e0:
    // 0x1dd6e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd6e4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd6e8: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DD6E8u;
    SET_GPR_U32(ctx, 31, 0x1DD6F0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DD6E8u, 0x1DD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F0u;
label_1dd6f0:
    // 0x1dd6f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dd6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd6f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1DD6F4u;
    {
        const bool branch_taken_0x1dd6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6f4) {
            ctx->pc = 0x1DD608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd608;
        }
    }
    ctx->pc = 0x1DD6FCu;
    // 0x1dd6fc: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1dd6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd700: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd704: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1dd704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1dd708: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dd70c: 0xdf829808  ld          $v0, -0x67F8($gp)
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x1dd710: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1dd710u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1dd714: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd718: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x1dd718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x1dd71c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd720: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd724: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1dd724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1dd728: 0xc056708  jal         func_159C20
    ctx->pc = 0x1DD728u;
    SET_GPR_U32(ctx, 31, 0x1DD730u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1DD728u, 0x1DD730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD730u;
label_1dd730:
    // 0x1dd730: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd734: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dd738: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1dd73c: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1DD73Cu;
    SET_GPR_U32(ctx, 31, 0x1DD744u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1DD73Cu, 0x1DD744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD744u;
label_1dd744:
    // 0x1dd744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd748: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1DD748u;
    {
        const bool branch_taken_0x1dd748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd748) {
            ctx->pc = 0x1DD860u;
            goto label_1dd860;
        }
    }
    ctx->pc = 0x1DD750u;
label_1dd750:
    // 0x1dd750: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd754: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd758: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD758u;
    SET_GPR_U32(ctx, 31, 0x1DD760u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD758u, 0x1DD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD760u;
label_1dd760:
    // 0x1dd760: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dd760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dd764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd768: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1dd768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1dd76c: 0x24a58020  addiu       $a1, $a1, -0x7FE0
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934560));
    // 0x1dd770: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dd770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd774: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1dd774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd778: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dd77c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dd77cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd780: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dd780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd784: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dd784u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd788: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DD788u;
    SET_GPR_U32(ctx, 31, 0x1DD790u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DD788u, 0x1DD790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD790u;
label_1dd790:
    // 0x1dd790: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd794: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd798: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd79c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD7A0u;
    SET_GPR_U32(ctx, 31, 0x1DD7A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD7A0u, 0x1DD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7A8u;
label_1dd7a8:
    // 0x1dd7a8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1dd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1dd7ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd7b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd7b4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD7B4u;
    SET_GPR_U32(ctx, 31, 0x1DD7BCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD7B4u, 0x1DD7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7BCu;
label_1dd7bc:
    // 0x1dd7bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd7c4: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd7c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD7CCu;
    SET_GPR_U32(ctx, 31, 0x1DD7D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD7CCu, 0x1DD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7D4u;
label_1dd7d4:
    // 0x1dd7d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd7d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd7e0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD7E0u;
    SET_GPR_U32(ctx, 31, 0x1DD7E8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD7E0u, 0x1DD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7E8u;
label_1dd7e8:
    // 0x1dd7e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd7ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd7f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD7F0u;
    SET_GPR_U32(ctx, 31, 0x1DD7F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD7F0u, 0x1DD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7F8u;
label_1dd7f8:
    // 0x1dd7f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd800: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd808: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DD808u;
    SET_GPR_U32(ctx, 31, 0x1DD810u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DD808u, 0x1DD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD810u;
label_1dd810:
    // 0x1dd810: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd81c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DD81Cu;
    SET_GPR_U32(ctx, 31, 0x1DD824u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DD81Cu, 0x1DD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD824u;
label_1dd824:
    // 0x1dd824: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dd828: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd82c: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dd830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd834: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DD834u;
    SET_GPR_U32(ctx, 31, 0x1DD83Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DD834u, 0x1DD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD83Cu;
label_1dd83c:
    // 0x1dd83c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1dd83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dd840: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dd844: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd848: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dd84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd850: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DD850u;
    SET_GPR_U32(ctx, 31, 0x1DD858u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DD850u, 0x1DD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD858u;
label_1dd858:
    // 0x1dd858: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1dd858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dd85c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd860:
    // 0x1dd860: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd864: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd868: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DD868u;
    SET_GPR_U32(ctx, 31, 0x1DD870u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DD868u, 0x1DD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD870u;
label_1dd870:
    // 0x1dd870: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dd870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd874: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1DD874u;
    {
        const bool branch_taken_0x1dd874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd874) {
            ctx->pc = 0x1DD750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd750;
        }
    }
    ctx->pc = 0x1DD87Cu;
    // 0x1dd87c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd880: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dd884: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x1dd884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1dd888: 0xc11c208  jal         func_470820
    ctx->pc = 0x1DD888u;
    SET_GPR_U32(ctx, 31, 0x1DD890u);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1DD888u, 0x1DD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD890u;
label_1dd890:
    // 0x1dd890: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dd890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd894: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1dd894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1dd898: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1dd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd89c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1dd89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1dd8a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd8a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd8a8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD8A8u;
    SET_GPR_U32(ctx, 31, 0x1DD8B0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD8A8u, 0x1DD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8B0u;
label_1dd8b0:
    // 0x1dd8b0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dd8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dd8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dd8bc: 0x24a57f80  addiu       $a1, $a1, 0x7F80
    ctx->pc = 0x1dd8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
    // 0x1dd8c0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd8c4: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x1dd8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1dd8c8: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1dd8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dd8cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dd8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd8d0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dd8d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dd8d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8d8: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DD8D8u;
    SET_GPR_U32(ctx, 31, 0x1DD8E0u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DD8D8u, 0x1DD8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8E0u;
label_1dd8e0:
    // 0x1dd8e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd8e4: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x1dd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
    // 0x1dd8e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd8ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd8f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD8F0u;
    SET_GPR_U32(ctx, 31, 0x1DD8F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD8F0u, 0x1DD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8F8u;
label_1dd8f8:
    // 0x1dd8f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd8fc: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1dd900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd904: 0xc78c82d8  lwc1        $f12, -0x7D28($gp)
    ctx->pc = 0x1dd904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd908: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DD908u;
    SET_GPR_U32(ctx, 31, 0x1DD910u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DD908u, 0x1DD910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD910u;
label_1dd910:
    // 0x1dd910: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd914: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DD914u;
    SET_GPR_U32(ctx, 31, 0x1DD91Cu);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DD914u, 0x1DD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD91Cu;
label_1dd91c:
    // 0x1dd91c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd920: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd924: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD924u;
    SET_GPR_U32(ctx, 31, 0x1DD92Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD924u, 0x1DD92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD92Cu;
label_1dd92c:
    // 0x1dd92c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd930: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dd934: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dd934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd93c: 0x2466007c  addiu       $a2, $v1, 0x7C
    ctx->pc = 0x1dd93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x1dd940: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DD940u;
    SET_GPR_U32(ctx, 31, 0x1DD948u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DD940u, 0x1DD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD948u;
label_1dd948:
    // 0x1dd948: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dd948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd94c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1dd94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd950: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd958: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1dd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dd95c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1dd95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd960: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD968u;
    // 0x1dd968: 0x0  nop
    ctx->pc = 0x1dd968u;
    // NOP
    // 0x1dd96c: 0x0  nop
    ctx->pc = 0x1dd96cu;
    // NOP
    ctx->pc = 0x1dd970u;
}
