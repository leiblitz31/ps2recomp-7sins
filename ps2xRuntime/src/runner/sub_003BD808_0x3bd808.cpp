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

// Function: sub_003BD808
// Address: 0x3bd808 - 0x3bd920
void sub_003BD808_0x3bd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD808_0x3bd808");
#endif

    switch (ctx->pc) {
        case 0x3bd83cu: goto label_3bd83c;
        case 0x3bd854u: goto label_3bd854;
        case 0x3bd8acu: goto label_3bd8ac;
        case 0x3bd8c0u: goto label_3bd8c0;
        case 0x3bd8d4u: goto label_3bd8d4;
        case 0x3bd904u: goto label_3bd904;
        default: break;
    }

    ctx->pc = 0x3bd808u;

    // 0x3bd808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bd80c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bd80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3bd810: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bd810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3bd814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bd818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bd81c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bd81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bd820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bd824: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bd824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd828: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3bd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3bd82c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x3bd82cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bd830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bd830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd834: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BD834u;
    SET_GPR_U32(ctx, 31, 0x3BD83Cu);
    ctx->pc = 0x3BD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD834u;
    // 0x3bd838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BD834u, 0x3BD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD83Cu;
label_3bd83c:
    // 0x3bd83c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x3bd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3bd840: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3bd840u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bd844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd848: 0x37a50001  ori         $a1, $sp, 0x1
    ctx->pc = 0x3bd848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x3bd84c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BD84Cu;
    SET_GPR_U32(ctx, 31, 0x3BD854u);
    ctx->pc = 0x3BD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD84Cu;
    // 0x3bd850: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BD84Cu, 0x3BD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD854u;
label_3bd854:
    // 0x3bd854: 0x2e230009  sltiu       $v1, $s1, 0x9
    ctx->pc = 0x3bd854u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3bd858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD858u;
    {
        const bool branch_taken_0x3bd858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD858u;
        // 0x3bd85c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd858) {
            ctx->pc = 0x3BD868u;
            goto label_3bd868;
        }
    }
    ctx->pc = 0x3BD860u;
    // 0x3bd860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD860u;
    {
        const bool branch_taken_0x3bd860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD860u;
        // 0x3bd864: 0x2223804  sllv        $a3, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd860) {
            ctx->pc = 0x3BD86Cu;
            goto label_3bd86c;
        }
    }
    ctx->pc = 0x3BD868u;
label_3bd868:
    // 0x3bd868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bd868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd86c:
    // 0x3bd86c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3bd870: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bd870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bd874: 0x3463ffe0  ori         $v1, $v1, 0xFFE0
    ctx->pc = 0x3bd874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65504);
    // 0x3bd878: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x3bd878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3bd87c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x3bd87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bd880: 0x24e70036  addiu       $a3, $a3, 0x36
    ctx->pc = 0x3bd880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 54));
    // 0x3bd884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd888: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x3bd888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3bd88c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd890: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x3bd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x3bd894: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bd894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bd898: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3bd898u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3bd89c: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x3bd89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3bd8a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3bd8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3bd8a4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD8A4u;
    SET_GPR_U32(ctx, 31, 0x3BD8ACu);
    ctx->pc = 0x3BD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD8A4u;
    // 0x3bd8a8: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD8A4u, 0x3BD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD8ACu;
label_3bd8ac:
    // 0x3bd8ac: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x3bd8acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bd8b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bd8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bd8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd8b8: 0xc10344a  jal         func_40D128
    ctx->pc = 0x3BD8B8u;
    SET_GPR_U32(ctx, 31, 0x3BD8C0u);
    ctx->pc = 0x3BD8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD8B8u;
    // 0x3bd8bc: 0x37a50002  ori         $a1, $sp, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3BD8B8u, 0x3BD8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD8C0u;
label_3bd8c0:
    // 0x3bd8c0: 0xa7a00004  sh          $zero, 0x4($sp)
    ctx->pc = 0x3bd8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bd8c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bd8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bd8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd8cc: 0xc10344a  jal         func_40D128
    ctx->pc = 0x3BD8CCu;
    SET_GPR_U32(ctx, 31, 0x3BD8D4u);
    ctx->pc = 0x3BD8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD8CCu;
    // 0x3bd8d0: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3BD8CCu, 0x3BD8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD8D4u;
label_3bd8d4:
    // 0x3bd8d4: 0x2e230009  sltiu       $v1, $s1, 0x9
    ctx->pc = 0x3bd8d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3bd8d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD8D8u;
    {
        const bool branch_taken_0x3bd8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8D8u;
        // 0x3bd8dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd8d8) {
            ctx->pc = 0x3BD8E8u;
            goto label_3bd8e8;
        }
    }
    ctx->pc = 0x3BD8E0u;
    // 0x3bd8e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD8E0u;
    {
        const bool branch_taken_0x3bd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD8E0u;
        // 0x3bd8e4: 0x2221004  sllv        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd8e0) {
            ctx->pc = 0x3BD8ECu;
            goto label_3bd8ec;
        }
    }
    ctx->pc = 0x3BD8E8u;
label_3bd8e8:
    // 0x3bd8e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd8ec:
    // 0x3bd8ec: 0x24420036  addiu       $v0, $v0, 0x36
    ctx->pc = 0x3bd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 54));
    // 0x3bd8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd8f4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3bd8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x3bd8f8: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x3bd8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x3bd8fc: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD8FCu;
    SET_GPR_U32(ctx, 31, 0x3BD904u);
    ctx->pc = 0x3BD900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD8FCu;
    // 0x3bd900: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD8FCu, 0x3BD904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD904u;
label_3bd904:
    // 0x3bd904: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3bd908: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bd908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bd90c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bd90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bd910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bd914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd918: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD918u;
        // 0x3bd91c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD920u;
}
