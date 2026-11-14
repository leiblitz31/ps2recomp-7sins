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

// Function: sub_001DB2D0
// Address: 0x1db2d0 - 0x1db450
void sub_001DB2D0_0x1db2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB2D0_0x1db2d0");
#endif

    switch (ctx->pc) {
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db300u: goto label_1db300;
        case 0x1db310u: goto label_1db310;
        case 0x1db320u: goto label_1db320;
        case 0x1db344u: goto label_1db344;
        case 0x1db364u: goto label_1db364;
        case 0x1db384u: goto label_1db384;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3e4u: goto label_1db3e4;
        case 0x1db404u: goto label_1db404;
        case 0x1db424u: goto label_1db424;
        case 0x1db43cu: goto label_1db43c;
        default: break;
    }

    ctx->pc = 0x1db2d0u;

    // 0x1db2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1db2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1db2dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1db2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1db2e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2e4: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1db2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1db2e8: 0xc056254  jal         func_158950
    ctx->pc = 0x1DB2E8u;
    SET_GPR_U32(ctx, 31, 0x1DB2F0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DB2E8u, 0x1DB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F0u;
label_1db2f0:
    // 0x1db2f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2f4: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1db2f8: 0xc056254  jal         func_158950
    ctx->pc = 0x1DB2F8u;
    SET_GPR_U32(ctx, 31, 0x1DB300u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DB2F8u, 0x1DB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB300u;
label_1db300:
    // 0x1db300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db304: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1db308: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1DB308u;
    SET_GPR_U32(ctx, 31, 0x1DB310u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1DB308u, 0x1DB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB310u;
label_1db310:
    // 0x1db310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db314: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1db314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1db318: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1DB318u;
    SET_GPR_U32(ctx, 31, 0x1DB320u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1DB318u, 0x1DB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB320u;
label_1db320:
    // 0x1db320: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1db320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db328: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1db328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1db32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db330: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db334: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db338: 0x24a57e60  addiu       $a1, $a1, 0x7E60
    ctx->pc = 0x1db338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    // 0x1db33c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB33Cu;
    SET_GPR_U32(ctx, 31, 0x1DB344u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB33Cu, 0x1DB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB344u;
label_1db344:
    // 0x1db344: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db348: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x1db348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x1db34c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db350: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db354: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db358: 0x24a57e80  addiu       $a1, $a1, 0x7E80
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
    // 0x1db35c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB35Cu;
    SET_GPR_U32(ctx, 31, 0x1DB364u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB35Cu, 0x1DB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB364u;
label_1db364:
    // 0x1db364: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db368: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1db368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x1db36c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db370: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db374: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db378: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x1db37c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB37Cu;
    SET_GPR_U32(ctx, 31, 0x1DB384u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB37Cu, 0x1DB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB384u;
label_1db384:
    // 0x1db384: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db388: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1db388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1db38c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db390: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db394: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db398: 0x24a57ec0  addiu       $a1, $a1, 0x7EC0
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32448));
    // 0x1db39c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB39Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3A4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB39Cu, 0x1DB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3A4u;
label_1db3a4:
    // 0x1db3a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3a8: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x1db3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x1db3ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3b0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db3b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db3b8: 0x24a57ee0  addiu       $a1, $a1, 0x7EE0
    ctx->pc = 0x1db3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32480));
    // 0x1db3bc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB3BCu;
    SET_GPR_U32(ctx, 31, 0x1DB3C4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB3BCu, 0x1DB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3C4u;
label_1db3c4:
    // 0x1db3c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3c8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1db3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1db3cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3d0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db3d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db3d8: 0x24a57f00  addiu       $a1, $a1, 0x7F00
    ctx->pc = 0x1db3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    // 0x1db3dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB3DCu;
    SET_GPR_U32(ctx, 31, 0x1DB3E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB3DCu, 0x1DB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3E4u;
label_1db3e4:
    // 0x1db3e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3e8: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x1db3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x1db3ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3f0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db3f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db3f8: 0x24a57f20  addiu       $a1, $a1, 0x7F20
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
    // 0x1db3fc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB3FCu;
    SET_GPR_U32(ctx, 31, 0x1DB404u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB3FCu, 0x1DB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB404u;
label_1db404:
    // 0x1db404: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db408: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1db408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1db40c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db410: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db414: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1db418: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x1db418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
    // 0x1db41c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DB41Cu;
    SET_GPR_U32(ctx, 31, 0x1DB424u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DB41Cu, 0x1DB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB424u;
label_1db424:
    // 0x1db424: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1db424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db428: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1db428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1db42c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db434: 0xc077184  jal         func_1DC610
    ctx->pc = 0x1DB434u;
    SET_GPR_U32(ctx, 31, 0x1DB43Cu);
    ctx->pc = 0x1DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC610u, 0x1DB434u, 0x1DB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB43Cu;
label_1db43c:
    // 0x1db43c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1db43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db444: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1db448: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB450u;
}
