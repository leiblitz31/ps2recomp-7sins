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

// Function: sub_004526F0
// Address: 0x4526f0 - 0x452960
void sub_004526F0_0x4526f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004526F0_0x4526f0");
#endif

    switch (ctx->pc) {
        case 0x45271cu: goto label_45271c;
        case 0x45272cu: goto label_45272c;
        case 0x452748u: goto label_452748;
        case 0x452754u: goto label_452754;
        case 0x452764u: goto label_452764;
        case 0x452770u: goto label_452770;
        case 0x452780u: goto label_452780;
        case 0x452794u: goto label_452794;
        case 0x4527acu: goto label_4527ac;
        case 0x4527c0u: goto label_4527c0;
        case 0x4527e0u: goto label_4527e0;
        case 0x4527ecu: goto label_4527ec;
        case 0x452800u: goto label_452800;
        case 0x45280cu: goto label_45280c;
        case 0x452820u: goto label_452820;
        case 0x452838u: goto label_452838;
        case 0x452850u: goto label_452850;
        case 0x452864u: goto label_452864;
        case 0x452884u: goto label_452884;
        case 0x452890u: goto label_452890;
        case 0x4528a4u: goto label_4528a4;
        case 0x4528b0u: goto label_4528b0;
        case 0x4528c4u: goto label_4528c4;
        case 0x4528dcu: goto label_4528dc;
        case 0x4528fcu: goto label_4528fc;
        case 0x452910u: goto label_452910;
        case 0x452920u: goto label_452920;
        case 0x452940u: goto label_452940;
        default: break;
    }

    ctx->pc = 0x4526f0u;

    // 0x4526f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4526f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4526f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4526f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4526f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4526f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4526fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4526fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x452700: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x452700u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x452704: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452708: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x452708u;
    {
        const bool branch_taken_0x452708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452708) {
            ctx->pc = 0x452940u;
            goto label_452940;
        }
    }
    ctx->pc = 0x452710u;
    // 0x452710: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x452710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452714: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x452714u;
    {
        const bool branch_taken_0x452714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452714) {
            ctx->pc = 0x452788u;
            goto label_452788;
        }
    }
    ctx->pc = 0x45271Cu;
label_45271c:
    // 0x45271c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452724: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x452724u;
    SET_GPR_U32(ctx, 31, 0x45272Cu);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x452724u, 0x45272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45272Cu;
label_45272c:
    // 0x45272c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452730: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x452730u;
    {
        const bool branch_taken_0x452730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452730) {
            ctx->pc = 0x452784u;
            goto label_452784;
        }
    }
    ctx->pc = 0x452738u;
    // 0x452738: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45273c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452740: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x452740u;
    SET_GPR_U32(ctx, 31, 0x452748u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x452740u, 0x452748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452748u;
label_452748:
    // 0x452748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45274c: 0xc114a68  jal         func_4529A0
    ctx->pc = 0x45274Cu;
    SET_GPR_U32(ctx, 31, 0x452754u);
    ctx->pc = 0x4529A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529A0u, 0x45274Cu, 0x452754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452754u;
label_452754:
    // 0x452754: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45275c: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x45275Cu;
    SET_GPR_U32(ctx, 31, 0x452764u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x45275Cu, 0x452764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452764u;
label_452764:
    // 0x452764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452768: 0xc119c5c  jal         func_467170
    ctx->pc = 0x452768u;
    SET_GPR_U32(ctx, 31, 0x452770u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x452768u, 0x452770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452770u;
label_452770:
    // 0x452770: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452778: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x452778u;
    SET_GPR_U32(ctx, 31, 0x452780u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x452778u, 0x452780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452780u;
label_452780:
    // 0x452780: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x452780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_452784:
    // 0x452784: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x452784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_452788:
    // 0x452788: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45278c: 0xc114a58  jal         func_452960
    ctx->pc = 0x45278Cu;
    SET_GPR_U32(ctx, 31, 0x452794u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x45278Cu, 0x452794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452794u;
label_452794:
    // 0x452794: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x452794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x452798: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x452798u;
    {
        const bool branch_taken_0x452798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452798) {
            ctx->pc = 0x45271Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45271c;
        }
    }
    ctx->pc = 0x4527A0u;
    // 0x4527a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4527a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4527a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4527A4u;
    {
        const bool branch_taken_0x4527a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4527a4) {
            ctx->pc = 0x452828u;
            goto label_452828;
        }
    }
    ctx->pc = 0x4527ACu;
label_4527ac:
    // 0x4527ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4527acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4527b0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4527b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4527b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4527b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4527b8: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x4527B8u;
    SET_GPR_U32(ctx, 31, 0x4527C0u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x4527B8u, 0x4527C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4527C0u;
label_4527c0:
    // 0x4527c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4527c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4527c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4527C4u;
    {
        const bool branch_taken_0x4527c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4527c4) {
            ctx->pc = 0x452824u;
            goto label_452824;
        }
    }
    ctx->pc = 0x4527CCu;
    // 0x4527cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4527ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4527d0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4527d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4527d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4527d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4527d8: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x4527D8u;
    SET_GPR_U32(ctx, 31, 0x4527E0u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x4527D8u, 0x4527E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4527E0u;
label_4527e0:
    // 0x4527e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4527e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4527e4: 0xc114a68  jal         func_4529A0
    ctx->pc = 0x4527E4u;
    SET_GPR_U32(ctx, 31, 0x4527ECu);
    ctx->pc = 0x4529A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529A0u, 0x4527E4u, 0x4527ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4527ECu;
label_4527ec:
    // 0x4527ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4527f0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4527f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4527f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4527f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4527f8: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x4527F8u;
    SET_GPR_U32(ctx, 31, 0x452800u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x4527F8u, 0x452800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452800u;
label_452800:
    // 0x452800: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452804: 0xc119c5c  jal         func_467170
    ctx->pc = 0x452804u;
    SET_GPR_U32(ctx, 31, 0x45280Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x452804u, 0x45280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45280Cu;
label_45280c:
    // 0x45280c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452810: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x452810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x452814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452818: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x452818u;
    SET_GPR_U32(ctx, 31, 0x452820u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x452818u, 0x452820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452820u;
label_452820:
    // 0x452820: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x452820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_452824:
    // 0x452824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x452824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_452828:
    // 0x452828: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45282c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x45282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x452830: 0xc114a58  jal         func_452960
    ctx->pc = 0x452830u;
    SET_GPR_U32(ctx, 31, 0x452838u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x452830u, 0x452838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452838u;
label_452838:
    // 0x452838: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x452838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x45283c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x45283Cu;
    {
        const bool branch_taken_0x45283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45283c) {
            ctx->pc = 0x4527ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4527ac;
        }
    }
    ctx->pc = 0x452844u;
    // 0x452844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x452844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452848: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x452848u;
    {
        const bool branch_taken_0x452848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452848) {
            ctx->pc = 0x4528CCu;
            goto label_4528cc;
        }
    }
    ctx->pc = 0x452850u;
label_452850:
    // 0x452850: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452854: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x452854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x452858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45285c: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x45285Cu;
    SET_GPR_U32(ctx, 31, 0x452864u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x45285Cu, 0x452864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452864u;
label_452864:
    // 0x452864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x452864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452868: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x452868u;
    {
        const bool branch_taken_0x452868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452868) {
            ctx->pc = 0x4528C8u;
            goto label_4528c8;
        }
    }
    ctx->pc = 0x452870u;
    // 0x452870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452874: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x452874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x452878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45287c: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x45287Cu;
    SET_GPR_U32(ctx, 31, 0x452884u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x45287Cu, 0x452884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452884u;
label_452884:
    // 0x452884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x452884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452888: 0xc114a68  jal         func_4529A0
    ctx->pc = 0x452888u;
    SET_GPR_U32(ctx, 31, 0x452890u);
    ctx->pc = 0x4529A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529A0u, 0x452888u, 0x452890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452890u;
label_452890:
    // 0x452890: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452894: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x452894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x452898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45289c: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x45289Cu;
    SET_GPR_U32(ctx, 31, 0x4528A4u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x45289Cu, 0x4528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528A4u;
label_4528a4:
    // 0x4528a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4528a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4528a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4528A8u;
    SET_GPR_U32(ctx, 31, 0x4528B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4528A8u, 0x4528B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528B0u;
label_4528b0:
    // 0x4528b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4528b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4528b4: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x4528b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4528b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4528b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4528bc: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x4528BCu;
    SET_GPR_U32(ctx, 31, 0x4528C4u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x4528BCu, 0x4528C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528C4u;
label_4528c4:
    // 0x4528c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4528c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4528c8:
    // 0x4528c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4528c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4528cc:
    // 0x4528cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4528d0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x4528d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4528d4: 0xc114a58  jal         func_452960
    ctx->pc = 0x4528D4u;
    SET_GPR_U32(ctx, 31, 0x4528DCu);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x4528D4u, 0x4528DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528DCu;
label_4528dc:
    // 0x4528dc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4528dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4528e0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4528E0u;
    {
        const bool branch_taken_0x4528e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4528e0) {
            ctx->pc = 0x452850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452850;
        }
    }
    ctx->pc = 0x4528E8u;
    // 0x4528e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4528e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4528ec: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x4528ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4528f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4528f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4528f4: 0xc114904  jal         func_452410
    ctx->pc = 0x4528F4u;
    SET_GPR_U32(ctx, 31, 0x4528FCu);
    ctx->pc = 0x452410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452410u, 0x4528F4u, 0x4528FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528FCu;
label_4528fc:
    // 0x4528fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4528fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452900: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x452900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x452904: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x452908: 0xc114904  jal         func_452410
    ctx->pc = 0x452908u;
    SET_GPR_U32(ctx, 31, 0x452910u);
    ctx->pc = 0x452410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452410u, 0x452908u, 0x452910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452910u;
label_452910:
    // 0x452910: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452914: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x452914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x452918: 0xc114904  jal         func_452410
    ctx->pc = 0x452918u;
    SET_GPR_U32(ctx, 31, 0x452920u);
    ctx->pc = 0x452410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452410u, 0x452918u, 0x452920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452920u;
label_452920:
    // 0x452920: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x452920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452924: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x452924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x452928: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x452928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x45292c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45292Cu;
    {
        const bool branch_taken_0x45292c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45292c) {
            ctx->pc = 0x452940u;
            goto label_452940;
        }
    }
    ctx->pc = 0x452934u;
    // 0x452934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452938: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x452938u;
    SET_GPR_U32(ctx, 31, 0x452940u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x452938u, 0x452940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452940u;
label_452940:
    // 0x452940: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x452940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x452944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45294c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45294cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x452950: 0x3e00008  jr          $ra
    ctx->pc = 0x452950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452958u;
    // 0x452958: 0x0  nop
    ctx->pc = 0x452958u;
    // NOP
    // 0x45295c: 0x0  nop
    ctx->pc = 0x45295cu;
    // NOP
    ctx->pc = 0x452960u;
}
