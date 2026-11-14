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

// Function: sub_004035C8
// Address: 0x4035c8 - 0x4037a8
void sub_004035C8_0x4035c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004035C8_0x4035c8");
#endif

    switch (ctx->pc) {
        case 0x4035ecu: goto label_4035ec;
        case 0x4035f8u: goto label_4035f8;
        case 0x403620u: goto label_403620;
        case 0x403644u: goto label_403644;
        case 0x40366cu: goto label_40366c;
        case 0x403680u: goto label_403680;
        case 0x40369cu: goto label_40369c;
        case 0x4036c4u: goto label_4036c4;
        case 0x4036ecu: goto label_4036ec;
        case 0x40373cu: goto label_40373c;
        case 0x403768u: goto label_403768;
        default: break;
    }

    ctx->pc = 0x4035c8u;

    // 0x4035c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4035c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4035cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4035ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4035d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4035d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4035d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4035d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4035d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4035d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4035dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4035dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4035e0: 0xde040178  ld          $a0, 0x178($s0)
    ctx->pc = 0x4035e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x4035e4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4035E4u;
    SET_GPR_U32(ctx, 31, 0x4035ECu);
    ctx->pc = 0x4035E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035E4u;
    // 0x4035e8: 0x9205020f  lbu         $a1, 0x20F($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 527)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4035E4u, 0x4035ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035ECu;
label_4035ec:
    // 0x4035ec: 0x9205020c  lbu         $a1, 0x20C($s0)
    ctx->pc = 0x4035ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x4035f0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4035F0u;
    SET_GPR_U32(ctx, 31, 0x4035F8u);
    ctx->pc = 0x4035F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035F0u;
    // 0x4035f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4035F0u, 0x4035F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035F8u;
label_4035f8:
    // 0x4035f8: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x4035f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x4035fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4035fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403600: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x403600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x403604: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x403604u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x403608: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x403608u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x40360c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x40360cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x403610: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x403610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x403614: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x403614u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x403618: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x403618u;
    SET_GPR_U32(ctx, 31, 0x403620u);
    ctx->pc = 0x40361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403618u;
    // 0x40361c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x403618u, 0x403620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403620u;
label_403620:
    // 0x403620: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x403620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x403624: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x403624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x403628: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x403628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x40362c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x40362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x403630: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x403630u;
    {
        const bool branch_taken_0x403630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403630u;
        // 0x403634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403630) {
            ctx->pc = 0x403650u;
            goto label_403650;
        }
    }
    ctx->pc = 0x403638u;
    // 0x403638: 0xde050198  ld          $a1, 0x198($s0)
    ctx->pc = 0x403638u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x40363c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x40363Cu;
    SET_GPR_U32(ctx, 31, 0x403644u);
    ctx->pc = 0x403640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40363Cu;
    // 0x403640: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x40363Cu, 0x403644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403644u;
label_403644:
    // 0x403644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x403644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x403648: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x403648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x40364c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x40364cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_403650:
    // 0x403650: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x403650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x403654: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x403654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x403658: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x403658u;
    {
        const bool branch_taken_0x403658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403658) {
            ctx->pc = 0x40365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403658u;
            // 0x40365c: 0x92020207  lbu         $v0, 0x207($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4036FCu;
            goto label_4036fc;
        }
    }
    ctx->pc = 0x403660u;
    // 0x403660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x403660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403664: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x403664u;
    SET_GPR_U32(ctx, 31, 0x40366Cu);
    ctx->pc = 0x403668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403664u;
    // 0x403668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x403664u, 0x40366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40366Cu;
label_40366c:
    // 0x40366c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40366cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x403670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403674: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x403674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x403678: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x403678u;
    SET_GPR_U32(ctx, 31, 0x403680u);
    ctx->pc = 0x40367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403678u;
    // 0x40367c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x403678u, 0x403680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403680u;
label_403680:
    // 0x403680: 0x92030209  lbu         $v1, 0x209($s0)
    ctx->pc = 0x403680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x403684: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x403684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x403688: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x403688u;
    {
        const bool branch_taken_0x403688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403688u;
        // 0x40368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403688) {
            ctx->pc = 0x4036A8u;
            goto label_4036a8;
        }
    }
    ctx->pc = 0x403690u;
    // 0x403690: 0xde050198  ld          $a1, 0x198($s0)
    ctx->pc = 0x403690u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x403694: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x403694u;
    SET_GPR_U32(ctx, 31, 0x40369Cu);
    ctx->pc = 0x403698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403694u;
    // 0x403698: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x403694u, 0x40369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40369Cu;
label_40369c:
    // 0x40369c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4036a0: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x4036a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x4036a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4036a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4036a8:
    // 0x4036a8: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x4036a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x4036ac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4036acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x4036b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4036B0u;
    {
        const bool branch_taken_0x4036b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036B0u;
        // 0x4036b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4036b0) {
            ctx->pc = 0x4036D0u;
            goto label_4036d0;
        }
    }
    ctx->pc = 0x4036B8u;
    // 0x4036b8: 0xde050198  ld          $a1, 0x198($s0)
    ctx->pc = 0x4036b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4036bc: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4036BCu;
    SET_GPR_U32(ctx, 31, 0x4036C4u);
    ctx->pc = 0x4036C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4036BCu;
    // 0x4036c0: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4036BCu, 0x4036C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4036C4u;
label_4036c4:
    // 0x4036c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4036c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4036c8: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x4036c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x4036cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4036ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4036d0:
    // 0x4036d0: 0x92020209  lbu         $v0, 0x209($s0)
    ctx->pc = 0x4036d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x4036d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4036d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4036d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4036D8u;
    {
        const bool branch_taken_0x4036d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036D8u;
        // 0x4036dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4036d8) {
            ctx->pc = 0x4036F8u;
            goto label_4036f8;
        }
    }
    ctx->pc = 0x4036E0u;
    // 0x4036e0: 0xde050198  ld          $a1, 0x198($s0)
    ctx->pc = 0x4036e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4036e4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x4036E4u;
    SET_GPR_U32(ctx, 31, 0x4036ECu);
    ctx->pc = 0x4036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4036E4u;
    // 0x4036e8: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x4036E4u, 0x4036ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4036ECu;
label_4036ec:
    // 0x4036ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4036ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4036f0: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x4036f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
    // 0x4036f4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4036f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_4036f8:
    // 0x4036f8: 0x92020207  lbu         $v0, 0x207($s0)
    ctx->pc = 0x4036f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
label_4036fc:
    // 0x4036fc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4036FCu;
    {
        const bool branch_taken_0x4036fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4036fc) {
            ctx->pc = 0x403700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4036FCu;
            // 0x403700: 0xde020180  ld          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403770u;
            goto label_403770;
        }
    }
    ctx->pc = 0x403704u;
    // 0x403704: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x403704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x403708: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x403708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40370c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x40370Cu;
    {
        const bool branch_taken_0x40370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40370c) {
            ctx->pc = 0x403710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40370Cu;
            // 0x403710: 0xde020180  ld          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403770u;
            goto label_403770;
        }
    }
    ctx->pc = 0x403714u;
    // 0x403714: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x403714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x403718: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x403718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x40371c: 0x8c82e0f8  lw          $v0, -0x1F08($a0)
    ctx->pc = 0x40371cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FE0F8u));
    // 0x403720: 0x8c66e118  lw          $a2, -0x1EE8($v1)
    ctx->pc = 0x403720u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FE118u));
    // 0x403724: 0xde040180  ld          $a0, 0x180($s0)
    ctx->pc = 0x403724u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x403728: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x403728u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x40372c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x40372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403730: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x403730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x403734: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x403734u;
    SET_GPR_U32(ctx, 31, 0x40373Cu);
    ctx->pc = 0x403738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403734u;
    // 0x403738: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x403734u, 0x40373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40373Cu;
label_40373c:
    // 0x40373c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x40373cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x403740: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x403740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x403744: 0x8c86e0d8  lw          $a2, -0x1F28($a0)
    ctx->pc = 0x403744u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FE0D8u));
    // 0x403748: 0x8ca3e0b8  lw          $v1, -0x1F48($a1)
    ctx->pc = 0x403748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FE0B8u));
    // 0x40374c: 0xde040178  ld          $a0, 0x178($s0)
    ctx->pc = 0x40374cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x403750: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x403750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403754: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x403754u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x403758: 0xfe020188  sd          $v0, 0x188($s0)
    ctx->pc = 0x403758u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
    // 0x40375c: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x40375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x403760: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x403760u;
    SET_GPR_U32(ctx, 31, 0x403768u);
    ctx->pc = 0x403764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403760u;
    // 0x403764: 0x83202f  dsubu       $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x403760u, 0x403768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403768u;
label_403768:
    // 0x403768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x403768u;
    {
        const bool branch_taken_0x403768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403768u;
        // 0x40376c: 0xfe020190  sd          $v0, 0x190($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403768) {
            ctx->pc = 0x40377Cu;
            goto label_40377c;
        }
    }
    ctx->pc = 0x403770u;
label_403770:
    // 0x403770: 0xde030178  ld          $v1, 0x178($s0)
    ctx->pc = 0x403770u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x403774: 0xfe020188  sd          $v0, 0x188($s0)
    ctx->pc = 0x403774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
    // 0x403778: 0xfe030190  sd          $v1, 0x190($s0)
    ctx->pc = 0x403778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 400), GPR_U64(ctx, 3));
label_40377c:
    // 0x40377c: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x40377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x403780: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x403780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x403784: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x403784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x403788: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x403788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
    // 0x40378c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40378cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x403790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403794: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x403794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x403798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40379c: 0x3e00008  jr          $ra
    ctx->pc = 0x40379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40379Cu;
        // 0x4037a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4037A4u;
    // 0x4037a4: 0x0  nop
    ctx->pc = 0x4037a4u;
    // NOP
    ctx->pc = 0x4037a8u;
}
