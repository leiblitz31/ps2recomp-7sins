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

// Function: sub_003F73B0
// Address: 0x3f73b0 - 0x3f7580
void sub_003F73B0_0x3f73b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F73B0_0x3f73b0");
#endif

    switch (ctx->pc) {
        case 0x3f73f0u: goto label_3f73f0;
        case 0x3f7414u: goto label_3f7414;
        case 0x3f7430u: goto label_3f7430;
        case 0x3f7440u: goto label_3f7440;
        case 0x3f7448u: goto label_3f7448;
        case 0x3f7494u: goto label_3f7494;
        case 0x3f74a8u: goto label_3f74a8;
        case 0x3f74c0u: goto label_3f74c0;
        case 0x3f74e0u: goto label_3f74e0;
        case 0x3f7514u: goto label_3f7514;
        case 0x3f7530u: goto label_3f7530;
        case 0x3f7548u: goto label_3f7548;
        case 0x3f7554u: goto label_3f7554;
        case 0x3f7560u: goto label_3f7560;
        default: break;
    }

    ctx->pc = 0x3f73b0u;

    // 0x3f73b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f73b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f73b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f73b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3f73b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f73bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f73bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f73c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3f73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3f73c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f73c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f73c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f73cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3f73d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f73d4: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f73d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f73d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f73dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F73DCu;
    {
        const bool branch_taken_0x3f73dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73DCu;
        // 0x3f73e0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f73dc) {
            ctx->pc = 0x3F73F0u;
            goto label_3f73f0;
        }
    }
    ctx->pc = 0x3F73E4u;
    // 0x3f73e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f73e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f73e8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F73E8u;
    SET_GPR_U32(ctx, 31, 0x3F73F0u);
    ctx->pc = 0x3F73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F73E8u;
    // 0x3f73ec: 0x24a5f5b0  addiu       $a1, $a1, -0xA50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F73E8u, 0x3F73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F73F0u;
label_3f73f0:
    // 0x3f73f0: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f73f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f73f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f73f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F73F8u;
    {
        const bool branch_taken_0x3f73f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73F8u;
        // 0x3f73fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f73f8) {
            ctx->pc = 0x3F7408u;
            goto label_3f7408;
        }
    }
    ctx->pc = 0x3F7400u;
    // 0x3f7400: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7404: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x3f7404u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
label_3f7408:
    // 0x3f7408: 0x66050001  daddiu      $a1, $s0, 0x1
    ctx->pc = 0x3f7408u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f740c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F740Cu;
    SET_GPR_U32(ctx, 31, 0x3F7414u);
    ctx->pc = 0x3F7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F740Cu;
    // 0x3f7410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F740Cu, 0x3F7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7414u;
label_3f7414:
    // 0x3f7414: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3f7414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f7418: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f7418u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f741c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f741cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7424: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f7424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7428: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F7428u;
    SET_GPR_U32(ctx, 31, 0x3F7430u);
    ctx->pc = 0x3F742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7428u;
    // 0x3f742c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F7428u, 0x3F7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7430u;
label_3f7430:
    // 0x3f7430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f7434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7438: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F7438u;
    SET_GPR_U32(ctx, 31, 0x3F7440u);
    ctx->pc = 0x3F743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7438u;
    // 0x3f743c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F7438u, 0x3F7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7440u;
label_3f7440:
    // 0x3f7440: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F7440u;
    SET_GPR_U32(ctx, 31, 0x3F7448u);
    ctx->pc = 0x3F7444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7440u;
    // 0x3f7444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F7440u, 0x3F7448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7448u;
label_3f7448:
    // 0x3f7448: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F7448u;
    {
        const bool branch_taken_0x3f7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7448u;
        // 0x3f744c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7448) {
            ctx->pc = 0x3F74ACu;
            goto label_3f74ac;
        }
    }
    ctx->pc = 0x3F7450u;
    // 0x3f7450: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f7450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f7454: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f7454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f7458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7458u;
    {
        const bool branch_taken_0x3f7458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7458u;
        // 0x3f745c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7458) {
            ctx->pc = 0x3F7478u;
            goto label_3f7478;
        }
    }
    ctx->pc = 0x3F7460u;
    // 0x3f7460: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f7460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f7464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7464u;
    {
        const bool branch_taken_0x3f7464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7464u;
        // 0x3f7468: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7464) {
            ctx->pc = 0x3F7484u;
            goto label_3f7484;
        }
    }
    ctx->pc = 0x3F746Cu;
    // 0x3f746c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F746Cu;
    {
        const bool branch_taken_0x3f746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F746Cu;
        // 0x3f7470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f746c) {
            ctx->pc = 0x3F74A0u;
            goto label_3f74a0;
        }
    }
    ctx->pc = 0x3F7474u;
    // 0x3f7474: 0x0  nop
    ctx->pc = 0x3f7474u;
    // NOP
label_3f7478:
    // 0x3f7478: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f747c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F747Cu;
    {
        const bool branch_taken_0x3f747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F747Cu;
        // 0x3f7480: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f747c) {
            ctx->pc = 0x3F749Cu;
            goto label_3f749c;
        }
    }
    ctx->pc = 0x3F7484u;
label_3f7484:
    // 0x3f7484: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f7484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f7488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f748c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F748Cu;
    SET_GPR_U32(ctx, 31, 0x3F7494u);
    ctx->pc = 0x3F7490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F748Cu;
    // 0x3f7490: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F748Cu, 0x3F7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7494u;
label_3f7494:
    // 0x3f7494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7494u;
    {
        const bool branch_taken_0x3f7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7494u;
        // 0x3f7498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7494) {
            ctx->pc = 0x3F74ACu;
            goto label_3f74ac;
        }
    }
    ctx->pc = 0x3F749Cu;
label_3f749c:
    // 0x3f749c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f749cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f74a0:
    // 0x3f74a0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F74A0u;
    SET_GPR_U32(ctx, 31, 0x3F74A8u);
    ctx->pc = 0x3F74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74A0u;
    // 0x3f74a4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F74A0u, 0x3F74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74A8u;
label_3f74a8:
    // 0x3f74a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f74ac:
    // 0x3f74ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F74ACu;
    {
        const bool branch_taken_0x3f74ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74ACu;
        // 0x3f74b0: 0x2701821  addu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74ac) {
            ctx->pc = 0x3F74C8u;
            goto label_3f74c8;
        }
    }
    ctx->pc = 0x3F74B4u;
    // 0x3f74b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74b8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F74B8u;
    SET_GPR_U32(ctx, 31, 0x3F74C0u);
    ctx->pc = 0x3F74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74B8u;
    // 0x3f74bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F74B8u, 0x3F74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74C0u;
label_3f74c0:
    // 0x3f74c0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3F74C0u;
    {
        const bool branch_taken_0x3f74c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74C0u;
        // 0x3f74c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74c0) {
            ctx->pc = 0x3F7564u;
            goto label_3f7564;
        }
    }
    ctx->pc = 0x3F74C8u;
label_3f74c8:
    // 0x3f74c8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3f74c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74cc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f74ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f74d0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3f74d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3f74d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F74D4u;
    {
        const bool branch_taken_0x3f74d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74D4u;
        // 0x3f74d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74d4) {
            ctx->pc = 0x3F74FCu;
            goto label_3f74fc;
        }
    }
    ctx->pc = 0x3F74DCu;
    // 0x3f74dc: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3f74dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f74e0:
    // 0x3f74e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f74e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f74e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f74e8: 0x0  nop
    ctx->pc = 0x3f74e8u;
    // NOP
    // 0x3f74ec: 0x0  nop
    ctx->pc = 0x3f74ecu;
    // NOP
    // 0x3f74f0: 0x0  nop
    ctx->pc = 0x3f74f0u;
    // NOP
    // 0x3f74f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F74F4u;
    {
        const bool branch_taken_0x3f74f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74F4u;
        // 0x3f74f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74f4) {
            ctx->pc = 0x3F74E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f74e0;
        }
    }
    ctx->pc = 0x3F74FCu;
label_3f74fc:
    // 0x3f74fc: 0x2241826  xor         $v1, $s1, $a0
    ctx->pc = 0x3f74fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    // 0x3f7500: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3f7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f7504: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x3f7504u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x3f7508: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3f7508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3f750c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F750Cu;
    SET_GPR_U32(ctx, 31, 0x3F7514u);
    ctx->pc = 0x3F7510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F750Cu;
    // 0x3f7510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F750Cu, 0x3F7514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7514u;
label_3f7514:
    // 0x3f7514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f7514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f751c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3f751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f7520: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x3f7520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x3f7524: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3f7524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x3f7528: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3F7528u;
    SET_GPR_U32(ctx, 31, 0x3F7530u);
    ctx->pc = 0x3F752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7528u;
    // 0x3f752c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3F7528u, 0x3F7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7530u;
label_3f7530:
    // 0x3f7530: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f7530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f7534: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3f7534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3f7538: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f7538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f753c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7540: 0xc0fea00  jal         func_3FA800
    ctx->pc = 0x3F7540u;
    SET_GPR_U32(ctx, 31, 0x3F7548u);
    ctx->pc = 0x3F7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7540u;
    // 0x3f7544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA800u, 0x3F7540u, 0x3F7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7548u;
label_3f7548:
    // 0x3f7548: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f7548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f754c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F754Cu;
    SET_GPR_U32(ctx, 31, 0x3F7554u);
    ctx->pc = 0x3F7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F754Cu;
    // 0x3f7550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F754Cu, 0x3F7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7554u;
label_3f7554:
    // 0x3f7554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7558: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F7558u;
    SET_GPR_U32(ctx, 31, 0x3F7560u);
    ctx->pc = 0x3F755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7558u;
    // 0x3f755c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F7558u, 0x3F7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7560u;
label_3f7560:
    // 0x3f7560: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f7560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f7564:
    // 0x3f7564: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f7564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f7568: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f7568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f756c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f756cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f7570: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3f7570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f7574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f7574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f7578: 0x3e00008  jr          $ra
    ctx->pc = 0x3F7578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7578u;
        // 0x3f757c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F7580u;
}
