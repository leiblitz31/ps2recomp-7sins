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

// Function: sub_002BD670
// Address: 0x2bd670 - 0x2bd8a0
void sub_002BD670_0x2bd670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD670_0x2bd670");
#endif

    switch (ctx->pc) {
        case 0x2bd694u: goto label_2bd694;
        case 0x2bd6c4u: goto label_2bd6c4;
        case 0x2bd714u: goto label_2bd714;
        case 0x2bd73cu: goto label_2bd73c;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd780u: goto label_2bd780;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd7a0u: goto label_2bd7a0;
        case 0x2bd7c8u: goto label_2bd7c8;
        case 0x2bd7d4u: goto label_2bd7d4;
        case 0x2bd7e8u: goto label_2bd7e8;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd824u: goto label_2bd824;
        case 0x2bd838u: goto label_2bd838;
        default: break;
    }

    ctx->pc = 0x2bd670u;

    // 0x2bd670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bd670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bd674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd684: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2bd684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2bd688: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2bd688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd68c: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2BD68Cu;
    SET_GPR_U32(ctx, 31, 0x2BD694u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2BD68Cu, 0x2BD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD694u;
label_2bd694:
    // 0x2bd694: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2bd694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2bd698: 0x246367a0  addiu       $v1, $v1, 0x67A0
    ctx->pc = 0x2bd698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26528));
    // 0x2bd69c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2bd6a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6a8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2bd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2bd6ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6b0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2bd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2bd6b4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6b8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2bd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2bd6bc: 0xc058cd8  jal         func_163360
    ctx->pc = 0x2BD6BCu;
    SET_GPR_U32(ctx, 31, 0x2BD6C4u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x2BD6BCu, 0x2BD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6C4u;
label_2bd6c4:
    // 0x2bd6c4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6c8: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2bd6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2bd6cc: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd6d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6d4: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x2bd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x2bd6d8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd6dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6e0: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x2bd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x2bd6e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2bd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bd6e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6ec: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x2bd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2bd6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd6f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd6f8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2bd6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2bd6fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd700: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2bd700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2bd704: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd708: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2bd708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2bd70c: 0xc0af6bc  jal         func_2BDAF0
    ctx->pc = 0x2BD70Cu;
    SET_GPR_U32(ctx, 31, 0x2BD714u);
    ctx->pc = 0x2BDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDAF0u, 0x2BD70Cu, 0x2BD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD714u;
label_2bd714:
    // 0x2bd714: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd718: 0xa0400078  sb          $zero, 0x78($v0)
    ctx->pc = 0x2bd718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd71c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd720: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2bd720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2bd724: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd728: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x2bd728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x2bd72c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd730: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bd730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bd734: 0xc06885c  jal         func_1A2170
    ctx->pc = 0x2BD734u;
    SET_GPR_U32(ctx, 31, 0x2BD73Cu);
    ctx->pc = 0x1A2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2170u, 0x2BD734u, 0x2BD73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD73Cu;
label_2bd73c:
    // 0x2bd73c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd740: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x2bd740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x2bd744: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd748: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2bd748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x2bd74c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd750: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2bd750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x2bd754: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd758: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2bd758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2bd75c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2BD75Cu;
    SET_GPR_U32(ctx, 31, 0x2BD764u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2BD75Cu, 0x2BD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD764u;
label_2bd764:
    // 0x2bd764: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd768: 0xaf82bcb0  sw          $v0, -0x4350($gp)
    ctx->pc = 0x2bd768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950064), GPR_U32(ctx, 2));
    // 0x2bd76c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd770: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2bd770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2bd774: 0x24a5e098  addiu       $a1, $a1, -0x1F68
    ctx->pc = 0x2bd774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    // 0x2bd778: 0xc040304  jal         func_100C10
    ctx->pc = 0x2BD778u;
    SET_GPR_U32(ctx, 31, 0x2BD780u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2BD778u, 0x2BD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD780u;
label_2bd780:
    // 0x2bd780: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2bd780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd784: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x2BD784u;
    SET_GPR_U32(ctx, 31, 0x2BD78Cu);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2BD784u, 0x2BD78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD78Cu;
label_2bd78c:
    // 0x2bd78c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bd78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd790: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2bd790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd794: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd798: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BD798u;
    SET_GPR_U32(ctx, 31, 0x2BD7A0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BD798u, 0x2BD7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7A0u;
label_2bd7a0:
    // 0x2bd7a0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD7A0u;
    {
        const bool branch_taken_0x2bd7a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7a0) {
            ctx->pc = 0x2BD7B4u;
            goto label_2bd7b4;
        }
    }
    ctx->pc = 0x2BD7A8u;
    // 0x2bd7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd7ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd7b0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2bd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_2bd7b4:
    // 0x2bd7b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2bd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd7b8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2bd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2bd7bc: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58
    ctx->pc = 0x2bd7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
    // 0x2bd7c0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2BD7C0u;
    SET_GPR_U32(ctx, 31, 0x2BD7C8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2BD7C0u, 0x2BD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7C8u;
label_2bd7c8:
    // 0x2bd7c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2bd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd7cc: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x2BD7CCu;
    SET_GPR_U32(ctx, 31, 0x2BD7D4u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2BD7CCu, 0x2BD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7D4u;
label_2bd7d4:
    // 0x2bd7d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd7dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd7e0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BD7E0u;
    SET_GPR_U32(ctx, 31, 0x2BD7E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BD7E0u, 0x2BD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7E8u;
label_2bd7e8:
    // 0x2bd7e8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD7E8u;
    {
        const bool branch_taken_0x2bd7e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7e8) {
            ctx->pc = 0x2BD800u;
            goto label_2bd800;
        }
    }
    ctx->pc = 0x2BD7F0u;
    // 0x2bd7f0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2bd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd7f4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2bd7f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2bd7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2bd7fc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2bd7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2bd800:
    // 0x2bd800: 0xaf80bca8  sw          $zero, -0x4358($gp)
    ctx->pc = 0x2bd800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950056), GPR_U32(ctx, 0));
    // 0x2bd804: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bd804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd808: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2bd808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2bd80c: 0x24a5e0b8  addiu       $a1, $a1, -0x1F48
    ctx->pc = 0x2bd80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959288));
    // 0x2bd810: 0xc040304  jal         func_100C10
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2BD810u, 0x2BD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD818u;
label_2bd818:
    // 0x2bd818: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bd818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd81c: 0xc1163b8  jal         func_458EE0
    ctx->pc = 0x2BD81Cu;
    SET_GPR_U32(ctx, 31, 0x2BD824u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2BD81Cu, 0x2BD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD824u;
label_2bd824:
    // 0x2bd824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd828: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bd828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd82c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd830: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BD830u;
    SET_GPR_U32(ctx, 31, 0x2BD838u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BD830u, 0x2BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD838u;
label_2bd838:
    // 0x2bd838: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD838u;
    {
        const bool branch_taken_0x2bd838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd838) {
            ctx->pc = 0x2BD850u;
            goto label_2bd850;
        }
    }
    ctx->pc = 0x2BD840u;
    // 0x2bd840: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2bd840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd844: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2bd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2bd848: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2bd848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2bd84c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2bd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2bd850:
    // 0x2bd850: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd854: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x2bd854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd858: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd85c: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2bd85cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd860: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bd864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd868: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd86c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd870: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd874: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2bd874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x2bd878: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd87c: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x2bd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x2bd880: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd884: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bd884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd894: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2bd894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bd898: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8A0u;
}
