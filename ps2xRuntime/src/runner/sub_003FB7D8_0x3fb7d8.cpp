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

// Function: sub_003FB7D8
// Address: 0x3fb7d8 - 0x3fb8f0
void sub_003FB7D8_0x3fb7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB7D8_0x3fb7d8");
#endif

    switch (ctx->pc) {
        case 0x3fb838u: goto label_3fb838;
        case 0x3fb84cu: goto label_3fb84c;
        case 0x3fb85cu: goto label_3fb85c;
        case 0x3fb868u: goto label_3fb868;
        case 0x3fb880u: goto label_3fb880;
        case 0x3fb894u: goto label_3fb894;
        default: break;
    }

    ctx->pc = 0x3fb7d8u;

    // 0x3fb7d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fb7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3fb7dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fb7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3fb7e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fb7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3fb7e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3fb7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb7e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fb7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3fb7ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3fb7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb7f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3fb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3fb7f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fb7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb7f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3fb7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3fb7fc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3fb7fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb800: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3fb800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3fb804: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3fb804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb808: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fb808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3fb80c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3fb80cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb810: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x3FB810u;
    {
        const bool branch_taken_0x3fb810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB810u;
        // 0x3fb814: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb810) {
            ctx->pc = 0x3FB8C4u;
            goto label_3fb8c4;
        }
    }
    ctx->pc = 0x3FB818u;
    // 0x3fb818: 0x5240002b  beql        $s2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3FB818u;
    {
        const bool branch_taken_0x3fb818 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb818) {
            ctx->pc = 0x3FB81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB818u;
            // 0x3fb81c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB8C8u;
            goto label_3fb8c8;
        }
    }
    ctx->pc = 0x3FB820u;
    // 0x3fb820: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3FB820u;
    {
        const bool branch_taken_0x3fb820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb820) {
            ctx->pc = 0x3FB824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB820u;
            // 0x3fb824: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB8C8u;
            goto label_3fb8c8;
        }
    }
    ctx->pc = 0x3FB828u;
    // 0x3fb828: 0x52a00027  beql        $s5, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x3FB828u;
    {
        const bool branch_taken_0x3fb828 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb828) {
            ctx->pc = 0x3FB82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB828u;
            // 0x3fb82c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB8C8u;
            goto label_3fb8c8;
        }
    }
    ctx->pc = 0x3FB830u;
    // 0x3fb830: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB830u;
    SET_GPR_U32(ctx, 31, 0x3FB838u);
    ctx->pc = 0x3FB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB830u;
    // 0x3fb834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB830u, 0x3FB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB838u;
label_3fb838:
    // 0x3fb838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb844: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB844u;
    SET_GPR_U32(ctx, 31, 0x3FB84Cu);
    ctx->pc = 0x3FB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB844u;
    // 0x3fb848: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB844u, 0x3FB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB84Cu;
label_3fb84c:
    // 0x3fb84c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fb84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb854: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FB854u;
    SET_GPR_U32(ctx, 31, 0x3FB85Cu);
    ctx->pc = 0x3FB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB854u;
    // 0x3fb858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FB854u, 0x3FB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB85Cu;
label_3fb85c:
    // 0x3fb85c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb860: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB860u;
    SET_GPR_U32(ctx, 31, 0x3FB868u);
    ctx->pc = 0x3FB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB860u;
    // 0x3fb864: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB860u, 0x3FB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB868u;
label_3fb868:
    // 0x3fb868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fb868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb86c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3fb86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb870: 0x14303c  dsll32      $a2, $s4, 0
    ctx->pc = 0x3fb870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 0));
    // 0x3fb874: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb874u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb878: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB878u;
    SET_GPR_U32(ctx, 31, 0x3FB880u);
    ctx->pc = 0x3FB87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB878u;
    // 0x3fb87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB878u, 0x3FB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB880u;
label_3fb880:
    // 0x3fb880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fb880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb888: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3fb888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fb88c: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FB88Cu;
    SET_GPR_U32(ctx, 31, 0x3FB894u);
    ctx->pc = 0x3FB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB88Cu;
    // 0x3fb890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FB88Cu, 0x3FB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB894u;
label_3fb894:
    // 0x3fb894: 0xde4300f0  ld          $v1, 0xF0($s2)
    ctx->pc = 0x3fb894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x3fb898: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3fb898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fb89c: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x3fb89cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3fb8a0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3fb8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3fb8a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3fb8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3fb8a8: 0xfe540108  sd          $s4, 0x108($s2)
    ctx->pc = 0x3fb8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 264), GPR_U64(ctx, 20));
    // 0x3fb8ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3fb8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3fb8b0: 0xae510100  sw          $s1, 0x100($s2)
    ctx->pc = 0x3fb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 17));
    // 0x3fb8b4: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x3fb8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x3fb8b8: 0xae500104  sw          $s0, 0x104($s2)
    ctx->pc = 0x3fb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 16));
    // 0x3fb8bc: 0xa2560110  sb          $s6, 0x110($s2)
    ctx->pc = 0x3fb8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 272), (uint8_t)GPR_U32(ctx, 22));
    // 0x3fb8c0: 0xfe4300f0  sd          $v1, 0xF0($s2)
    ctx->pc = 0x3fb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 3));
label_3fb8c4:
    // 0x3fb8c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fb8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fb8c8:
    // 0x3fb8c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fb8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fb8cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fb8ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fb8d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fb8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb8d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3fb8d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb8d8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3fb8d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb8dc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3fb8dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB8E4u;
        // 0x3fb8e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB8ECu;
    // 0x3fb8ec: 0x0  nop
    ctx->pc = 0x3fb8ecu;
    // NOP
    ctx->pc = 0x3fb8f0u;
}
