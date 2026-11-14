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

// Function: sub_002BC810
// Address: 0x2bc810 - 0x2bd110
void sub_002BC810_0x2bc810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC810_0x2bc810");
#endif

    switch (ctx->pc) {
        case 0x2bc858u: goto label_2bc858;
        case 0x2bc86cu: goto label_2bc86c;
        case 0x2bc87cu: goto label_2bc87c;
        case 0x2bc888u: goto label_2bc888;
        case 0x2bc894u: goto label_2bc894;
        case 0x2bc8a8u: goto label_2bc8a8;
        case 0x2bc8b8u: goto label_2bc8b8;
        case 0x2bc8c8u: goto label_2bc8c8;
        case 0x2bc8d8u: goto label_2bc8d8;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc910u: goto label_2bc910;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc97cu: goto label_2bc97c;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca30u: goto label_2bca30;
        case 0x2bca44u: goto label_2bca44;
        case 0x2bcab8u: goto label_2bcab8;
        case 0x2bcb08u: goto label_2bcb08;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb40u: goto label_2bcb40;
        case 0x2bcb68u: goto label_2bcb68;
        case 0x2bcb84u: goto label_2bcb84;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc6cu: goto label_2bcc6c;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcca8u: goto label_2bcca8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd2cu: goto label_2bcd2c;
        case 0x2bcd4cu: goto label_2bcd4c;
        case 0x2bcd8cu: goto label_2bcd8c;
        case 0x2bcda0u: goto label_2bcda0;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bce08u: goto label_2bce08;
        case 0x2bce28u: goto label_2bce28;
        case 0x2bce44u: goto label_2bce44;
        case 0x2bce54u: goto label_2bce54;
        case 0x2bce64u: goto label_2bce64;
        case 0x2bce74u: goto label_2bce74;
        case 0x2bce84u: goto label_2bce84;
        case 0x2bceb0u: goto label_2bceb0;
        case 0x2bced0u: goto label_2bced0;
        case 0x2bcedcu: goto label_2bcedc;
        case 0x2bcef0u: goto label_2bcef0;
        case 0x2bcf08u: goto label_2bcf08;
        case 0x2bcf18u: goto label_2bcf18;
        case 0x2bcf3cu: goto label_2bcf3c;
        case 0x2bcf50u: goto label_2bcf50;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcf78u: goto label_2bcf78;
        case 0x2bcf94u: goto label_2bcf94;
        case 0x2bcfa0u: goto label_2bcfa0;
        case 0x2bcfccu: goto label_2bcfcc;
        case 0x2bd004u: goto label_2bd004;
        case 0x2bd014u: goto label_2bd014;
        case 0x2bd034u: goto label_2bd034;
        case 0x2bd040u: goto label_2bd040;
        case 0x2bd048u: goto label_2bd048;
        case 0x2bd054u: goto label_2bd054;
        case 0x2bd064u: goto label_2bd064;
        case 0x2bd078u: goto label_2bd078;
        case 0x2bd084u: goto label_2bd084;
        case 0x2bd0a0u: goto label_2bd0a0;
        case 0x2bd0c4u: goto label_2bd0c4;
        case 0x2bd0d8u: goto label_2bd0d8;
        default: break;
    }

    ctx->pc = 0x2bc810u;

    // 0x2bc810: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2bc810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2bc814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bc814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bc818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2bc818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2bc81c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2bc820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bc820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bc824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bc824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bc828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bc82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc83c: 0xafa401c0  sw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 4));
    // 0x2bc840: 0xafa501d0  sw          $a1, 0x1D0($sp)
    ctx->pc = 0x2bc840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 5));
    // 0x2bc844: 0xafa601e0  sw          $a2, 0x1E0($sp)
    ctx->pc = 0x2bc844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 6));
    // 0x2bc848: 0xa3a701f0  sb          $a3, 0x1F0($sp)
    ctx->pc = 0x2bc848u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 7));
    // 0x2bc84c: 0xa3a80200  sb          $t0, 0x200($sp)
    ctx->pc = 0x2bc84cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 512), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bc850: 0xc122430  jal         func_4890C0
    ctx->pc = 0x2BC850u;
    SET_GPR_U32(ctx, 31, 0x2BC858u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2BC850u, 0x2BC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC858u;
label_2bc858:
    // 0x2bc858: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x2bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x2bc85c: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x2bc85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2bc860: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bc860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc864: 0xc12127c  jal         func_4849F0
    ctx->pc = 0x2BC864u;
    SET_GPR_U32(ctx, 31, 0x2BC86Cu);
    ctx->pc = 0x4849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4849F0u, 0x2BC864u, 0x2BC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC86Cu;
label_2bc86c:
    // 0x2bc86c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bc870: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bc870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bc874: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC874u;
    SET_GPR_U32(ctx, 31, 0x2BC87Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC874u, 0x2BC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC87Cu;
label_2bc87c:
    // 0x2bc87c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bc87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc880: 0xc090864  jal         func_242190
    ctx->pc = 0x2BC880u;
    SET_GPR_U32(ctx, 31, 0x2BC888u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2BC880u, 0x2BC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC888u;
label_2bc888:
    // 0x2bc888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc88c: 0xc090590  jal         func_241640
    ctx->pc = 0x2BC88Cu;
    SET_GPR_U32(ctx, 31, 0x2BC894u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2BC88Cu, 0x2BC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC894u;
label_2bc894:
    // 0x2bc894: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2bc894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2bc898: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2bc89c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2bc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bc8a0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2BC8A0u;
    SET_GPR_U32(ctx, 31, 0x2BC8A8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2BC8A0u, 0x2BC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8A8u;
label_2bc8a8:
    // 0x2bc8a8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2bc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2bc8ac: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bc8b0: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2BC8B0u;
    SET_GPR_U32(ctx, 31, 0x2BC8B8u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2BC8B0u, 0x2BC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8B8u;
label_2bc8b8:
    // 0x2bc8b8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bc8bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bc8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bc8c0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC8C0u;
    SET_GPR_U32(ctx, 31, 0x2BC8C8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC8C0u, 0x2BC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8C8u;
label_2bc8c8:
    // 0x2bc8c8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2bc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x2bc8cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2bc8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bc8d0: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x2BC8D0u;
    SET_GPR_U32(ctx, 31, 0x2BC8D8u);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x2BC8D0u, 0x2BC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8D8u;
label_2bc8d8:
    // 0x2bc8d8: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2bc8dc: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2BC8DCu;
    SET_GPR_U32(ctx, 31, 0x2BC8E4u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2BC8DCu, 0x2BC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8E4u;
label_2bc8e4:
    // 0x2bc8e4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2bc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2bc8e8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2bc8ec: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2BC8ECu;
    SET_GPR_U32(ctx, 31, 0x2BC8F4u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2BC8ECu, 0x2BC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8F4u;
label_2bc8f4:
    // 0x2bc8f4: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2bc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2bc8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc8fc: 0xa3a201bf  sb          $v0, 0x1BF($sp)
    ctx->pc = 0x2bc8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 447), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc900: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bc904: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bc904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc908: 0xc048094  jal         func_120250
    ctx->pc = 0x2BC908u;
    SET_GPR_U32(ctx, 31, 0x2BC910u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BC908u, 0x2BC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC910u;
label_2bc910:
    // 0x2bc910: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bc910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bc914: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2bc914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc91c: 0x2405047c  addiu       $a1, $zero, 0x47C
    ctx->pc = 0x2bc91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1148));
    // 0x2bc920: 0xc042090  jal         func_108240
    ctx->pc = 0x2BC920u;
    SET_GPR_U32(ctx, 31, 0x2BC928u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2BC920u, 0x2BC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC928u;
label_2bc928:
    // 0x2bc928: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2bc928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x2bc92c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bc92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc930: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2bc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bc934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc938: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC938u;
    {
        const bool branch_taken_0x2bc938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc938) {
            ctx->pc = 0x2BC950u;
            goto label_2bc950;
        }
    }
    ctx->pc = 0x2BC940u;
    // 0x2bc940: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2bc940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc944: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc944u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc948: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2bc948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x2bc94c: 0xa3a001bf  sb          $zero, 0x1BF($sp)
    ctx->pc = 0x2bc94cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 447), (uint8_t)GPR_U32(ctx, 0));
label_2bc950:
    // 0x2bc950: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2bc950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bc954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc95c: 0x0  nop
    ctx->pc = 0x2bc95cu;
    // NOP
    // 0x2bc960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bc960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc964: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC964u;
    {
        const bool branch_taken_0x2bc964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc964) {
            ctx->pc = 0x2BC984u;
            goto label_2bc984;
        }
    }
    ctx->pc = 0x2BC96Cu;
    // 0x2bc96c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bc96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bc970: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2bc970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bc974: 0xc0ade68  jal         func_2B79A0
    ctx->pc = 0x2BC974u;
    SET_GPR_U32(ctx, 31, 0x2BC97Cu);
    ctx->pc = 0x2B79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79A0u, 0x2BC974u, 0x2BC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC97Cu;
label_2bc97c:
    // 0x2bc97c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2BC97Cu;
    {
        const bool branch_taken_0x2bc97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc97c) {
            ctx->pc = 0x2BCBB4u;
            goto label_2bcbb4;
        }
    }
    ctx->pc = 0x2BC984u;
label_2bc984:
    // 0x2bc984: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bc988: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bc98c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC98Cu;
    SET_GPR_U32(ctx, 31, 0x2BC994u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC98Cu, 0x2BC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC994u;
label_2bc994:
    // 0x2bc994: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2bc994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2bc998: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2bc998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bc99c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bc9a0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BC9A0u;
    SET_GPR_U32(ctx, 31, 0x2BC9A8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BC9A0u, 0x2BC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2bc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bc9ac: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2bc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bc9b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bc9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc9b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bc9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc9b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc9bc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2bc9bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2bc9c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bc9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bc9c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bc9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2bc9c8: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2bc9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc9cc: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2bc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2bc9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9d4: 0x0  nop
    ctx->pc = 0x2bc9d4u;
    // NOP
    // 0x2bc9d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bc9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc9dc: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2bc9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2bc9e0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2bc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bc9e4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2BC9E4u;
    SET_GPR_U32(ctx, 31, 0x2BC9ECu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2BC9E4u, 0x2BC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9ECu;
label_2bc9ec:
    // 0x2bc9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bc9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9f0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2BC9F0u;
    {
        const bool branch_taken_0x2bc9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc9f0) {
            ctx->pc = 0x2BCBA0u;
            goto label_2bcba0;
        }
    }
    ctx->pc = 0x2BC9F8u;
label_2bc9f8:
    // 0x2bc9f8: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2bc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bc9fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bca00: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2BCA00u;
    {
        const bool branch_taken_0x2bca00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bca00) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCA08u;
    // 0x2bca08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca0c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BCA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BCA14u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BCA0Cu, 0x2BCA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA14u;
label_2bca14:
    // 0x2bca14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bca18: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2BCA18u;
    {
        const bool branch_taken_0x2bca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bca18) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCA20u;
    // 0x2bca20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bca24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bca28: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BCA28u;
    SET_GPR_U32(ctx, 31, 0x2BCA30u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BCA28u, 0x2BCA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA30u;
label_2bca30:
    // 0x2bca30: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2bca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x2bca34: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2bca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bca38: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x2bca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2bca3c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BCA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BCA44u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BCA3Cu, 0x2BCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA44u;
label_2bca44:
    // 0x2bca44: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2bca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bca48: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2bca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2bca4c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bca50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca54: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bca58: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2bca58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2bca5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bca5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bca60: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2bca64: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2bca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca68: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2bca68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2bca6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bca6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca70: 0x0  nop
    ctx->pc = 0x2bca70u;
    // NOP
    // 0x2bca74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bca78: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2bca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2bca7c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2bca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca80: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2bca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bca84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bca84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bca88: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2bca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2bca8c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2bca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca90: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2bca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bca94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bca94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bca98: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2bca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2bca9c: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2bca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcaa0: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2bcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcaa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bcaa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcaa8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2bcaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2bcaac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2bcaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2bcab0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2BCAB0u;
    SET_GPR_U32(ctx, 31, 0x2BCAB8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2BCAB0u, 0x2BCAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAB8u;
label_2bcab8:
    // 0x2bcab8: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2bcab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2bcabc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bcabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcac0: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2bcac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcac4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2bcac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcac8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x2BCAC8u;
    {
        const bool branch_taken_0x2bcac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcac8) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCAD0u;
    // 0x2bcad0: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2bcad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcad4: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2bcad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bcad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcadc: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x2BCADCu;
    {
        const bool branch_taken_0x2bcadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcadc) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCAE4u;
    // 0x2bcae4: 0x93a201bf  lbu         $v0, 0x1BF($sp)
    ctx->pc = 0x2bcae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 447)));
    // 0x2bcae8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BCAE8u;
    {
        const bool branch_taken_0x2bcae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcae8) {
            ctx->pc = 0x2BCB8Cu;
            goto label_2bcb8c;
        }
    }
    ctx->pc = 0x2BCAF0u;
    // 0x2bcaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcaf4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2bcaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2bcaf8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bcaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bcafc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2bcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2bcb00: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BCB00u;
    SET_GPR_U32(ctx, 31, 0x2BCB08u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BCB00u, 0x2BCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB08u;
label_2bcb08:
    // 0x2bcb08: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2bcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2bcb0c: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x2bcb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x2bcb10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb14: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BCB14u;
    SET_GPR_U32(ctx, 31, 0x2BCB1Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BCB14u, 0x2BCB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB1Cu;
label_2bcb1c:
    // 0x2bcb1c: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x2bcb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2bcb20: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2bcb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bcb24: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BCB24u;
    SET_GPR_U32(ctx, 31, 0x2BCB2Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BCB24u, 0x2BCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB2Cu;
label_2bcb2c:
    // 0x2bcb2c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2bcb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2bcb30: 0x2484c330  addiu       $a0, $a0, -0x3CD0
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
    // 0x2bcb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb38: 0xc041d58  jal         func_107560
    ctx->pc = 0x2BCB38u;
    SET_GPR_U32(ctx, 31, 0x2BCB40u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2BCB38u, 0x2BCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB40u;
label_2bcb40:
    // 0x2bcb40: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2bcb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2bcb44: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2bcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcb48: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2bcb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2bcb4c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2bcb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bcb50: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bcb54: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bcb54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bcb58: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x2bcb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x2bcb5c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2bcb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bcb60: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2BCB60u;
    SET_GPR_U32(ctx, 31, 0x2BCB68u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2BCB60u, 0x2BCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB68u;
label_2bcb68:
    // 0x2bcb68: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bcb6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BCB6Cu;
    {
        const bool branch_taken_0x2bcb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb6c) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCB74u;
    // 0x2bcb74: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb7c: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2BCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB84u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2BCB7Cu, 0x2BCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB84u;
label_2bcb84:
    // 0x2bcb84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCB84u;
    {
        const bool branch_taken_0x2bcb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb84) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCB8Cu;
label_2bcb8c:
    // 0x2bcb8c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcb90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb94: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2BCB94u;
    SET_GPR_U32(ctx, 31, 0x2BCB9Cu);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2BCB94u, 0x2BCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB9Cu;
label_2bcb9c:
    // 0x2bcb9c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2bcb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2bcba0:
    // 0x2bcba0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2bcba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bcba4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2BCBA4u;
    SET_GPR_U32(ctx, 31, 0x2BCBACu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2BCBA4u, 0x2BCBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBACu;
label_2bcbac:
    // 0x2bcbac: 0x1622ff92  bne         $s1, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2BCBACu;
    {
        const bool branch_taken_0x2bcbac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bcbac) {
            ctx->pc = 0x2BC9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc9f8;
        }
    }
    ctx->pc = 0x2BCBB4u;
label_2bcbb4:
    // 0x2bcbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcbb8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2bcbb8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bcbbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcbc0: 0xc078de8  jal         func_1E37A0
    ctx->pc = 0x2BCBC0u;
    SET_GPR_U32(ctx, 31, 0x2BCBC8u);
    ctx->pc = 0x1E37A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E37A0u, 0x2BCBC0u, 0x2BCBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcbcc: 0xc042290  jal         func_108A40
    ctx->pc = 0x2BCBCCu;
    SET_GPR_U32(ctx, 31, 0x2BCBD4u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2BCBCCu, 0x2BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBD4u;
label_2bcbd4:
    // 0x2bcbd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bcbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BCBD8u;
    {
        const bool branch_taken_0x2bcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcbd8) {
            ctx->pc = 0x2BCC60u;
            goto label_2bcc60;
        }
    }
    ctx->pc = 0x2BCBE0u;
label_2bcbe0:
    // 0x2bcbe0: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2BCBE0u;
    SET_GPR_U32(ctx, 31, 0x2BCBE8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2BCBE0u, 0x2BCBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBE8u;
label_2bcbe8:
    // 0x2bcbe8: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2bcbec: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x2bcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbf4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bcbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bcbf8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bcbfc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bcbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcc00: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2BCC00u;
    SET_GPR_U32(ctx, 31, 0x2BCC08u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2BCC00u, 0x2BCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC08u;
label_2bcc08:
    // 0x2bcc08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bcc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcc0c: 0x0  nop
    ctx->pc = 0x2bcc0cu;
    // NOP
    // 0x2bcc10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2bcc10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcc18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCC18u;
    {
        const bool branch_taken_0x2bcc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcc18) {
            ctx->pc = 0x2BCC24u;
            goto label_2bcc24;
        }
    }
    ctx->pc = 0x2BCC20u;
    // 0x2bcc20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bcc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcc24:
    // 0x2bcc24: 0xa3a201be  sb          $v0, 0x1BE($sp)
    ctx->pc = 0x2bcc24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 446), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcc28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bcc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcc2c: 0x93a501be  lbu         $a1, 0x1BE($sp)
    ctx->pc = 0x2bcc2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 446)));
    // 0x2bcc30: 0xc0af444  jal         func_2BD110
    ctx->pc = 0x2BCC30u;
    SET_GPR_U32(ctx, 31, 0x2BCC38u);
    ctx->pc = 0x2BD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD110u, 0x2BCC30u, 0x2BCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC38u;
label_2bcc38:
    // 0x2bcc38: 0x93a201be  lbu         $v0, 0x1BE($sp)
    ctx->pc = 0x2bcc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 446)));
    // 0x2bcc3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCC3Cu;
    {
        const bool branch_taken_0x2bcc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc3c) {
            ctx->pc = 0x2BCC5Cu;
            goto label_2bcc5c;
        }
    }
    ctx->pc = 0x2BCC44u;
    // 0x2bcc44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc48: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2BCC48u;
    SET_GPR_U32(ctx, 31, 0x2BCC50u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2BCC48u, 0x2BCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC50u;
label_2bcc50:
    // 0x2bcc50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCC50u;
    {
        const bool branch_taken_0x2bcc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc50) {
            ctx->pc = 0x2BCC5Cu;
            goto label_2bcc5c;
        }
    }
    ctx->pc = 0x2BCC58u;
    // 0x2bcc58: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2bcc58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcc5c:
    // 0x2bcc5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2bcc60:
    // 0x2bcc60: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcc64: 0xc042288  jal         func_108A20
    ctx->pc = 0x2BCC64u;
    SET_GPR_U32(ctx, 31, 0x2BCC6Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2BCC64u, 0x2BCC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC6Cu;
label_2bcc6c:
    // 0x2bcc6c: 0x1622ffdc  bne         $s1, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2BCC6Cu;
    {
        const bool branch_taken_0x2bcc6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bcc6c) {
            ctx->pc = 0x2BCBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcbe0;
        }
    }
    ctx->pc = 0x2BCC74u;
    // 0x2bcc74: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bcc78: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2BCC78u;
    SET_GPR_U32(ctx, 31, 0x2BCC80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BCC78u, 0x2BCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC80u;
label_2bcc80:
    // 0x2bcc80: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bcc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc88: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2BCC88u;
    SET_GPR_U32(ctx, 31, 0x2BCC90u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BCC88u, 0x2BCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC90u;
label_2bcc90:
    // 0x2bcc90: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bcc90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc94: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCC94u;
    {
        const bool branch_taken_0x2bcc94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc94) {
            ctx->pc = 0x2BCCACu;
            goto label_2bccac;
        }
    }
    ctx->pc = 0x2BCC9Cu;
    // 0x2bcc9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bcc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcca0: 0xc09d114  jal         func_274450
    ctx->pc = 0x2BCCA0u;
    SET_GPR_U32(ctx, 31, 0x2BCCA8u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x2BCCA0u, 0x2BCCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCA8u;
label_2bcca8:
    // 0x2bcca8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bcca8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bccac:
    // 0x2bccac: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2bccacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccb0: 0xa21e0004  sb          $fp, 0x4($s0)
    ctx->pc = 0x2bccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 30));
    // 0x2bccb4: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x2bccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bccb8: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x2bccb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bccbc: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2bccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bccc0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bccc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bccc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bcccc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bccd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bccd4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BCCD4u;
    {
        const bool branch_taken_0x2bccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bccd4) {
            ctx->pc = 0x2BCD0Cu;
            goto label_2bcd0c;
        }
    }
    ctx->pc = 0x2BCCDCu;
    // 0x2bccdc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcce0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcce4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BCCE4u;
    SET_GPR_U32(ctx, 31, 0x2BCCECu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BCCE4u, 0x2BCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCECu;
label_2bccec:
    // 0x2bccec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bccf0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCCF0u;
    {
        const bool branch_taken_0x2bccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bccf0) {
            ctx->pc = 0x2BCD0Cu;
            goto label_2bcd0c;
        }
    }
    ctx->pc = 0x2BCCF8u;
    // 0x2bccf8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bccfc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcd00: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2bcd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2bcd04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BCD04u;
    {
        const bool branch_taken_0x2bcd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd04) {
            ctx->pc = 0x2BCD50u;
            goto label_2bcd50;
        }
    }
    ctx->pc = 0x2BCD0Cu;
label_2bcd0c:
    // 0x2bcd0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd10: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2BCD10u;
    SET_GPR_U32(ctx, 31, 0x2BCD18u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2BCD10u, 0x2BCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD18u;
label_2bcd18:
    // 0x2bcd18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BCD18u;
    {
        const bool branch_taken_0x2bcd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd18) {
            ctx->pc = 0x2BCD50u;
            goto label_2bcd50;
        }
    }
    ctx->pc = 0x2BCD20u;
    // 0x2bcd20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd24: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2BCD24u;
    SET_GPR_U32(ctx, 31, 0x2BCD2Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2BCD24u, 0x2BCD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD2Cu;
label_2bcd2c:
    // 0x2bcd2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2bcd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2bcd30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcd34: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2bcd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2bcd38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCD38u;
    {
        const bool branch_taken_0x2bcd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bcd38) {
            ctx->pc = 0x2BCD50u;
            goto label_2bcd50;
        }
    }
    ctx->pc = 0x2BCD40u;
    // 0x2bcd40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd44: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2BCD44u;
    SET_GPR_U32(ctx, 31, 0x2BCD4Cu);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2BCD44u, 0x2BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD4Cu;
label_2bcd4c:
    // 0x2bcd4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bcd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bcd50:
    // 0x2bcd50: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bcd54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2bcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2bcd58: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcd5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bcd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bcd60: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2bcd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2bcd64: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2bcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bcd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCD68u;
    {
        const bool branch_taken_0x2bcd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd68) {
            ctx->pc = 0x2BCD80u;
            goto label_2bcd80;
        }
    }
    ctx->pc = 0x2BCD70u;
    // 0x2bcd70: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2bcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bcd74: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bcd78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BCD78u;
    {
        const bool branch_taken_0x2bcd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd78) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCD80u;
label_2bcd80:
    // 0x2bcd80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd84: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BCD84u;
    SET_GPR_U32(ctx, 31, 0x2BCD8Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BCD84u, 0x2BCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD8Cu;
label_2bcd8c:
    // 0x2bcd8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCD8Cu;
    {
        const bool branch_taken_0x2bcd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd8c) {
            ctx->pc = 0x2BCDACu;
            goto label_2bcdac;
        }
    }
    ctx->pc = 0x2BCD94u;
    // 0x2bcd94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd98: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BCD98u;
    SET_GPR_U32(ctx, 31, 0x2BCDA0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BCD98u, 0x2BCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDA0u;
label_2bcda0:
    // 0x2bcda0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bcda4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2BCDA4u;
    {
        const bool branch_taken_0x2bcda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcda4) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCDACu;
label_2bcdac:
    // 0x2bcdac: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcdb0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcdb4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BCDB4u;
    {
        const bool branch_taken_0x2bcdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcdb4) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCDBCu;
    // 0x2bcdbc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcdc0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2bcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcdc4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BCDC4u;
    SET_GPR_U32(ctx, 31, 0x2BCDCCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BCDC4u, 0x2BCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDCCu;
label_2bcdcc:
    // 0x2bcdcc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bcdd0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BCDD0u;
    {
        const bool branch_taken_0x2bcdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bcdd0) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCDD8u;
    // 0x2bcdd8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcddc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcde0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2bcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bcde4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCDE4u;
    {
        const bool branch_taken_0x2bcde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bcde4) {
            ctx->pc = 0x2BCDF8u;
            goto label_2bcdf8;
        }
    }
    ctx->pc = 0x2BCDECu;
    // 0x2bcdec: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcdf0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcdf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bcdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2bcdf8:
    // 0x2bcdf8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bcdfc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bce00: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BCE00u;
    SET_GPR_U32(ctx, 31, 0x2BCE08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BCE00u, 0x2BCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE08u;
label_2bce08:
    // 0x2bce08: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2bce08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2bce0c: 0x93a201f0  lbu         $v0, 0x1F0($sp)
    ctx->pc = 0x2bce0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2bce10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCE10u;
    {
        const bool branch_taken_0x2bce10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bce10) {
            ctx->pc = 0x2BCE28u;
            goto label_2bce28;
        }
    }
    ctx->pc = 0x2BCE18u;
    // 0x2bce18: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x2bce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2bce1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bce20: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2BCE20u;
    SET_GPR_U32(ctx, 31, 0x2BCE28u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2BCE20u, 0x2BCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE28u;
label_2bce28:
    // 0x2bce28: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x2bce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2bce2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bce30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce34: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2bce34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bce38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce3c: 0xc0adf0c  jal         func_2B7C30
    ctx->pc = 0x2BCE3Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE44u);
    ctx->pc = 0x2B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C30u, 0x2BCE3Cu, 0x2BCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE44u;
label_2bce44:
    // 0x2bce44: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2bce44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bce48: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bce4c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BCE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE54u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BCE4Cu, 0x2BCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE54u;
label_2bce54:
    // 0x2bce54: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2bce54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2bce58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bce5c: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2BCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE64u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2BCE5Cu, 0x2BCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE64u;
label_2bce64:
    // 0x2bce64: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2bce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2bce68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bce68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce6c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2BCE6Cu;
    {
        const bool branch_taken_0x2bce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bce6c) {
            ctx->pc = 0x2BD0A4u;
            goto label_2bd0a4;
        }
    }
    ctx->pc = 0x2BCE74u;
label_2bce74:
    // 0x2bce74: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bce78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bce78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce7c: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2BCE7Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE84u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2BCE7Cu, 0x2BCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE84u;
label_2bce84:
    // 0x2bce84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bce88: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x2bce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x2bce8c: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x2bce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2bce90: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2bce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bce94: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2BCE94u;
    {
        const bool branch_taken_0x2bce94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bce94) {
            ctx->pc = 0x2BD0A0u;
            goto label_2bd0a0;
        }
    }
    ctx->pc = 0x2BCE9Cu;
    // 0x2bce9c: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x2bce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2bcea0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2bcea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2bcea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcea8: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BCEA8u;
    SET_GPR_U32(ctx, 31, 0x2BCEB0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BCEA8u, 0x2BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEB0u;
label_2bceb0:
    // 0x2bceb0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2bceb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bceb4: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2BCEB4u;
    {
        const bool branch_taken_0x2bceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bceb4) {
            ctx->pc = 0x2BD0A0u;
            goto label_2bd0a0;
        }
    }
    ctx->pc = 0x2BCEBCu;
    // 0x2bcebc: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2bcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2bcec0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcec4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bcec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcec8: 0xc078840  jal         func_1E2100
    ctx->pc = 0x2BCEC8u;
    SET_GPR_U32(ctx, 31, 0x2BCED0u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x2BCEC8u, 0x2BCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCED0u;
label_2bced0:
    // 0x2bced0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2bced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2bced4: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x2BCED4u;
    SET_GPR_U32(ctx, 31, 0x2BCEDCu);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x2BCED4u, 0x2BCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEDCu;
label_2bcedc:
    // 0x2bcedc: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x2bcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcee0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2bcee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bcee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee8: 0xc09a02c  jal         func_2680B0
    ctx->pc = 0x2BCEE8u;
    SET_GPR_U32(ctx, 31, 0x2BCEF0u);
    ctx->pc = 0x2680B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2680B0u, 0x2BCEE8u, 0x2BCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEF0u;
label_2bcef0:
    // 0x2bcef0: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2BCEF0u;
    {
        const bool branch_taken_0x2bcef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcef0) {
            ctx->pc = 0x2BD0A0u;
            goto label_2bd0a0;
        }
    }
    ctx->pc = 0x2BCEF8u;
    // 0x2bcef8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcefc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bcefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf00: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2BCF00u;
    SET_GPR_U32(ctx, 31, 0x2BCF08u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2BCF00u, 0x2BCF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF08u;
label_2bcf08:
    // 0x2bcf08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcf0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bcf10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BCF10u;
    SET_GPR_U32(ctx, 31, 0x2BCF18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BCF10u, 0x2BCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF18u;
label_2bcf18:
    // 0x2bcf18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2bcf18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf1c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcf20: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2bcf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2bcf24: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2bcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bcf28: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2bcf28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf2c: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2bcf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2bcf30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bcf30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf34: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x2BCF34u;
    SET_GPR_U32(ctx, 31, 0x2BCF3Cu);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x2BCF34u, 0x2BCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF3Cu;
label_2bcf3c:
    // 0x2bcf3c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2BCF3Cu;
    {
        const bool branch_taken_0x2bcf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcf3c) {
            ctx->pc = 0x2BD0A0u;
            goto label_2bd0a0;
        }
    }
    ctx->pc = 0x2BCF44u;
    // 0x2bcf44: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bcf48: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2BCF48u;
    SET_GPR_U32(ctx, 31, 0x2BCF50u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BCF48u, 0x2BCF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF50u;
label_2bcf50:
    // 0x2bcf50: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bcf54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf58: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2BCF58u;
    SET_GPR_U32(ctx, 31, 0x2BCF60u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BCF58u, 0x2BCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF60u;
label_2bcf60:
    // 0x2bcf60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bcf60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf64: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCF64u;
    {
        const bool branch_taken_0x2bcf64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcf64) {
            ctx->pc = 0x2BCF7Cu;
            goto label_2bcf7c;
        }
    }
    ctx->pc = 0x2BCF6Cu;
    // 0x2bcf6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bcf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf70: 0xc09d114  jal         func_274450
    ctx->pc = 0x2BCF70u;
    SET_GPR_U32(ctx, 31, 0x2BCF78u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x2BCF70u, 0x2BCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF78u;
label_2bcf78:
    // 0x2bcf78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bcf78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf7c:
    // 0x2bcf7c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2bcf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2bcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bcf84: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2bcf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcf88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bcf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf8c: 0xc078840  jal         func_1E2100
    ctx->pc = 0x2BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF94u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x2BCF8Cu, 0x2BCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF94u;
label_2bcf94:
    // 0x2bcf94: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2bcf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bcf98: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x2BCF98u;
    SET_GPR_U32(ctx, 31, 0x2BCFA0u);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x2BCF98u, 0x2BCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFA0u;
label_2bcfa0:
    // 0x2bcfa0: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x2bcfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcfa8: 0xa2420007  sb          $v0, 0x7($s2)
    ctx->pc = 0x2bcfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcfac: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x2bcfacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bcfb0: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x2bcfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcfb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2bcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bcfb8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2bcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2bcfbc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcfc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bcfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfc4: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2BCFC4u;
    SET_GPR_U32(ctx, 31, 0x2BCFCCu);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2BCFC4u, 0x2BCFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFCCu;
label_2bcfcc:
    // 0x2bcfcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcfd0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2bcfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2bcfd4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcfd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bcfdc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2bcfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2bcfe0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcfe4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2bcfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2bcfe8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2bcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bcfec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcff0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2bcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2bcff4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2bcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bcff8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bcff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcffc: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2BCFFCu;
    SET_GPR_U32(ctx, 31, 0x2BD004u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2BCFFCu, 0x2BD004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD004u;
label_2bd004:
    // 0x2bd004: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bd004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd008: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bd008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bd00c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BD00Cu;
    SET_GPR_U32(ctx, 31, 0x2BD014u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BD00Cu, 0x2BD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD014u;
label_2bd014:
    // 0x2bd014: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x2bd014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x2bd018: 0x93a201f0  lbu         $v0, 0x1F0($sp)
    ctx->pc = 0x2bd018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2bd01c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD01Cu;
    {
        const bool branch_taken_0x2bd01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd01c) {
            ctx->pc = 0x2BD064u;
            goto label_2bd064;
        }
    }
    ctx->pc = 0x2BD024u;
    // 0x2bd024: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2bd024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd02c: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2BD02Cu;
    SET_GPR_U32(ctx, 31, 0x2BD034u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2BD02Cu, 0x2BD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD034u;
label_2bd034:
    // 0x2bd034: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bd034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd038: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2BD038u;
    SET_GPR_U32(ctx, 31, 0x2BD040u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2BD038u, 0x2BD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD040u;
label_2bd040:
    // 0x2bd040: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2BD040u;
    SET_GPR_U32(ctx, 31, 0x2BD048u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2BD040u, 0x2BD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD048u;
label_2bd048:
    // 0x2bd048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd04c: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2BD04Cu;
    SET_GPR_U32(ctx, 31, 0x2BD054u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2BD04Cu, 0x2BD054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD054u;
label_2bd054:
    // 0x2bd054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd058: 0x8ee5002c  lw          $a1, 0x2C($s7)
    ctx->pc = 0x2bd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
    // 0x2bd05c: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2BD05Cu;
    SET_GPR_U32(ctx, 31, 0x2BD064u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2BD05Cu, 0x2BD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD064u;
label_2bd064:
    // 0x2bd064: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2bd064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2bd068: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2bd068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bd06c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bd06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd070: 0xc078840  jal         func_1E2100
    ctx->pc = 0x2BD070u;
    SET_GPR_U32(ctx, 31, 0x2BD078u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x2BD070u, 0x2BD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD078u;
label_2bd078:
    // 0x2bd078: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2bd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2bd07c: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x2BD07Cu;
    SET_GPR_U32(ctx, 31, 0x2BD084u);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x2BD07Cu, 0x2BD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD084u;
label_2bd084:
    // 0x2bd084: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2bd084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd08c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd090: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2bd090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bd094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd098: 0xc0adf0c  jal         func_2B7C30
    ctx->pc = 0x2BD098u;
    SET_GPR_U32(ctx, 31, 0x2BD0A0u);
    ctx->pc = 0x2B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C30u, 0x2BD098u, 0x2BD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0A0u;
label_2bd0a0:
    // 0x2bd0a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bd0a4:
    // 0x2bd0a4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x2bd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bd0a8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2bd0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bd0ac: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2BD0ACu;
    {
        const bool branch_taken_0x2bd0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd0ac) {
            ctx->pc = 0x2BCE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bce74;
        }
    }
    ctx->pc = 0x2BD0B4u;
    // 0x2bd0b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bd0b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd0bc: 0xc075840  jal         func_1D6100
    ctx->pc = 0x2BD0BCu;
    SET_GPR_U32(ctx, 31, 0x2BD0C4u);
    ctx->pc = 0x1D6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6100u, 0x2BD0BCu, 0x2BD0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0C4u;
label_2bd0c4:
    // 0x2bd0c4: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2bd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bd0c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd0d0: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2BD0D0u;
    SET_GPR_U32(ctx, 31, 0x2BD0D8u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2BD0D0u, 0x2BD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0D8u;
label_2bd0d8:
    // 0x2bd0d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bd0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd0dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2bd0dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd0e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bd0e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd0e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bd0e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd0e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bd0e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd0ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bd0ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd0f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bd0f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd0f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd100: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x2bd100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2bd104: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD10Cu;
    // 0x2bd10c: 0x0  nop
    ctx->pc = 0x2bd10cu;
    // NOP
    ctx->pc = 0x2bd110u;
}
