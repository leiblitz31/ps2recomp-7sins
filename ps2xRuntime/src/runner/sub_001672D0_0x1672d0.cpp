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

// Function: sub_001672D0
// Address: 0x1672d0 - 0x167430
void sub_001672D0_0x1672d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672D0_0x1672d0");
#endif

    switch (ctx->pc) {
        case 0x167308u: goto label_167308;
        case 0x167324u: goto label_167324;
        case 0x16734cu: goto label_16734c;
        case 0x16736cu: goto label_16736c;
        case 0x167388u: goto label_167388;
        case 0x167394u: goto label_167394;
        case 0x1673b4u: goto label_1673b4;
        case 0x1673c4u: goto label_1673c4;
        case 0x1673e4u: goto label_1673e4;
        case 0x167400u: goto label_167400;
        case 0x167410u: goto label_167410;
        case 0x167420u: goto label_167420;
        default: break;
    }

    ctx->pc = 0x1672d0u;

    // 0x1672d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1672d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1672d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1672d8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1672d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1672dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1672dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1672e0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1672e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1672e4: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1672E4u;
    {
        const bool branch_taken_0x1672e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1672e4) {
            ctx->pc = 0x16732Cu;
            goto label_16732c;
        }
    }
    ctx->pc = 0x1672ECu;
    // 0x1672ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1672ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1672f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1672f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1672f4: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1672f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1672f8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1672f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1672fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1672fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167300: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x167300u;
    SET_GPR_U32(ctx, 31, 0x167308u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x167300u, 0x167308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167308u;
label_167308:
    // 0x167308: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x167308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16730c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167310: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x167310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x167314: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x167314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x167318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16731c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16731Cu;
    SET_GPR_U32(ctx, 31, 0x167324u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16731Cu, 0x167324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167324u;
label_167324:
    // 0x167324: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x167324u;
    {
        const bool branch_taken_0x167324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167324) {
            ctx->pc = 0x167420u;
            goto label_167420;
        }
    }
    ctx->pc = 0x16732Cu;
label_16732c:
    // 0x16732c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167330: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x167334: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x167334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167338: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x167338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16733c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16733cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x167340: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x167344: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x167344u;
    SET_GPR_U32(ctx, 31, 0x16734Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x167344u, 0x16734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16734Cu;
label_16734c:
    // 0x16734c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167350: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167354: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x167354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x167358: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x167358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16735c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16735cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x167360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167364: 0xc08c800  jal         func_232000
    ctx->pc = 0x167364u;
    SET_GPR_U32(ctx, 31, 0x16736Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x167364u, 0x16736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16736Cu;
label_16736c:
    // 0x16736c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167370: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167374: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x167374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x167378: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x167378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16737c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167380: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x167380u;
    SET_GPR_U32(ctx, 31, 0x167388u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x167380u, 0x167388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167388u;
label_167388:
    // 0x167388: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16738c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x16738Cu;
    SET_GPR_U32(ctx, 31, 0x167394u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x16738Cu, 0x167394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167394u;
label_167394:
    // 0x167394: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167398: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x16739c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x16739cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1673a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1673a4: 0x27858ea0  addiu       $a1, $gp, -0x7160
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938272));
    // 0x1673a8: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x1673a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1673ac: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1673ACu;
    SET_GPR_U32(ctx, 31, 0x1673B4u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1673ACu, 0x1673B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673B4u;
label_1673b4:
    // 0x1673b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1673b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1673b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1673b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1673bc: 0xc119568  jal         func_4655A0
    ctx->pc = 0x1673BCu;
    SET_GPR_U32(ctx, 31, 0x1673C4u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1673BCu, 0x1673C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673C4u;
label_1673c4:
    // 0x1673c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1673c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1673cc: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1673ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1673d0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1673d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1673d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1673d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1673d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1673dc: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1673DCu;
    SET_GPR_U32(ctx, 31, 0x1673E4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1673DCu, 0x1673E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673E4u;
label_1673e4:
    // 0x1673e4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1673e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1673ec: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1673ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1673f0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1673f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1673f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1673f8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1673F8u;
    SET_GPR_U32(ctx, 31, 0x167400u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1673F8u, 0x167400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167400u;
label_167400:
    // 0x167400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167404: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x167404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167408: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x167408u;
    SET_GPR_U32(ctx, 31, 0x167410u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x167408u, 0x167410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167410u;
label_167410:
    // 0x167410: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167414: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167418: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x167418u;
    SET_GPR_U32(ctx, 31, 0x167420u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x167418u, 0x167420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167420u;
label_167420:
    // 0x167420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167424: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167428: 0x3e00008  jr          $ra
    ctx->pc = 0x167428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167430u;
}
