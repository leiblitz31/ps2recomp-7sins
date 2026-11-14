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

// Function: sub_002FF770
// Address: 0x2ff770 - 0x2ff948
void sub_002FF770_0x2ff770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF770_0x2ff770");
#endif

    switch (ctx->pc) {
        case 0x2ff770u: goto label_2ff770;
        case 0x2ff774u: goto label_2ff774;
        case 0x2ff778u: goto label_2ff778;
        case 0x2ff77cu: goto label_2ff77c;
        case 0x2ff780u: goto label_2ff780;
        case 0x2ff784u: goto label_2ff784;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff78cu: goto label_2ff78c;
        case 0x2ff790u: goto label_2ff790;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff798u: goto label_2ff798;
        case 0x2ff79cu: goto label_2ff79c;
        case 0x2ff7a0u: goto label_2ff7a0;
        case 0x2ff7a4u: goto label_2ff7a4;
        case 0x2ff7a8u: goto label_2ff7a8;
        case 0x2ff7acu: goto label_2ff7ac;
        case 0x2ff7b0u: goto label_2ff7b0;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff7b8u: goto label_2ff7b8;
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7c0u: goto label_2ff7c0;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ccu: goto label_2ff7cc;
        case 0x2ff7d0u: goto label_2ff7d0;
        case 0x2ff7d4u: goto label_2ff7d4;
        case 0x2ff7d8u: goto label_2ff7d8;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7e0u: goto label_2ff7e0;
        case 0x2ff7e4u: goto label_2ff7e4;
        case 0x2ff7e8u: goto label_2ff7e8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff7f4u: goto label_2ff7f4;
        case 0x2ff7f8u: goto label_2ff7f8;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff800u: goto label_2ff800;
        case 0x2ff804u: goto label_2ff804;
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff80cu: goto label_2ff80c;
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        case 0x2ff818u: goto label_2ff818;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff824u: goto label_2ff824;
        case 0x2ff828u: goto label_2ff828;
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff834u: goto label_2ff834;
        case 0x2ff838u: goto label_2ff838;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff840u: goto label_2ff840;
        case 0x2ff844u: goto label_2ff844;
        case 0x2ff848u: goto label_2ff848;
        case 0x2ff84cu: goto label_2ff84c;
        case 0x2ff850u: goto label_2ff850;
        case 0x2ff854u: goto label_2ff854;
        case 0x2ff858u: goto label_2ff858;
        case 0x2ff85cu: goto label_2ff85c;
        case 0x2ff860u: goto label_2ff860;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff868u: goto label_2ff868;
        case 0x2ff86cu: goto label_2ff86c;
        case 0x2ff870u: goto label_2ff870;
        case 0x2ff874u: goto label_2ff874;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff87cu: goto label_2ff87c;
        case 0x2ff880u: goto label_2ff880;
        case 0x2ff884u: goto label_2ff884;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff88cu: goto label_2ff88c;
        case 0x2ff890u: goto label_2ff890;
        case 0x2ff894u: goto label_2ff894;
        case 0x2ff898u: goto label_2ff898;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8a0u: goto label_2ff8a0;
        case 0x2ff8a4u: goto label_2ff8a4;
        case 0x2ff8a8u: goto label_2ff8a8;
        case 0x2ff8acu: goto label_2ff8ac;
        case 0x2ff8b0u: goto label_2ff8b0;
        case 0x2ff8b4u: goto label_2ff8b4;
        case 0x2ff8b8u: goto label_2ff8b8;
        case 0x2ff8bcu: goto label_2ff8bc;
        case 0x2ff8c0u: goto label_2ff8c0;
        case 0x2ff8c4u: goto label_2ff8c4;
        case 0x2ff8c8u: goto label_2ff8c8;
        case 0x2ff8ccu: goto label_2ff8cc;
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8d4u: goto label_2ff8d4;
        case 0x2ff8d8u: goto label_2ff8d8;
        case 0x2ff8dcu: goto label_2ff8dc;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8e4u: goto label_2ff8e4;
        case 0x2ff8e8u: goto label_2ff8e8;
        case 0x2ff8ecu: goto label_2ff8ec;
        case 0x2ff8f0u: goto label_2ff8f0;
        case 0x2ff8f4u: goto label_2ff8f4;
        case 0x2ff8f8u: goto label_2ff8f8;
        case 0x2ff8fcu: goto label_2ff8fc;
        case 0x2ff900u: goto label_2ff900;
        case 0x2ff904u: goto label_2ff904;
        case 0x2ff908u: goto label_2ff908;
        case 0x2ff90cu: goto label_2ff90c;
        case 0x2ff910u: goto label_2ff910;
        case 0x2ff914u: goto label_2ff914;
        case 0x2ff918u: goto label_2ff918;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff920u: goto label_2ff920;
        case 0x2ff924u: goto label_2ff924;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff92cu: goto label_2ff92c;
        case 0x2ff930u: goto label_2ff930;
        case 0x2ff934u: goto label_2ff934;
        case 0x2ff938u: goto label_2ff938;
        case 0x2ff93cu: goto label_2ff93c;
        case 0x2ff940u: goto label_2ff940;
        case 0x2ff944u: goto label_2ff944;
        default: break;
    }

    ctx->pc = 0x2ff770u;

label_2ff770:
    // 0x2ff770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ff774:
    // 0x2ff774: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ff774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2ff778:
    // 0x2ff778: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ff778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2ff77c:
    // 0x2ff77c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ff77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff780:
    // 0x2ff780: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ff780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2ff784:
    // 0x2ff784: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ff784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff788:
    // 0x2ff788: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ff788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ff78c:
    // 0x2ff78c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ff78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff790:
    // 0x2ff790: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ff790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ff794:
    // 0x2ff794: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ff794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff798:
    // 0x2ff798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ff79c:
    // 0x2ff79c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ff79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7a0:
    // 0x2ff7a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ff7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2ff7a4:
    // 0x2ff7a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ff7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2ff7a8:
    // 0x2ff7a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff7ac:
    // 0x2ff7ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ff7b0:
    if (ctx->pc == 0x2FF7B0u) {
        ctx->pc = 0x2FF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ACu;
        // 0x2ff7b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7B4u;
        goto label_2ff7b4;
    }
    ctx->pc = 0x2FF7ACu;
    {
        const bool branch_taken_0x2ff7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ACu;
        // 0x2ff7b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7ac) {
            ctx->pc = 0x2FF7BCu;
            goto label_2ff7bc;
        }
    }
    ctx->pc = 0x2FF7B4u;
label_2ff7b4:
    // 0x2ff7b4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2ff7b8:
    if (ctx->pc == 0x2FF7B8u) {
        ctx->pc = 0x2FF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B4u;
        // 0x2ff7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7BCu;
        goto label_2ff7bc;
    }
    ctx->pc = 0x2FF7B4u;
    {
        const bool branch_taken_0x2ff7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B4u;
        // 0x2ff7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7b4) {
            ctx->pc = 0x2FF920u;
            goto label_2ff920;
        }
    }
    ctx->pc = 0x2FF7BCu;
label_2ff7bc:
    // 0x2ff7bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ff7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7c0:
    // 0x2ff7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7c4:
    // 0x2ff7c4: 0xc0beed6  jal         func_2FBB58
label_2ff7c8:
    if (ctx->pc == 0x2FF7C8u) {
        ctx->pc = 0x2FF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7C4u;
        // 0x2ff7c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7CCu;
        goto label_2ff7cc;
    }
    ctx->pc = 0x2FF7C4u;
    SET_GPR_U32(ctx, 31, 0x2FF7CCu);
    ctx->pc = 0x2FF7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7C4u;
    // 0x2ff7c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FF7C4u, 0x2FF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7CCu;
label_2ff7cc:
    // 0x2ff7cc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_2ff7d0:
    if (ctx->pc == 0x2FF7D0u) {
        ctx->pc = 0x2FF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7CCu;
        // 0x2ff7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7D4u;
        goto label_2ff7d4;
    }
    ctx->pc = 0x2FF7CCu;
    {
        const bool branch_taken_0x2ff7cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7CCu;
        // 0x2ff7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7cc) {
            ctx->pc = 0x2FF800u;
            goto label_2ff800;
        }
    }
    ctx->pc = 0x2FF7D4u;
label_2ff7d4:
    // 0x2ff7d4: 0xc0bed82  jal         func_2FB608
label_2ff7d8:
    if (ctx->pc == 0x2FF7D8u) {
        ctx->pc = 0x2FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7D4u;
        // 0x2ff7d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7DCu;
        goto label_2ff7dc;
    }
    ctx->pc = 0x2FF7D4u;
    SET_GPR_U32(ctx, 31, 0x2FF7DCu);
    ctx->pc = 0x2FF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7D4u;
    // 0x2ff7d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FF7D4u, 0x2FF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7DCu;
label_2ff7dc:
    // 0x2ff7dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ff7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff7e0:
    // 0x2ff7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7e4:
    // 0x2ff7e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ff7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7e8:
    // 0x2ff7e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ff7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7ec:
    // 0x2ff7ec: 0x2a0f809  jalr        $s5
label_2ff7f0:
    if (ctx->pc == 0x2FF7F0u) {
        ctx->pc = 0x2FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ECu;
        // 0x2ff7f0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7F4u;
        goto label_2ff7f4;
    }
    ctx->pc = 0x2FF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2FF7F4u);
        ctx->pc = 0x2FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ECu;
        // 0x2ff7f0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF7ECu, 0x2FF7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF7F4u;
label_2ff7f4:
    // 0x2ff7f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ff7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff7f8:
    // 0x2ff7f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ff7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ff7fc:
    // 0x2ff7fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ff7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ff800:
    // 0x2ff800: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ff800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_2ff804:
    // 0x2ff804: 0xdc25a838  ld          $a1, -0x57C8($at)
    ctx->pc = 0x2ff804u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944824)));
label_2ff808:
    // 0x2ff808: 0xc0beed6  jal         func_2FBB58
label_2ff80c:
    if (ctx->pc == 0x2FF80Cu) {
        ctx->pc = 0x2FF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF808u;
        // 0x2ff80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF810u;
        goto label_2ff810;
    }
    ctx->pc = 0x2FF808u;
    SET_GPR_U32(ctx, 31, 0x2FF810u);
    ctx->pc = 0x2FF80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF808u;
    // 0x2ff80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FF808u, 0x2FF810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF810u;
label_2ff810:
    // 0x2ff810: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_2ff814:
    if (ctx->pc == 0x2FF814u) {
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF818u;
        goto label_2ff818;
    }
    ctx->pc = 0x2FF810u;
    {
        const bool branch_taken_0x2ff810 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff810) {
            ctx->pc = 0x2FF854u;
            goto label_2ff854;
        }
    }
    ctx->pc = 0x2FF818u;
label_2ff818:
    // 0x2ff818: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ff81c:
    if (ctx->pc == 0x2FF81Cu) {
        ctx->pc = 0x2FF820u;
        goto label_2ff820;
    }
    ctx->pc = 0x2FF818u;
    {
        const bool branch_taken_0x2ff818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff818) {
            ctx->pc = 0x2FF834u;
            goto label_2ff834;
        }
    }
    ctx->pc = 0x2FF820u;
label_2ff820:
    // 0x2ff820: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2ff820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_2ff824:
    // 0x2ff824: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ff824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2ff828:
    // 0x2ff828: 0xc0bed9c  jal         func_2FB670
label_2ff82c:
    if (ctx->pc == 0x2FF82Cu) {
        ctx->pc = 0x2FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF828u;
        // 0x2ff82c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF830u;
        goto label_2ff830;
    }
    ctx->pc = 0x2FF828u;
    SET_GPR_U32(ctx, 31, 0x2FF830u);
    ctx->pc = 0x2FF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF828u;
    // 0x2ff82c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FF828u, 0x2FF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF830u;
label_2ff830:
    // 0x2ff830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff834:
    // 0x2ff834: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ff834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_2ff838:
    // 0x2ff838: 0xdc25a840  ld          $a1, -0x57C0($at)
    ctx->pc = 0x2ff838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944832)));
label_2ff83c:
    // 0x2ff83c: 0xc0beed6  jal         func_2FBB58
label_2ff840:
    if (ctx->pc == 0x2FF840u) {
        ctx->pc = 0x2FF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF83Cu;
        // 0x2ff840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF844u;
        goto label_2ff844;
    }
    ctx->pc = 0x2FF83Cu;
    SET_GPR_U32(ctx, 31, 0x2FF844u);
    ctx->pc = 0x2FF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF83Cu;
    // 0x2ff840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FF83Cu, 0x2FF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF844u;
label_2ff844:
    // 0x2ff844: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_2ff848:
    if (ctx->pc == 0x2FF848u) {
        ctx->pc = 0x2FF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF844u;
        // 0x2ff848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF84Cu;
        goto label_2ff84c;
    }
    ctx->pc = 0x2FF844u;
    {
        const bool branch_taken_0x2ff844 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF844u;
        // 0x2ff848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff844) {
            ctx->pc = 0x2FF820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff820;
        }
    }
    ctx->pc = 0x2FF84Cu;
label_2ff84c:
    // 0x2ff84c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2ff850:
    if (ctx->pc == 0x2FF850u) {
        ctx->pc = 0x2FF854u;
        goto label_2ff854;
    }
    ctx->pc = 0x2FF84Cu;
    {
        const bool branch_taken_0x2ff84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff84c) {
            ctx->pc = 0x2FF8A4u;
            goto label_2ff8a4;
        }
    }
    ctx->pc = 0x2FF854u;
label_2ff854:
    // 0x2ff854: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2ff854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_2ff858:
    // 0x2ff858: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ff858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2ff85c:
    // 0x2ff85c: 0xc0beed6  jal         func_2FBB58
label_2ff860:
    if (ctx->pc == 0x2FF860u) {
        ctx->pc = 0x2FF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF85Cu;
        // 0x2ff860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF864u;
        goto label_2ff864;
    }
    ctx->pc = 0x2FF85Cu;
    SET_GPR_U32(ctx, 31, 0x2FF864u);
    ctx->pc = 0x2FF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF85Cu;
    // 0x2ff860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FF85Cu, 0x2FF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF864u;
label_2ff864:
    // 0x2ff864: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_2ff868:
    if (ctx->pc == 0x2FF868u) {
        ctx->pc = 0x2FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF864u;
        // 0x2ff868: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF86Cu;
        goto label_2ff86c;
    }
    ctx->pc = 0x2FF864u;
    {
        const bool branch_taken_0x2ff864 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF864u;
        // 0x2ff868: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff864) {
            ctx->pc = 0x2FF8A4u;
            goto label_2ff8a4;
        }
    }
    ctx->pc = 0x2FF86Cu;
label_2ff86c:
    // 0x2ff86c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ff870:
    if (ctx->pc == 0x2FF870u) {
        ctx->pc = 0x2FF874u;
        goto label_2ff874;
    }
    ctx->pc = 0x2FF86Cu;
    {
        const bool branch_taken_0x2ff86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff86c) {
            ctx->pc = 0x2FF88Cu;
            goto label_2ff88c;
        }
    }
    ctx->pc = 0x2FF874u;
label_2ff874:
    // 0x2ff874: 0x0  nop
    ctx->pc = 0x2ff874u;
    // NOP
label_2ff878:
    // 0x2ff878: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2ff878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_2ff87c:
    // 0x2ff87c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ff87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2ff880:
    // 0x2ff880: 0xc0bee3e  jal         func_2FB8F8
label_2ff884:
    if (ctx->pc == 0x2FF884u) {
        ctx->pc = 0x2FF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF880u;
        // 0x2ff884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF888u;
        goto label_2ff888;
    }
    ctx->pc = 0x2FF880u;
    SET_GPR_U32(ctx, 31, 0x2FF888u);
    ctx->pc = 0x2FF884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF880u;
    // 0x2ff884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2FF880u, 0x2FF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF888u;
label_2ff888:
    // 0x2ff888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff88c:
    // 0x2ff88c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2ff88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_2ff890:
    // 0x2ff890: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2ff890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2ff894:
    // 0x2ff894: 0xc0beed6  jal         func_2FBB58
label_2ff898:
    if (ctx->pc == 0x2FF898u) {
        ctx->pc = 0x2FF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF894u;
        // 0x2ff898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF89Cu;
        goto label_2ff89c;
    }
    ctx->pc = 0x2FF894u;
    SET_GPR_U32(ctx, 31, 0x2FF89Cu);
    ctx->pc = 0x2FF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF894u;
    // 0x2ff898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FF894u, 0x2FF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF89Cu;
label_2ff89c:
    // 0x2ff89c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_2ff8a0:
    if (ctx->pc == 0x2FF8A0u) {
        ctx->pc = 0x2FF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF89Cu;
        // 0x2ff8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8A4u;
        goto label_2ff8a4;
    }
    ctx->pc = 0x2FF89Cu;
    {
        const bool branch_taken_0x2ff89c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF89Cu;
        // 0x2ff8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff89c) {
            ctx->pc = 0x2FF878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff878;
        }
    }
    ctx->pc = 0x2FF8A4u;
label_2ff8a4:
    // 0x2ff8a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2ff8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_2ff8a8:
    // 0x2ff8a8: 0xdc25a848  ld          $a1, -0x57B8($at)
    ctx->pc = 0x2ff8a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944840)));
label_2ff8ac:
    // 0x2ff8ac: 0xc0bed9c  jal         func_2FB670
label_2ff8b0:
    if (ctx->pc == 0x2FF8B0u) {
        ctx->pc = 0x2FF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8ACu;
        // 0x2ff8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8B4u;
        goto label_2ff8b4;
    }
    ctx->pc = 0x2FF8ACu;
    SET_GPR_U32(ctx, 31, 0x2FF8B4u);
    ctx->pc = 0x2FF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8ACu;
    // 0x2ff8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FF8ACu, 0x2FF8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8B4u;
label_2ff8b4:
    // 0x2ff8b4: 0xc0beb3e  jal         func_2FACF8
label_2ff8b8:
    if (ctx->pc == 0x2FF8B8u) {
        ctx->pc = 0x2FF8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8B4u;
        // 0x2ff8b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8BCu;
        goto label_2ff8bc;
    }
    ctx->pc = 0x2FF8B4u;
    SET_GPR_U32(ctx, 31, 0x2FF8BCu);
    ctx->pc = 0x2FF8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8B4u;
    // 0x2ff8b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACF8u, 0x2FF8B4u, 0x2FF8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8BCu;
label_2ff8bc:
    // 0x2ff8bc: 0xc0bfdb8  jal         func_2FF6E0
label_2ff8c0:
    if (ctx->pc == 0x2FF8C0u) {
        ctx->pc = 0x2FF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8BCu;
        // 0x2ff8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8C4u;
        goto label_2ff8c4;
    }
    ctx->pc = 0x2FF8BCu;
    SET_GPR_U32(ctx, 31, 0x2FF8C4u);
    ctx->pc = 0x2FF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8BCu;
    // 0x2ff8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF6E0u, 0x2FF8BCu, 0x2FF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8C4u;
label_2ff8c4:
    // 0x2ff8c4: 0x2667a820  addiu       $a3, $s3, -0x57E0
    ctx->pc = 0x2ff8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944800));
label_2ff8c8:
    // 0x2ff8c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ff8c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8cc:
    // 0x2ff8cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ff8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8d0:
    // 0x2ff8d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ff8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8d4:
    // 0x2ff8d4: 0xc0c01c2  jal         func_300708
label_2ff8d8:
    if (ctx->pc == 0x2FF8D8u) {
        ctx->pc = 0x2FF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8D4u;
        // 0x2ff8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8DCu;
        goto label_2ff8dc;
    }
    ctx->pc = 0x2FF8D4u;
    SET_GPR_U32(ctx, 31, 0x2FF8DCu);
    ctx->pc = 0x2FF8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8D4u;
    // 0x2ff8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300708u, 0x2FF8D4u, 0x2FF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8DCu;
label_2ff8dc:
    // 0x2ff8dc: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_2ff8e0:
    if (ctx->pc == 0x2FF8E0u) {
        ctx->pc = 0x2FF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8DCu;
        // 0x2ff8e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8E4u;
        goto label_2ff8e4;
    }
    ctx->pc = 0x2FF8DCu;
    {
        const bool branch_taken_0x2ff8dc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2FF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8DCu;
        // 0x2ff8e0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8dc) {
            ctx->pc = 0x2FF8FCu;
            goto label_2ff8fc;
        }
    }
    ctx->pc = 0x2FF8E4u;
label_2ff8e4:
    // 0x2ff8e4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x2ff8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_2ff8e8:
    // 0x2ff8e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ff8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8ec:
    // 0x2ff8ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ff8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8f0:
    // 0x2ff8f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ff8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8f4:
    // 0x2ff8f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ff8f8:
    if (ctx->pc == 0x2FF8F8u) {
        ctx->pc = 0x2FF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8F4u;
        // 0x2ff8f8: 0x24e7a828  addiu       $a3, $a3, -0x57D8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8FCu;
        goto label_2ff8fc;
    }
    ctx->pc = 0x2FF8F4u;
    {
        const bool branch_taken_0x2ff8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8F4u;
        // 0x2ff8f8: 0x24e7a828  addiu       $a3, $a3, -0x57D8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8f4) {
            ctx->pc = 0x2FF910u;
            goto label_2ff910;
        }
    }
    ctx->pc = 0x2FF8FCu;
label_2ff8fc:
    // 0x2ff8fc: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x2ff8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_2ff900:
    // 0x2ff900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff904:
    // 0x2ff904: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ff904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ff908:
    // 0x2ff908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ff908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff90c:
    // 0x2ff90c: 0x24e7a830  addiu       $a3, $a3, -0x57D0
    ctx->pc = 0x2ff90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944816));
label_2ff910:
    // 0x2ff910: 0xc0c01c2  jal         func_300708
label_2ff914:
    if (ctx->pc == 0x2FF914u) {
        ctx->pc = 0x2FF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF910u;
        // 0x2ff914: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF918u;
        goto label_2ff918;
    }
    ctx->pc = 0x2FF910u;
    SET_GPR_U32(ctx, 31, 0x2FF918u);
    ctx->pc = 0x2FF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF910u;
    // 0x2ff914: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300708u, 0x2FF910u, 0x2FF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF918u;
label_2ff918:
    // 0x2ff918: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2ff91c:
    // 0x2ff91c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ff91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ff920:
    // 0x2ff920: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ff920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ff924:
    // 0x2ff924: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ff924u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff928:
    // 0x2ff928: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ff928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ff92c:
    // 0x2ff92c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ff92cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff930:
    // 0x2ff930: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ff930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff934:
    // 0x2ff934: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ff934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff938:
    // 0x2ff938: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ff938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff93c:
    // 0x2ff93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff940:
    // 0x2ff940: 0x3e00008  jr          $ra
label_2ff944:
    if (ctx->pc == 0x2FF944u) {
        ctx->pc = 0x2FF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF940u;
        // 0x2ff944: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF948u;
        goto label_fallthrough_0x2ff940;
    }
    ctx->pc = 0x2FF940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF940u;
        // 0x2ff944: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff940:
    ctx->pc = 0x2FF948u;
}
