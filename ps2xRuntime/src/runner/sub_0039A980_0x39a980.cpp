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

// Function: sub_0039A980
// Address: 0x39a980 - 0x39aa48
void sub_0039A980_0x39a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A980_0x39a980");
#endif

    switch (ctx->pc) {
        case 0x39a980u: goto label_39a980;
        case 0x39a984u: goto label_39a984;
        case 0x39a988u: goto label_39a988;
        case 0x39a98cu: goto label_39a98c;
        case 0x39a990u: goto label_39a990;
        case 0x39a994u: goto label_39a994;
        case 0x39a998u: goto label_39a998;
        case 0x39a99cu: goto label_39a99c;
        case 0x39a9a0u: goto label_39a9a0;
        case 0x39a9a4u: goto label_39a9a4;
        case 0x39a9a8u: goto label_39a9a8;
        case 0x39a9acu: goto label_39a9ac;
        case 0x39a9b0u: goto label_39a9b0;
        case 0x39a9b4u: goto label_39a9b4;
        case 0x39a9b8u: goto label_39a9b8;
        case 0x39a9bcu: goto label_39a9bc;
        case 0x39a9c0u: goto label_39a9c0;
        case 0x39a9c4u: goto label_39a9c4;
        case 0x39a9c8u: goto label_39a9c8;
        case 0x39a9ccu: goto label_39a9cc;
        case 0x39a9d0u: goto label_39a9d0;
        case 0x39a9d4u: goto label_39a9d4;
        case 0x39a9d8u: goto label_39a9d8;
        case 0x39a9dcu: goto label_39a9dc;
        case 0x39a9e0u: goto label_39a9e0;
        case 0x39a9e4u: goto label_39a9e4;
        case 0x39a9e8u: goto label_39a9e8;
        case 0x39a9ecu: goto label_39a9ec;
        case 0x39a9f0u: goto label_39a9f0;
        case 0x39a9f4u: goto label_39a9f4;
        case 0x39a9f8u: goto label_39a9f8;
        case 0x39a9fcu: goto label_39a9fc;
        case 0x39aa00u: goto label_39aa00;
        case 0x39aa04u: goto label_39aa04;
        case 0x39aa08u: goto label_39aa08;
        case 0x39aa0cu: goto label_39aa0c;
        case 0x39aa10u: goto label_39aa10;
        case 0x39aa14u: goto label_39aa14;
        case 0x39aa18u: goto label_39aa18;
        case 0x39aa1cu: goto label_39aa1c;
        case 0x39aa20u: goto label_39aa20;
        case 0x39aa24u: goto label_39aa24;
        case 0x39aa28u: goto label_39aa28;
        case 0x39aa2cu: goto label_39aa2c;
        case 0x39aa30u: goto label_39aa30;
        case 0x39aa34u: goto label_39aa34;
        case 0x39aa38u: goto label_39aa38;
        case 0x39aa3cu: goto label_39aa3c;
        case 0x39aa40u: goto label_39aa40;
        case 0x39aa44u: goto label_39aa44;
        default: break;
    }

    ctx->pc = 0x39a980u;

label_39a980:
    // 0x39a980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39a984:
    // 0x39a984: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39a984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_39a988:
    // 0x39a988: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39a98c:
    // 0x39a98c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39a990:
    // 0x39a990: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39a994:
    // 0x39a994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39a998:
    // 0x39a998: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x39a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_39a99c:
    // 0x39a99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a9a0:
    // 0x39a9a0: 0xc0e6386  jal         func_398E18
label_39a9a4:
    if (ctx->pc == 0x39A9A4u) {
        ctx->pc = 0x39A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9A0u;
        // 0x39a9a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9A8u;
        goto label_39a9a8;
    }
    ctx->pc = 0x39A9A0u;
    SET_GPR_U32(ctx, 31, 0x39A9A8u);
    ctx->pc = 0x39A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A9A0u;
    // 0x39a9a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E18u, 0x39A9A0u, 0x39A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A9A8u;
label_39a9a8:
    // 0x39a9a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_39a9ac:
    if (ctx->pc == 0x39A9ACu) {
        ctx->pc = 0x39A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9A8u;
        // 0x39a9ac: 0x26950038  addiu       $s5, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9B0u;
        goto label_39a9b0;
    }
    ctx->pc = 0x39A9A8u;
    {
        const bool branch_taken_0x39a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9A8u;
        // 0x39a9ac: 0x26950038  addiu       $s5, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9a8) {
            ctx->pc = 0x39AA20u;
            goto label_39aa20;
        }
    }
    ctx->pc = 0x39A9B0u;
label_39a9b0:
    // 0x39a9b0: 0x8e910038  lw          $s1, 0x38($s4)
    ctx->pc = 0x39a9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_39a9b4:
    // 0x39a9b4: 0x1235001b  beq         $s1, $s5, . + 4 + (0x1B << 2)
label_39a9b8:
    if (ctx->pc == 0x39A9B8u) {
        ctx->pc = 0x39A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9B4u;
        // 0x39a9b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9BCu;
        goto label_39a9bc;
    }
    ctx->pc = 0x39A9B4u;
    {
        const bool branch_taken_0x39a9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x39A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9B4u;
        // 0x39a9b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9b4) {
            ctx->pc = 0x39AA24u;
            goto label_39aa24;
        }
    }
    ctx->pc = 0x39A9BCu;
label_39a9bc:
    // 0x39a9bc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x39a9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39a9c0:
    // 0x39a9c0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x39a9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39a9c4:
    // 0x39a9c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39a9c8:
    // 0x39a9c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39a9cc:
    if (ctx->pc == 0x39A9CCu) {
        ctx->pc = 0x39A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9C8u;
        // 0x39a9cc: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9D0u;
        goto label_39a9d0;
    }
    ctx->pc = 0x39A9C8u;
    {
        const bool branch_taken_0x39a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9C8u;
        // 0x39a9cc: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9c8) {
            ctx->pc = 0x39AA14u;
            goto label_39aa14;
        }
    }
    ctx->pc = 0x39A9D0u;
label_39a9d0:
    // 0x39a9d0: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x39a9d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_39a9d4:
    // 0x39a9d4: 0x2653e880  addiu       $s3, $s2, -0x1780
    ctx->pc = 0x39a9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_39a9d8:
    // 0x39a9d8: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x39a9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_39a9dc:
    // 0x39a9dc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_39a9e0:
    if (ctx->pc == 0x39A9E0u) {
        ctx->pc = 0x39A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9DCu;
        // 0x39a9e0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9E4u;
        goto label_39a9e4;
    }
    ctx->pc = 0x39A9DCu;
    {
        const bool branch_taken_0x39a9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a9dc) {
            ctx->pc = 0x39A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A9DCu;
            // 0x39a9e0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AA18u;
            goto label_39aa18;
        }
    }
    ctx->pc = 0x39A9E4u;
label_39a9e4:
    // 0x39a9e4: 0xc0e2048  jal         func_388120
label_39a9e8:
    if (ctx->pc == 0x39A9E8u) {
        ctx->pc = 0x39A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9E4u;
        // 0x39a9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9ECu;
        goto label_39a9ec;
    }
    ctx->pc = 0x39A9E4u;
    SET_GPR_U32(ctx, 31, 0x39A9ECu);
    ctx->pc = 0x39A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A9E4u;
    // 0x39a9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39A9E4u, 0x39A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A9ECu;
label_39a9ec:
    // 0x39a9ec: 0x8e44e880  lw          $a0, -0x1780($s2)
    ctx->pc = 0x39a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961280)));
label_39a9f0:
    // 0x39a9f0: 0xc1060d2  jal         func_418348
label_39a9f4:
    if (ctx->pc == 0x39A9F4u) {
        ctx->pc = 0x39A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9F0u;
        // 0x39a9f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A9F8u;
        goto label_39a9f8;
    }
    ctx->pc = 0x39A9F0u;
    SET_GPR_U32(ctx, 31, 0x39A9F8u);
    ctx->pc = 0x39A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A9F0u;
    // 0x39a9f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x39A9F0u, 0x39A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A9F8u;
label_39a9f8:
    // 0x39a9f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_39a9fc:
    if (ctx->pc == 0x39A9FCu) {
        ctx->pc = 0x39A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9F8u;
        // 0x39a9fc: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA00u;
        goto label_39aa00;
    }
    ctx->pc = 0x39A9F8u;
    {
        const bool branch_taken_0x39a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a9f8) {
            ctx->pc = 0x39A9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A9F8u;
            // 0x39a9fc: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AA10u;
            goto label_39aa10;
        }
    }
    ctx->pc = 0x39AA00u;
label_39aa00:
    // 0x39aa00: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x39aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_39aa04:
    // 0x39aa04: 0x40f809  jalr        $v0
label_39aa08:
    if (ctx->pc == 0x39AA08u) {
        ctx->pc = 0x39AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA04u;
        // 0x39aa08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA0Cu;
        goto label_39aa0c;
    }
    ctx->pc = 0x39AA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AA0Cu);
        ctx->pc = 0x39AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA04u;
        // 0x39aa08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AA04u, 0x39AA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AA0Cu;
label_39aa0c:
    // 0x39aa0c: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x39aa0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_39aa10:
    // 0x39aa10: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x39aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_39aa14:
    // 0x39aa14: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x39aa14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39aa18:
    // 0x39aa18: 0x5635ffe9  bnel        $s1, $s5, . + 4 + (-0x17 << 2)
label_39aa1c:
    if (ctx->pc == 0x39AA1Cu) {
        ctx->pc = 0x39AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA18u;
        // 0x39aa1c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA20u;
        goto label_39aa20;
    }
    ctx->pc = 0x39AA18u;
    {
        const bool branch_taken_0x39aa18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x39aa18) {
            ctx->pc = 0x39AA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AA18u;
            // 0x39aa1c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a9c0;
        }
    }
    ctx->pc = 0x39AA20u;
label_39aa20:
    // 0x39aa20: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39aa20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39aa24:
    // 0x39aa24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39aa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39aa28:
    // 0x39aa28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39aa28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39aa2c:
    // 0x39aa2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39aa2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39aa30:
    // 0x39aa30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39aa30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39aa34:
    // 0x39aa34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39aa34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39aa38:
    // 0x39aa38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x39aa38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39aa3c:
    // 0x39aa3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39aa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39aa40:
    // 0x39aa40: 0x3e00008  jr          $ra
label_39aa44:
    if (ctx->pc == 0x39AA44u) {
        ctx->pc = 0x39AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA40u;
        // 0x39aa44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AA48u;
        goto label_fallthrough_0x39aa40;
    }
    ctx->pc = 0x39AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA40u;
        // 0x39aa44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39aa40:
    ctx->pc = 0x39AA48u;
}
