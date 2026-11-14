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

// Function: sub_003C3760
// Address: 0x3c3760 - 0x3c38f0
void sub_003C3760_0x3c3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3760_0x3c3760");
#endif

    switch (ctx->pc) {
        case 0x3c37ecu: goto label_3c37ec;
        case 0x3c3850u: goto label_3c3850;
        case 0x3c388cu: goto label_3c388c;
        case 0x3c38a4u: goto label_3c38a4;
        case 0x3c38b8u: goto label_3c38b8;
        default: break;
    }

    ctx->pc = 0x3c3760u;

    // 0x3c3760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c3764: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c3764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c3768: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c376c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c376cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c3770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c3774: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c3774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3778: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c377c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c377cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c3784: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c3784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3788: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3c3788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c378c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3c378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c3790: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x3c3790u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c3794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3794u;
    {
        const bool branch_taken_0x3c3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3794u;
        // 0x3c3798: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3794) {
            ctx->pc = 0x3C37A4u;
            goto label_3c37a4;
        }
    }
    ctx->pc = 0x3C379Cu;
    // 0x3c379c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c37a0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x3c37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_3c37a4:
    // 0x3c37a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3c37a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c37a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c37a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c37ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c37b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c37b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c37b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c37b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c37b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3c37b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c37bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C37BCu;
    {
        const bool branch_taken_0x3c37bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37BCu;
        // 0x3c37c0: 0x83102f  dsubu       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37bc) {
            ctx->pc = 0x3C37CCu;
            goto label_3c37cc;
        }
    }
    ctx->pc = 0x3C37C4u;
    // 0x3c37c4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x3c37c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c37c8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x3c37c8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_3c37cc:
    // 0x3c37cc: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3C37CCu;
    {
        const bool branch_taken_0x3c37cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37CCu;
        // 0x3c37d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37cc) {
            ctx->pc = 0x3C38D0u;
            goto label_3c38d0;
        }
    }
    ctx->pc = 0x3C37D4u;
    // 0x3c37d4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3c37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c37d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C37D8u;
    {
        const bool branch_taken_0x3c37d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37D8u;
        // 0x3c37dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37d8) {
            ctx->pc = 0x3C381Cu;
            goto label_3c381c;
        }
    }
    ctx->pc = 0x3C37E0u;
    // 0x3c37e0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c37e4: 0xc0c0d4c  jal         func_303530
    ctx->pc = 0x3C37E4u;
    SET_GPR_U32(ctx, 31, 0x3C37ECu);
    ctx->pc = 0x3C37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C37E4u;
    // 0x3c37e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303530u, 0x3C37E4u, 0x3C37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C37ECu;
label_3c37ec:
    // 0x3c37ec: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C37ECu;
    {
        const bool branch_taken_0x3c37ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3c37ec) {
            ctx->pc = 0x3C37F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C37ECu;
            // 0x3c37f0: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C37FCu;
            goto label_3c37fc;
        }
    }
    ctx->pc = 0x3C37F4u;
    // 0x3c37f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3C37F4u;
    {
        const bool branch_taken_0x3c37f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37F4u;
        // 0x3c37f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37f4) {
            ctx->pc = 0x3C38D0u;
            goto label_3c38d0;
        }
    }
    ctx->pc = 0x3C37FCu;
label_3c37fc:
    // 0x3c37fc: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x3c37fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3c3800: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c3800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c3804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c3804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3808: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3c3808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c380c: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x3c380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x3c3810: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3c3810u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x3c3814: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3C3814u;
    {
        const bool branch_taken_0x3c3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3814u;
        // 0x3c3818: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3814) {
            ctx->pc = 0x3C38D0u;
            goto label_3c38d0;
        }
    }
    ctx->pc = 0x3C381Cu;
label_3c381c:
    // 0x3c381c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3c381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3c3820: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x3c3820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x3c3824: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3c3824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3828: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C3828u;
    {
        const bool branch_taken_0x3c3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3828u;
        // 0x3c382c: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3828) {
            ctx->pc = 0x3C3860u;
            goto label_3c3860;
        }
    }
    ctx->pc = 0x3C3830u;
    // 0x3c3830: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3c3830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3c3834: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x3c3834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c3838: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3c3838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c383c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x3c383cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x3c3840: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3c3840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3844: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c3844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3848: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3C3848u;
    SET_GPR_U32(ctx, 31, 0x3C3850u);
    ctx->pc = 0x3C384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3848u;
    // 0x3c384c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3C3848u, 0x3C3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3850u;
label_3c3850:
    // 0x3c3850: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x3c3850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3c3854: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3c3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3c3858: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3c3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c385c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3c385cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3c3860:
    // 0x3c3860: 0x12320017  beq         $s1, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C3860u;
    {
        const bool branch_taken_0x3c3860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3860u;
        // 0x3c3864: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3860) {
            ctx->pc = 0x3C38C0u;
            goto label_3c38c0;
        }
    }
    ctx->pc = 0x3C3868u;
    // 0x3c3868: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x3c3868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x3c386c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c3870: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x3c3870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c3874: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3874u;
    {
        const bool branch_taken_0x3c3874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3874u;
        // 0x3c3878: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3874) {
            ctx->pc = 0x3C3894u;
            goto label_3c3894;
        }
    }
    ctx->pc = 0x3C387Cu;
    // 0x3c387c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c3880: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c3880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3884: 0xc0c0d4c  jal         func_303530
    ctx->pc = 0x3C3884u;
    SET_GPR_U32(ctx, 31, 0x3C388Cu);
    ctx->pc = 0x3C3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3884u;
    // 0x3c3888: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303530u, 0x3C3884u, 0x3C388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C388Cu;
label_3c388c:
    // 0x3c388c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C388Cu;
    {
        const bool branch_taken_0x3c388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C388Cu;
        // 0x3c3890: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c388c) {
            ctx->pc = 0x3C38B8u;
            goto label_3c38b8;
        }
    }
    ctx->pc = 0x3C3894u;
label_3c3894:
    // 0x3c3894: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c3898: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x3c3898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3c389c: 0xc0c0d4c  jal         func_303530
    ctx->pc = 0x3C389Cu;
    SET_GPR_U32(ctx, 31, 0x3C38A4u);
    ctx->pc = 0x3C38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C389Cu;
    // 0x3c38a0: 0x8e050068  lw          $a1, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303530u, 0x3C389Cu, 0x3C38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38A4u;
label_3c38a4:
    // 0x3c38a4: 0xae110064  sw          $s1, 0x64($s0)
    ctx->pc = 0x3c38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 17));
    // 0x3c38a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c38a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38ac: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3c38acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3c38b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3C38B0u;
    SET_GPR_U32(ctx, 31, 0x3C38B8u);
    ctx->pc = 0x3C38B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38B0u;
    // 0x3c38b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3C38B0u, 0x3C38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38B8u;
label_3c38b8:
    // 0x3c38b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c38bc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3c38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3c38c0:
    // 0x3c38c0: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3c38c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c38c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c38c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38c8: 0x243182d  daddu       $v1, $s2, $v1
    ctx->pc = 0x3c38c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3c38cc: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x3c38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
label_3c38d0:
    // 0x3c38d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c38d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c38d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c38d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c38d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c38d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c38dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c38dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c38e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c38e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c38e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38E4u;
        // 0x3c38e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C38E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C38ECu;
    // 0x3c38ec: 0x0  nop
    ctx->pc = 0x3c38ecu;
    // NOP
    ctx->pc = 0x3c38f0u;
}
