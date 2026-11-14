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

// Function: sub_004A35C0
// Address: 0x4a35c0 - 0x4a3828
void sub_004A35C0_0x4a35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A35C0_0x4a35c0");
#endif

    switch (ctx->pc) {
        case 0x4a3600u: goto label_4a3600;
        case 0x4a361cu: goto label_4a361c;
        case 0x4a364cu: goto label_4a364c;
        case 0x4a365cu: goto label_4a365c;
        case 0x4a3680u: goto label_4a3680;
        case 0x4a3750u: goto label_4a3750;
        default: break;
    }

    ctx->pc = 0x4a35c0u;

    // 0x4a35c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a35c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a35c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a35c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a35cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a35ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a35d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a35d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a35d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a35d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a35d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4a35dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a35dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a35e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4a35e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a35e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a35e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4a35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4a35ec: 0x2c420060  sltiu       $v0, $v0, 0x60
    ctx->pc = 0x4a35ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x4a35f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A35F0u;
    {
        const bool branch_taken_0x4a35f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A35F0u;
        // 0x4a35f4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a35f0) {
            ctx->pc = 0x4A3600u;
            goto label_4a3600;
        }
    }
    ctx->pc = 0x4A35F8u;
    // 0x4a35f8: 0xc129822  jal         func_4A6088
    ctx->pc = 0x4A35F8u;
    SET_GPR_U32(ctx, 31, 0x4A3600u);
    ctx->pc = 0x4A35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A35F8u;
    // 0x4a35fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A35F8u, 0x4A3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3600u;
label_4a3600:
    // 0x4a3600: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a3604: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4A3604u;
    {
        const bool branch_taken_0x4a3604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3604) {
            ctx->pc = 0x4A3608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3604u;
            // 0x4a3608: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3638u;
            goto label_4a3638;
        }
    }
    ctx->pc = 0x4A360Cu;
    // 0x4a360c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a360cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a3610: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4a3610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4a3614: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4A3614u;
    SET_GPR_U32(ctx, 31, 0x4A361Cu);
    ctx->pc = 0x4A3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3614u;
    // 0x4a3618: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A3614u, 0x4A361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A361Cu;
label_4a361c:
    // 0x4a361c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A361Cu;
    {
        const bool branch_taken_0x4a361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A361Cu;
        // 0x4a3620: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a361c) {
            ctx->pc = 0x4A362Cu;
            goto label_4a362c;
        }
    }
    ctx->pc = 0x4A3624u;
    // 0x4a3624: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x4A3624u;
    {
        const bool branch_taken_0x4a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3624u;
        // 0x4a3628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3624) {
            ctx->pc = 0x4A3804u;
            goto label_4a3804;
        }
    }
    ctx->pc = 0x4A362Cu;
label_4a362c:
    // 0x4a362c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x4a362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4a3630: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4a3630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4a3634: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x4a3634u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a3638:
    // 0x4a3638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a3638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a363c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x4a363cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4a3640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a3640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3644: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A3644u;
    SET_GPR_U32(ctx, 31, 0x4A364Cu);
    ctx->pc = 0x4A3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3644u;
    // 0x4a3648: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A3644u, 0x4A364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A364Cu;
label_4a364c:
    // 0x4a364c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a364cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a3650: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a3650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a3654: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A3654u;
    SET_GPR_U32(ctx, 31, 0x4A365Cu);
    ctx->pc = 0x4A3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3654u;
    // 0x4a3658: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A3654u, 0x4A365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A365Cu;
label_4a365c:
    // 0x4a365c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A365Cu;
    {
        const bool branch_taken_0x4a365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A365Cu;
        // 0x4a3660: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a365c) {
            ctx->pc = 0x4A3674u;
            goto label_4a3674;
        }
    }
    ctx->pc = 0x4A3664u;
    // 0x4a3664: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x4a3664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x4a3668: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x4a3668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4a366c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4A366Cu;
    {
        const bool branch_taken_0x4a366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A366Cu;
        // 0x4a3670: 0x28082  srl         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a366c) {
            ctx->pc = 0x4A36A8u;
            goto label_4a36a8;
        }
    }
    ctx->pc = 0x4A3674u;
label_4a3674:
    // 0x4a3674: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a3674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a3678: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A3678u;
    SET_GPR_U32(ctx, 31, 0x4A3680u);
    ctx->pc = 0x4A367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3678u;
    // 0x4a367c: 0x24a52610  addiu       $a1, $a1, 0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A3678u, 0x4A3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3680u;
label_4a3680:
    // 0x4a3680: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A3680u;
    {
        const bool branch_taken_0x4a3680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3680u;
        // 0x4a3684: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3680) {
            ctx->pc = 0x4A36ACu;
            goto label_4a36ac;
        }
    }
    ctx->pc = 0x4A3688u;
    // 0x4a3688: 0x9246000c  lbu         $a2, 0xC($s2)
    ctx->pc = 0x4a3688u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a368c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4a368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4a3690: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3690u;
    {
        const bool branch_taken_0x4a3690 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3690u;
        // 0x4a3694: 0x38c20008  xori        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3690) {
            ctx->pc = 0x4A36A0u;
            goto label_4a36a0;
        }
    }
    ctx->pc = 0x4A3698u;
    // 0x4a3698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A3698u;
    {
        const bool branch_taken_0x4a3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3698u;
        // 0x4a369c: 0x118042  srl         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3698) {
            ctx->pc = 0x4A36ACu;
            goto label_4a36ac;
        }
    }
    ctx->pc = 0x4A36A0u;
label_4a36a0:
    // 0x4a36a0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4a36a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a36a4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x4a36a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4a36a8:
    // 0x4a36a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x4a36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4a36ac:
    // 0x4a36ac: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x4a36acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x4a36b0: 0x205001b  divu        $zero, $s0, $a1
    ctx->pc = 0x4a36b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x4a36b4: 0x2062024  and         $a0, $s0, $a2
    ctx->pc = 0x4a36b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x4a36b8: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x4a36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x4a36bc: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x4a36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x4a36c0: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x4a36c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x4a36c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a36c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a36c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a36cc: 0x102600  sll         $a0, $s0, 24
    ctx->pc = 0x4a36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x4a36d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a36d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a36d4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A36D4u;
    {
        const bool branch_taken_0x4a36d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a36d4) {
            ctx->pc = 0x4A36D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A36D4u;
            // 0x4a36d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A36DCu;
            goto label_4a36dc;
        }
    }
    ctx->pc = 0x4A36DCu;
label_4a36dc:
    // 0x4a36dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a36dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a36e0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4a36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a36e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a36e8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a36e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a36ec: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4a36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4a36f0: 0x246b5df8  addiu       $t3, $v1, 0x5DF8
    ctx->pc = 0x4a36f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 24056));
    // 0x4a36f4: 0x3508fffe  ori         $t0, $t0, 0xFFFE
    ctx->pc = 0x4a36f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65534);
    // 0x4a36f8: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x4a36f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x4a36fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a36fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a3700: 0x266a001c  addiu       $t2, $s3, 0x1C
    ctx->pc = 0x4a3700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x4a3704: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4a3704u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3708: 0x3812  mflo        $a3
    ctx->pc = 0x4a3708u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x4a370c: 0x4810  mfhi        $t1
    ctx->pc = 0x4a370cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x4a3710: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4a3710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4a3714: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x4a3714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4a3718: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4a3718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a371c: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x4a371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a3720: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x4a3720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4a3724: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x4a3724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a3728: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a3728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a372c: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x4a372cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x4a3730: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x4a3730u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x4a3734: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a3734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a3738: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x4a3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x4a373c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a3740: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a3740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a3744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a3744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a3748: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x4a3748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x4a374c: 0x0  nop
    ctx->pc = 0x4a374cu;
    // NOP
label_4a3750:
    // 0x4a3750: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x4a3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a3754: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4a3754u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4a3758: 0x2d840008  sltiu       $a0, $t4, 0x8
    ctx->pc = 0x4a3758u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4a375c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a375cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a3760: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a3764: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a3764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a3768: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a376c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a376cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3770: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x4a3770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4a3774: 0x30a2ff00  andi        $v0, $a1, 0xFF00
    ctx->pc = 0x4a3774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x4a3778: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4a3778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4a377c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4a377cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4a3780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a3784: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4a3784u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3788: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x4a3788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x4a378c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4a378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a3790: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x4a3790u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x4a3794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a3794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a3798: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a379c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a379cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a37a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a37a4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a37a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a37a8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x4a37a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4a37ac: 0x30a2ff00  andi        $v0, $a1, 0xFF00
    ctx->pc = 0x4a37acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x4a37b0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4a37b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4a37b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4a37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4a37b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a37b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a37bc: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4a37bcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a37c0: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4A37C0u;
    {
        const bool branch_taken_0x4a37c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A37C0u;
        // 0x4a37c4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a37c0) {
            ctx->pc = 0x4A3750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3750;
        }
    }
    ctx->pc = 0x4A37C8u;
    // 0x4a37c8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4a37c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a37cc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x4a37ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4a37d0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4a37d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4a37d4: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x4a37d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x4a37d8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a37dc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4a37dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4a37e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a37e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a37e4: 0xa6630040  sh          $v1, 0x40($s3)
    ctx->pc = 0x4a37e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a37e8: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x4a37e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4a37ec: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4a37ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4a37f0: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x4a37f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x4a37f4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4a37f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4a37f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a37fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a37fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a3800: 0xa6630042  sh          $v1, 0x42($s3)
    ctx->pc = 0x4a3800u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 3));
label_4a3804:
    // 0x4a3804: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a3804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a3808: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a3808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a380c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a380cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a3810: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a3810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a3814: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a3814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a3818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a381c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A381Cu;
        // 0x4a3820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3824u;
    // 0x4a3824: 0x0  nop
    ctx->pc = 0x4a3824u;
    // NOP
    ctx->pc = 0x4a3828u;
}
