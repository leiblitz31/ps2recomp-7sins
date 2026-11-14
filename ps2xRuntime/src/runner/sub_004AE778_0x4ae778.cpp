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

// Function: sub_004AE778
// Address: 0x4ae778 - 0x4ae978
void sub_004AE778_0x4ae778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE778_0x4ae778");
#endif

    switch (ctx->pc) {
        case 0x4ae7a0u: goto label_4ae7a0;
        case 0x4ae7acu: goto label_4ae7ac;
        case 0x4ae7c8u: goto label_4ae7c8;
        case 0x4ae7dcu: goto label_4ae7dc;
        case 0x4ae7ecu: goto label_4ae7ec;
        case 0x4ae81cu: goto label_4ae81c;
        case 0x4ae82cu: goto label_4ae82c;
        case 0x4ae834u: goto label_4ae834;
        case 0x4ae844u: goto label_4ae844;
        case 0x4ae854u: goto label_4ae854;
        case 0x4ae85cu: goto label_4ae85c;
        case 0x4ae864u: goto label_4ae864;
        case 0x4ae898u: goto label_4ae898;
        case 0x4ae8a8u: goto label_4ae8a8;
        case 0x4ae8b0u: goto label_4ae8b0;
        case 0x4ae8b8u: goto label_4ae8b8;
        case 0x4ae910u: goto label_4ae910;
        case 0x4ae920u: goto label_4ae920;
        case 0x4ae928u: goto label_4ae928;
        case 0x4ae930u: goto label_4ae930;
        case 0x4ae958u: goto label_4ae958;
        default: break;
    }

    ctx->pc = 0x4ae778u;

    // 0x4ae778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ae77c: 0xaf84b8b8  sw          $a0, -0x4748($gp)
    ctx->pc = 0x4ae77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 4));
    // 0x4ae780: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ae780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ae784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ae784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ae788: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4ae788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae78c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ae78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ae790: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ae790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae798: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AE798u;
    SET_GPR_U32(ctx, 31, 0x4AE7A0u);
    ctx->pc = 0x4AE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE798u;
    // 0x4ae79c: 0xaf85b8c0  sw          $a1, -0x4740($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949056), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AE798u, 0x4AE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7A0u;
label_4ae7a0:
    // 0x4ae7a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ae7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae7a4: 0xc0bf67c  jal         func_2FD9F0
    ctx->pc = 0x4AE7A4u;
    SET_GPR_U32(ctx, 31, 0x4AE7ACu);
    ctx->pc = 0x4AE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7A4u;
    // 0x4ae7a8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9F0u, 0x4AE7A4u, 0x4AE7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7ACu;
label_4ae7ac:
    // 0x4ae7ac: 0xaf80b8cc  sw          $zero, -0x4734($gp)
    ctx->pc = 0x4ae7acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949068), GPR_U32(ctx, 0));
    // 0x4ae7b0: 0x2784c240  addiu       $a0, $gp, -0x3DC0
    ctx->pc = 0x4ae7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951488));
    // 0x4ae7b4: 0xaf82b8b0  sw          $v0, -0x4750($gp)
    ctx->pc = 0x4ae7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 2));
    // 0x4ae7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ae7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae7bc: 0xaf80b8d0  sw          $zero, -0x4730($gp)
    ctx->pc = 0x4ae7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 0));
    // 0x4ae7c0: 0xc12b930  jal         func_4AE4C0
    ctx->pc = 0x4AE7C0u;
    SET_GPR_U32(ctx, 31, 0x4AE7C8u);
    ctx->pc = 0x4AE7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7C0u;
    // 0x4ae7c4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE4C0u, 0x4AE7C0u, 0x4AE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7C8u;
label_4ae7c8:
    // 0x4ae7c8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4AE7C8u;
    {
        const bool branch_taken_0x4ae7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE7C8u;
        // 0x4ae7cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae7c8) {
            ctx->pc = 0x4AE958u;
            goto label_4ae958;
        }
    }
    ctx->pc = 0x4AE7D0u;
    // 0x4ae7d0: 0x2784c244  addiu       $a0, $gp, -0x3DBC
    ctx->pc = 0x4ae7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951492));
    // 0x4ae7d4: 0xc12b930  jal         func_4AE4C0
    ctx->pc = 0x4AE7D4u;
    SET_GPR_U32(ctx, 31, 0x4AE7DCu);
    ctx->pc = 0x4AE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7D4u;
    // 0x4ae7d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE4C0u, 0x4AE7D4u, 0x4AE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7DCu;
label_4ae7dc:
    // 0x4ae7dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE7DCu;
    {
        const bool branch_taken_0x4ae7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE7DCu;
        // 0x4ae7e0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae7dc) {
            ctx->pc = 0x4AE7F4u;
            goto label_4ae7f4;
        }
    }
    ctx->pc = 0x4AE7E4u;
    // 0x4ae7e4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AE7E4u;
    SET_GPR_U32(ctx, 31, 0x4AE7ECu);
    ctx->pc = 0x4AE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7E4u;
    // 0x4ae7e8: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AE7E4u, 0x4AE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7ECu;
label_4ae7ec:
    // 0x4ae7ec: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x4AE7ECu;
    {
        const bool branch_taken_0x4ae7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE7ECu;
        // 0x4ae7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae7ec) {
            ctx->pc = 0x4AE95Cu;
            goto label_4ae95c;
        }
    }
    ctx->pc = 0x4AE7F4u;
label_4ae7f4:
    // 0x4ae7f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ae7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4ae7f8: 0x24519180  addiu       $s1, $v0, -0x6E80
    ctx->pc = 0x4ae7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939008));
    // 0x4ae7fc: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x4ae7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x4ae800: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4ae800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4ae804: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4ae804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x4ae808: 0x24a5ef48  addiu       $a1, $a1, -0x10B8
    ctx->pc = 0x4ae808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    // 0x4ae80c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4ae80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ae810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae814: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4AE814u;
    SET_GPR_U32(ctx, 31, 0x4AE81Cu);
    ctx->pc = 0x4AE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE814u;
    // 0x4ae818: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4AE814u, 0x4AE81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE81Cu;
label_4ae81c:
    // 0x4ae81c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AE81Cu;
    {
        const bool branch_taken_0x4ae81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE81Cu;
        // 0x4ae820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae81c) {
            ctx->pc = 0x4AE83Cu;
            goto label_4ae83c;
        }
    }
    ctx->pc = 0x4AE824u;
    // 0x4ae824: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AE824u;
    SET_GPR_U32(ctx, 31, 0x4AE82Cu);
    ctx->pc = 0x4AE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE824u;
    // 0x4ae828: 0x8f84c244  lw          $a0, -0x3DBC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AE824u, 0x4AE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE82Cu;
label_4ae82c:
    // 0x4ae82c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AE82Cu;
    SET_GPR_U32(ctx, 31, 0x4AE834u);
    ctx->pc = 0x4AE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE82Cu;
    // 0x4ae830: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AE82Cu, 0x4AE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE834u;
label_4ae834:
    // 0x4ae834: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x4AE834u;
    {
        const bool branch_taken_0x4ae834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE834u;
        // 0x4ae838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae834) {
            ctx->pc = 0x4AE95Cu;
            goto label_4ae95c;
        }
    }
    ctx->pc = 0x4AE83Cu;
label_4ae83c:
    // 0x4ae83c: 0xc12b984  jal         func_4AE610
    ctx->pc = 0x4AE83Cu;
    SET_GPR_U32(ctx, 31, 0x4AE844u);
    ctx->pc = 0x4AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE83Cu;
    // 0x4ae840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE610u, 0x4AE83Cu, 0x4AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE844u;
label_4ae844:
    // 0x4ae844: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE844u;
    {
        const bool branch_taken_0x4ae844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE844u;
        // 0x4ae848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae844) {
            ctx->pc = 0x4AE86Cu;
            goto label_4ae86c;
        }
    }
    ctx->pc = 0x4AE84Cu;
    // 0x4ae84c: 0xc12b8e2  jal         func_4AE388
    ctx->pc = 0x4AE84Cu;
    SET_GPR_U32(ctx, 31, 0x4AE854u);
    ctx->pc = 0x4AE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE84Cu;
    // 0x4ae850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE388u, 0x4AE84Cu, 0x4AE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE854u;
label_4ae854:
    // 0x4ae854: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AE854u;
    SET_GPR_U32(ctx, 31, 0x4AE85Cu);
    ctx->pc = 0x4AE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE854u;
    // 0x4ae858: 0x8f84c244  lw          $a0, -0x3DBC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AE854u, 0x4AE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE85Cu;
label_4ae85c:
    // 0x4ae85c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AE85Cu;
    SET_GPR_U32(ctx, 31, 0x4AE864u);
    ctx->pc = 0x4AE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE85Cu;
    // 0x4ae860: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AE85Cu, 0x4AE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE864u;
label_4ae864:
    // 0x4ae864: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4AE864u;
    {
        const bool branch_taken_0x4ae864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE864u;
        // 0x4ae868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae864) {
            ctx->pc = 0x4AE95Cu;
            goto label_4ae95c;
        }
    }
    ctx->pc = 0x4AE86Cu;
label_4ae86c:
    // 0x4ae86c: 0xaf80b8c8  sw          $zero, -0x4738($gp)
    ctx->pc = 0x4ae86cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949064), GPR_U32(ctx, 0));
    // 0x4ae870: 0xaf82b8b4  sw          $v0, -0x474C($gp)
    ctx->pc = 0x4ae870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 2));
    // 0x4ae874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ae878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae87c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ae87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae880: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4ae880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ae884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ae884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ae888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae88c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ae88cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae890: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AE890u;
    SET_GPR_U32(ctx, 31, 0x4AE898u);
    ctx->pc = 0x4AE894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE890u;
    // 0x4ae894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AE890u, 0x4AE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE898u;
label_4ae898:
    // 0x4ae898: 0x8f82b8c8  lw          $v0, -0x4738($gp)
    ctx->pc = 0x4ae898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949064)));
    // 0x4ae89c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE89Cu;
    {
        const bool branch_taken_0x4ae89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE89Cu;
        // 0x4ae8a0: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae89c) {
            ctx->pc = 0x4AE8D0u;
            goto label_4ae8d0;
        }
    }
    ctx->pc = 0x4AE8A4u;
    // 0x4ae8a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ae8a8:
    // 0x4ae8a8: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4AE8A8u;
    SET_GPR_U32(ctx, 31, 0x4AE8B0u);
    ctx->pc = 0x4AE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE8A8u;
    // 0x4ae8ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4AE8A8u, 0x4AE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE8B0u;
label_4ae8b0:
    // 0x4ae8b0: 0xc0bf22c  jal         func_2FC8B0
    ctx->pc = 0x4AE8B0u;
    SET_GPR_U32(ctx, 31, 0x4AE8B8u);
    ctx->pc = 0x4AE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE8B0u;
    // 0x4ae8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8B0u, 0x4AE8B0u, 0x4AE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE8B8u;
label_4ae8b8:
    // 0x4ae8b8: 0x8f83b8c8  lw          $v1, -0x4738($gp)
    ctx->pc = 0x4ae8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949064)));
    // 0x4ae8bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE8BCu;
    {
        const bool branch_taken_0x4ae8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE8BCu;
        // 0x4ae8c0: 0x2e020258  sltiu       $v0, $s0, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae8bc) {
            ctx->pc = 0x4AE8CCu;
            goto label_4ae8cc;
        }
    }
    ctx->pc = 0x4AE8C4u;
    // 0x4ae8c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4AE8C4u;
    {
        const bool branch_taken_0x4ae8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae8c4) {
            ctx->pc = 0x4AE8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE8C4u;
            // 0x4ae8c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ae8a8;
        }
    }
    ctx->pc = 0x4AE8CCu;
label_4ae8cc:
    // 0x4ae8cc: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x4ae8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_4ae8d0:
    // 0x4ae8d0: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4AE8D0u;
    {
        const bool branch_taken_0x4ae8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ae8d0) {
            ctx->pc = 0x4AE950u;
            goto label_4ae950;
        }
    }
    ctx->pc = 0x4AE8D8u;
    // 0x4ae8d8: 0x8f83b8c8  lw          $v1, -0x4738($gp)
    ctx->pc = 0x4ae8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949064)));
    // 0x4ae8dc: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x4ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x4ae8e0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4AE8E0u;
    {
        const bool branch_taken_0x4ae8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE8E0u;
        // 0x4ae8e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae8e0) {
            ctx->pc = 0x4AE950u;
            goto label_4ae950;
        }
    }
    ctx->pc = 0x4AE8E8u;
    // 0x4ae8e8: 0xaf80b8c4  sw          $zero, -0x473C($gp)
    ctx->pc = 0x4ae8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949060), GPR_U32(ctx, 0));
    // 0x4ae8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ae8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ae8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae8f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4ae8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ae8f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ae8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae8fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ae8fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae900: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ae900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae904: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4ae904u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae908: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AE908u;
    SET_GPR_U32(ctx, 31, 0x4AE910u);
    ctx->pc = 0x4AE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE908u;
    // 0x4ae90c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AE908u, 0x4AE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE910u;
label_4ae910:
    // 0x4ae910: 0x8f82b8c4  lw          $v0, -0x473C($gp)
    ctx->pc = 0x4ae910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949060)));
    // 0x4ae914: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE914u;
    {
        const bool branch_taken_0x4ae914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE914u;
        // 0x4ae918: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae914) {
            ctx->pc = 0x4AE948u;
            goto label_4ae948;
        }
    }
    ctx->pc = 0x4AE91Cu;
    // 0x4ae91c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ae920:
    // 0x4ae920: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4AE920u;
    SET_GPR_U32(ctx, 31, 0x4AE928u);
    ctx->pc = 0x4AE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE920u;
    // 0x4ae924: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4AE920u, 0x4AE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE928u;
label_4ae928:
    // 0x4ae928: 0xc0bf22c  jal         func_2FC8B0
    ctx->pc = 0x4AE928u;
    SET_GPR_U32(ctx, 31, 0x4AE930u);
    ctx->pc = 0x4AE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE928u;
    // 0x4ae92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8B0u, 0x4AE928u, 0x4AE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE930u;
label_4ae930:
    // 0x4ae930: 0x8f83b8c4  lw          $v1, -0x473C($gp)
    ctx->pc = 0x4ae930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949060)));
    // 0x4ae934: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE934u;
    {
        const bool branch_taken_0x4ae934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE934u;
        // 0x4ae938: 0x2e020258  sltiu       $v0, $s0, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae934) {
            ctx->pc = 0x4AE944u;
            goto label_4ae944;
        }
    }
    ctx->pc = 0x4AE93Cu;
    // 0x4ae93c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4AE93Cu;
    {
        const bool branch_taken_0x4ae93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae93c) {
            ctx->pc = 0x4AE940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE93Cu;
            // 0x4ae940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ae920;
        }
    }
    ctx->pc = 0x4AE944u;
label_4ae944:
    // 0x4ae944: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x4ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_4ae948:
    // 0x4ae948: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE948u;
    {
        const bool branch_taken_0x4ae948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE948u;
        // 0x4ae94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae948) {
            ctx->pc = 0x4AE95Cu;
            goto label_4ae95c;
        }
    }
    ctx->pc = 0x4AE950u;
label_4ae950:
    // 0x4ae950: 0xc12bb8e  jal         func_4AEE38
    ctx->pc = 0x4AE950u;
    SET_GPR_U32(ctx, 31, 0x4AE958u);
    ctx->pc = 0x4AEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEE38u, 0x4AE950u, 0x4AE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE958u;
label_4ae958:
    // 0x4ae958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ae95c:
    // 0x4ae95c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ae95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ae960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae964: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ae964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae96c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE96Cu;
        // 0x4ae970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE974u;
    // 0x4ae974: 0x0  nop
    ctx->pc = 0x4ae974u;
    // NOP
    ctx->pc = 0x4ae978u;
}
