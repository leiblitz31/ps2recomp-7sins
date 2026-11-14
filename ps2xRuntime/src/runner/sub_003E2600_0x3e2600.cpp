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

// Function: sub_003E2600
// Address: 0x3e2600 - 0x3e2888
void sub_003E2600_0x3e2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2600_0x3e2600");
#endif

    switch (ctx->pc) {
        case 0x3e26e4u: goto label_3e26e4;
        case 0x3e2700u: goto label_3e2700;
        default: break;
    }

    ctx->pc = 0x3e2600u;

    // 0x3e2600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e2600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e2604: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e2604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e2608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e260c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2618: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3e2618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e261c: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3E261Cu;
    {
        const bool branch_taken_0x3e261c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E261Cu;
        // 0x3e2620: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e261c) {
            ctx->pc = 0x3E2708u;
            goto label_3e2708;
        }
    }
    ctx->pc = 0x3E2624u;
    // 0x3e2624: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E2624u;
    {
        const bool branch_taken_0x3e2624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2624u;
        // 0x3e2628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2624) {
            ctx->pc = 0x3E270Cu;
            goto label_3e270c;
        }
    }
    ctx->pc = 0x3E262Cu;
    // 0x3e262c: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E262Cu;
    {
        const bool branch_taken_0x3e262c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e262c) {
            ctx->pc = 0x3E2630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E262Cu;
            // 0x3e2630: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2710u;
            goto label_3e2710;
        }
    }
    ctx->pc = 0x3E2634u;
    // 0x3e2634: 0x50e00036  beql        $a3, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x3E2634u;
    {
        const bool branch_taken_0x3e2634 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2634) {
            ctx->pc = 0x3E2638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2634u;
            // 0x3e2638: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2710u;
            goto label_3e2710;
        }
    }
    ctx->pc = 0x3E263Cu;
    // 0x3e263c: 0x50c00034  beql        $a2, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3E263Cu;
    {
        const bool branch_taken_0x3e263c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e263c) {
            ctx->pc = 0x3E2640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E263Cu;
            // 0x3e2640: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2710u;
            goto label_3e2710;
        }
    }
    ctx->pc = 0x3E2644u;
    // 0x3e2644: 0x51200032  beql        $t1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x3E2644u;
    {
        const bool branch_taken_0x3e2644 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2644) {
            ctx->pc = 0x3E2648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2644u;
            // 0x3e2648: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2710u;
            goto label_3e2710;
        }
    }
    ctx->pc = 0x3E264Cu;
    // 0x3e264c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3e264cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e2650: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3e2650u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3e2654: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x3e2654u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3e2658: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3e2658u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3e265c: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x3e265cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3e2660: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3e2660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3e2664: 0x90a30029  lbu         $v1, 0x29($a1)
    ctx->pc = 0x3e2664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x3e2668: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2668u;
    {
        const bool branch_taken_0x3e2668 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2668u;
        // 0x3e266c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2668) {
            ctx->pc = 0x3E2678u;
            goto label_3e2678;
        }
    }
    ctx->pc = 0x3E2670u;
    // 0x3e2670: 0x90a2002a  lbu         $v0, 0x2A($a1)
    ctx->pc = 0x3e2670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x3e2674: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x3e2674u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_3e2678:
    // 0x3e2678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2678u;
    {
        const bool branch_taken_0x3e2678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2678) {
            ctx->pc = 0x3E2688u;
            goto label_3e2688;
        }
    }
    ctx->pc = 0x3E2680u;
    // 0x3e2680: 0x90a2002b  lbu         $v0, 0x2B($a1)
    ctx->pc = 0x3e2680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
    // 0x3e2684: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3e2684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3e2688:
    // 0x3e2688: 0x51400004  beql        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2688u;
    {
        const bool branch_taken_0x3e2688 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2688) {
            ctx->pc = 0x3E268Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2688u;
            // 0x3e268c: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E269Cu;
            goto label_3e269c;
        }
    }
    ctx->pc = 0x3E2690u;
    // 0x3e2690: 0x90a2002c  lbu         $v0, 0x2C($a1)
    ctx->pc = 0x3e2690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x3e2694: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3e2694u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x3e2698: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e2698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3e269c:
    // 0x3e269c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e26a0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E26A0u;
    {
        const bool branch_taken_0x3e26a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E26A0u;
        // 0x3e26a4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e26a0) {
            ctx->pc = 0x3E26B0u;
            goto label_3e26b0;
        }
    }
    ctx->pc = 0x3E26A8u;
    // 0x3e26a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E26A8u;
    {
        const bool branch_taken_0x3e26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E26A8u;
        // 0x3e26ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e26a8) {
            ctx->pc = 0x3E26B8u;
            goto label_3e26b8;
        }
    }
    ctx->pc = 0x3E26B0u;
label_3e26b0:
    // 0x3e26b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e26b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e26b4: 0x82400b  movn        $t0, $a0, $v0
    ctx->pc = 0x3e26b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_3e26b8:
    // 0x3e26b8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3e26b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3e26bc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3e26bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e26c0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3e26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e26c4: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x3e26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x3e26c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3e26c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3e26cc: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x3e26ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x3e26d0: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x3e26d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e26d4: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3e26d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3e26d8: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x3e26d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x3e26dc: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3E26DCu;
    SET_GPR_U32(ctx, 31, 0x3E26E4u);
    ctx->pc = 0x3E26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E26DCu;
    // 0x3e26e0: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3E26DCu, 0x3E26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E26E4u;
label_3e26e4:
    // 0x3e26e4: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x3e26e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e26e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e26e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e26ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E26ECu;
    {
        const bool branch_taken_0x3e26ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E26ECu;
        // 0x3e26f0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e26ec) {
            ctx->pc = 0x3E2700u;
            goto label_3e2700;
        }
    }
    ctx->pc = 0x3E26F4u;
    // 0x3e26f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e26f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e26f8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E26F8u;
    SET_GPR_U32(ctx, 31, 0x3E2700u);
    ctx->pc = 0x3E26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E26F8u;
    // 0x3e26fc: 0x24a5e2d8  addiu       $a1, $a1, -0x1D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E26F8u, 0x3E2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2700u;
label_3e2700:
    // 0x3e2700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2700u;
    {
        const bool branch_taken_0x3e2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2700u;
        // 0x3e2704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2700) {
            ctx->pc = 0x3E270Cu;
            goto label_3e270c;
        }
    }
    ctx->pc = 0x3E2708u;
label_3e2708:
    // 0x3e2708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e270c:
    // 0x3e270c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e270cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e2710:
    // 0x3e2710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e2710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2718: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2718u;
        // 0x3e271c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2720u;
    // 0x3e2720: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2720u;
    {
        const bool branch_taken_0x3e2720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2720) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2728u;
    // 0x3e2728: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E2728u;
    {
        const bool branch_taken_0x3e2728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2728) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2730u;
    // 0x3e2730: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2734: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e2734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e2738: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2738u;
    {
        const bool branch_taken_0x3e2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2738) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2740u;
    // 0x3e2740: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2740u;
    {
        const bool branch_taken_0x3e2740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2740) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2748u;
    // 0x3e2748: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2748u;
    {
        const bool branch_taken_0x3e2748 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2748) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2750u;
    // 0x3e2750: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2750u;
    {
        const bool branch_taken_0x3e2750 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2750u;
        // 0x3e2754: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2750) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2758u;
    // 0x3e2758: 0xdca30078  ld          $v1, 0x78($a1)
    ctx->pc = 0x3e2758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x3e275c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3e275cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3e2760: 0xdca40080  ld          $a0, 0x80($a1)
    ctx->pc = 0x3e2760u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3e2764: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3e2764u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3e2768: 0x90a30088  lbu         $v1, 0x88($a1)
    ctx->pc = 0x3e2768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x3e276c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E276Cu;
        // 0x3e2770: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E276Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2774u;
label_3e2774:
    // 0x3e2774: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2774u;
        // 0x3e2778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E277Cu;
    // 0x3e277c: 0x0  nop
    ctx->pc = 0x3e277cu;
    // NOP
    // 0x3e2780: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3e2780u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2784: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E2784u;
    {
        const bool branch_taken_0x3e2784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2784u;
        // 0x3e2788: 0x8fad0000  lw          $t5, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2784) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E278Cu;
    // 0x3e278c: 0x11800022  beqz        $t4, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E278Cu;
    {
        const bool branch_taken_0x3e278c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e278c) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E2794u;
    // 0x3e2794: 0xdd820010  ld          $v0, 0x10($t4)
    ctx->pc = 0x3e2794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x3e2798: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3e2798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3e279c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E279Cu;
    {
        const bool branch_taken_0x3e279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e279c) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27A4u;
    // 0x3e27a4: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E27A4u;
    {
        const bool branch_taken_0x3e27a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27a4) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27ACu;
    // 0x3e27ac: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E27ACu;
    {
        const bool branch_taken_0x3e27ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27ac) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27B4u;
    // 0x3e27b4: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E27B4u;
    {
        const bool branch_taken_0x3e27b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27b4) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27BCu;
    // 0x3e27bc: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E27BCu;
    {
        const bool branch_taken_0x3e27bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27bc) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27C4u;
    // 0x3e27c4: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E27C4u;
    {
        const bool branch_taken_0x3e27c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27c4) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27CCu;
    // 0x3e27cc: 0x11600012  beqz        $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E27CCu;
    {
        const bool branch_taken_0x3e27cc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27cc) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27D4u;
    // 0x3e27d4: 0x11a00010  beqz        $t5, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E27D4u;
    {
        const bool branch_taken_0x3e27d4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27D4u;
        // 0x3e27d8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27d4) {
            ctx->pc = 0x3E2818u;
            goto label_3e2818;
        }
    }
    ctx->pc = 0x3E27DCu;
    // 0x3e27dc: 0xdd8400d0  ld          $a0, 0xD0($t4)
    ctx->pc = 0x3e27dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 208)));
    // 0x3e27e0: 0x8d8300c8  lw          $v1, 0xC8($t4)
    ctx->pc = 0x3e27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 200)));
    // 0x3e27e4: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3e27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3e27e8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3e27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3e27ec: 0xdd8400d8  ld          $a0, 0xD8($t4)
    ctx->pc = 0x3e27ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 216)));
    // 0x3e27f0: 0x8d8600e4  lw          $a2, 0xE4($t4)
    ctx->pc = 0x3e27f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 228)));
    // 0x3e27f4: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x3e27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x3e27f8: 0x8d8500e0  lw          $a1, 0xE0($t4)
    ctx->pc = 0x3e27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 224)));
    // 0x3e27fc: 0x918300e8  lbu         $v1, 0xE8($t4)
    ctx->pc = 0x3e27fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 232)));
    // 0x3e2800: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3e2800u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x3e2804: 0x918400e9  lbu         $a0, 0xE9($t4)
    ctx->pc = 0x3e2804u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 233)));
    // 0x3e2808: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x3e2808u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x3e280c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x3e280cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x3e2810: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2810u;
        // 0x3e2814: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2818u;
label_3e2818:
    // 0x3e2818: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2818u;
        // 0x3e281c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2820u;
    // 0x3e2820: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E2820u;
    {
        const bool branch_taken_0x3e2820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2820u;
        // 0x3e2824: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2820) {
            ctx->pc = 0x3E287Cu;
            goto label_3e287c;
        }
    }
    ctx->pc = 0x3E2828u;
    // 0x3e2828: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2828u;
    {
        const bool branch_taken_0x3e2828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2828) {
            ctx->pc = 0x3E287Cu;
            goto label_3e287c;
        }
    }
    ctx->pc = 0x3E2830u;
    // 0x3e2830: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2834: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e2838: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E2838u;
    {
        const bool branch_taken_0x3e2838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2838u;
        // 0x3e283c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2838) {
            ctx->pc = 0x3E287Cu;
            goto label_3e287c;
        }
    }
    ctx->pc = 0x3E2840u;
    // 0x3e2840: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2840u;
    {
        const bool branch_taken_0x3e2840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2840) {
            ctx->pc = 0x3E2854u;
            goto label_3e2854;
        }
    }
    ctx->pc = 0x3E2848u;
    // 0x3e2848: 0xdca20090  ld          $v0, 0x90($a1)
    ctx->pc = 0x3e2848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3e284c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3e284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e2850: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3e2850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3e2854:
    // 0x3e2854: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2854u;
    {
        const bool branch_taken_0x3e2854 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2854) {
            ctx->pc = 0x3E2868u;
            goto label_3e2868;
        }
    }
    ctx->pc = 0x3E285Cu;
    // 0x3e285c: 0xdca20098  ld          $v0, 0x98($a1)
    ctx->pc = 0x3e285cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x3e2860: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e2860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3e2864: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3e2864u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_3e2868:
    // 0x3e2868: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2868u;
    {
        const bool branch_taken_0x3e2868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2868) {
            ctx->pc = 0x3E287Cu;
            goto label_3e287c;
        }
    }
    ctx->pc = 0x3E2870u;
    // 0x3e2870: 0x90a200a0  lbu         $v0, 0xA0($a1)
    ctx->pc = 0x3e2870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3e2874: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e2874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3e2878: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3e2878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3e287c:
    // 0x3e287c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E287Cu;
        // 0x3e2880: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E287Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2884u;
    // 0x3e2884: 0x0  nop
    ctx->pc = 0x3e2884u;
    // NOP
    ctx->pc = 0x3e2888u;
}
