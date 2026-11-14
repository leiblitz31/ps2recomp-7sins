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

// Function: sub_0037D5B0
// Address: 0x37d5b0 - 0x37d6c0
void sub_0037D5B0_0x37d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D5B0_0x37d5b0");
#endif

    switch (ctx->pc) {
        case 0x37d5b0u: goto label_37d5b0;
        case 0x37d5b4u: goto label_37d5b4;
        case 0x37d5b8u: goto label_37d5b8;
        case 0x37d5bcu: goto label_37d5bc;
        case 0x37d5c0u: goto label_37d5c0;
        case 0x37d5c4u: goto label_37d5c4;
        case 0x37d5c8u: goto label_37d5c8;
        case 0x37d5ccu: goto label_37d5cc;
        case 0x37d5d0u: goto label_37d5d0;
        case 0x37d5d4u: goto label_37d5d4;
        case 0x37d5d8u: goto label_37d5d8;
        case 0x37d5dcu: goto label_37d5dc;
        case 0x37d5e0u: goto label_37d5e0;
        case 0x37d5e4u: goto label_37d5e4;
        case 0x37d5e8u: goto label_37d5e8;
        case 0x37d5ecu: goto label_37d5ec;
        case 0x37d5f0u: goto label_37d5f0;
        case 0x37d5f4u: goto label_37d5f4;
        case 0x37d5f8u: goto label_37d5f8;
        case 0x37d5fcu: goto label_37d5fc;
        case 0x37d600u: goto label_37d600;
        case 0x37d604u: goto label_37d604;
        case 0x37d608u: goto label_37d608;
        case 0x37d60cu: goto label_37d60c;
        case 0x37d610u: goto label_37d610;
        case 0x37d614u: goto label_37d614;
        case 0x37d618u: goto label_37d618;
        case 0x37d61cu: goto label_37d61c;
        case 0x37d620u: goto label_37d620;
        case 0x37d624u: goto label_37d624;
        case 0x37d628u: goto label_37d628;
        case 0x37d62cu: goto label_37d62c;
        case 0x37d630u: goto label_37d630;
        case 0x37d634u: goto label_37d634;
        case 0x37d638u: goto label_37d638;
        case 0x37d63cu: goto label_37d63c;
        case 0x37d640u: goto label_37d640;
        case 0x37d644u: goto label_37d644;
        case 0x37d648u: goto label_37d648;
        case 0x37d64cu: goto label_37d64c;
        case 0x37d650u: goto label_37d650;
        case 0x37d654u: goto label_37d654;
        case 0x37d658u: goto label_37d658;
        case 0x37d65cu: goto label_37d65c;
        case 0x37d660u: goto label_37d660;
        case 0x37d664u: goto label_37d664;
        case 0x37d668u: goto label_37d668;
        case 0x37d66cu: goto label_37d66c;
        case 0x37d670u: goto label_37d670;
        case 0x37d674u: goto label_37d674;
        case 0x37d678u: goto label_37d678;
        case 0x37d67cu: goto label_37d67c;
        case 0x37d680u: goto label_37d680;
        case 0x37d684u: goto label_37d684;
        case 0x37d688u: goto label_37d688;
        case 0x37d68cu: goto label_37d68c;
        case 0x37d690u: goto label_37d690;
        case 0x37d694u: goto label_37d694;
        case 0x37d698u: goto label_37d698;
        case 0x37d69cu: goto label_37d69c;
        case 0x37d6a0u: goto label_37d6a0;
        case 0x37d6a4u: goto label_37d6a4;
        case 0x37d6a8u: goto label_37d6a8;
        case 0x37d6acu: goto label_37d6ac;
        case 0x37d6b0u: goto label_37d6b0;
        case 0x37d6b4u: goto label_37d6b4;
        case 0x37d6b8u: goto label_37d6b8;
        case 0x37d6bcu: goto label_37d6bc;
        default: break;
    }

    ctx->pc = 0x37d5b0u;

label_37d5b0:
    // 0x37d5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37d5b4:
    // 0x37d5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d5b8:
    // 0x37d5b8: 0xc0df4a4  jal         func_37D290
label_37d5bc:
    if (ctx->pc == 0x37D5BCu) {
        ctx->pc = 0x37D5C0u;
        goto label_37d5c0;
    }
    ctx->pc = 0x37D5B8u;
    SET_GPR_U32(ctx, 31, 0x37D5C0u);
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37D5B8u, 0x37D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D5C0u;
label_37d5c0:
    // 0x37d5c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x37d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d5c4:
    // 0x37d5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d5c8:
    // 0x37d5c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37d5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37d5cc:
    // 0x37d5cc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x37d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_37d5d0:
    // 0x37d5d0: 0x3e00008  jr          $ra
label_37d5d4:
    if (ctx->pc == 0x37D5D4u) {
        ctx->pc = 0x37D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5D0u;
        // 0x37d5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D5D8u;
        goto label_37d5d8;
    }
    ctx->pc = 0x37D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5D0u;
        // 0x37d5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D5D8u;
label_37d5d8:
    // 0x37d5d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37d5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_37d5dc:
    // 0x37d5dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_37d5e0:
    // 0x37d5e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_37d5e4:
    // 0x37d5e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d5e8:
    // 0x37d5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37d5ec:
    // 0x37d5ec: 0xc0df56c  jal         func_37D5B0
label_37d5f0:
    if (ctx->pc == 0x37D5F0u) {
        ctx->pc = 0x37D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5ECu;
        // 0x37d5f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D5F4u;
        goto label_37d5f4;
    }
    ctx->pc = 0x37D5ECu;
    SET_GPR_U32(ctx, 31, 0x37D5F4u);
    ctx->pc = 0x37D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D5ECu;
    // 0x37d5f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5B0u;
    goto label_37d5b0;
    ctx->pc = 0x37D5F4u;
label_37d5f4:
    // 0x37d5f4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x37d5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_37d5f8:
    // 0x37d5f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37d5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d5fc:
    // 0x37d5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d600:
    // 0x37d600: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d604:
    // 0x37d604: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x37d604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_37d608:
    // 0x37d608: 0xc103404  jal         func_40D010
label_37d60c:
    if (ctx->pc == 0x37D60Cu) {
        ctx->pc = 0x37D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D608u;
        // 0x37d60c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D610u;
        goto label_37d610;
    }
    ctx->pc = 0x37D608u;
    SET_GPR_U32(ctx, 31, 0x37D610u);
    ctx->pc = 0x37D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D608u;
    // 0x37d60c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x37D608u, 0x37D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D610u;
label_37d610:
    // 0x37d610: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_37d614:
    if (ctx->pc == 0x37D614u) {
        ctx->pc = 0x37D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D610u;
        // 0x37d614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D618u;
        goto label_37d618;
    }
    ctx->pc = 0x37D610u;
    {
        const bool branch_taken_0x37d610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D610u;
        // 0x37d614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d610) {
            ctx->pc = 0x37D6ACu;
            goto label_37d6ac;
        }
    }
    ctx->pc = 0x37D618u;
label_37d618:
    // 0x37d618: 0xc0df4a4  jal         func_37D290
label_37d61c:
    if (ctx->pc == 0x37D61Cu) {
        ctx->pc = 0x37D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D618u;
        // 0x37d61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D620u;
        goto label_37d620;
    }
    ctx->pc = 0x37D618u;
    SET_GPR_U32(ctx, 31, 0x37D620u);
    ctx->pc = 0x37D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D618u;
    // 0x37d61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37D618u, 0x37D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D620u;
label_37d620:
    // 0x37d620: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x37d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_37d624:
    // 0x37d624: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_37d628:
    if (ctx->pc == 0x37D628u) {
        ctx->pc = 0x37D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D624u;
        // 0x37d628: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D62Cu;
        goto label_37d62c;
    }
    ctx->pc = 0x37D624u;
    {
        const bool branch_taken_0x37d624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D624u;
        // 0x37d628: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d624) {
            ctx->pc = 0x37D650u;
            goto label_37d650;
        }
    }
    ctx->pc = 0x37D62Cu;
label_37d62c:
    // 0x37d62c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37d630:
    // 0x37d630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d634:
    // 0x37d634: 0xc1035f6  jal         func_40D7D8
label_37d638:
    if (ctx->pc == 0x37D638u) {
        ctx->pc = 0x37D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D634u;
        // 0x37d638: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D63Cu;
        goto label_37d63c;
    }
    ctx->pc = 0x37D634u;
    SET_GPR_U32(ctx, 31, 0x37D63Cu);
    ctx->pc = 0x37D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D634u;
    // 0x37d638: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D634u, 0x37D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D63Cu;
label_37d63c:
    // 0x37d63c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x37d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_37d640:
    // 0x37d640: 0xc103628  jal         func_40D8A0
label_37d644:
    if (ctx->pc == 0x37D644u) {
        ctx->pc = 0x37D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D640u;
        // 0x37d644: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D648u;
        goto label_37d648;
    }
    ctx->pc = 0x37D640u;
    SET_GPR_U32(ctx, 31, 0x37D648u);
    ctx->pc = 0x37D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D640u;
    // 0x37d644: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D640u, 0x37D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D648u;
label_37d648:
    // 0x37d648: 0x10000018  b           . + 4 + (0x18 << 2)
label_37d64c:
    if (ctx->pc == 0x37D64Cu) {
        ctx->pc = 0x37D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D648u;
        // 0x37d64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D650u;
        goto label_37d650;
    }
    ctx->pc = 0x37D648u;
    {
        const bool branch_taken_0x37d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D648u;
        // 0x37d64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d648) {
            ctx->pc = 0x37D6ACu;
            goto label_37d6ac;
        }
    }
    ctx->pc = 0x37D650u;
label_37d650:
    // 0x37d650: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37d650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37d654:
    // 0x37d654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37d658:
    // 0x37d658: 0x8c62e950  lw          $v0, -0x16B0($v1)
    ctx->pc = 0x37d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961488)));
label_37d65c:
    // 0x37d65c: 0x40f809  jalr        $v0
label_37d660:
    if (ctx->pc == 0x37D660u) {
        ctx->pc = 0x37D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D65Cu;
        // 0x37d660: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D664u;
        goto label_37d664;
    }
    ctx->pc = 0x37D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D664u);
        ctx->pc = 0x37D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D65Cu;
        // 0x37d660: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D65Cu, 0x37D664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D664u;
label_37d664:
    // 0x37d664: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x37d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37d668:
    // 0x37d668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d66c:
    // 0x37d66c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37d670:
    // 0x37d670: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x37d670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_37d674:
    // 0x37d674: 0xc10486e  jal         func_4121B8
label_37d678:
    if (ctx->pc == 0x37D678u) {
        ctx->pc = 0x37D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D674u;
        // 0x37d678: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D67Cu;
        goto label_37d67c;
    }
    ctx->pc = 0x37D674u;
    SET_GPR_U32(ctx, 31, 0x37D67Cu);
    ctx->pc = 0x37D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D674u;
    // 0x37d678: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x37D674u, 0x37D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D67Cu;
label_37d67c:
    // 0x37d67c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37d680:
    if (ctx->pc == 0x37D680u) {
        ctx->pc = 0x37D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D67Cu;
        // 0x37d680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D684u;
        goto label_37d684;
    }
    ctx->pc = 0x37D67Cu;
    {
        const bool branch_taken_0x37d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d67c) {
            ctx->pc = 0x37D680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D67Cu;
            // 0x37d680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D6ACu;
            goto label_37d6ac;
        }
    }
    ctx->pc = 0x37D684u;
label_37d684:
    // 0x37d684: 0xc0df4a4  jal         func_37D290
label_37d688:
    if (ctx->pc == 0x37D688u) {
        ctx->pc = 0x37D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D684u;
        // 0x37d688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D68Cu;
        goto label_37d68c;
    }
    ctx->pc = 0x37D684u;
    SET_GPR_U32(ctx, 31, 0x37D68Cu);
    ctx->pc = 0x37D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D684u;
    // 0x37d688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37D684u, 0x37D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D68Cu;
label_37d68c:
    // 0x37d68c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d690:
    // 0x37d690: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x37d690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_37d694:
    // 0x37d694: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37d694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_37d698:
    // 0x37d698: 0x3012  mflo        $a2
    ctx->pc = 0x37d698u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_37d69c:
    // 0x37d69c: 0xc10341a  jal         func_40D068
label_37d6a0:
    if (ctx->pc == 0x37D6A0u) {
        ctx->pc = 0x37D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D69Cu;
        // 0x37d6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D6A4u;
        goto label_37d6a4;
    }
    ctx->pc = 0x37D69Cu;
    SET_GPR_U32(ctx, 31, 0x37D6A4u);
    ctx->pc = 0x37D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D69Cu;
    // 0x37d6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x37D69Cu, 0x37D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D6A4u;
label_37d6a4:
    // 0x37d6a4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x37d6a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_37d6a8:
    // 0x37d6a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37d6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d6ac:
    // 0x37d6ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37d6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37d6b0:
    // 0x37d6b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37d6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37d6b4:
    // 0x37d6b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37d6b8:
    // 0x37d6b8: 0x3e00008  jr          $ra
label_37d6bc:
    if (ctx->pc == 0x37D6BCu) {
        ctx->pc = 0x37D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6B8u;
        // 0x37d6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D6C0u;
        goto label_fallthrough_0x37d6b8;
    }
    ctx->pc = 0x37D6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6B8u;
        // 0x37d6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37d6b8:
    ctx->pc = 0x37D6C0u;
}
