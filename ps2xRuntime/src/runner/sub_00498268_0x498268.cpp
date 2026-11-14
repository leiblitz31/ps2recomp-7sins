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

// Function: sub_00498268
// Address: 0x498268 - 0x498408
void sub_00498268_0x498268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498268_0x498268");
#endif

    switch (ctx->pc) {
        case 0x4982e8u: goto label_4982e8;
        case 0x498314u: goto label_498314;
        case 0x498354u: goto label_498354;
        case 0x49836cu: goto label_49836c;
        case 0x498378u: goto label_498378;
        default: break;
    }

    ctx->pc = 0x498268u;

    // 0x498268: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x498268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x49826c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x49826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x498270: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x498270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x498274: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x498274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498278: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x498278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x49827c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x49827cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x498280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x498284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x498284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498288: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x498288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x49828c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49828cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498290: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x498290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x498294: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x498294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498298: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x498298u;
    {
        const bool branch_taken_0x498298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498298u;
        // 0x49829c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498298) {
            ctx->pc = 0x4982B4u;
            goto label_4982b4;
        }
    }
    ctx->pc = 0x4982A0u;
    // 0x4982a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4982a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4982a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4982a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4982a8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4982a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4982ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4982ACu;
    {
        const bool branch_taken_0x4982ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4982B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4982ACu;
        // 0x4982b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4982ac) {
            ctx->pc = 0x4982D8u;
            goto label_4982d8;
        }
    }
    ctx->pc = 0x4982B4u;
label_4982b4:
    // 0x4982b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4982b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4982b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4982b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4982bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4982bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4982c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4982c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x4982c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4982c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4982c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4982c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4982cc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4982ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x4982d0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x4982d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4982d4: 0x0  nop
    ctx->pc = 0x4982d4u;
    // NOP
label_4982d8:
    // 0x4982d8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4982D8u;
    {
        const bool branch_taken_0x4982d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4982d8) {
            ctx->pc = 0x4982DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4982D8u;
            // 0x4982dc: 0x8cb30000  lw          $s3, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4982E0u;
            goto label_4982e0;
        }
    }
    ctx->pc = 0x4982E0u;
label_4982e0:
    // 0x4982e0: 0xc126562  jal         func_499588
    ctx->pc = 0x4982E0u;
    SET_GPR_U32(ctx, 31, 0x4982E8u);
    ctx->pc = 0x4982E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4982E0u;
    // 0x4982e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499588u, 0x4982E0u, 0x4982E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4982E8u;
label_4982e8:
    // 0x4982e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4982e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4982ec: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4982ECu;
    {
        const bool branch_taken_0x4982ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4982ec) {
            ctx->pc = 0x4982F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4982ECu;
            // 0x4982f0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4982FCu;
            goto label_4982fc;
        }
    }
    ctx->pc = 0x4982F4u;
    // 0x4982f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4982F4u;
    {
        const bool branch_taken_0x4982f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4982F4u;
        // 0x4982f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4982f4) {
            ctx->pc = 0x4983E0u;
            goto label_4983e0;
        }
    }
    ctx->pc = 0x4982FCu;
label_4982fc:
    // 0x4982fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4982fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498300: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x498300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x498304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x498304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498308: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x498308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x49830c: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x49830Cu;
    SET_GPR_U32(ctx, 31, 0x498314u);
    ctx->pc = 0x498310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49830Cu;
    // 0x498310: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x49830Cu, 0x498314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498314u;
label_498314:
    // 0x498314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x498314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498318: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x498318u;
    {
        const bool branch_taken_0x498318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498318u;
        // 0x49831c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498318) {
            ctx->pc = 0x498370u;
            goto label_498370;
        }
    }
    ctx->pc = 0x498320u;
    // 0x498320: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x498320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x498324: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x498324u;
    {
        const bool branch_taken_0x498324 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x498328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498324u;
        // 0x498328: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498324) {
            ctx->pc = 0x498340u;
            goto label_498340;
        }
    }
    ctx->pc = 0x49832Cu;
    // 0x49832c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x498330: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x498330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x498334: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x498334u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498338: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x498338u;
    {
        const bool branch_taken_0x498338 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x498338) {
            ctx->pc = 0x49833Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498338u;
            // 0x49833c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498384u;
            goto label_498384;
        }
    }
    ctx->pc = 0x498340u;
label_498340:
    // 0x498340: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x498340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x498344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498348: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x498348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49834c: 0xc127276  jal         func_49C9D8
    ctx->pc = 0x49834Cu;
    SET_GPR_U32(ctx, 31, 0x498354u);
    ctx->pc = 0x498350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49834Cu;
    // 0x498350: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C9D8u, 0x49834Cu, 0x498354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498354u;
label_498354:
    // 0x498354: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x498354u;
    {
        const bool branch_taken_0x498354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498354u;
        // 0x498358: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498354) {
            ctx->pc = 0x498380u;
            goto label_498380;
        }
    }
    ctx->pc = 0x49835Cu;
    // 0x49835c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x498360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498364: 0xc12702a  jal         func_49C0A8
    ctx->pc = 0x498364u;
    SET_GPR_U32(ctx, 31, 0x49836Cu);
    ctx->pc = 0x498368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498364u;
    // 0x498368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x498364u, 0x49836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49836Cu;
label_49836c:
    // 0x49836c: 0x0  nop
    ctx->pc = 0x49836cu;
    // NOP
label_498370:
    // 0x498370: 0xc126576  jal         func_4995D8
    ctx->pc = 0x498370u;
    SET_GPR_U32(ctx, 31, 0x498378u);
    ctx->pc = 0x498374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498370u;
    // 0x498374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4995D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4995D8u, 0x498370u, 0x498378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498378u;
label_498378:
    // 0x498378: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x498378u;
    {
        const bool branch_taken_0x498378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498378u;
        // 0x49837c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498378) {
            ctx->pc = 0x4983E0u;
            goto label_4983e0;
        }
    }
    ctx->pc = 0x498380u;
label_498380:
    // 0x498380: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x498380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_498384:
    // 0x498384: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x498384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x498388: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x498388u;
    {
        const bool branch_taken_0x498388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x498388) {
            ctx->pc = 0x49838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498388u;
            // 0x49838c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4983A8u;
            goto label_4983a8;
        }
    }
    ctx->pc = 0x498390u;
    // 0x498390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x498390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498394: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x498394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x498398: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x498398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49839c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4983a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4983a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4983a4: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x4983a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4983a8:
    // 0x4983a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4983a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4983ac: 0x2786c188  addiu       $a2, $gp, -0x3E78
    ctx->pc = 0x4983acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951304));
    // 0x4983b0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4983b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4983b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4983b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4983b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4983b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4983bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4983bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4983c0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4983c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x4983c4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4983c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4983c8: 0x8f84c188  lw          $a0, -0x3E78($gp)
    ctx->pc = 0x4983c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x4983cc: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x4983ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x4983d0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4983d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x4983d4: 0x8f83c188  lw          $v1, -0x3E78($gp)
    ctx->pc = 0x4983d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951304)));
    // 0x4983d8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4983d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4983dc: 0xaf85c188  sw          $a1, -0x3E78($gp)
    ctx->pc = 0x4983dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951304), GPR_U32(ctx, 5));
label_4983e0:
    // 0x4983e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4983e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4983e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4983e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4983e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4983e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4983ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4983ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4983f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4983f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4983f4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4983f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4983f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4983f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4983fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4983FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4983FCu;
        // 0x498400: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4983FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498404u;
    // 0x498404: 0x0  nop
    ctx->pc = 0x498404u;
    // NOP
    ctx->pc = 0x498408u;
}
