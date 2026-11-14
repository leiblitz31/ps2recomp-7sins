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

// Function: sub_00354608
// Address: 0x354608 - 0x3546d8
void sub_00354608_0x354608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354608_0x354608");
#endif

    switch (ctx->pc) {
        case 0x354608u: goto label_354608;
        case 0x35460cu: goto label_35460c;
        case 0x354610u: goto label_354610;
        case 0x354614u: goto label_354614;
        case 0x354618u: goto label_354618;
        case 0x35461cu: goto label_35461c;
        case 0x354620u: goto label_354620;
        case 0x354624u: goto label_354624;
        case 0x354628u: goto label_354628;
        case 0x35462cu: goto label_35462c;
        case 0x354630u: goto label_354630;
        case 0x354634u: goto label_354634;
        case 0x354638u: goto label_354638;
        case 0x35463cu: goto label_35463c;
        case 0x354640u: goto label_354640;
        case 0x354644u: goto label_354644;
        case 0x354648u: goto label_354648;
        case 0x35464cu: goto label_35464c;
        case 0x354650u: goto label_354650;
        case 0x354654u: goto label_354654;
        case 0x354658u: goto label_354658;
        case 0x35465cu: goto label_35465c;
        case 0x354660u: goto label_354660;
        case 0x354664u: goto label_354664;
        case 0x354668u: goto label_354668;
        case 0x35466cu: goto label_35466c;
        case 0x354670u: goto label_354670;
        case 0x354674u: goto label_354674;
        case 0x354678u: goto label_354678;
        case 0x35467cu: goto label_35467c;
        case 0x354680u: goto label_354680;
        case 0x354684u: goto label_354684;
        case 0x354688u: goto label_354688;
        case 0x35468cu: goto label_35468c;
        case 0x354690u: goto label_354690;
        case 0x354694u: goto label_354694;
        case 0x354698u: goto label_354698;
        case 0x35469cu: goto label_35469c;
        case 0x3546a0u: goto label_3546a0;
        case 0x3546a4u: goto label_3546a4;
        case 0x3546a8u: goto label_3546a8;
        case 0x3546acu: goto label_3546ac;
        case 0x3546b0u: goto label_3546b0;
        case 0x3546b4u: goto label_3546b4;
        case 0x3546b8u: goto label_3546b8;
        case 0x3546bcu: goto label_3546bc;
        case 0x3546c0u: goto label_3546c0;
        case 0x3546c4u: goto label_3546c4;
        case 0x3546c8u: goto label_3546c8;
        case 0x3546ccu: goto label_3546cc;
        case 0x3546d0u: goto label_3546d0;
        case 0x3546d4u: goto label_3546d4;
        default: break;
    }

    ctx->pc = 0x354608u;

label_354608:
    // 0x354608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35460c:
    // 0x35460c: 0x8f83a85c  lw          $v1, -0x57A4($gp)
    ctx->pc = 0x35460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
label_354610:
    // 0x354610: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x354610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_354614:
    // 0x354614: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x354614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_354618:
    // 0x354618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x354618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35461c:
    // 0x35461c: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x35461cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_354620:
    // 0x354620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_354624:
    // 0x354624: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x354624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_354628:
    // 0x354628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x354628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_35462c:
    // 0x35462c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x35462cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_354630:
    // 0x354630: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_354634:
    if (ctx->pc == 0x354634u) {
        ctx->pc = 0x354634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354630u;
        // 0x354634: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354638u;
        goto label_354638;
    }
    ctx->pc = 0x354630u;
    {
        const bool branch_taken_0x354630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354630u;
        // 0x354634: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354630) {
            ctx->pc = 0x3546BCu;
            goto label_3546bc;
        }
    }
    ctx->pc = 0x354638u;
label_354638:
    // 0x354638: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x354638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35463c:
    // 0x35463c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_354640:
    if (ctx->pc == 0x354640u) {
        ctx->pc = 0x354640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35463Cu;
        // 0x354640: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354644u;
        goto label_354644;
    }
    ctx->pc = 0x35463Cu;
    {
        const bool branch_taken_0x35463c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35463c) {
            ctx->pc = 0x354640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35463Cu;
            // 0x354640: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354650u;
            goto label_354650;
        }
    }
    ctx->pc = 0x354644u;
label_354644:
    // 0x354644: 0xc1116c6  jal         func_445B18
label_354648:
    if (ctx->pc == 0x354648u) {
        ctx->pc = 0x35464Cu;
        goto label_35464c;
    }
    ctx->pc = 0x354644u;
    SET_GPR_U32(ctx, 31, 0x35464Cu);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x354644u, 0x35464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35464Cu;
label_35464c:
    // 0x35464c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x35464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_354650:
    // 0x354650: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_354654:
    if (ctx->pc == 0x354654u) {
        ctx->pc = 0x354654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354650u;
        // 0x354654: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354658u;
        goto label_354658;
    }
    ctx->pc = 0x354650u;
    {
        const bool branch_taken_0x354650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354650) {
            ctx->pc = 0x354654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354650u;
            // 0x354654: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354664u;
            goto label_354664;
        }
    }
    ctx->pc = 0x354658u;
label_354658:
    // 0x354658: 0xc1116c6  jal         func_445B18
label_35465c:
    if (ctx->pc == 0x35465Cu) {
        ctx->pc = 0x354660u;
        goto label_354660;
    }
    ctx->pc = 0x354658u;
    SET_GPR_U32(ctx, 31, 0x354660u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x354658u, 0x354660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354660u;
label_354660:
    // 0x354660: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x354660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_354664:
    // 0x354664: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_354668:
    if (ctx->pc == 0x354668u) {
        ctx->pc = 0x354668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354664u;
        // 0x354668: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35466Cu;
        goto label_35466c;
    }
    ctx->pc = 0x354664u;
    {
        const bool branch_taken_0x354664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354664) {
            ctx->pc = 0x354668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354664u;
            // 0x354668: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354678u;
            goto label_354678;
        }
    }
    ctx->pc = 0x35466Cu;
label_35466c:
    // 0x35466c: 0xc1116c6  jal         func_445B18
label_354670:
    if (ctx->pc == 0x354670u) {
        ctx->pc = 0x354674u;
        goto label_354674;
    }
    ctx->pc = 0x35466Cu;
    SET_GPR_U32(ctx, 31, 0x354674u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x35466Cu, 0x354674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x354674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_354678:
    // 0x354678: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_35467c:
    if (ctx->pc == 0x35467Cu) {
        ctx->pc = 0x35467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354678u;
        // 0x35467c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354680u;
        goto label_354680;
    }
    ctx->pc = 0x354678u;
    {
        const bool branch_taken_0x354678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354678) {
            ctx->pc = 0x35467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354678u;
            // 0x35467c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35468Cu;
            goto label_35468c;
        }
    }
    ctx->pc = 0x354680u;
label_354680:
    // 0x354680: 0xc1116c6  jal         func_445B18
label_354684:
    if (ctx->pc == 0x354684u) {
        ctx->pc = 0x354688u;
        goto label_354688;
    }
    ctx->pc = 0x354680u;
    SET_GPR_U32(ctx, 31, 0x354688u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x354680u, 0x354688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354688u;
label_354688:
    // 0x354688: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x354688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_35468c:
    // 0x35468c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_354690:
    if (ctx->pc == 0x354690u) {
        ctx->pc = 0x354690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35468Cu;
        // 0x354690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354694u;
        goto label_354694;
    }
    ctx->pc = 0x35468Cu;
    {
        const bool branch_taken_0x35468c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35468c) {
            ctx->pc = 0x354690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35468Cu;
            // 0x354690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3546A0u;
            goto label_3546a0;
        }
    }
    ctx->pc = 0x354694u;
label_354694:
    // 0x354694: 0xc1116c6  jal         func_445B18
label_354698:
    if (ctx->pc == 0x354698u) {
        ctx->pc = 0x35469Cu;
        goto label_35469c;
    }
    ctx->pc = 0x354694u;
    SET_GPR_U32(ctx, 31, 0x35469Cu);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x354694u, 0x35469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35469Cu;
label_35469c:
    // 0x35469c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3546a0:
    // 0x3546a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3546a4:
    if (ctx->pc == 0x3546A4u) {
        ctx->pc = 0x3546A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546A0u;
        // 0x3546a4: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3546A8u;
        goto label_3546a8;
    }
    ctx->pc = 0x3546A0u;
    {
        const bool branch_taken_0x3546a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546a0) {
            ctx->pc = 0x3546A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3546A0u;
            // 0x3546a4: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3546B4u;
            goto label_3546b4;
        }
    }
    ctx->pc = 0x3546A8u;
label_3546a8:
    // 0x3546a8: 0xc1116c6  jal         func_445B18
label_3546ac:
    if (ctx->pc == 0x3546ACu) {
        ctx->pc = 0x3546B0u;
        goto label_3546b0;
    }
    ctx->pc = 0x3546A8u;
    SET_GPR_U32(ctx, 31, 0x3546B0u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x3546A8u, 0x3546B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546B0u;
label_3546b0:
    // 0x3546b0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3546b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3546b4:
    // 0x3546b4: 0x40f809  jalr        $v0
label_3546b8:
    if (ctx->pc == 0x3546B8u) {
        ctx->pc = 0x3546B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546B4u;
        // 0x3546b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3546BCu;
        goto label_3546bc;
    }
    ctx->pc = 0x3546B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3546BCu);
        ctx->pc = 0x3546B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546B4u;
        // 0x3546b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3546B4u, 0x3546BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3546BCu;
label_3546bc:
    // 0x3546bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3546bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3546c0:
    // 0x3546c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3546c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3546c4:
    // 0x3546c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3546c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3546c8:
    // 0x3546c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3546c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3546cc:
    // 0x3546cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3546ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3546d0:
    // 0x3546d0: 0x3e00008  jr          $ra
label_3546d4:
    if (ctx->pc == 0x3546D4u) {
        ctx->pc = 0x3546D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546D0u;
        // 0x3546d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3546D8u;
        goto label_fallthrough_0x3546d0;
    }
    ctx->pc = 0x3546D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3546D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546D0u;
        // 0x3546d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3546D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3546d0:
    ctx->pc = 0x3546D8u;
}
