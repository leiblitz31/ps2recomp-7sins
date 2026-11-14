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

// Function: sub_0026A340
// Address: 0x26a340 - 0x26a780
void sub_0026A340_0x26a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A340_0x26a340");
#endif

    switch (ctx->pc) {
        case 0x26a388u: goto label_26a388;
        case 0x26a398u: goto label_26a398;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a408u: goto label_26a408;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a448u: goto label_26a448;
        case 0x26a464u: goto label_26a464;
        case 0x26a474u: goto label_26a474;
        case 0x26a480u: goto label_26a480;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a500u: goto label_26a500;
        case 0x26a514u: goto label_26a514;
        case 0x26a520u: goto label_26a520;
        case 0x26a530u: goto label_26a530;
        case 0x26a548u: goto label_26a548;
        case 0x26a568u: goto label_26a568;
        case 0x26a578u: goto label_26a578;
        case 0x26a594u: goto label_26a594;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a610u: goto label_26a610;
        case 0x26a630u: goto label_26a630;
        case 0x26a644u: goto label_26a644;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a67cu: goto label_26a67c;
        case 0x26a690u: goto label_26a690;
        case 0x26a6c0u: goto label_26a6c0;
        case 0x26a6d0u: goto label_26a6d0;
        case 0x26a6f8u: goto label_26a6f8;
        case 0x26a708u: goto label_26a708;
        case 0x26a730u: goto label_26a730;
        case 0x26a740u: goto label_26a740;
        default: break;
    }

    ctx->pc = 0x26a340u;

    // 0x26a340: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x26a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x26a344: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26a348: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26a34c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26a350: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26a354: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26a358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26a35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a36c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x26a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x26a370: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a374: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x26a374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a378: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a37c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a380: 0xc043104  jal         func_10C410
    ctx->pc = 0x26A380u;
    SET_GPR_U32(ctx, 31, 0x26A388u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x26A380u, 0x26A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A388u;
label_26a388:
    // 0x26a388: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26a388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a38c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a390: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x26A390u;
    {
        const bool branch_taken_0x26a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a390) {
            ctx->pc = 0x26A57Cu;
            goto label_26a57c;
        }
    }
    ctx->pc = 0x26A398u;
label_26a398:
    // 0x26a398: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26a39c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x26A39Cu;
    SET_GPR_U32(ctx, 31, 0x26A3A4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x26A39Cu, 0x26A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3A4u;
label_26a3a4:
    // 0x26a3a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a3a8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3b0: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x26A3B0u;
    SET_GPR_U32(ctx, 31, 0x26A3B8u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x26A3B0u, 0x26A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3B8u;
label_26a3b8:
    // 0x26a3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3bc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26A3BCu;
    SET_GPR_U32(ctx, 31, 0x26A3C4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26A3BCu, 0x26A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3C4u;
label_26a3c4:
    // 0x26a3c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26a3c8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a3cc: 0x24a5cd90  addiu       $a1, $a1, -0x3270
    ctx->pc = 0x26a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954384));
    // 0x26a3d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3d4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x26A3D4u;
    SET_GPR_U32(ctx, 31, 0x26A3DCu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x26A3D4u, 0x26A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3DCu;
label_26a3dc:
    // 0x26a3dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26a3e0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26A3E0u;
    SET_GPR_U32(ctx, 31, 0x26A3E8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26A3E0u, 0x26A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3E8u;
label_26a3e8:
    // 0x26a3e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26a3ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3f0: 0xc040304  jal         func_100C10
    ctx->pc = 0x26A3F0u;
    SET_GPR_U32(ctx, 31, 0x26A3F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26A3F0u, 0x26A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3F8u;
label_26a3f8:
    // 0x26a3f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26a3fc: 0x2785a0cc  addiu       $a1, $gp, -0x5F34
    ctx->pc = 0x26a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942924));
    // 0x26a400: 0xc040304  jal         func_100C10
    ctx->pc = 0x26A400u;
    SET_GPR_U32(ctx, 31, 0x26A408u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26A400u, 0x26A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A408u;
label_26a408:
    // 0x26a408: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a40c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26a410: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26a414: 0xc119d74  jal         func_4675D0
    ctx->pc = 0x26A414u;
    SET_GPR_U32(ctx, 31, 0x26A41Cu);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x26A414u, 0x26A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A41Cu;
label_26a41c:
    // 0x26a41c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26a420: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a424: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A424u;
    SET_GPR_U32(ctx, 31, 0x26A42Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A424u, 0x26A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A42Cu;
label_26a42c:
    // 0x26a42c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26a430: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a434: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A434u;
    SET_GPR_U32(ctx, 31, 0x26A43Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A434u, 0x26A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A43Cu;
label_26a43c:
    // 0x26a43c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a440: 0xc119db4  jal         func_4676D0
    ctx->pc = 0x26A440u;
    SET_GPR_U32(ctx, 31, 0x26A448u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x26A440u, 0x26A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A448u;
label_26a448:
    // 0x26a448: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26A448u;
    {
        const bool branch_taken_0x26a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a448) {
            ctx->pc = 0x26A488u;
            goto label_26a488;
        }
    }
    ctx->pc = 0x26A450u;
    // 0x26a450: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a454: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a45c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26A45Cu;
    SET_GPR_U32(ctx, 31, 0x26A464u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26A45Cu, 0x26A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A464u;
label_26a464:
    // 0x26a464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a468: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a46c: 0xc099a28  jal         func_2668A0
    ctx->pc = 0x26A46Cu;
    SET_GPR_U32(ctx, 31, 0x26A474u);
    ctx->pc = 0x2668A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2668A0u, 0x26A46Cu, 0x26A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A474u;
label_26a474:
    // 0x26a474: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a478: 0xc119e7c  jal         func_4679F0
    ctx->pc = 0x26A478u;
    SET_GPR_U32(ctx, 31, 0x26A480u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x26A478u, 0x26A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A480u;
label_26a480:
    // 0x26a480: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26A480u;
    {
        const bool branch_taken_0x26a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a480) {
            ctx->pc = 0x26A4D0u;
            goto label_26a4d0;
        }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a48c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a494: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26A494u;
    SET_GPR_U32(ctx, 31, 0x26A49Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26A494u, 0x26A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A49Cu;
label_26a49c:
    // 0x26a49c: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x26a49cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a4a0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a4a4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a4a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4ac: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x26A4ACu;
    SET_GPR_U32(ctx, 31, 0x26A4B4u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x26A4ACu, 0x26A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4B4u;
label_26a4b4:
    // 0x26a4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4b8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26A4B8u;
    SET_GPR_U32(ctx, 31, 0x26A4C0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26A4B8u, 0x26A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4C0u;
label_26a4c0:
    // 0x26a4c0: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x26a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x26a4c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4c8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x26A4C8u;
    SET_GPR_U32(ctx, 31, 0x26A4D0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x26A4C8u, 0x26A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4D0u;
label_26a4d0:
    // 0x26a4d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a4d4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4dc: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26A4DCu;
    SET_GPR_U32(ctx, 31, 0x26A4E4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26A4DCu, 0x26A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4E4u;
label_26a4e4:
    // 0x26a4e4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a4e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a4ec: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x26A4ECu;
    SET_GPR_U32(ctx, 31, 0x26A4F4u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x26A4ECu, 0x26A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26a4f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26A4F8u;
    {
        const bool branch_taken_0x26a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4f8) {
            ctx->pc = 0x26A534u;
            goto label_26a534;
        }
    }
    ctx->pc = 0x26A500u;
label_26a500:
    // 0x26a500: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a504: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a50c: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x26A50Cu;
    SET_GPR_U32(ctx, 31, 0x26A514u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x26A50Cu, 0x26A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A514u;
label_26a514:
    // 0x26a514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a518: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26A518u;
    SET_GPR_U32(ctx, 31, 0x26A520u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26A518u, 0x26A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A520u;
label_26a520:
    // 0x26a520: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a528: 0xc09a714  jal         func_269C50
    ctx->pc = 0x26A528u;
    SET_GPR_U32(ctx, 31, 0x26A530u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x26A528u, 0x26A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A530u;
label_26a530:
    // 0x26a530: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26a534:
    // 0x26a534: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a538: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a53c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a540: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x26A540u;
    SET_GPR_U32(ctx, 31, 0x26A548u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x26A540u, 0x26A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A548u;
label_26a548:
    // 0x26a548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a54c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x26a54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a550: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x26A550u;
    {
        const bool branch_taken_0x26a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a550) {
            ctx->pc = 0x26A500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a500;
        }
    }
    ctx->pc = 0x26A558u;
    // 0x26a558: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a55c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a560: 0xc119d90  jal         func_467640
    ctx->pc = 0x26A560u;
    SET_GPR_U32(ctx, 31, 0x26A568u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x26A560u, 0x26A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A568u;
label_26a568:
    // 0x26a568: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26a56c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a570: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A570u;
    SET_GPR_U32(ctx, 31, 0x26A578u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A570u, 0x26A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A578u;
label_26a578:
    // 0x26a578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26a578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26a57c:
    // 0x26a57c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x26a57cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26a580: 0x1460ff85  bnez        $v1, . + 4 + (-0x7B << 2)
    ctx->pc = 0x26A580u;
    {
        const bool branch_taken_0x26a580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a580) {
            ctx->pc = 0x26A398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a398;
        }
    }
    ctx->pc = 0x26A588u;
    // 0x26a588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a58c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26A58Cu;
    {
        const bool branch_taken_0x26a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a58c) {
            ctx->pc = 0x26A694u;
            goto label_26a694;
        }
    }
    ctx->pc = 0x26A594u;
label_26a594:
    // 0x26a594: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a598: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a59c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5a0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26A5A0u;
    SET_GPR_U32(ctx, 31, 0x26A5A8u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26A5A0u, 0x26A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5A8u;
label_26a5a8:
    // 0x26a5a8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x26a5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5b0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x26a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x26a5b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a5b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a5bc: 0xc09a060  jal         func_268180
    ctx->pc = 0x26A5BCu;
    SET_GPR_U32(ctx, 31, 0x26A5C4u);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26A5BCu, 0x26A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5C4u;
label_26a5c4:
    // 0x26a5c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5c8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A5C8u;
    {
        const bool branch_taken_0x26a5c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5c8) {
            ctx->pc = 0x26A5F8u;
            goto label_26a5f8;
        }
    }
    ctx->pc = 0x26A5D0u;
    // 0x26a5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5d4: 0x240504c4  addiu       $a1, $zero, 0x4C4
    ctx->pc = 0x26a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
    // 0x26a5d8: 0x2786a0d4  addiu       $a2, $gp, -0x5F2C
    ctx->pc = 0x26a5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942932));
    // 0x26a5dc: 0xc041a50  jal         func_106940
    ctx->pc = 0x26A5DCu;
    SET_GPR_U32(ctx, 31, 0x26A5E4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26A5DCu, 0x26A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5E4u;
label_26a5e4:
    // 0x26a5e4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26a5e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a5ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26a5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5f0: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26A5F0u;
    SET_GPR_U32(ctx, 31, 0x26A5F8u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26A5F0u, 0x26A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5F8u;
label_26a5f8:
    // 0x26a5f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5fc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26a600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a604: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a608: 0xc09a060  jal         func_268180
    ctx->pc = 0x26A608u;
    SET_GPR_U32(ctx, 31, 0x26A610u);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26A608u, 0x26A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A610u;
label_26a610:
    // 0x26a610: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a614: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A614u;
    {
        const bool branch_taken_0x26a614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a614) {
            ctx->pc = 0x26A644u;
            goto label_26a644;
        }
    }
    ctx->pc = 0x26A61Cu;
    // 0x26a61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a620: 0x24050501  addiu       $a1, $zero, 0x501
    ctx->pc = 0x26a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x26a624: 0x2786a0d4  addiu       $a2, $gp, -0x5F2C
    ctx->pc = 0x26a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942932));
    // 0x26a628: 0xc041a50  jal         func_106940
    ctx->pc = 0x26A628u;
    SET_GPR_U32(ctx, 31, 0x26A630u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26A628u, 0x26A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A630u;
label_26a630:
    // 0x26a630: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26a630u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a634: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a638: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26a638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a63c: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26A63Cu;
    SET_GPR_U32(ctx, 31, 0x26A644u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26A63Cu, 0x26A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A644u;
label_26a644:
    // 0x26a644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a648: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x26a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26a64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a650: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a654: 0xc09a060  jal         func_268180
    ctx->pc = 0x26A654u;
    SET_GPR_U32(ctx, 31, 0x26A65Cu);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26A654u, 0x26A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A65Cu;
label_26a65c:
    // 0x26a65c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a660: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A660u;
    {
        const bool branch_taken_0x26a660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a660) {
            ctx->pc = 0x26A690u;
            goto label_26a690;
        }
    }
    ctx->pc = 0x26A668u;
    // 0x26a668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a66c: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x26a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x26a670: 0x2786a0d4  addiu       $a2, $gp, -0x5F2C
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942932));
    // 0x26a674: 0xc041a50  jal         func_106940
    ctx->pc = 0x26A674u;
    SET_GPR_U32(ctx, 31, 0x26A67Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26A674u, 0x26A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A67Cu;
label_26a67c:
    // 0x26a67c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26a67cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a680: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x26a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a684: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26a684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a688: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26A688u;
    SET_GPR_U32(ctx, 31, 0x26A690u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26A688u, 0x26A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A690u;
label_26a690:
    // 0x26a690: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26a690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26a694:
    // 0x26a694: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x26a694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26a698: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x26A698u;
    {
        const bool branch_taken_0x26a698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a698) {
            ctx->pc = 0x26A594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a594;
        }
    }
    ctx->pc = 0x26A6A0u;
    // 0x26a6a0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6a4: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x26a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x26a6a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A6A8u;
    {
        const bool branch_taken_0x26a6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a6a8) {
            ctx->pc = 0x26A6D8u;
            goto label_26a6d8;
        }
    }
    ctx->pc = 0x26A6B0u;
    // 0x26a6b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6b4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a6b8: 0xc09a338  jal         func_268CE0
    ctx->pc = 0x26A6B8u;
    SET_GPR_U32(ctx, 31, 0x26A6C0u);
    ctx->pc = 0x268CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CE0u, 0x26A6B8u, 0x26A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6C0u;
label_26a6c0:
    // 0x26a6c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6c4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a6c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A6C8u;
    SET_GPR_U32(ctx, 31, 0x26A6D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A6C8u, 0x26A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6D0u;
label_26a6d0:
    // 0x26a6d0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6d4: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x26a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_26a6d8:
    // 0x26a6d8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6dc: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x26a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26a6e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A6E0u;
    {
        const bool branch_taken_0x26a6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a6e0) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A6E8u;
    // 0x26a6e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6ec: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x26a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a6f0: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x26A6F0u;
    SET_GPR_U32(ctx, 31, 0x26A6F8u);
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x26A6F0u, 0x26A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6F8u;
label_26a6f8:
    // 0x26a6f8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a6fc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x26a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a700: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A700u;
    SET_GPR_U32(ctx, 31, 0x26A708u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A700u, 0x26A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A708u;
label_26a708:
    // 0x26a708: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a70c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x26a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_26a710:
    // 0x26a710: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a714: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26a718: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26A718u;
    {
        const bool branch_taken_0x26a718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a718) {
            ctx->pc = 0x26A748u;
            goto label_26a748;
        }
    }
    ctx->pc = 0x26A720u;
    // 0x26a720: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a724: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a728: 0xc09a32c  jal         func_268CB0
    ctx->pc = 0x26A728u;
    SET_GPR_U32(ctx, 31, 0x26A730u);
    ctx->pc = 0x268CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CB0u, 0x26A728u, 0x26A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A730u;
label_26a730:
    // 0x26a730: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a734: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a738: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A738u;
    SET_GPR_U32(ctx, 31, 0x26A740u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A738u, 0x26A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A740u;
label_26a740:
    // 0x26a740: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26a744: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x26a744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_26a748:
    // 0x26a748: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a74c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26a74cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a750: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26a750u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a754: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26a754u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a758: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26a758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a75c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26a75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a760: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a770: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26a774: 0x3e00008  jr          $ra
    ctx->pc = 0x26A774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A77Cu;
    // 0x26a77c: 0x0  nop
    ctx->pc = 0x26a77cu;
    // NOP
    ctx->pc = 0x26a780u;
}
