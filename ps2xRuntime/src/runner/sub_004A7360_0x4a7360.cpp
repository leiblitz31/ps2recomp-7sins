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

// Function: sub_004A7360
// Address: 0x4a7360 - 0x4a75c8
void sub_004A7360_0x4a7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7360_0x4a7360");
#endif

    switch (ctx->pc) {
        case 0x4a73bcu: goto label_4a73bc;
        case 0x4a73dcu: goto label_4a73dc;
        case 0x4a7404u: goto label_4a7404;
        case 0x4a741cu: goto label_4a741c;
        case 0x4a743cu: goto label_4a743c;
        case 0x4a7454u: goto label_4a7454;
        case 0x4a748cu: goto label_4a748c;
        case 0x4a74a8u: goto label_4a74a8;
        case 0x4a74ccu: goto label_4a74cc;
        case 0x4a7560u: goto label_4a7560;
        case 0x4a7578u: goto label_4a7578;
        case 0x4a7594u: goto label_4a7594;
        default: break;
    }

    ctx->pc = 0x4a7360u;

    // 0x4a7360: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4a7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x4a7364: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4a7364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4a7368: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4a7368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4a736c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x4a736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x4a7370: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x4a7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x4a7374: 0x24502630  addiu       $s0, $v0, 0x2630
    ctx->pc = 0x4a7374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x4a7378: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x4a7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x4a737c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a737cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7380: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x4a7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x4a7384: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x4a7384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4a7388: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4a7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4a738c: 0x2656002c  addiu       $s6, $s2, 0x2C
    ctx->pc = 0x4a738cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x4a7390: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x4a7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x4a7394: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4a7394u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7398: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x4a7398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x4a739c: 0xc6a00b  movn        $s4, $a2, $a2
    ctx->pc = 0x4a739cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x4a73a0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x4a73a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x4a73a4: 0xe7b00b  movn        $s6, $a3, $a3
    ctx->pc = 0x4a73a4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 7));
    // 0x4a73a8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4a73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x4a73ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a73acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a73b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4a73b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4a73b4: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A73B4u;
    SET_GPR_U32(ctx, 31, 0x4A73BCu);
    ctx->pc = 0x4A73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A73B4u;
    // 0x4a73b8: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A73B4u, 0x4A73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A73BCu;
label_4a73bc:
    // 0x4a73bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A73BCu;
    {
        const bool branch_taken_0x4a73bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73BCu;
        // 0x4a73c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73bc) {
            ctx->pc = 0x4A73F4u;
            goto label_4a73f4;
        }
    }
    ctx->pc = 0x4A73C4u;
    // 0x4a73c4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x4a73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x4a73c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A73C8u;
    {
        const bool branch_taken_0x4a73c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73C8u;
        // 0x4a73cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73c8) {
            ctx->pc = 0x4A73F8u;
            goto label_4a73f8;
        }
    }
    ctx->pc = 0x4A73D0u;
    // 0x4a73d0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4a73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a73d4: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A73D4u;
    SET_GPR_U32(ctx, 31, 0x4A73DCu);
    ctx->pc = 0x4A73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A73D4u;
    // 0x4a73d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A73D4u, 0x4A73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A73DCu;
label_4a73dc:
    // 0x4a73dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A73DCu;
    {
        const bool branch_taken_0x4a73dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73DCu;
        // 0x4a73e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73dc) {
            ctx->pc = 0x4A73F4u;
            goto label_4a73f4;
        }
    }
    ctx->pc = 0x4A73E4u;
    // 0x4a73e4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x4a73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x4a73e8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x4a73e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x4a73ec: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x4a73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x4a73f0: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x4a73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_4a73f4:
    // 0x4a73f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a73f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a73f8:
    // 0x4a73f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4a73f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a73fc: 0xc12a218  jal         func_4A8860
    ctx->pc = 0x4A73FCu;
    SET_GPR_U32(ctx, 31, 0x4A7404u);
    ctx->pc = 0x4A7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A73FCu;
    // 0x4a7400: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8860u, 0x4A73FCu, 0x4A7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7404u;
label_4a7404:
    // 0x4a7404: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x4a7404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4a7408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a740c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a740cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7410: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a7410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7414: 0xc12931a  jal         func_4A4C68
    ctx->pc = 0x4A7414u;
    SET_GPR_U32(ctx, 31, 0x4A741Cu);
    ctx->pc = 0x4A7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7414u;
    // 0x4a7418: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A7414u, 0x4A741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A741Cu;
label_4a741c:
    // 0x4a741c: 0x294980b  movn        $s3, $s4, $s4
    ctx->pc = 0x4a741cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x4a7420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7428: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4a7428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x4a742c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a742cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7430: 0x8f95b830  lw          $s5, -0x47D0($gp)
    ctx->pc = 0x4a7430u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
    // 0x4a7434: 0xc12931a  jal         func_4A4C68
    ctx->pc = 0x4A7434u;
    SET_GPR_U32(ctx, 31, 0x4A743Cu);
    ctx->pc = 0x4A7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7434u;
    // 0x4a7438: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A7434u, 0x4A743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A743Cu;
label_4a743c:
    // 0x4a743c: 0x2d6880b  movn        $s1, $s6, $s6
    ctx->pc = 0x4a743cu;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
    // 0x4a7440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a7440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7444: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x4a7444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x4a7448: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4a7448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4a744c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A744Cu;
    SET_GPR_U32(ctx, 31, 0x4A7454u);
    ctx->pc = 0x4A7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A744Cu;
    // 0x4a7450: 0x24452630  addiu       $a1, $v0, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A744Cu, 0x4A7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7454u;
label_4a7454:
    // 0x4a7454: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A7454u;
    {
        const bool branch_taken_0x4a7454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7454u;
        // 0x4a7458: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7454) {
            ctx->pc = 0x4A7480u;
            goto label_4a7480;
        }
    }
    ctx->pc = 0x4A745Cu;
    // 0x4a745c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x4a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x4a7460: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7460u;
    {
        const bool branch_taken_0x4a7460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7460u;
        // 0x4a7464: 0x26030060  addiu       $v1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7460) {
            ctx->pc = 0x4A7480u;
            goto label_4a7480;
        }
    }
    ctx->pc = 0x4A7468u;
    // 0x4a7468: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x4a7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4a746c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x4a746cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4a7470: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x4a7470u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a7474: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x4a7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4a7478: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x4a7478u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a747c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a747cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7480:
    // 0x4a7480: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a7480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7484: 0xc12a218  jal         func_4A8860
    ctx->pc = 0x4A7484u;
    SET_GPR_U32(ctx, 31, 0x4A748Cu);
    ctx->pc = 0x4A7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7484u;
    // 0x4a7488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8860u, 0x4A7484u, 0x4A748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A748Cu;
label_4a748c:
    // 0x4a748c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4a7490: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7490u;
    {
        const bool branch_taken_0x4a7490 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7490u;
        // 0x4a7494: 0x24500018  addiu       $s0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7490) {
            ctx->pc = 0x4A74B4u;
            goto label_4a74b4;
        }
    }
    ctx->pc = 0x4A7498u;
    // 0x4a7498: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a7498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a749c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a749cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74a0: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4A74A0u;
    SET_GPR_U32(ctx, 31, 0x4A74A8u);
    ctx->pc = 0x4A74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A74A0u;
    // 0x4a74a4: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A74A0u, 0x4A74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A74A8u;
label_4a74a8:
    // 0x4a74a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4a74a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74ac: 0x12a0003a  beqz        $s5, . + 4 + (0x3A << 2)
    ctx->pc = 0x4A74ACu;
    {
        const bool branch_taken_0x4a74ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A74ACu;
        // 0x4a74b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a74ac) {
            ctx->pc = 0x4A7598u;
            goto label_4a7598;
        }
    }
    ctx->pc = 0x4A74B4u;
label_4a74b4:
    // 0x4a74b4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4a74b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a74b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a74bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74c0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4a74c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a74c4: 0xc129eba  jal         func_4A7AE8
    ctx->pc = 0x4A74C4u;
    SET_GPR_U32(ctx, 31, 0x4A74CCu);
    ctx->pc = 0x4A74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A74C4u;
    // 0x4a74c8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7AE8u, 0x4A74C4u, 0x4A74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A74CCu;
label_4a74cc:
    // 0x4a74cc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4A74CCu;
    {
        const bool branch_taken_0x4a74cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A74CCu;
        // 0x4a74d0: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a74cc) {
            ctx->pc = 0x4A7580u;
            goto label_4a7580;
        }
    }
    ctx->pc = 0x4A74D4u;
    // 0x4a74d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a74d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4a74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4a74dc: 0x240b0804  addiu       $t3, $zero, 0x804
    ctx->pc = 0x4a74dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x4a74e0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x4a74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4a74e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a74e8: 0x240c0803  addiu       $t4, $zero, 0x803
    ctx->pc = 0x4a74e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x4a74ec: 0x3c0a004a  lui         $t2, 0x4A
    ctx->pc = 0x4a74ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)74 << 16));
    // 0x4a74f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4a74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4a74f4: 0x254a6fd0  addiu       $t2, $t2, 0x6FD0
    ctx->pc = 0x4a74f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28624));
    // 0x4a74f8: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x4a74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x4a74fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4a74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4a7500: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4a7500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a7504: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a7504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a7508: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x4a7508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x4a750c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a750cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7510: 0xafb70044  sw          $s7, 0x44($sp)
    ctx->pc = 0x4a7510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 23));
    // 0x4a7514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a7514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7518: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x4a7518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x4a751c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a751cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7520: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x4a7520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x4a7524: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x4a7524u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a7528: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4a7528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x4a752c: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x4a752cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x4a7530: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x4a7530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x4a7534: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4a7534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4a7538: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4a7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4a753c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4a753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x4a7540: 0xafb70034  sw          $s7, 0x34($sp)
    ctx->pc = 0x4a7540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 23));
    // 0x4a7544: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x4a7544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
    // 0x4a7548: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4a7548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x4a754c: 0xafb5004c  sw          $s5, 0x4C($sp)
    ctx->pc = 0x4a754cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 21));
    // 0x4a7550: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4a7550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x4a7554: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x4a7554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x4a7558: 0xc12aec4  jal         func_4ABB10
    ctx->pc = 0x4A7558u;
    SET_GPR_U32(ctx, 31, 0x4A7560u);
    ctx->pc = 0x4A755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7558u;
    // 0x4a755c: 0xafbe0018  sw          $fp, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABB10u, 0x4A7558u, 0x4A7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7560u;
label_4a7560:
    // 0x4a7560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7560u;
    {
        const bool branch_taken_0x4a7560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7560u;
        // 0x4a7564: 0x8f82b830  lw          $v0, -0x47D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7560) {
            ctx->pc = 0x4A7580u;
            goto label_4a7580;
        }
    }
    ctx->pc = 0x4A7568u;
    // 0x4a7568: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7568u;
    {
        const bool branch_taken_0x4a7568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7568u;
        // 0x4a756c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7568) {
            ctx->pc = 0x4A7598u;
            goto label_4a7598;
        }
    }
    ctx->pc = 0x4A7570u;
    // 0x4a7570: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A7570u;
    SET_GPR_U32(ctx, 31, 0x4A7578u);
    ctx->pc = 0x4A7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7570u;
    // 0x4a7574: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A7570u, 0x4A7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7578u;
label_4a7578:
    // 0x4a7578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7578u;
    {
        const bool branch_taken_0x4a7578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7578u;
        // 0x4a757c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7578) {
            ctx->pc = 0x4A7598u;
            goto label_4a7598;
        }
    }
    ctx->pc = 0x4A7580u;
label_4a7580:
    // 0x4a7580: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
    // 0x4a7584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7584u;
    {
        const bool branch_taken_0x4a7584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7584u;
        // 0x4a7588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7584) {
            ctx->pc = 0x4A7598u;
            goto label_4a7598;
        }
    }
    ctx->pc = 0x4A758Cu;
    // 0x4a758c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A758Cu;
    SET_GPR_U32(ctx, 31, 0x4A7594u);
    ctx->pc = 0x4A7590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A758Cu;
    // 0x4a7590: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A758Cu, 0x4A7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7594u;
label_4a7594:
    // 0x4a7594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7598:
    // 0x4a7598: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x4a7598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4a759c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x4a759cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4a75a0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x4a75a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4a75a4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x4a75a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a75a8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x4a75a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a75ac: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x4a75acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a75b0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x4a75b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a75b4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x4a75b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a75b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4a75b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a75bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4a75bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a75c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A75C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A75C0u;
        // 0x4a75c4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A75C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A75C8u;
}
