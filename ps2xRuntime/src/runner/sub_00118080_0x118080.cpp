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

// Function: sub_00118080
// Address: 0x118080 - 0x118290
void sub_00118080_0x118080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118080_0x118080");
#endif

    switch (ctx->pc) {
        case 0x1180f0u: goto label_1180f0;
        case 0x118100u: goto label_118100;
        case 0x118118u: goto label_118118;
        case 0x118130u: goto label_118130;
        case 0x118140u: goto label_118140;
        case 0x118160u: goto label_118160;
        case 0x118170u: goto label_118170;
        case 0x118188u: goto label_118188;
        case 0x1181a0u: goto label_1181a0;
        case 0x1181bcu: goto label_1181bc;
        case 0x1181ccu: goto label_1181cc;
        case 0x1181dcu: goto label_1181dc;
        case 0x1181f4u: goto label_1181f4;
        case 0x118204u: goto label_118204;
        case 0x118214u: goto label_118214;
        case 0x118224u: goto label_118224;
        case 0x118240u: goto label_118240;
        case 0x118260u: goto label_118260;
        default: break;
    }

    ctx->pc = 0x118080u;

    // 0x118080: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x118080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x118084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11808c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11809c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x11809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1180a0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1180a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1180a4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1180a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1180a8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1180a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1180ac: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1180acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x1180b0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x1180b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x1180b4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x1180b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1180b8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1180b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1180bc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x1180bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1180c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1180c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1180c8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1180C8u;
    {
        const bool branch_taken_0x1180c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1180c8) {
            ctx->pc = 0x118120u;
            goto label_118120;
        }
    }
    ctx->pc = 0x1180D0u;
    // 0x1180d0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1180D0u;
    {
        const bool branch_taken_0x1180d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180d0) {
            ctx->pc = 0x1181ACu;
            goto label_1181ac;
        }
    }
    ctx->pc = 0x1180D8u;
    // 0x1180d8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1180D8u;
    {
        const bool branch_taken_0x1180d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180d8) {
            ctx->pc = 0x118120u;
            goto label_118120;
        }
    }
    ctx->pc = 0x1180E0u;
    // 0x1180e0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1180e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1180e4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1180e8: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1180E8u;
    SET_GPR_U32(ctx, 31, 0x1180F0u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1180E8u, 0x1180F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180F0u;
label_1180f0:
    // 0x1180f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1180f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1180f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180f8: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x1180F8u;
    SET_GPR_U32(ctx, 31, 0x118100u);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x1180F8u, 0x118100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118100u;
label_118100:
    // 0x118100: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118104: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x118104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x118108: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11810c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118110: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x118110u;
    SET_GPR_U32(ctx, 31, 0x118118u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x118110u, 0x118118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118118u;
label_118118:
    // 0x118118: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x118118u;
    {
        const bool branch_taken_0x118118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118118) {
            ctx->pc = 0x1181ACu;
            goto label_1181ac;
        }
    }
    ctx->pc = 0x118120u;
label_118120:
    // 0x118120: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118124: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x118124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x118128: 0xc0460ac  jal         func_1182B0
    ctx->pc = 0x118128u;
    SET_GPR_U32(ctx, 31, 0x118130u);
    ctx->pc = 0x1182B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182B0u, 0x118128u, 0x118130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118130u;
label_118130:
    // 0x118130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118138: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x118138u;
    SET_GPR_U32(ctx, 31, 0x118140u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x118138u, 0x118140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118140u;
label_118140:
    // 0x118140: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118144: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x118144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11814c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11814Cu;
    {
        const bool branch_taken_0x11814c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11814c) {
            ctx->pc = 0x11817Cu;
            goto label_11817c;
        }
    }
    ctx->pc = 0x118154u;
    // 0x118154: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118158: 0xc044cd4  jal         func_113350
    ctx->pc = 0x118158u;
    SET_GPR_U32(ctx, 31, 0x118160u);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x118158u, 0x118160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118160u;
label_118160:
    // 0x118160: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118164: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118168: 0xc044cc4  jal         func_113310
    ctx->pc = 0x118168u;
    SET_GPR_U32(ctx, 31, 0x118170u);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x118168u, 0x118170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118170u;
label_118170:
    // 0x118170: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x118170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x118174: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x118174u;
    {
        const bool branch_taken_0x118174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118174) {
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x11817Cu;
label_11817c:
    // 0x11817c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x11817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118180: 0xc044ccc  jal         func_113330
    ctx->pc = 0x118180u;
    SET_GPR_U32(ctx, 31, 0x118188u);
    ctx->pc = 0x113330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113330u, 0x118180u, 0x118188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118188u;
label_118188:
    // 0x118188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x118188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11818c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11818Cu;
    {
        const bool branch_taken_0x11818c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11818c) {
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x118194u;
    // 0x118194: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x118194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118198: 0xc044ccc  jal         func_113330
    ctx->pc = 0x118198u;
    SET_GPR_U32(ctx, 31, 0x1181A0u);
    ctx->pc = 0x113330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113330u, 0x118198u, 0x1181A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A0u;
label_1181a0:
    // 0x1181a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1181a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1181a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1181A4u;
    {
        const bool branch_taken_0x1181a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181a4) {
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x1181ACu;
label_1181ac:
    // 0x1181ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1181acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1181b0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1181b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1181b4: 0xc0460ac  jal         func_1182B0
    ctx->pc = 0x1181B4u;
    SET_GPR_U32(ctx, 31, 0x1181BCu);
    ctx->pc = 0x1182B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182B0u, 0x1181B4u, 0x1181BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181BCu;
label_1181bc:
    // 0x1181bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1181bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1181c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181c4: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x1181C4u;
    SET_GPR_U32(ctx, 31, 0x1181CCu);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x1181C4u, 0x1181CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181CCu;
label_1181cc:
    // 0x1181cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1181ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1181d0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1181d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1181d4: 0xc044cc4  jal         func_113310
    ctx->pc = 0x1181D4u;
    SET_GPR_U32(ctx, 31, 0x1181DCu);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x1181D4u, 0x1181DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181DCu;
label_1181dc:
    // 0x1181dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1181e0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1181E0u;
    {
        const bool branch_taken_0x1181e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1181e0) {
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x1181E8u;
    // 0x1181e8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1181ec: 0xc044cc4  jal         func_113310
    ctx->pc = 0x1181ECu;
    SET_GPR_U32(ctx, 31, 0x1181F4u);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x1181ECu, 0x1181F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181F4u;
label_1181f4:
    // 0x1181f4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1181f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1181f8:
    // 0x1181f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1181f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181fc: 0xc0460a4  jal         func_118290
    ctx->pc = 0x1181FCu;
    SET_GPR_U32(ctx, 31, 0x118204u);
    ctx->pc = 0x118290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118290u, 0x1181FCu, 0x118204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118204u;
label_118204:
    // 0x118204: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x118204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x118208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11820c: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x11820Cu;
    SET_GPR_U32(ctx, 31, 0x118214u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x11820Cu, 0x118214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118214u;
label_118214:
    // 0x118214: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11821c: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x11821Cu;
    SET_GPR_U32(ctx, 31, 0x118224u);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x11821Cu, 0x118224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118224u;
label_118224:
    // 0x118224: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118228: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x118228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11822c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118234: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x118234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x118238: 0xc042858  jal         func_10A160
    ctx->pc = 0x118238u;
    SET_GPR_U32(ctx, 31, 0x118240u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x118238u, 0x118240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118240u;
label_118240:
    // 0x118240: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x118240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118244: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x118244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11824c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x11824cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x118250: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118258: 0xc044e14  jal         func_113850
    ctx->pc = 0x118258u;
    SET_GPR_U32(ctx, 31, 0x118260u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x118258u, 0x118260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118260u;
label_118260:
    // 0x118260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11826c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11826cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118278: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x118278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x11827c: 0x3e00008  jr          $ra
    ctx->pc = 0x11827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118284u;
    // 0x118284: 0x0  nop
    ctx->pc = 0x118284u;
    // NOP
    // 0x118288: 0x0  nop
    ctx->pc = 0x118288u;
    // NOP
    // 0x11828c: 0x0  nop
    ctx->pc = 0x11828cu;
    // NOP
    ctx->pc = 0x118290u;
}
