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

// Function: sub_004B2598
// Address: 0x4b2598 - 0x4b2710
void sub_004B2598_0x4b2598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2598_0x4b2598");
#endif

    switch (ctx->pc) {
        case 0x4b25c4u: goto label_4b25c4;
        case 0x4b25e0u: goto label_4b25e0;
        case 0x4b25f8u: goto label_4b25f8;
        case 0x4b2608u: goto label_4b2608;
        case 0x4b2620u: goto label_4b2620;
        case 0x4b263cu: goto label_4b263c;
        case 0x4b2654u: goto label_4b2654;
        case 0x4b2680u: goto label_4b2680;
        case 0x4b2698u: goto label_4b2698;
        default: break;
    }

    ctx->pc = 0x4b2598u;

    // 0x4b2598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b2598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b259c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b259cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b25a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b25a4: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x4b25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x4b25a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b25a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b25ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b25acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b25b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b25b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b25b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b25b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b25bc: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4B25BCu;
    SET_GPR_U32(ctx, 31, 0x4B25C4u);
    ctx->pc = 0x4B25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25BCu;
    // 0x4b25c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4B25BCu, 0x4B25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B25C4u;
label_4b25c4:
    // 0x4b25c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4b25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b25c8: 0xa6230046  sh          $v1, 0x46($s1)
    ctx->pc = 0x4b25c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b25cc: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x4b25ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4b25d0: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x4b25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x4b25d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4b25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b25d8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B25D8u;
    SET_GPR_U32(ctx, 31, 0x4B25E0u);
    ctx->pc = 0x4B25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25D8u;
    // 0x4b25dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B25D8u, 0x4B25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B25E0u;
label_4b25e0:
    // 0x4b25e0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b25e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b25e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b25e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B25E8u;
    {
        const bool branch_taken_0x4b25e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B25E8u;
        // 0x4b25ec: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25e8) {
            ctx->pc = 0x4B2600u;
            goto label_4b2600;
        }
    }
    ctx->pc = 0x4B25F0u;
    // 0x4b25f0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B25F0u;
    SET_GPR_U32(ctx, 31, 0x4B25F8u);
    ctx->pc = 0x4B25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25F0u;
    // 0x4b25f4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B25F0u, 0x4B25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B25F8u;
label_4b25f8:
    // 0x4b25f8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4b25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b25fc: 0x0  nop
    ctx->pc = 0x4b25fcu;
    // NOP
label_4b2600:
    // 0x4b2600: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B2600u;
    SET_GPR_U32(ctx, 31, 0x4B2608u);
    ctx->pc = 0x4B2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2600u;
    // 0x4b2604: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B2600u, 0x4B2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2608u;
label_4b2608:
    // 0x4b2608: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b260c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b2610: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B2610u;
    {
        const bool branch_taken_0x4b2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2610u;
        // 0x4b2614: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2610) {
            ctx->pc = 0x4B2670u;
            goto label_4b2670;
        }
    }
    ctx->pc = 0x4B2618u;
    // 0x4b2618: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B2618u;
    SET_GPR_U32(ctx, 31, 0x4B2620u);
    ctx->pc = 0x4B261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2618u;
    // 0x4b261c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B2618u, 0x4B2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2620u;
label_4b2620:
    // 0x4b2620: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b2620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b2624: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4b2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4b2628: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B2628u;
    {
        const bool branch_taken_0x4b2628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2628u;
        // 0x4b262c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2628) {
            ctx->pc = 0x4B2670u;
            goto label_4b2670;
        }
    }
    ctx->pc = 0x4B2630u;
    // 0x4b2630: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4b2630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b2634: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B2634u;
    SET_GPR_U32(ctx, 31, 0x4B263Cu);
    ctx->pc = 0x4B2638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2634u;
    // 0x4b2638: 0x2453c8c8  addiu       $s3, $v0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B2634u, 0x4B263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B263Cu;
label_4b263c:
    // 0x4b263c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b2640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b2644: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2644u;
    {
        const bool branch_taken_0x4b2644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2644) {
            ctx->pc = 0x4B2648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2644u;
            // 0x4b2648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2660u;
            goto label_4b2660;
        }
    }
    ctx->pc = 0x4B264Cu;
    // 0x4b264c: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B264Cu;
    SET_GPR_U32(ctx, 31, 0x4B2654u);
    ctx->pc = 0x4B2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B264Cu;
    // 0x4b2650: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B264Cu, 0x4B2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2654u;
label_4b2654:
    // 0x4b2654: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b2654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b2658: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b265c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4b265cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_4b2660:
    // 0x4b2660: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4b2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4b2664: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b2664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b2668: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4B2668u;
    {
        const bool branch_taken_0x4b2668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2668u;
        // 0x4b266c: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2668) {
            ctx->pc = 0x4B26ACu;
            goto label_4b26ac;
        }
    }
    ctx->pc = 0x4B2670u;
label_4b2670:
    // 0x4b2670: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4b2670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b2674: 0x2453c8c8  addiu       $s3, $v0, -0x3738
    ctx->pc = 0x4b2674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b2678: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B2678u;
    SET_GPR_U32(ctx, 31, 0x4B2680u);
    ctx->pc = 0x4B267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2678u;
    // 0x4b267c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B2678u, 0x4B2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2680u;
label_4b2680:
    // 0x4b2680: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b2680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b2684: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b2688: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2688u;
    {
        const bool branch_taken_0x4b2688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2688) {
            ctx->pc = 0x4B268Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2688u;
            // 0x4b268c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B26A0u;
            goto label_4b26a0;
        }
    }
    ctx->pc = 0x4B2690u;
    // 0x4b2690: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4B2690u;
    SET_GPR_U32(ctx, 31, 0x4B2698u);
    ctx->pc = 0x4B2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2690u;
    // 0x4b2694: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4B2690u, 0x4B2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2698u;
label_4b2698:
    // 0x4b2698: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4b2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b269c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b269cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4b26a0:
    // 0x4b26a0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4b26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4b26a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4b26a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b26a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4b26ac:
    // 0x4b26ac: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4b26b0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x4b26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4b26b4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4b26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x4b26b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4b26bc: 0x24423560  addiu       $v0, $v0, 0x3560
    ctx->pc = 0x4b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13664));
    // 0x4b26c0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4b26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x4b26c4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4b26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4b26c8: 0x24633690  addiu       $v1, $v1, 0x3690
    ctx->pc = 0x4b26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13968));
    // 0x4b26cc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x4b26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x4b26d0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x4b26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x4b26d4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4b26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4b26d8: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x4b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
    // 0x4b26dc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x4b26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x4b26e0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4b26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4b26e4: 0x246336b0  addiu       $v1, $v1, 0x36B0
    ctx->pc = 0x4b26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x4b26e8: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x4b26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x4b26ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b26f0: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x4b26f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b26f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b26f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b26f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b26f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b26fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b26fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2700: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b2700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2708: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2708u;
        // 0x4b270c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2710u;
}
