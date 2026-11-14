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

// Function: sub_004995D8
// Address: 0x4995d8 - 0x499750
void sub_004995D8_0x4995d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004995D8_0x4995d8");
#endif

    switch (ctx->pc) {
        case 0x499600u: goto label_499600;
        case 0x49965cu: goto label_49965c;
        case 0x499688u: goto label_499688;
        case 0x4996b4u: goto label_4996b4;
        case 0x4996e0u: goto label_4996e0;
        case 0x4996fcu: goto label_4996fc;
        case 0x499718u: goto label_499718;
        case 0x499720u: goto label_499720;
        case 0x499728u: goto label_499728;
        default: break;
    }

    ctx->pc = 0x4995d8u;

    // 0x4995d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4995d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4995dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4995dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4995e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4995e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4995e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4995e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4995e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4995e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4995ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4995ECu;
    {
        const bool branch_taken_0x4995ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4995ECu;
        // 0x4995f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4995ec) {
            ctx->pc = 0x499604u;
            goto label_499604;
        }
    }
    ctx->pc = 0x4995F4u;
    // 0x4995f4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4995f8: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4995F8u;
    SET_GPR_U32(ctx, 31, 0x499600u);
    ctx->pc = 0x4995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4995F8u;
    // 0x4995fc: 0x248481b8  addiu       $a0, $a0, -0x7E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4995F8u, 0x499600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499600u;
label_499600:
    // 0x499600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_499604:
    // 0x499604: 0x3e00008  jr          $ra
    ctx->pc = 0x499604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499604u;
        // 0x499608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49960Cu;
    // 0x49960c: 0x0  nop
    ctx->pc = 0x49960cu;
    // NOP
    // 0x499610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x499610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x499614: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x499614u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x499618: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x499618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49961c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x49961cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x499620: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x499620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x499624: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x499624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499628: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x499628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49962c: 0xaf80c194  sw          $zero, -0x3E6C($gp)
    ctx->pc = 0x49962cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951316), GPR_U32(ctx, 0));
    // 0x499630: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x499630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x499634: 0xaf90b7b0  sw          $s0, -0x4850($gp)
    ctx->pc = 0x499634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948784), GPR_U32(ctx, 16));
    // 0x499638: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x499638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49963c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x49963cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x499640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499644: 0x250881e0  addiu       $t0, $t0, -0x7E20
    ctx->pc = 0x499644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935008));
    // 0x499648: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x499648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49964c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x499650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499654: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x499654u;
    SET_GPR_U32(ctx, 31, 0x49965Cu);
    ctx->pc = 0x499658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499654u;
    // 0x499658: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x499654u, 0x49965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49965Cu;
label_49965c:
    // 0x49965c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x49965Cu;
    {
        const bool branch_taken_0x49965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49965Cu;
        // 0x499660: 0x3c080066  lui         $t0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49965c) {
            ctx->pc = 0x499728u;
            goto label_499728;
        }
    }
    ctx->pc = 0x499664u;
    // 0x499664: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x499664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x499668: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x499668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49966c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x49966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499670: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x499670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x499674: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x499674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x499678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49967c: 0x25088208  addiu       $t0, $t0, -0x7DF8
    ctx->pc = 0x49967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935048));
    // 0x499680: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x499680u;
    SET_GPR_U32(ctx, 31, 0x499688u);
    ctx->pc = 0x499684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499680u;
    // 0x499684: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x499680u, 0x499688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499688u;
label_499688:
    // 0x499688: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x499688u;
    {
        const bool branch_taken_0x499688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499688u;
        // 0x49968c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499688) {
            ctx->pc = 0x499720u;
            goto label_499720;
        }
    }
    ctx->pc = 0x499690u;
    // 0x499690: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x499690u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x499694: 0x24518230  addiu       $s1, $v0, -0x7DD0
    ctx->pc = 0x499694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
    // 0x499698: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x499698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49969c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x49969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4996a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4996a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4996a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4996a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4996a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996ac: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4996ACu;
    SET_GPR_U32(ctx, 31, 0x4996B4u);
    ctx->pc = 0x4996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996ACu;
    // 0x4996b0: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4996ACu, 0x4996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996B4u;
label_4996b4:
    // 0x4996b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4996B4u;
    {
        const bool branch_taken_0x4996b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996B4u;
        // 0x4996b8: 0x3c060066  lui         $a2, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996b4) {
            ctx->pc = 0x499718u;
            goto label_499718;
        }
    }
    ctx->pc = 0x4996BCu;
    // 0x4996bc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4996bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4996c0: 0x24c68258  addiu       $a2, $a2, -0x7DA8
    ctx->pc = 0x4996c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935128));
    // 0x4996c4: 0xaf90b7ac  sw          $s0, -0x4854($gp)
    ctx->pc = 0x4996c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 16));
    // 0x4996c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4996c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4996ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4996d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4996d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996d8: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4996D8u;
    SET_GPR_U32(ctx, 31, 0x4996E0u);
    ctx->pc = 0x4996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996D8u;
    // 0x4996dc: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4996D8u, 0x4996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996E0u;
label_4996e0:
    // 0x4996e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4996E0u;
    {
        const bool branch_taken_0x4996e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996E0u;
        // 0x4996e4: 0xaf82c190  sw          $v0, -0x3E70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996e0) {
            ctx->pc = 0x499710u;
            goto label_499710;
        }
    }
    ctx->pc = 0x4996E8u;
    // 0x4996e8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4996e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4996ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4996ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996f0: 0x24a55ab8  addiu       $a1, $a1, 0x5AB8
    ctx->pc = 0x4996f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23224));
    // 0x4996f4: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4996F4u;
    SET_GPR_U32(ctx, 31, 0x4996FCu);
    ctx->pc = 0x4996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996F4u;
    // 0x4996f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4996F4u, 0x4996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996FCu;
label_4996fc:
    // 0x4996fc: 0x8f83c190  lw          $v1, -0x3E70($gp)
    ctx->pc = 0x4996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x499700: 0xa4700046  sh          $s0, 0x46($v1)
    ctx->pc = 0x499700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 16));
    // 0x499704: 0xaf80b7b0  sw          $zero, -0x4850($gp)
    ctx->pc = 0x499704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948784), GPR_U32(ctx, 0));
    // 0x499708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x499708u;
    {
        const bool branch_taken_0x499708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499708u;
        // 0x49970c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499708) {
            ctx->pc = 0x499734u;
            goto label_499734;
        }
    }
    ctx->pc = 0x499710u;
label_499710:
    // 0x499710: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x499710u;
    SET_GPR_U32(ctx, 31, 0x499718u);
    ctx->pc = 0x499714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499710u;
    // 0x499714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x499710u, 0x499718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499718u;
label_499718:
    // 0x499718: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x499718u;
    SET_GPR_U32(ctx, 31, 0x499720u);
    ctx->pc = 0x49971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499718u;
    // 0x49971c: 0x26448208  addiu       $a0, $s2, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x499718u, 0x499720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499720u;
label_499720:
    // 0x499720: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x499720u;
    SET_GPR_U32(ctx, 31, 0x499728u);
    ctx->pc = 0x499724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499720u;
    // 0x499724: 0x266481e0  addiu       $a0, $s3, -0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x499720u, 0x499728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499728u;
label_499728:
    // 0x499728: 0xaf80b7b0  sw          $zero, -0x4850($gp)
    ctx->pc = 0x499728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948784), GPR_U32(ctx, 0));
    // 0x49972c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49972cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499730: 0xaf80b7ac  sw          $zero, -0x4854($gp)
    ctx->pc = 0x499730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 0));
label_499734:
    // 0x499734: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x499734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499738: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x499738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49973c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49973cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499740: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x499740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499748: 0x3e00008  jr          $ra
    ctx->pc = 0x499748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499748u;
        // 0x49974c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499750u;
}
