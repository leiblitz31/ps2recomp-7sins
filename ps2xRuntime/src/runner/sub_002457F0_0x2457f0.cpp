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

// Function: sub_002457F0
// Address: 0x2457f0 - 0x245920
void sub_002457F0_0x2457f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002457F0_0x2457f0");
#endif

    switch (ctx->pc) {
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        default: break;
    }

    ctx->pc = 0x2457f0u;

label_2457f0:
    // 0x2457f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2457f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2457f4:
    // 0x2457f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2457f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2457f8:
    // 0x2457f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2457f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2457fc:
    // 0x2457fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2457fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245800:
    // 0x245800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245804:
    // 0x245804: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x245804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_245808:
    // 0x245808: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x245808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_24580c:
    // 0x24580c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x24580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245810:
    // 0x245810: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_245814:
    if (ctx->pc == 0x245814u) {
        ctx->pc = 0x245818u;
        goto label_245818;
    }
    ctx->pc = 0x245810u;
    {
        const bool branch_taken_0x245810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245810) {
            ctx->pc = 0x2458F8u;
            goto label_2458f8;
        }
    }
    ctx->pc = 0x245818u;
label_245818:
    // 0x245818: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x245818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_24581c:
    // 0x24581c: 0xc085530  jal         func_2154C0
label_245820:
    if (ctx->pc == 0x245820u) {
        ctx->pc = 0x245824u;
        goto label_245824;
    }
    ctx->pc = 0x24581Cu;
    SET_GPR_U32(ctx, 31, 0x245824u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x24581Cu, 0x245824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245824u;
label_245824:
    // 0x245824: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x245824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_245828:
    // 0x245828: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_24582c:
    if (ctx->pc == 0x24582Cu) {
        ctx->pc = 0x245830u;
        goto label_245830;
    }
    ctx->pc = 0x245828u;
    {
        const bool branch_taken_0x245828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245828) {
            ctx->pc = 0x2458F8u;
            goto label_2458f8;
        }
    }
    ctx->pc = 0x245830u;
label_245830:
    // 0x245830: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245834:
    // 0x245834: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_245838:
    // 0x245838: 0xc042290  jal         func_108A40
label_24583c:
    if (ctx->pc == 0x24583Cu) {
        ctx->pc = 0x245840u;
        goto label_245840;
    }
    ctx->pc = 0x245838u;
    SET_GPR_U32(ctx, 31, 0x245840u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x245838u, 0x245840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245840u;
label_245840:
    // 0x245840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245844:
    // 0x245844: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245848:
    // 0x245848: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_24584c:
    // 0x24584c: 0xc042288  jal         func_108A20
label_245850:
    if (ctx->pc == 0x245850u) {
        ctx->pc = 0x245854u;
        goto label_245854;
    }
    ctx->pc = 0x24584Cu;
    SET_GPR_U32(ctx, 31, 0x245854u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x24584Cu, 0x245854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245854u;
label_245854:
    // 0x245854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245858:
    // 0x245858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24585c:
    // 0x24585c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_245860:
    // 0x245860: 0xc050540  jal         func_141500
label_245864:
    if (ctx->pc == 0x245864u) {
        ctx->pc = 0x245868u;
        goto label_245868;
    }
    ctx->pc = 0x245860u;
    SET_GPR_U32(ctx, 31, 0x245868u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x245860u, 0x245868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245868u;
label_245868:
    // 0x245868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24586c:
    // 0x24586c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245870:
    // 0x245870: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_245874:
    // 0x245874: 0xc042288  jal         func_108A20
label_245878:
    if (ctx->pc == 0x245878u) {
        ctx->pc = 0x24587Cu;
        goto label_24587c;
    }
    ctx->pc = 0x245874u;
    SET_GPR_U32(ctx, 31, 0x24587Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x245874u, 0x24587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24587Cu;
label_24587c:
    // 0x24587c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_245880:
    if (ctx->pc == 0x245880u) {
        ctx->pc = 0x245884u;
        goto label_245884;
    }
    ctx->pc = 0x24587Cu;
    {
        const bool branch_taken_0x24587c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24587c) {
            ctx->pc = 0x245890u;
            goto label_245890;
        }
    }
    ctx->pc = 0x245884u;
label_245884:
    // 0x245884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245888:
    // 0x245888: 0x1000001c  b           . + 4 + (0x1C << 2)
label_24588c:
    if (ctx->pc == 0x24588Cu) {
        ctx->pc = 0x245890u;
        goto label_245890;
    }
    ctx->pc = 0x245888u;
    {
        const bool branch_taken_0x245888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245888) {
            ctx->pc = 0x2458FCu;
            goto label_2458fc;
        }
    }
    ctx->pc = 0x245890u;
label_245890:
    // 0x245890: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_245894:
    // 0x245894: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_245898:
    // 0x245898: 0xc0915f4  jal         func_2457D0
label_24589c:
    if (ctx->pc == 0x24589Cu) {
        ctx->pc = 0x2458A0u;
        goto label_2458a0;
    }
    ctx->pc = 0x245898u;
    SET_GPR_U32(ctx, 31, 0x2458A0u);
    ctx->pc = 0x2457D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457D0u, 0x245898u, 0x2458A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458A0u;
label_2458a0:
    // 0x2458a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2458a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2458a4:
    // 0x2458a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2458a8:
    if (ctx->pc == 0x2458A8u) {
        ctx->pc = 0x2458ACu;
        goto label_2458ac;
    }
    ctx->pc = 0x2458A4u;
    {
        const bool branch_taken_0x2458a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458a4) {
            ctx->pc = 0x2458D4u;
            goto label_2458d4;
        }
    }
    ctx->pc = 0x2458ACu;
label_2458ac:
    // 0x2458ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2458b0:
    // 0x2458b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2458b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2458b4:
    // 0x2458b4: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_2458b8:
    if (ctx->pc == 0x2458B8u) {
        ctx->pc = 0x2458BCu;
        goto label_2458bc;
    }
    ctx->pc = 0x2458B4u;
    {
        const bool branch_taken_0x2458b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2458b4) {
            ctx->pc = 0x2458D0u;
            goto label_2458d0;
        }
    }
    ctx->pc = 0x2458BCu;
label_2458bc:
    // 0x2458bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2458bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2458c0:
    // 0x2458c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2458c4:
    // 0x2458c4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2458c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2458c8:
    // 0x2458c8: 0x40f809  jalr        $v0
label_2458cc:
    if (ctx->pc == 0x2458CCu) {
        ctx->pc = 0x2458D0u;
        goto label_2458d0;
    }
    ctx->pc = 0x2458C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2458D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458C8u, 0x2458D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2458D0u;
label_2458d0:
    // 0x2458d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2458d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2458d4:
    // 0x2458d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2458d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2458d8:
    // 0x2458d8: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_2458dc:
    // 0x2458dc: 0xc0915ec  jal         func_2457B0
label_2458e0:
    if (ctx->pc == 0x2458E0u) {
        ctx->pc = 0x2458E4u;
        goto label_2458e4;
    }
    ctx->pc = 0x2458DCu;
    SET_GPR_U32(ctx, 31, 0x2458E4u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x2458DCu, 0x2458E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458E4u;
label_2458e4:
    // 0x2458e4: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_2458e8:
    if (ctx->pc == 0x2458E8u) {
        ctx->pc = 0x2458ECu;
        goto label_2458ec;
    }
    ctx->pc = 0x2458E4u;
    {
        const bool branch_taken_0x2458e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2458e4) {
            ctx->pc = 0x2458ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2458ac;
        }
    }
    ctx->pc = 0x2458ECu;
label_2458ec:
    // 0x2458ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2458ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2458f0:
    // 0x2458f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2458f4:
    if (ctx->pc == 0x2458F4u) {
        ctx->pc = 0x2458F8u;
        goto label_2458f8;
    }
    ctx->pc = 0x2458F0u;
    {
        const bool branch_taken_0x2458f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458f0) {
            ctx->pc = 0x2458FCu;
            goto label_2458fc;
        }
    }
    ctx->pc = 0x2458F8u;
label_2458f8:
    // 0x2458f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2458f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2458fc:
    // 0x2458fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2458fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_245900:
    // 0x245900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245904:
    // 0x245904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245908:
    // 0x245908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24590c:
    // 0x24590c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24590cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245910:
    // 0x245910: 0x3e00008  jr          $ra
label_245914:
    if (ctx->pc == 0x245914u) {
        ctx->pc = 0x245918u;
        goto label_245918;
    }
    ctx->pc = 0x245910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245918u;
label_245918:
    // 0x245918: 0x0  nop
    ctx->pc = 0x245918u;
    // NOP
label_24591c:
    // 0x24591c: 0x0  nop
    ctx->pc = 0x24591cu;
    // NOP
    ctx->pc = 0x245920u;
}
