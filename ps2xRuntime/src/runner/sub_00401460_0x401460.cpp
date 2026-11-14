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

// Function: sub_00401460
// Address: 0x401460 - 0x401740
void sub_00401460_0x401460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401460_0x401460");
#endif

    switch (ctx->pc) {
        case 0x4014acu: goto label_4014ac;
        case 0x4014c8u: goto label_4014c8;
        case 0x4014e4u: goto label_4014e4;
        case 0x401544u: goto label_401544;
        case 0x401554u: goto label_401554;
        case 0x40155cu: goto label_40155c;
        case 0x40156cu: goto label_40156c;
        case 0x40158cu: goto label_40158c;
        case 0x40159cu: goto label_40159c;
        case 0x4015b4u: goto label_4015b4;
        case 0x4015c4u: goto label_4015c4;
        case 0x4015f0u: goto label_4015f0;
        case 0x401690u: goto label_401690;
        case 0x4016a0u: goto label_4016a0;
        case 0x40170cu: goto label_40170c;
        case 0x401718u: goto label_401718;
        default: break;
    }

    ctx->pc = 0x401460u;

    // 0x401460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x401460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x401464: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x401464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x401468: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x401468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x40146c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x40146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x401470: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x401470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x401474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x401474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401478: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x401478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x40147c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40147cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401480: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x401480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x401484: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x401484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x401488: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x401488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x40148c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x40148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x401490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x401490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x401494: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x401494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x401498: 0xde650010  ld          $a1, 0x10($s3)
    ctx->pc = 0x401498u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x40149c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x40149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x4014a0: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x4014a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x4014a4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4014A4u;
    SET_GPR_U32(ctx, 31, 0x4014ACu);
    ctx->pc = 0x4014A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014A4u;
    // 0x4014a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4014A4u, 0x4014ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014ACu;
label_4014ac:
    // 0x4014ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4014acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4014b0: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x4014b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4014b4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x4014b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x4014b8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4014B8u;
    {
        const bool branch_taken_0x4014b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4014BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014B8u;
        // 0x4014bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4014b8) {
            ctx->pc = 0x4014D4u;
            goto label_4014d4;
        }
    }
    ctx->pc = 0x4014C0u;
    // 0x4014c0: 0xc100970  jal         func_4025C0
    ctx->pc = 0x4014C0u;
    SET_GPR_U32(ctx, 31, 0x4014C8u);
    ctx->pc = 0x4014C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014C0u;
    // 0x4014c4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4025C0u, 0x4014C0u, 0x4014C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014C8u;
label_4014c8:
    // 0x4014c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4014c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4014cc: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4014CCu;
    {
        const bool branch_taken_0x4014cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4014D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014CCu;
        // 0x4014d0: 0x26220002  addiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4014cc) {
            ctx->pc = 0x4014ECu;
            goto label_4014ec;
        }
    }
    ctx->pc = 0x4014D4u;
label_4014d4:
    // 0x4014d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4014d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4014d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4014d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4014dc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4014DCu;
    SET_GPR_U32(ctx, 31, 0x4014E4u);
    ctx->pc = 0x4014E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4014DCu;
    // 0x4014e0: 0x24a500b0  addiu       $a1, $a1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4014DCu, 0x4014E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4014E4u;
label_4014e4:
    // 0x4014e4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x4014E4u;
    {
        const bool branch_taken_0x4014e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4014E4u;
        // 0x4014e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4014e4) {
            ctx->pc = 0x40171Cu;
            goto label_40171c;
        }
    }
    ctx->pc = 0x4014ECu;
label_4014ec:
    // 0x4014ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4014ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4014f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4014f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4014f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4014f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4014f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4014f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4014fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4014fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x401500: 0x23a3e  dsrl32      $a3, $v0, 8
    ctx->pc = 0x401500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x401504: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x401504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x401508: 0x21c3e  dsrl32      $v1, $v0, 16
    ctx->pc = 0x401508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x40150c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40150cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401514: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401518: 0x2163e  dsrl32      $v0, $v0, 24
    ctx->pc = 0x401518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x40151c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401524: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401528: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40152c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x40152cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x401530: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x401530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x401534: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x401534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x401538: 0xa3a70012  sb          $a3, 0x12($sp)
    ctx->pc = 0x401538u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 7));
    // 0x40153c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40153Cu;
    SET_GPR_U32(ctx, 31, 0x401544u);
    ctx->pc = 0x401540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40153Cu;
    // 0x401540: 0xa3a80013  sb          $t0, 0x13($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40153Cu, 0x401544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401544u;
label_401544:
    // 0x401544: 0x2785acb0  addiu       $a1, $gp, -0x5350
    ctx->pc = 0x401544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945968));
    // 0x401548: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x401548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40154c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40154Cu;
    SET_GPR_U32(ctx, 31, 0x401554u);
    ctx->pc = 0x401550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40154Cu;
    // 0x401550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40154Cu, 0x401554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401554u;
label_401554:
    // 0x401554: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x401554u;
    SET_GPR_U32(ctx, 31, 0x40155Cu);
    ctx->pc = 0x401558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401554u;
    // 0x401558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x401554u, 0x40155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40155Cu;
label_40155c:
    // 0x40155c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401560: 0x2785acb0  addiu       $a1, $gp, -0x5350
    ctx->pc = 0x401560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945968));
    // 0x401564: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401564u;
    SET_GPR_U32(ctx, 31, 0x40156Cu);
    ctx->pc = 0x401568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401564u;
    // 0x401568: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401564u, 0x40156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40156Cu;
label_40156c:
    // 0x40156c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x40156cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x401570: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x401570u;
    {
        const bool branch_taken_0x401570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x401570) {
            ctx->pc = 0x401574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401570u;
            // 0x401574: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4015A0u;
            goto label_4015a0;
        }
    }
    ctx->pc = 0x401578u;
    // 0x401578: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x401578u;
    {
        const bool branch_taken_0x401578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401578u;
        // 0x40157c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401578) {
            ctx->pc = 0x40159Cu;
            goto label_40159c;
        }
    }
    ctx->pc = 0x401580u;
    // 0x401580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x401580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401584: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401584u;
    SET_GPR_U32(ctx, 31, 0x40158Cu);
    ctx->pc = 0x401588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401584u;
    // 0x401588: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401584u, 0x40158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40158Cu;
label_40158c:
    // 0x40158c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40158cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x401590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401594: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401594u;
    SET_GPR_U32(ctx, 31, 0x40159Cu);
    ctx->pc = 0x401598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401594u;
    // 0x401598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401594u, 0x40159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40159Cu;
label_40159c:
    // 0x40159c: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x40159cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4015a0:
    // 0x4015a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4015A0u;
    {
        const bool branch_taken_0x4015a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4015A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015A0u;
        // 0x4015a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4015a0) {
            ctx->pc = 0x4015C4u;
            goto label_4015c4;
        }
    }
    ctx->pc = 0x4015A8u;
    // 0x4015a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4015a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4015ac: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4015ACu;
    SET_GPR_U32(ctx, 31, 0x4015B4u);
    ctx->pc = 0x4015B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015ACu;
    // 0x4015b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4015ACu, 0x4015B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015B4u;
label_4015b4:
    // 0x4015b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4015b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4015b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4015b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4015bc: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4015BCu;
    SET_GPR_U32(ctx, 31, 0x4015C4u);
    ctx->pc = 0x4015C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4015BCu;
    // 0x4015c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4015BCu, 0x4015C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4015C4u;
label_4015c4:
    // 0x4015c4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4015c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4015c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4015c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4015cc: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x4015ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4015d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4015d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4015d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4015d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4015d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4015d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4015dc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4015DCu;
    {
        const bool branch_taken_0x4015dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4015DCu;
        // 0x4015e0: 0x24160008  addiu       $s6, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4015dc) {
            ctx->pc = 0x4016C0u;
            goto label_4016c0;
        }
    }
    ctx->pc = 0x4015E4u;
    // 0x4015e4: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x4015e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4015e8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4015e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4015ec: 0x0  nop
    ctx->pc = 0x4015ecu;
    // NOP
label_4015f0:
    // 0x4015f0: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x4015f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4015f4: 0x5456000e  bnel        $v0, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x4015F4u;
    {
        const bool branch_taken_0x4015f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4015f4) {
            ctx->pc = 0x4015F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4015F4u;
            // 0x4015f8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401630u;
            goto label_401630;
        }
    }
    ctx->pc = 0x4015FCu;
    // 0x4015fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x4015fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x401600: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x401600u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x401604: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x401604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x401608: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x401608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x40160c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x40160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x401610: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x401610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x401614: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x401614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x401618: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x401618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x40161c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x40161cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x401620: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401624: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x401624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x401628: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x401628u;
    {
        const bool branch_taken_0x401628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401628u;
        // 0x40162c: 0xa3a30004  sb          $v1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401628) {
            ctx->pc = 0x40167Cu;
            goto label_40167c;
        }
    }
    ctx->pc = 0x401630u;
label_401630:
    // 0x401630: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401634: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x401634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x401638: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x401638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40163c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x40163cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x401640: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401644: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x401644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x401648: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x401648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x40164c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x40164cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x401650: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401654: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x401654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x401658: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x401658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x40165c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x40165cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x401660: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401664: 0xa3a20007  sb          $v0, 0x7($sp)
    ctx->pc = 0x401664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x401668: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x401668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x40166c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x40166cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x401670: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x401670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x401674: 0xa3a20009  sb          $v0, 0x9($sp)
    ctx->pc = 0x401674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x401678: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x401678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
label_40167c:
    // 0x40167c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x40167Cu;
    {
        const bool branch_taken_0x40167c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x401680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40167Cu;
        // 0x401680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40167c) {
            ctx->pc = 0x4016A0u;
            goto label_4016a0;
        }
    }
    ctx->pc = 0x401684u;
    // 0x401684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401688: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401688u;
    SET_GPR_U32(ctx, 31, 0x401690u);
    ctx->pc = 0x40168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401688u;
    // 0x40168c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401688u, 0x401690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401690u;
label_401690:
    // 0x401690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x401690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401698: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401698u;
    SET_GPR_U32(ctx, 31, 0x4016A0u);
    ctx->pc = 0x40169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401698u;
    // 0x40169c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401698u, 0x4016A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4016A0u;
label_4016a0:
    // 0x4016a0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x4016a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4016a4: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x4016a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x4016a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4016a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4016ac: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x4016acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4016b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4016b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4016b4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4016b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4016b8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4016B8u;
    {
        const bool branch_taken_0x4016b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4016BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4016B8u;
        // 0x4016bc: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4016b8) {
            ctx->pc = 0x4015F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4015f0;
        }
    }
    ctx->pc = 0x4016C0u;
label_4016c0:
    // 0x4016c0: 0xde4201f0  ld          $v0, 0x1F0($s2)
    ctx->pc = 0x4016c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x4016c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4016c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4016c8: 0x924601f3  lbu         $a2, 0x1F3($s2)
    ctx->pc = 0x4016c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 499)));
    // 0x4016cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4016ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4016d0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x4016d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x4016d4: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x4016d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x4016d8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4016d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4016dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4016dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4016e0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4016e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4016e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4016e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4016e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4016e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4016ec: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4016ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4016f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4016f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4016f4: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x4016f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x4016f8: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x4016f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x4016fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4016fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x401700: 0xa3a70022  sb          $a3, 0x22($sp)
    ctx->pc = 0x401700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x401704: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401704u;
    SET_GPR_U32(ctx, 31, 0x40170Cu);
    ctx->pc = 0x401708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401704u;
    // 0x401708: 0xa3a20023  sb          $v0, 0x23($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401704u, 0x40170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40170Cu;
label_40170c:
    // 0x40170c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x40170cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x401710: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x401710u;
    SET_GPR_U32(ctx, 31, 0x401718u);
    ctx->pc = 0x401714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401710u;
    // 0x401714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x401710u, 0x401718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401718u;
label_401718:
    // 0x401718: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x401718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40171c:
    // 0x40171c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x40171cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x401720: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x401720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x401724: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x401724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x401728: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x401728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40172c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40172cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x401730: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x401730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x401734: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x401734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401738: 0x3e00008  jr          $ra
    ctx->pc = 0x401738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401738u;
        // 0x40173c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x401740u;
}
