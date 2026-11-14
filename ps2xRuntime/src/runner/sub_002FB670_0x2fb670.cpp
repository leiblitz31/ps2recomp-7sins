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

// Function: sub_002FB670
// Address: 0x2fb670 - 0x2fb8f8
void sub_002FB670_0x2fb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB670_0x2fb670");
#endif

    switch (ctx->pc) {
        case 0x2fb6a8u: goto label_2fb6a8;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb790u: goto label_2fb790;
        case 0x2fb7a0u: goto label_2fb7a0;
        case 0x2fb7b0u: goto label_2fb7b0;
        case 0x2fb7c4u: goto label_2fb7c4;
        case 0x2fb838u: goto label_2fb838;
        case 0x2fb890u: goto label_2fb890;
        case 0x2fb8ccu: goto label_2fb8cc;
        default: break;
    }

    ctx->pc = 0x2fb670u;

    // 0x2fb670: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fb674: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2fb674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2fb678: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fb678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fb67c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2fb67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2fb680: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fb680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2fb684: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2fb684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2fb688: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2fb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2fb68c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2fb68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2fb690: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fb690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fb694: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2fb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2fb698: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2fb698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2fb69c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2fb69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2fb6a0: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB6A0u;
    SET_GPR_U32(ctx, 31, 0x2FB6A8u);
    ctx->pc = 0x2FB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6A0u;
    // 0x2fb6a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB6A0u, 0x2FB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6A8u;
label_2fb6a8:
    // 0x2fb6a8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fb6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fb6ac: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2fb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2fb6b0: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB6B0u;
    SET_GPR_U32(ctx, 31, 0x2FB6B8u);
    ctx->pc = 0x2FB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6B0u;
    // 0x2fb6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB6B0u, 0x2FB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B8u;
label_2fb6b8:
    // 0x2fb6b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fb6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb6bc: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2fb6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb6c0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB6C0u;
    {
        const bool branch_taken_0x2fb6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6C0u;
        // 0x2fb6c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6c0) {
            ctx->pc = 0x2FB724u;
            goto label_2fb724;
        }
    }
    ctx->pc = 0x2FB6C8u;
    // 0x2fb6c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2fb6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb6cc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2fb6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb6d0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FB6D0u;
    {
        const bool branch_taken_0x2fb6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb6d0) {
            ctx->pc = 0x2FB6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB6D0u;
            // 0x2fb6d4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB74Cu;
            goto label_2fb74c;
        }
    }
    ctx->pc = 0x2FB6D8u;
    // 0x2fb6d8: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x2fb6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2fb6dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB6DCu;
    {
        const bool branch_taken_0x2fb6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6DCu;
        // 0x2fb6e0: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6dc) {
            ctx->pc = 0x2FB6F8u;
            goto label_2fb6f8;
        }
    }
    ctx->pc = 0x2FB6E4u;
    // 0x2fb6e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2fb6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2fb6e8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FB6E8u;
    {
        const bool branch_taken_0x2fb6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb6e8) {
            ctx->pc = 0x2FB6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB6E8u;
            // 0x2fb6ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB724u;
            goto label_2fb724;
        }
    }
    ctx->pc = 0x2FB6F0u;
    // 0x2fb6f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB6F0u;
    {
        const bool branch_taken_0x2fb6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6F0u;
        // 0x2fb6f4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6f0) {
            ctx->pc = 0x2FB70Cu;
            goto label_2fb70c;
        }
    }
    ctx->pc = 0x2FB6F8u;
label_2fb6f8:
    // 0x2fb6f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB6F8u;
    {
        const bool branch_taken_0x2fb6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6F8u;
        // 0x2fb6fc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6f8) {
            ctx->pc = 0x2FB718u;
            goto label_2fb718;
        }
    }
    ctx->pc = 0x2FB700u;
    // 0x2fb700: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB700u;
    {
        const bool branch_taken_0x2fb700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb700) {
            ctx->pc = 0x2FB704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB700u;
            // 0x2fb704: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB74Cu;
            goto label_2fb74c;
        }
    }
    ctx->pc = 0x2FB708u;
    // 0x2fb708: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fb708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2fb70c:
    // 0x2fb70c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2FB70Cu;
    {
        const bool branch_taken_0x2fb70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB70Cu;
        // 0x2fb710: 0x2444a360  addiu       $a0, $v0, -0x5CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb70c) {
            ctx->pc = 0x2FB8C4u;
            goto label_2fb8c4;
        }
    }
    ctx->pc = 0x2FB714u;
    // 0x2fb714: 0x0  nop
    ctx->pc = 0x2fb714u;
    // NOP
label_2fb718:
    // 0x2fb718: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB718u;
    {
        const bool branch_taken_0x2fb718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB718u;
        // 0x2fb71c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb718) {
            ctx->pc = 0x2FB740u;
            goto label_2fb740;
        }
    }
    ctx->pc = 0x2FB720u;
    // 0x2fb720: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fb720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2fb724:
    // 0x2fb724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb728: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fb728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fb72c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2fb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2fb730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fb730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fb734: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2FB734u;
    {
        const bool branch_taken_0x2fb734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB734u;
        // 0x2fb738: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb734) {
            ctx->pc = 0x2FB8C4u;
            goto label_2fb8c4;
        }
    }
    ctx->pc = 0x2FB73Cu;
    // 0x2fb73c: 0x0  nop
    ctx->pc = 0x2fb73cu;
    // NOP
label_2fb740:
    // 0x2fb740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB740u;
    {
        const bool branch_taken_0x2fb740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB740u;
        // 0x2fb744: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb740) {
            ctx->pc = 0x2FB768u;
            goto label_2fb768;
        }
    }
    ctx->pc = 0x2FB748u;
    // 0x2fb748: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2fb74c:
    // 0x2fb74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb750: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fb754: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2fb754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2fb758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fb758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fb75c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FB75Cu;
    {
        const bool branch_taken_0x2fb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB75Cu;
        // 0x2fb760: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb75c) {
            ctx->pc = 0x2FB8C4u;
            goto label_2fb8c4;
        }
    }
    ctx->pc = 0x2FB764u;
    // 0x2fb764: 0x0  nop
    ctx->pc = 0x2fb764u;
    // NOP
label_2fb768:
    // 0x2fb768: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x2fb768u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x2fb76c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x2fb76cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x2fb770: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fb770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb774: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x2fb774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x2fb778: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2fb778u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2fb77c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x2fb77cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x2fb780: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2fb780u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2fb784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb788: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FB788u;
    SET_GPR_U32(ctx, 31, 0x2FB790u);
    ctx->pc = 0x2FB78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB788u;
    // 0x2fb78c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FB788u, 0x2FB790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB790u;
label_2fb790:
    // 0x2fb790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb798: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FB798u;
    SET_GPR_U32(ctx, 31, 0x2FB7A0u);
    ctx->pc = 0x2FB79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB798u;
    // 0x2fb79c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FB798u, 0x2FB7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB7A0u;
label_2fb7a0:
    // 0x2fb7a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fb7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fb7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7a8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FB7A8u;
    SET_GPR_U32(ctx, 31, 0x2FB7B0u);
    ctx->pc = 0x2FB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB7A8u;
    // 0x2fb7ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FB7A8u, 0x2FB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB7B0u;
label_2fb7b0:
    // 0x2fb7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fb7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7bc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FB7BCu;
    SET_GPR_U32(ctx, 31, 0x2FB7C4u);
    ctx->pc = 0x2FB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB7BCu;
    // 0x2fb7c0: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FB7BCu, 0x2FB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB7C4u;
label_2fb7c4:
    // 0x2fb7c4: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x2fb7c4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2fb7c8: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x2fb7c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2fb7cc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2fb7ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2fb7d0: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x2fb7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2fb7d4: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x2fb7d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
    // 0x2fb7d8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2fb7d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2fb7dc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2fb7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2fb7e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fb7e4: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2fb7e8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2fb7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb7ec: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fb7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fb7f0: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x2fb7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x2fb7f4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2fb7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fb7f8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x2fb7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2fb7fc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2fb7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fb800: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fb800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb804: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x2fb804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x2fb808: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2fb808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2fb80c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2fb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fb810: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fb810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fb814: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x2fb814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2fb818: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2fb818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2fb81c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB81Cu;
    {
        const bool branch_taken_0x2fb81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB81Cu;
        // 0x2fb820: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb81c) {
            ctx->pc = 0x2FB864u;
            goto label_2fb864;
        }
    }
    ctx->pc = 0x2FB824u;
    // 0x2fb824: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2fb824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb828: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2fb828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2fb82c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fb82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb830: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x2fb830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x2fb834: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2fb834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2fb838:
    // 0x2fb838: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x2fb838u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x2fb83c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fb840: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fb840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fb844: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x2fb844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2fb848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB848u;
    {
        const bool branch_taken_0x2fb848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB848u;
        // 0x2fb84c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb848) {
            ctx->pc = 0x2FB858u;
            goto label_2fb858;
        }
    }
    ctx->pc = 0x2FB850u;
    // 0x2fb850: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x2fb850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x2fb854: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2fb854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2fb858:
    // 0x2fb858: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FB858u;
    {
        const bool branch_taken_0x2fb858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB858u;
        // 0x2fb85c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb858) {
            ctx->pc = 0x2FB838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb838;
        }
    }
    ctx->pc = 0x2FB860u;
    // 0x2fb860: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2fb860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2fb864:
    // 0x2fb864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb868: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2fb868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2fb86c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2fb86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2fb870: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB870u;
    {
        const bool branch_taken_0x2fb870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB870u;
        // 0x2fb874: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb870) {
            ctx->pc = 0x2FB8B8u;
            goto label_2fb8b8;
        }
    }
    ctx->pc = 0x2FB878u;
    // 0x2fb878: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fb878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2fb87c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2fb87cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb880: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x2fb880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2fb884: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fb884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb888: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fb888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb88c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x2fb88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_2fb890:
    // 0x2fb890: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x2fb890u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x2fb894: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x2fb894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x2fb898: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x2fb898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x2fb89c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2fb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2fb8a0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2fb8a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2fb8a4: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x2fb8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2fb8a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FB8A8u;
    {
        const bool branch_taken_0x2fb8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8A8u;
        // 0x2fb8ac: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8a8) {
            ctx->pc = 0x2FB890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb890;
        }
    }
    ctx->pc = 0x2FB8B0u;
    // 0x2fb8b0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2fb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2fb8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb8b8:
    // 0x2fb8b8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2fb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2fb8bc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2fb8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2fb8c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fb8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fb8c4:
    // 0x2fb8c4: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FB8C4u;
    SET_GPR_U32(ctx, 31, 0x2FB8CCu);
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FB8C4u, 0x2FB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8CCu;
label_2fb8cc:
    // 0x2fb8cc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2fb8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb8d0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2fb8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fb8d4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2fb8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fb8d8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2fb8d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fb8dc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fb8dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fb8e0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2fb8e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2fb8e4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2fb8e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fb8e8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2fb8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fb8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8ECu;
        // 0x2fb8f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB8F4u;
    // 0x2fb8f4: 0x0  nop
    ctx->pc = 0x2fb8f4u;
    // NOP
    ctx->pc = 0x2fb8f8u;
}
