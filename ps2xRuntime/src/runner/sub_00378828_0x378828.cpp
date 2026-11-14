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

// Function: sub_00378828
// Address: 0x378828 - 0x378908
void sub_00378828_0x378828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378828_0x378828");
#endif

    switch (ctx->pc) {
        case 0x378828u: goto label_378828;
        case 0x37882cu: goto label_37882c;
        case 0x378830u: goto label_378830;
        case 0x378834u: goto label_378834;
        case 0x378838u: goto label_378838;
        case 0x37883cu: goto label_37883c;
        case 0x378840u: goto label_378840;
        case 0x378844u: goto label_378844;
        case 0x378848u: goto label_378848;
        case 0x37884cu: goto label_37884c;
        case 0x378850u: goto label_378850;
        case 0x378854u: goto label_378854;
        case 0x378858u: goto label_378858;
        case 0x37885cu: goto label_37885c;
        case 0x378860u: goto label_378860;
        case 0x378864u: goto label_378864;
        case 0x378868u: goto label_378868;
        case 0x37886cu: goto label_37886c;
        case 0x378870u: goto label_378870;
        case 0x378874u: goto label_378874;
        case 0x378878u: goto label_378878;
        case 0x37887cu: goto label_37887c;
        case 0x378880u: goto label_378880;
        case 0x378884u: goto label_378884;
        case 0x378888u: goto label_378888;
        case 0x37888cu: goto label_37888c;
        case 0x378890u: goto label_378890;
        case 0x378894u: goto label_378894;
        case 0x378898u: goto label_378898;
        case 0x37889cu: goto label_37889c;
        case 0x3788a0u: goto label_3788a0;
        case 0x3788a4u: goto label_3788a4;
        case 0x3788a8u: goto label_3788a8;
        case 0x3788acu: goto label_3788ac;
        case 0x3788b0u: goto label_3788b0;
        case 0x3788b4u: goto label_3788b4;
        case 0x3788b8u: goto label_3788b8;
        case 0x3788bcu: goto label_3788bc;
        case 0x3788c0u: goto label_3788c0;
        case 0x3788c4u: goto label_3788c4;
        case 0x3788c8u: goto label_3788c8;
        case 0x3788ccu: goto label_3788cc;
        case 0x3788d0u: goto label_3788d0;
        case 0x3788d4u: goto label_3788d4;
        case 0x3788d8u: goto label_3788d8;
        case 0x3788dcu: goto label_3788dc;
        case 0x3788e0u: goto label_3788e0;
        case 0x3788e4u: goto label_3788e4;
        case 0x3788e8u: goto label_3788e8;
        case 0x3788ecu: goto label_3788ec;
        case 0x3788f0u: goto label_3788f0;
        case 0x3788f4u: goto label_3788f4;
        case 0x3788f8u: goto label_3788f8;
        case 0x3788fcu: goto label_3788fc;
        case 0x378900u: goto label_378900;
        case 0x378904u: goto label_378904;
        default: break;
    }

    ctx->pc = 0x378828u;

label_378828:
    // 0x378828: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x378828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_37882c:
    // 0x37882c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_378830:
    // 0x378830: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x378830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_378834:
    // 0x378834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x378834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378838:
    // 0x378838: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x378838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_37883c:
    // 0x37883c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x37883cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_378840:
    // 0x378840: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x378840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_378844:
    // 0x378844: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x378844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_378848:
    // 0x378848: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x378848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_37884c:
    // 0x37884c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x37884cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_378850:
    // 0x378850: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x378850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_378854:
    // 0x378854: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x378854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_378858:
    // 0x378858: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x378858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37885c:
    // 0x37885c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_378860:
    // 0x378860: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x378860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_378864:
    // 0x378864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_378868:
    // 0x378868: 0xc0de242  jal         func_378908
label_37886c:
    if (ctx->pc == 0x37886Cu) {
        ctx->pc = 0x37886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378868u;
        // 0x37886c: 0x149840  sll         $s3, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378870u;
        goto label_378870;
    }
    ctx->pc = 0x378868u;
    SET_GPR_U32(ctx, 31, 0x378870u);
    ctx->pc = 0x37886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378868u;
    // 0x37886c: 0x149840  sll         $s3, $s4, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378908u, 0x378868u, 0x378870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378870u;
label_378870:
    // 0x378870: 0x2b32021  addu        $a0, $s5, $s3
    ctx->pc = 0x378870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_378874:
    // 0x378874: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x378874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_378878:
    // 0x378878: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x378878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_37887c:
    // 0x37887c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37887cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_378880:
    // 0x378880: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x378880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_378884:
    // 0x378884: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x378884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_378888:
    // 0x378888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37888c:
    // 0x37888c: 0x40f809  jalr        $v0
label_378890:
    if (ctx->pc == 0x378890u) {
        ctx->pc = 0x378890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37888Cu;
        // 0x378890: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x378894u;
        goto label_378894;
    }
    ctx->pc = 0x37888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378894u);
        ctx->pc = 0x378890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37888Cu;
        // 0x378890: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37888Cu, 0x378894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378894u;
label_378894:
    // 0x378894: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_378898:
    if (ctx->pc == 0x378898u) {
        ctx->pc = 0x378898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378894u;
        // 0x378898: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37889Cu;
        goto label_37889c;
    }
    ctx->pc = 0x378894u;
    {
        const bool branch_taken_0x378894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378894u;
        // 0x378898: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378894) {
            ctx->pc = 0x3788D4u;
            goto label_3788d4;
        }
    }
    ctx->pc = 0x37889Cu;
label_37889c:
    // 0x37889c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3788a0:
    // 0x3788a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3788a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3788a4:
    // 0x3788a4: 0xc0bb7e6  jal         func_2EDF98
label_3788a8:
    if (ctx->pc == 0x3788A8u) {
        ctx->pc = 0x3788A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788A4u;
        // 0x3788a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788ACu;
        goto label_3788ac;
    }
    ctx->pc = 0x3788A4u;
    SET_GPR_U32(ctx, 31, 0x3788ACu);
    ctx->pc = 0x3788A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788A4u;
    // 0x3788a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3788A4u, 0x3788ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788ACu;
label_3788ac:
    // 0x3788ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3788acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3788b0:
    // 0x3788b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3788b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3788b4:
    // 0x3788b4: 0xae37002c  sw          $s7, 0x2C($s1)
    ctx->pc = 0x3788b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 23));
label_3788b8:
    // 0x3788b8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3788b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3788bc:
    // 0x3788bc: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x3788bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_3788c0:
    // 0x3788c0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x3788c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3788c4:
    // 0x3788c4: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x3788c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
label_3788c8:
    // 0x3788c8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3788c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_3788cc:
    // 0x3788cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3788d0:
    if (ctx->pc == 0x3788D0u) {
        ctx->pc = 0x3788D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788CCu;
        // 0x3788d0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788D4u;
        goto label_3788d4;
    }
    ctx->pc = 0x3788CCu;
    {
        const bool branch_taken_0x3788cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3788D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788CCu;
        // 0x3788d0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3788cc) {
            ctx->pc = 0x3788D8u;
            goto label_3788d8;
        }
    }
    ctx->pc = 0x3788D4u;
label_3788d4:
    // 0x3788d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3788d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3788d8:
    // 0x3788d8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3788d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3788dc:
    // 0x3788dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3788dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3788e0:
    // 0x3788e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3788e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3788e4:
    // 0x3788e4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3788e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3788e8:
    // 0x3788e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3788e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3788ec:
    // 0x3788ec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3788ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3788f0:
    // 0x3788f0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3788f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3788f4:
    // 0x3788f4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3788f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3788f8:
    // 0x3788f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3788f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3788fc:
    // 0x3788fc: 0x3e00008  jr          $ra
label_378900:
    if (ctx->pc == 0x378900u) {
        ctx->pc = 0x378900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788FCu;
        // 0x378900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378904u;
        goto label_378904;
    }
    ctx->pc = 0x3788FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788FCu;
        // 0x378900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3788FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378904u;
label_378904:
    // 0x378904: 0x0  nop
    ctx->pc = 0x378904u;
    // NOP
    ctx->pc = 0x378908u;
}
