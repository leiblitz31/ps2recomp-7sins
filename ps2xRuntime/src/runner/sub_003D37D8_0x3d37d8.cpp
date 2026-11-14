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

// Function: sub_003D37D8
// Address: 0x3d37d8 - 0x3d39d0
void sub_003D37D8_0x3d37d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D37D8_0x3d37d8");
#endif

    switch (ctx->pc) {
        case 0x3d3808u: goto label_3d3808;
        case 0x3d382cu: goto label_3d382c;
        case 0x3d3854u: goto label_3d3854;
        case 0x3d3888u: goto label_3d3888;
        case 0x3d38d0u: goto label_3d38d0;
        case 0x3d38e4u: goto label_3d38e4;
        case 0x3d3930u: goto label_3d3930;
        case 0x3d3944u: goto label_3d3944;
        case 0x3d397cu: goto label_3d397c;
        case 0x3d3990u: goto label_3d3990;
        case 0x3d39a8u: goto label_3d39a8;
        default: break;
    }

    ctx->pc = 0x3d37d8u;

    // 0x3d37d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d37d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d37dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d37dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3d37e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d37e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3d37e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d37e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d37e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d37e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d37ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d37ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d37f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d37f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3d37f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d37f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d37f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d37fc: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x3d37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
    // 0x3d3800: 0xc107928  jal         func_41E4A0
    ctx->pc = 0x3D3800u;
    SET_GPR_U32(ctx, 31, 0x3D3808u);
    ctx->pc = 0x3D3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3800u;
    // 0x3d3804: 0xae500010  sw          $s0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E4A0u, 0x3D3800u, 0x3D3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3808u;
label_3d3808:
    // 0x3d3808: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3d3808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3d380c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3810: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3810u;
    {
        const bool branch_taken_0x3d3810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3810u;
        // 0x3d3814: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3810) {
            ctx->pc = 0x3D3820u;
            goto label_3d3820;
        }
    }
    ctx->pc = 0x3D3818u;
    // 0x3d3818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3818u;
    {
        const bool branch_taken_0x3d3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3818u;
        // 0x3d381c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3818) {
            ctx->pc = 0x3D3830u;
            goto label_3d3830;
        }
    }
    ctx->pc = 0x3D3820u;
label_3d3820:
    // 0x3d3820: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d3820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d3824: 0xc103642  jal         func_40D908
    ctx->pc = 0x3D3824u;
    SET_GPR_U32(ctx, 31, 0x3D382Cu);
    ctx->pc = 0x3D3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3824u;
    // 0x3d3828: 0x34a50009  ori         $a1, $a1, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3D3824u, 0x3D382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D382Cu;
label_3d382c:
    // 0x3d382c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d382cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d3830:
    // 0x3d3830: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d3834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3838: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3838u;
    {
        const bool branch_taken_0x3d3838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3838) {
            ctx->pc = 0x3D383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3838u;
            // 0x3d383c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3848u;
            goto label_3d3848;
        }
    }
    ctx->pc = 0x3D3840u;
    // 0x3d3840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3840u;
    {
        const bool branch_taken_0x3d3840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3840u;
        // 0x3d3844: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3840) {
            ctx->pc = 0x3D3858u;
            goto label_3d3858;
        }
    }
    ctx->pc = 0x3D3848u;
label_3d3848:
    // 0x3d3848: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d3848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d384c: 0xc103642  jal         func_40D908
    ctx->pc = 0x3D384Cu;
    SET_GPR_U32(ctx, 31, 0x3D3854u);
    ctx->pc = 0x3D3850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D384Cu;
    // 0x3d3850: 0x34a50014  ori         $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3D384Cu, 0x3D3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3854u;
label_3d3854:
    // 0x3d3854: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d3854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3d3858:
    // 0x3d3858: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d3858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3d385c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d3860: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3d3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x3d3864: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x3d3864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61E888u));
    // 0x3d3868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d386c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D386Cu;
    {
        const bool branch_taken_0x3d386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D386Cu;
        // 0x3d3870: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d386c) {
            ctx->pc = 0x3D3890u;
            goto label_3d3890;
        }
    }
    ctx->pc = 0x3D3874u;
    // 0x3d3874: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3874u;
    {
        const bool branch_taken_0x3d3874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3874u;
        // 0x3d3878: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3874) {
            ctx->pc = 0x3D3890u;
            goto label_3d3890;
        }
    }
    ctx->pc = 0x3D387Cu;
    // 0x3d387c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d387cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3880: 0xc0e702a  jal         func_39C0A8
    ctx->pc = 0x3D3880u;
    SET_GPR_U32(ctx, 31, 0x3D3888u);
    ctx->pc = 0x3D3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3880u;
    // 0x3d3884: 0x24a55180  addiu       $a1, $a1, 0x5180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C0A8u, 0x3D3880u, 0x3D3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3888u;
label_3d3888:
    // 0x3d3888: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3D3888u;
    {
        const bool branch_taken_0x3d3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3888u;
        // 0x3d388c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3888) {
            ctx->pc = 0x3D3980u;
            goto label_3d3980;
        }
    }
    ctx->pc = 0x3D3890u;
label_3d3890:
    // 0x3d3890: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3d3890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d3894: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3894u;
    {
        const bool branch_taken_0x3d3894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3894) {
            ctx->pc = 0x3D3898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3894u;
            // 0x3d3898: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D38ACu;
            goto label_3d38ac;
        }
    }
    ctx->pc = 0x3D389Cu;
    // 0x3d389c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3d389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d38a0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3D38A0u;
    {
        const bool branch_taken_0x3d38a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38A0u;
        // 0x3d38a4: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38a0) {
            ctx->pc = 0x3D396Cu;
            goto label_3d396c;
        }
    }
    ctx->pc = 0x3D38A8u;
    // 0x3d38a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3d38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3d38ac:
    // 0x3d38ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d38b0: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D38B0u;
    {
        const bool branch_taken_0x3d38b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d38b0) {
            ctx->pc = 0x3D38B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D38B0u;
            // 0x3d38b4: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D390Cu;
            goto label_3d390c;
        }
    }
    ctx->pc = 0x3D38B8u;
    // 0x3d38b8: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D38B8u;
    {
        const bool branch_taken_0x3d38b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d38b8) {
            ctx->pc = 0x3D38BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D38B8u;
            // 0x3d38bc: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D390Cu;
            goto label_3d390c;
        }
    }
    ctx->pc = 0x3D38C0u;
    // 0x3d38c0: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D38C0u;
    {
        const bool branch_taken_0x3d38c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38C0u;
        // 0x3d38c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38c0) {
            ctx->pc = 0x3D3904u;
            goto label_3d3904;
        }
    }
    ctx->pc = 0x3D38C8u;
    // 0x3d38c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d38c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d38cc: 0x0  nop
    ctx->pc = 0x3d38ccu;
    // NOP
label_3d38d0:
    // 0x3d38d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3d38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d38d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d38d8: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3d38d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    // 0x3d38dc: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D38DCu;
    SET_GPR_U32(ctx, 31, 0x3D38E4u);
    ctx->pc = 0x3D38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D38DCu;
    // 0x3d38e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D38DCu, 0x3D38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D38E4u;
label_3d38e4:
    // 0x3d38e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3d38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d38e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3d38e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3d38ec: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3d38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3d38f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d38f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d38f4: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x3d38f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d38f8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3d38f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3d38fc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D38FCu;
    {
        const bool branch_taken_0x3d38fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38FCu;
        // 0x3d3900: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38fc) {
            ctx->pc = 0x3D38D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d38d0;
        }
    }
    ctx->pc = 0x3D3904u;
label_3d3904:
    // 0x3d3904: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d3908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d390c:
    // 0x3d390c: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D390Cu;
    {
        const bool branch_taken_0x3d390c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d390c) {
            ctx->pc = 0x3D3910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D390Cu;
            // 0x3d3910: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3980u;
            goto label_3d3980;
        }
    }
    ctx->pc = 0x3D3914u;
    // 0x3d3914: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3d3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d3918: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D3918u;
    {
        const bool branch_taken_0x3d3918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3918) {
            ctx->pc = 0x3D391Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3918u;
            // 0x3d391c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3980u;
            goto label_3d3980;
        }
    }
    ctx->pc = 0x3D3920u;
    // 0x3d3920: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D3920u;
    {
        const bool branch_taken_0x3d3920 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3920u;
        // 0x3d3924: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3920) {
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D3928u;
    // 0x3d3928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d3928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d392c: 0x0  nop
    ctx->pc = 0x3d392cu;
    // NOP
label_3d3930:
    // 0x3d3930: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d3930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d3934: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d3934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d3938: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3d3938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    // 0x3d393c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D393Cu;
    SET_GPR_U32(ctx, 31, 0x3D3944u);
    ctx->pc = 0x3D3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D393Cu;
    // 0x3d3940: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D393Cu, 0x3D3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3944u;
label_3d3944:
    // 0x3d3944: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d3948: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3d3948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d394c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3d394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3d3950: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d3950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d3954: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x3d3954u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d3958: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3d3958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3d395c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D395Cu;
    {
        const bool branch_taken_0x3d395c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D395Cu;
        // 0x3d3960: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d395c) {
            ctx->pc = 0x3D3930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3930;
        }
    }
    ctx->pc = 0x3D3964u;
    // 0x3d3964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3964u;
    {
        const bool branch_taken_0x3d3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3964u;
        // 0x3d3968: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3964) {
            ctx->pc = 0x3D3980u;
            goto label_3d3980;
        }
    }
    ctx->pc = 0x3D396Cu;
label_3d396c:
    // 0x3d396c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d3970: 0x24a55180  addiu       $a1, $a1, 0x5180
    ctx->pc = 0x3d3970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20864));
    // 0x3d3974: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x3D3974u;
    SET_GPR_U32(ctx, 31, 0x3D397Cu);
    ctx->pc = 0x3D3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3974u;
    // 0x3d3978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3D3974u, 0x3D397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D397Cu;
label_3d397c:
    // 0x3d397c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3d397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d3980:
    // 0x3d3980: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3980u;
    {
        const bool branch_taken_0x3d3980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3980) {
            ctx->pc = 0x3D3984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3980u;
            // 0x3d3984: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3994u;
            goto label_3d3994;
        }
    }
    ctx->pc = 0x3D3988u;
    // 0x3d3988: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D3988u;
    SET_GPR_U32(ctx, 31, 0x3D3990u);
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D3988u, 0x3D3990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3990u;
label_3d3990:
    // 0x3d3990: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3d3990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3d3994:
    // 0x3d3994: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d3994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d3998: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3998u;
    {
        const bool branch_taken_0x3d3998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3998) {
            ctx->pc = 0x3D399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3998u;
            // 0x3d399c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D39ACu;
            goto label_3d39ac;
        }
    }
    ctx->pc = 0x3D39A0u;
    // 0x3d39a0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D39A0u;
    SET_GPR_U32(ctx, 31, 0x3D39A8u);
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D39A0u, 0x3D39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D39A8u;
label_3d39a8:
    // 0x3d39a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3d39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3d39ac:
    // 0x3d39ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3d39acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d39b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d39b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d39b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d39b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d39b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d39b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d39bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d39bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d39c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d39c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d39c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D39C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39C4u;
        // 0x3d39c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D39C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D39CCu;
    // 0x3d39cc: 0x0  nop
    ctx->pc = 0x3d39ccu;
    // NOP
    ctx->pc = 0x3d39d0u;
}
