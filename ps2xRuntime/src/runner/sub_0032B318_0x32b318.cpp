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

// Function: sub_0032B318
// Address: 0x32b318 - 0x32b448
void sub_0032B318_0x32b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B318_0x32b318");
#endif

    switch (ctx->pc) {
        case 0x32b380u: goto label_32b380;
        case 0x32b39cu: goto label_32b39c;
        case 0x32b3a8u: goto label_32b3a8;
        case 0x32b3b8u: goto label_32b3b8;
        case 0x32b3d0u: goto label_32b3d0;
        case 0x32b3f0u: goto label_32b3f0;
        default: break;
    }

    ctx->pc = 0x32b318u;

    // 0x32b318: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32b31c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x32b320: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x32b324: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x32b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x32b328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32b328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b32c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x32b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x32b330: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32b330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b334: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x32b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x32b338: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x32b33c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32b340: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B340u;
    {
        const bool branch_taken_0x32b340 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B340u;
        // 0x32b344: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b340) {
            ctx->pc = 0x32B350u;
            goto label_32b350;
        }
    }
    ctx->pc = 0x32B348u;
    // 0x32b348: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x32b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
    // 0x32b34c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x32b34cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32b350:
    // 0x32b350: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x32b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x32b354: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x32b354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32b358: 0x8f82a67c  lw          $v0, -0x5984($gp)
    ctx->pc = 0x32b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944380)));
    // 0x32b35c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B35Cu;
    {
        const bool branch_taken_0x32b35c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B35Cu;
        // 0x32b360: 0x94740008  lhu         $s4, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b35c) {
            ctx->pc = 0x32B378u;
            goto label_32b378;
        }
    }
    ctx->pc = 0x32B364u;
    // 0x32b364: 0x8f82a678  lw          $v0, -0x5988($gp)
    ctx->pc = 0x32b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944376)));
    // 0x32b368: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B368u;
    {
        const bool branch_taken_0x32b368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B368u;
        // 0x32b36c: 0xdf82a680  ld          $v0, -0x5980($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294944384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b368) {
            ctx->pc = 0x32B378u;
            goto label_32b378;
        }
    }
    ctx->pc = 0x32B370u;
    // 0x32b370: 0x12820022  beq         $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32B370u;
    {
        const bool branch_taken_0x32b370 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B370u;
        // 0x32b374: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b370) {
            ctx->pc = 0x32B3FCu;
            goto label_32b3fc;
        }
    }
    ctx->pc = 0x32B378u;
label_32b378:
    // 0x32b378: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B378u;
    SET_GPR_U32(ctx, 31, 0x32B380u);
    ctx->pc = 0x32B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B378u;
    // 0x32b37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B378u, 0x32B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B380u;
label_32b380:
    // 0x32b380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b384: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x32b384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b388: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32b38c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32B38Cu;
    {
        const bool branch_taken_0x32b38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B38Cu;
        // 0x32b390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b38c) {
            ctx->pc = 0x32B3C0u;
            goto label_32b3c0;
        }
    }
    ctx->pc = 0x32B394u;
    // 0x32b394: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x32B394u;
    SET_GPR_U32(ctx, 31, 0x32B39Cu);
    ctx->pc = 0x32B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B394u;
    // 0x32b398: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x32B394u, 0x32B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B39Cu;
label_32b39c:
    // 0x32b39c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x32b39cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b3a0: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B3A0u;
    SET_GPR_U32(ctx, 31, 0x32B3A8u);
    ctx->pc = 0x32B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3A0u;
    // 0x32b3a4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B3A0u, 0x32B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3A8u;
label_32b3a8:
    // 0x32b3a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b3ac: 0x2604b2d0  addiu       $a0, $s0, -0x4D30
    ctx->pc = 0x32b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947536));
    // 0x32b3b0: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x32B3B0u;
    SET_GPR_U32(ctx, 31, 0x32B3B8u);
    ctx->pc = 0x32B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3B0u;
    // 0x32b3b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x32B3B0u, 0x32B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3B8u;
label_32b3b8:
    // 0x32b3b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32B3B8u;
    {
        const bool branch_taken_0x32b3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3B8u;
        // 0x32b3bc: 0x26a4b2d0  addiu       $a0, $s5, -0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3b8) {
            ctx->pc = 0x32B3D4u;
            goto label_32b3d4;
        }
    }
    ctx->pc = 0x32B3C0u;
label_32b3c0:
    // 0x32b3c0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x32b3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x32b3c4: 0x2604b2d0  addiu       $a0, $s0, -0x4D30
    ctx->pc = 0x32b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947536));
    // 0x32b3c8: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x32B3C8u;
    SET_GPR_U32(ctx, 31, 0x32B3D0u);
    ctx->pc = 0x32B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3C8u;
    // 0x32b3cc: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x32B3C8u, 0x32B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3D0u;
label_32b3d0:
    // 0x32b3d0: 0x26a4b2d0  addiu       $a0, $s5, -0x4D30
    ctx->pc = 0x32b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947536));
label_32b3d4:
    // 0x32b3d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b3d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32b3dc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x32b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32b3e0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B3E0u;
    {
        const bool branch_taken_0x32b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b3e0) {
            ctx->pc = 0x32B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B3E0u;
            // 0x32b3e4: 0xaf92a67c  sw          $s2, -0x5984($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294944380), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B3F4u;
            goto label_32b3f4;
        }
    }
    ctx->pc = 0x32B3E8u;
    // 0x32b3e8: 0xc103e64  jal         func_40F990
    ctx->pc = 0x32B3E8u;
    SET_GPR_U32(ctx, 31, 0x32B3F0u);
    ctx->pc = 0x32B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3E8u;
    // 0x32b3ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x32B3E8u, 0x32B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3F0u;
label_32b3f0:
    // 0x32b3f0: 0xaf92a67c  sw          $s2, -0x5984($gp)
    ctx->pc = 0x32b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944380), GPR_U32(ctx, 18));
label_32b3f4:
    // 0x32b3f4: 0xff94a680  sd          $s4, -0x5980($gp)
    ctx->pc = 0x32b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294944384), GPR_U64(ctx, 20));
    // 0x32b3f8: 0xaf91a678  sw          $s1, -0x5988($gp)
    ctx->pc = 0x32b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944376), GPR_U32(ctx, 17));
label_32b3fc:
    // 0x32b3fc: 0x26a5b2d0  addiu       $a1, $s5, -0x4D30
    ctx->pc = 0x32b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947536));
    // 0x32b400: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32b400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b404: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x32b404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32b408: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32b40c: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x32b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x32b410: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x32b410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32b414: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x32b414u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32b418: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x32b418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32b41c: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x32b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
    // 0x32b420: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32b420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32b424: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x32b424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x32b428: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32b428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32b42c: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x32b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x32b430: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b434: 0x78a40030  lq          $a0, 0x30($a1)
    ctx->pc = 0x32b434u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x32b438: 0x7e640030  sq          $a0, 0x30($s3)
    ctx->pc = 0x32b438u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 4));
    // 0x32b43c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x32b43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32b440: 0x3e00008  jr          $ra
    ctx->pc = 0x32B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B440u;
        // 0x32b444: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B448u;
}
