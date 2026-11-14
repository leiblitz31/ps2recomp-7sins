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

// Function: sub_00296670
// Address: 0x296670 - 0x296800
void sub_00296670_0x296670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296670_0x296670");
#endif

    switch (ctx->pc) {
        case 0x296698u: goto label_296698;
        case 0x2966b0u: goto label_2966b0;
        case 0x2966c0u: goto label_2966c0;
        case 0x2966d0u: goto label_2966d0;
        case 0x2966f0u: goto label_2966f0;
        case 0x296708u: goto label_296708;
        case 0x296714u: goto label_296714;
        case 0x296724u: goto label_296724;
        case 0x296738u: goto label_296738;
        case 0x296750u: goto label_296750;
        case 0x296770u: goto label_296770;
        case 0x296794u: goto label_296794;
        case 0x2967acu: goto label_2967ac;
        case 0x2967ccu: goto label_2967cc;
        case 0x2967d8u: goto label_2967d8;
        default: break;
    }

    ctx->pc = 0x296670u;

    // 0x296670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x296678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29667c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296684: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x296684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x296688: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29668c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296690: 0xc121d18  jal         func_487460
    ctx->pc = 0x296690u;
    SET_GPR_U32(ctx, 31, 0x296698u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x296690u, 0x296698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296698u;
label_296698:
    // 0x296698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29669c: 0x1011000c  beq         $zero, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29669Cu;
    {
        const bool branch_taken_0x29669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x29669c) {
            ctx->pc = 0x2966D0u;
            goto label_2966d0;
        }
    }
    ctx->pc = 0x2966A4u;
    // 0x2966a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2966a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2966a8: 0xc1066de  jal         func_419B78
    ctx->pc = 0x2966A8u;
    SET_GPR_U32(ctx, 31, 0x2966B0u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x2966A8u, 0x2966B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966B0u;
label_2966b0:
    // 0x2966b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2966b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966b4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2966b8: 0xc1217b4  jal         func_485ED0
    ctx->pc = 0x2966B8u;
    SET_GPR_U32(ctx, 31, 0x2966C0u);
    ctx->pc = 0x485ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485ED0u, 0x2966B8u, 0x2966C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966C0u;
label_2966c0:
    // 0x2966c0: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2966c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2966c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2966c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966c8: 0xc08a614  jal         func_229850
    ctx->pc = 0x2966C8u;
    SET_GPR_U32(ctx, 31, 0x2966D0u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2966C8u, 0x2966D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966D0u;
label_2966d0:
    // 0x2966d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2966d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966d4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2966d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2966D8u;
    {
        const bool branch_taken_0x2966d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966d8) {
            ctx->pc = 0x2966F8u;
            goto label_2966f8;
        }
    }
    ctx->pc = 0x2966E0u;
    // 0x2966e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2966e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966e4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x2966e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2966e8: 0xc0f0606  jal         func_3C1818
    ctx->pc = 0x2966E8u;
    SET_GPR_U32(ctx, 31, 0x2966F0u);
    ctx->pc = 0x3C1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1818u, 0x2966E8u, 0x2966F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966F0u;
label_2966f0:
    // 0x2966f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2966f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966f4: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2966f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
label_2966f8:
    // 0x2966f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2966fc: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x2966fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x296700: 0xc0a58e0  jal         func_296380
    ctx->pc = 0x296700u;
    SET_GPR_U32(ctx, 31, 0x296708u);
    ctx->pc = 0x296380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296380u, 0x296700u, 0x296708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296708u;
label_296708:
    // 0x296708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29670c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29670Cu;
    {
        const bool branch_taken_0x29670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29670c) {
            ctx->pc = 0x296728u;
            goto label_296728;
        }
    }
    ctx->pc = 0x296714u;
label_296714:
    // 0x296714: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x296718: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29671c: 0xc0a5b2c  jal         func_296CB0
    ctx->pc = 0x29671Cu;
    SET_GPR_U32(ctx, 31, 0x296724u);
    ctx->pc = 0x296CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CB0u, 0x29671Cu, 0x296724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296724u;
label_296724:
    // 0x296724: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_296728:
    // 0x296728: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29672c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x29672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x296730: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x296730u;
    SET_GPR_U32(ctx, 31, 0x296738u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x296730u, 0x296738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296738u;
label_296738:
    // 0x296738: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x296738u;
    {
        const bool branch_taken_0x296738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x296738) {
            ctx->pc = 0x296714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296714;
        }
    }
    ctx->pc = 0x296740u;
    // 0x296740: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296744: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x296748: 0xc0a5a2c  jal         func_2968B0
    ctx->pc = 0x296748u;
    SET_GPR_U32(ctx, 31, 0x296750u);
    ctx->pc = 0x2968B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968B0u, 0x296748u, 0x296750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296750u;
label_296750:
    // 0x296750: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x296750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296754: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x296758: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x296758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x29675c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29675cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x296760: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x296760u;
    {
        const bool branch_taken_0x296760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296760) {
            ctx->pc = 0x296794u;
            goto label_296794;
        }
    }
    ctx->pc = 0x296768u;
    // 0x296768: 0xc122430  jal         func_4890C0
    ctx->pc = 0x296768u;
    SET_GPR_U32(ctx, 31, 0x296770u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x296768u, 0x296770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296770u;
label_296770:
    // 0x296770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296774: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29677c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x29677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x296780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29678c: 0xc121290  jal         func_484A40
    ctx->pc = 0x29678Cu;
    SET_GPR_U32(ctx, 31, 0x296794u);
    ctx->pc = 0x484A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A40u, 0x29678Cu, 0x296794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296794u;
label_296794:
    // 0x296794: 0x8f83bc20  lw          $v1, -0x43E0($gp)
    ctx->pc = 0x296794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x296798: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x296798u;
    {
        const bool branch_taken_0x296798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296798) {
            ctx->pc = 0x2967DCu;
            goto label_2967dc;
        }
    }
    ctx->pc = 0x2967A0u;
    // 0x2967a0: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x2967a4: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2967A4u;
    SET_GPR_U32(ctx, 31, 0x2967ACu);
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2967A4u, 0x2967ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967ACu;
label_2967ac:
    // 0x2967ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2967ACu;
    {
        const bool branch_taken_0x2967ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2967ac) {
            ctx->pc = 0x2967DCu;
            goto label_2967dc;
        }
    }
    ctx->pc = 0x2967B4u;
    // 0x2967b4: 0x8f83bc20  lw          $v1, -0x43E0($gp)
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x2967b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2967B8u;
    {
        const bool branch_taken_0x2967b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967b8) {
            ctx->pc = 0x2967DCu;
            goto label_2967dc;
        }
    }
    ctx->pc = 0x2967C0u;
    // 0x2967c0: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x2967c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x2967c4: 0xc0a5a00  jal         func_296800
    ctx->pc = 0x2967C4u;
    SET_GPR_U32(ctx, 31, 0x2967CCu);
    ctx->pc = 0x296800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296800u, 0x2967C4u, 0x2967CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967CCu;
label_2967cc:
    // 0x2967cc: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x2967ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x2967d0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2967D0u;
    SET_GPR_U32(ctx, 31, 0x2967D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2967D0u, 0x2967D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967D8u;
label_2967d8:
    // 0x2967d8: 0xaf80bc20  sw          $zero, -0x43E0($gp)
    ctx->pc = 0x2967d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949920), GPR_U32(ctx, 0));
label_2967dc:
    // 0x2967dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2967dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2967e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2967e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2967e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2967e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2967e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2967e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2967ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2967f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2967F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967F8u;
    // 0x2967f8: 0x0  nop
    ctx->pc = 0x2967f8u;
    // NOP
    // 0x2967fc: 0x0  nop
    ctx->pc = 0x2967fcu;
    // NOP
    ctx->pc = 0x296800u;
}
