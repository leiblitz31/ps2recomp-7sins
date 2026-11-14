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

// Function: sub_003B43D0
// Address: 0x3b43d0 - 0x3b44f0
void sub_003B43D0_0x3b43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B43D0_0x3b43d0");
#endif

    switch (ctx->pc) {
        case 0x3b43d0u: goto label_3b43d0;
        case 0x3b43d4u: goto label_3b43d4;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b43dcu: goto label_3b43dc;
        case 0x3b43e0u: goto label_3b43e0;
        case 0x3b43e4u: goto label_3b43e4;
        case 0x3b43e8u: goto label_3b43e8;
        case 0x3b43ecu: goto label_3b43ec;
        case 0x3b43f0u: goto label_3b43f0;
        case 0x3b43f4u: goto label_3b43f4;
        case 0x3b43f8u: goto label_3b43f8;
        case 0x3b43fcu: goto label_3b43fc;
        case 0x3b4400u: goto label_3b4400;
        case 0x3b4404u: goto label_3b4404;
        case 0x3b4408u: goto label_3b4408;
        case 0x3b440cu: goto label_3b440c;
        case 0x3b4410u: goto label_3b4410;
        case 0x3b4414u: goto label_3b4414;
        case 0x3b4418u: goto label_3b4418;
        case 0x3b441cu: goto label_3b441c;
        case 0x3b4420u: goto label_3b4420;
        case 0x3b4424u: goto label_3b4424;
        case 0x3b4428u: goto label_3b4428;
        case 0x3b442cu: goto label_3b442c;
        case 0x3b4430u: goto label_3b4430;
        case 0x3b4434u: goto label_3b4434;
        case 0x3b4438u: goto label_3b4438;
        case 0x3b443cu: goto label_3b443c;
        case 0x3b4440u: goto label_3b4440;
        case 0x3b4444u: goto label_3b4444;
        case 0x3b4448u: goto label_3b4448;
        case 0x3b444cu: goto label_3b444c;
        case 0x3b4450u: goto label_3b4450;
        case 0x3b4454u: goto label_3b4454;
        case 0x3b4458u: goto label_3b4458;
        case 0x3b445cu: goto label_3b445c;
        case 0x3b4460u: goto label_3b4460;
        case 0x3b4464u: goto label_3b4464;
        case 0x3b4468u: goto label_3b4468;
        case 0x3b446cu: goto label_3b446c;
        case 0x3b4470u: goto label_3b4470;
        case 0x3b4474u: goto label_3b4474;
        case 0x3b4478u: goto label_3b4478;
        case 0x3b447cu: goto label_3b447c;
        case 0x3b4480u: goto label_3b4480;
        case 0x3b4484u: goto label_3b4484;
        case 0x3b4488u: goto label_3b4488;
        case 0x3b448cu: goto label_3b448c;
        case 0x3b4490u: goto label_3b4490;
        case 0x3b4494u: goto label_3b4494;
        case 0x3b4498u: goto label_3b4498;
        case 0x3b449cu: goto label_3b449c;
        case 0x3b44a0u: goto label_3b44a0;
        case 0x3b44a4u: goto label_3b44a4;
        case 0x3b44a8u: goto label_3b44a8;
        case 0x3b44acu: goto label_3b44ac;
        case 0x3b44b0u: goto label_3b44b0;
        case 0x3b44b4u: goto label_3b44b4;
        case 0x3b44b8u: goto label_3b44b8;
        case 0x3b44bcu: goto label_3b44bc;
        case 0x3b44c0u: goto label_3b44c0;
        case 0x3b44c4u: goto label_3b44c4;
        case 0x3b44c8u: goto label_3b44c8;
        case 0x3b44ccu: goto label_3b44cc;
        case 0x3b44d0u: goto label_3b44d0;
        case 0x3b44d4u: goto label_3b44d4;
        case 0x3b44d8u: goto label_3b44d8;
        case 0x3b44dcu: goto label_3b44dc;
        case 0x3b44e0u: goto label_3b44e0;
        case 0x3b44e4u: goto label_3b44e4;
        case 0x3b44e8u: goto label_3b44e8;
        case 0x3b44ecu: goto label_3b44ec;
        default: break;
    }

    ctx->pc = 0x3b43d0u;

label_3b43d0:
    // 0x3b43d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b43d4:
    // 0x3b43d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b43d8:
    // 0x3b43d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b43dc:
    // 0x3b43dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b43dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b43e0:
    // 0x3b43e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b43e4:
    // 0x3b43e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b43e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b43e8:
    // 0x3b43e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b43ec:
    // 0x3b43ec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b43ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3b43f0:
    // 0x3b43f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3b43f4:
    if (ctx->pc == 0x3B43F4u) {
        ctx->pc = 0x3B43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43F0u;
        // 0x3b43f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43F8u;
        goto label_3b43f8;
    }
    ctx->pc = 0x3B43F0u;
    {
        const bool branch_taken_0x3b43f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43F0u;
        // 0x3b43f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43f0) {
            ctx->pc = 0x3B443Cu;
            goto label_3b443c;
        }
    }
    ctx->pc = 0x3B43F8u;
label_3b43f8:
    // 0x3b43f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3b43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3b43fc:
    // 0x3b43fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b4400:
    // 0x3b4400: 0x2442c070  addiu       $v0, $v0, -0x3F90
    ctx->pc = 0x3b4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951024));
label_3b4404:
    // 0x3b4404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b4408:
    // 0x3b4408: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b440c:
    // 0x3b440c: 0x800008  jr          $a0
label_3b4410:
    if (ctx->pc == 0x3B4410u) {
        ctx->pc = 0x3B4414u;
        goto label_3b4414;
    }
    ctx->pc = 0x3B440Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4414u: goto label_3b4414;
            case 0x3B4428u: goto label_3b4428;
            case 0x3B443Cu: goto label_3b443c;
            case 0x3B4444u: goto label_3b4444;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B440Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4414u;
label_3b4414:
    // 0x3b4414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b4414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4418:
    // 0x3b4418: 0xc0edebe  jal         func_3B7AF8
label_3b441c:
    if (ctx->pc == 0x3B441Cu) {
        ctx->pc = 0x3B441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4418u;
        // 0x3b441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4420u;
        goto label_3b4420;
    }
    ctx->pc = 0x3B4418u;
    SET_GPR_U32(ctx, 31, 0x3B4420u);
    ctx->pc = 0x3B441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4418u;
    // 0x3b441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7AF8u, 0x3B4418u, 0x3B4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4420u;
label_3b4420:
    // 0x3b4420: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b4424:
    if (ctx->pc == 0x3B4424u) {
        ctx->pc = 0x3B4428u;
        goto label_3b4428;
    }
    ctx->pc = 0x3B4420u;
    {
        const bool branch_taken_0x3b4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4420) {
            ctx->pc = 0x3B4434u;
            goto label_3b4434;
        }
    }
    ctx->pc = 0x3B4428u;
label_3b4428:
    // 0x3b4428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b4428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b442c:
    // 0x3b442c: 0xc0ee9c8  jal         func_3BA720
label_3b4430:
    if (ctx->pc == 0x3B4430u) {
        ctx->pc = 0x3B4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B442Cu;
        // 0x3b4430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4434u;
        goto label_3b4434;
    }
    ctx->pc = 0x3B442Cu;
    SET_GPR_U32(ctx, 31, 0x3B4434u);
    ctx->pc = 0x3B4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B442Cu;
    // 0x3b4430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA720u, 0x3B442Cu, 0x3B4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4434u;
label_3b4434:
    // 0x3b4434: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_3b4438:
    if (ctx->pc == 0x3B4438u) {
        ctx->pc = 0x3B4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4434u;
        // 0x3b4438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B443Cu;
        goto label_3b443c;
    }
    ctx->pc = 0x3B4434u;
    {
        const bool branch_taken_0x3b4434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4434u;
        // 0x3b4438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4434) {
            ctx->pc = 0x3B44D8u;
            goto label_3b44d8;
        }
    }
    ctx->pc = 0x3B443Cu;
label_3b443c:
    // 0x3b443c: 0x10000026  b           . + 4 + (0x26 << 2)
label_3b4440:
    if (ctx->pc == 0x3B4440u) {
        ctx->pc = 0x3B4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B443Cu;
        // 0x3b4440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4444u;
        goto label_3b4444;
    }
    ctx->pc = 0x3B443Cu;
    {
        const bool branch_taken_0x3b443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B443Cu;
        // 0x3b4440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b443c) {
            ctx->pc = 0x3B44D8u;
            goto label_3b44d8;
        }
    }
    ctx->pc = 0x3B4444u;
label_3b4444:
    // 0x3b4444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4448:
    // 0x3b4448: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b4448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b444c:
    // 0x3b444c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b444cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b4450:
    // 0x3b4450: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3b4450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3b4454:
    // 0x3b4454: 0xc10493e  jal         func_4124F8
label_3b4458:
    if (ctx->pc == 0x3B4458u) {
        ctx->pc = 0x3B4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4454u;
        // 0x3b4458: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B445Cu;
        goto label_3b445c;
    }
    ctx->pc = 0x3B4454u;
    SET_GPR_U32(ctx, 31, 0x3B445Cu);
    ctx->pc = 0x3B4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4454u;
    // 0x3b4458: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3B4454u, 0x3B445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B445Cu;
label_3b445c:
    // 0x3b445c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b445cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4460:
    // 0x3b4460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4464:
    // 0x3b4464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4468:
    // 0x3b4468: 0xc0ed396  jal         func_3B4E58
label_3b446c:
    if (ctx->pc == 0x3B446Cu) {
        ctx->pc = 0x3B446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4468u;
        // 0x3b446c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4470u;
        goto label_3b4470;
    }
    ctx->pc = 0x3B4468u;
    SET_GPR_U32(ctx, 31, 0x3B4470u);
    ctx->pc = 0x3B446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4468u;
    // 0x3b446c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4E58u, 0x3B4468u, 0x3B4470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4470u;
label_3b4470:
    // 0x3b4470: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_3b4474:
    if (ctx->pc == 0x3B4474u) {
        ctx->pc = 0x3B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4470u;
        // 0x3b4474: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4478u;
        goto label_3b4478;
    }
    ctx->pc = 0x3B4470u;
    {
        const bool branch_taken_0x3b4470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4470u;
        // 0x3b4474: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4470) {
            ctx->pc = 0x3B443Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b443c;
        }
    }
    ctx->pc = 0x3B4478u;
label_3b4478:
    // 0x3b4478: 0xc10496a  jal         func_4125A8
label_3b447c:
    if (ctx->pc == 0x3B447Cu) {
        ctx->pc = 0x3B447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4478u;
        // 0x3b447c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4480u;
        goto label_3b4480;
    }
    ctx->pc = 0x3B4478u;
    SET_GPR_U32(ctx, 31, 0x3B4480u);
    ctx->pc = 0x3B447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4478u;
    // 0x3b447c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3B4478u, 0x3B4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4480u;
label_3b4480:
    // 0x3b4480: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b4480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b4484:
    // 0x3b4484: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b4484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4488:
    // 0x3b4488: 0xc10493e  jal         func_4124F8
label_3b448c:
    if (ctx->pc == 0x3B448Cu) {
        ctx->pc = 0x3B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4488u;
        // 0x3b448c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4490u;
        goto label_3b4490;
    }
    ctx->pc = 0x3B4488u;
    SET_GPR_U32(ctx, 31, 0x3B4490u);
    ctx->pc = 0x3B448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4488u;
    // 0x3b448c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3B4488u, 0x3B4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4490u;
label_3b4490:
    // 0x3b4490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4494:
    // 0x3b4494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4498:
    // 0x3b4498: 0xc0ed340  jal         func_3B4D00
label_3b449c:
    if (ctx->pc == 0x3B449Cu) {
        ctx->pc = 0x3B449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4498u;
        // 0x3b449c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44A0u;
        goto label_3b44a0;
    }
    ctx->pc = 0x3B4498u;
    SET_GPR_U32(ctx, 31, 0x3B44A0u);
    ctx->pc = 0x3B449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4498u;
    // 0x3b449c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B4498u, 0x3B44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44A0u;
label_3b44a0:
    // 0x3b44a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b44a4:
    // 0x3b44a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b44a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b44a8:
    // 0x3b44a8: 0xc0ed3b8  jal         func_3B4EE0
label_3b44ac:
    if (ctx->pc == 0x3B44ACu) {
        ctx->pc = 0x3B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44A8u;
        // 0x3b44ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44B0u;
        goto label_3b44b0;
    }
    ctx->pc = 0x3B44A8u;
    SET_GPR_U32(ctx, 31, 0x3B44B0u);
    ctx->pc = 0x3B44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44A8u;
    // 0x3b44ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4EE0u, 0x3B44A8u, 0x3B44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44B0u;
label_3b44b0:
    // 0x3b44b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3b44b4:
    if (ctx->pc == 0x3B44B4u) {
        ctx->pc = 0x3B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44B0u;
        // 0x3b44b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44B8u;
        goto label_3b44b8;
    }
    ctx->pc = 0x3B44B0u;
    {
        const bool branch_taken_0x3b44b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44B0u;
        // 0x3b44b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b44b0) {
            ctx->pc = 0x3B44D8u;
            goto label_3b44d8;
        }
    }
    ctx->pc = 0x3B44B8u;
label_3b44b8:
    // 0x3b44b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b44b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b44bc:
    // 0x3b44bc: 0xc10496a  jal         func_4125A8
label_3b44c0:
    if (ctx->pc == 0x3B44C0u) {
        ctx->pc = 0x3B44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44BCu;
        // 0x3b44c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44C4u;
        goto label_3b44c4;
    }
    ctx->pc = 0x3B44BCu;
    SET_GPR_U32(ctx, 31, 0x3B44C4u);
    ctx->pc = 0x3B44C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44BCu;
    // 0x3b44c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3B44BCu, 0x3B44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44C4u;
label_3b44c4:
    // 0x3b44c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b44c8:
    // 0x3b44c8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3b44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3b44cc:
    // 0x3b44cc: 0x40f809  jalr        $v0
label_3b44d0:
    if (ctx->pc == 0x3B44D0u) {
        ctx->pc = 0x3B44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44CCu;
        // 0x3b44d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44D4u;
        goto label_3b44d4;
    }
    ctx->pc = 0x3B44CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B44D4u);
        ctx->pc = 0x3B44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44CCu;
        // 0x3b44d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B44CCu, 0x3B44D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B44D4u;
label_3b44d4:
    // 0x3b44d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b44d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b44d8:
    // 0x3b44d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b44d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b44dc:
    // 0x3b44dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b44dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b44e0:
    // 0x3b44e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b44e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b44e4:
    // 0x3b44e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b44e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b44e8:
    // 0x3b44e8: 0x3e00008  jr          $ra
label_3b44ec:
    if (ctx->pc == 0x3B44ECu) {
        ctx->pc = 0x3B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44E8u;
        // 0x3b44ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44F0u;
        goto label_fallthrough_0x3b44e8;
    }
    ctx->pc = 0x3B44E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44E8u;
        // 0x3b44ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B44E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b44e8:
    ctx->pc = 0x3B44F0u;
}
