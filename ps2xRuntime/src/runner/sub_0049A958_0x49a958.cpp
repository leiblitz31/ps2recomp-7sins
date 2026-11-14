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

// Function: sub_0049A958
// Address: 0x49a958 - 0x49aa60
void sub_0049A958_0x49a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A958_0x49a958");
#endif

    switch (ctx->pc) {
        case 0x49a958u: goto label_49a958;
        case 0x49a95cu: goto label_49a95c;
        case 0x49a960u: goto label_49a960;
        case 0x49a964u: goto label_49a964;
        case 0x49a968u: goto label_49a968;
        case 0x49a96cu: goto label_49a96c;
        case 0x49a970u: goto label_49a970;
        case 0x49a974u: goto label_49a974;
        case 0x49a978u: goto label_49a978;
        case 0x49a97cu: goto label_49a97c;
        case 0x49a980u: goto label_49a980;
        case 0x49a984u: goto label_49a984;
        case 0x49a988u: goto label_49a988;
        case 0x49a98cu: goto label_49a98c;
        case 0x49a990u: goto label_49a990;
        case 0x49a994u: goto label_49a994;
        case 0x49a998u: goto label_49a998;
        case 0x49a99cu: goto label_49a99c;
        case 0x49a9a0u: goto label_49a9a0;
        case 0x49a9a4u: goto label_49a9a4;
        case 0x49a9a8u: goto label_49a9a8;
        case 0x49a9acu: goto label_49a9ac;
        case 0x49a9b0u: goto label_49a9b0;
        case 0x49a9b4u: goto label_49a9b4;
        case 0x49a9b8u: goto label_49a9b8;
        case 0x49a9bcu: goto label_49a9bc;
        case 0x49a9c0u: goto label_49a9c0;
        case 0x49a9c4u: goto label_49a9c4;
        case 0x49a9c8u: goto label_49a9c8;
        case 0x49a9ccu: goto label_49a9cc;
        case 0x49a9d0u: goto label_49a9d0;
        case 0x49a9d4u: goto label_49a9d4;
        case 0x49a9d8u: goto label_49a9d8;
        case 0x49a9dcu: goto label_49a9dc;
        case 0x49a9e0u: goto label_49a9e0;
        case 0x49a9e4u: goto label_49a9e4;
        case 0x49a9e8u: goto label_49a9e8;
        case 0x49a9ecu: goto label_49a9ec;
        case 0x49a9f0u: goto label_49a9f0;
        case 0x49a9f4u: goto label_49a9f4;
        case 0x49a9f8u: goto label_49a9f8;
        case 0x49a9fcu: goto label_49a9fc;
        case 0x49aa00u: goto label_49aa00;
        case 0x49aa04u: goto label_49aa04;
        case 0x49aa08u: goto label_49aa08;
        case 0x49aa0cu: goto label_49aa0c;
        case 0x49aa10u: goto label_49aa10;
        case 0x49aa14u: goto label_49aa14;
        case 0x49aa18u: goto label_49aa18;
        case 0x49aa1cu: goto label_49aa1c;
        case 0x49aa20u: goto label_49aa20;
        case 0x49aa24u: goto label_49aa24;
        case 0x49aa28u: goto label_49aa28;
        case 0x49aa2cu: goto label_49aa2c;
        case 0x49aa30u: goto label_49aa30;
        case 0x49aa34u: goto label_49aa34;
        case 0x49aa38u: goto label_49aa38;
        case 0x49aa3cu: goto label_49aa3c;
        case 0x49aa40u: goto label_49aa40;
        case 0x49aa44u: goto label_49aa44;
        case 0x49aa48u: goto label_49aa48;
        case 0x49aa4cu: goto label_49aa4c;
        case 0x49aa50u: goto label_49aa50;
        case 0x49aa54u: goto label_49aa54;
        case 0x49aa58u: goto label_49aa58;
        case 0x49aa5cu: goto label_49aa5c;
        default: break;
    }

    ctx->pc = 0x49a958u;

label_49a958:
    // 0x49a958: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_49a95c:
    // 0x49a95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49a960:
    // 0x49a960: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x49a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_49a964:
    // 0x49a964: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49a964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a968:
    // 0x49a968: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x49a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_49a96c:
    // 0x49a96c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x49a96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49a970:
    // 0x49a970: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x49a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_49a974:
    // 0x49a974: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49a974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a978:
    // 0x49a978: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_49a97c:
    // 0x49a97c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x49a97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49a980:
    // 0x49a980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49a984:
    // 0x49a984: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x49a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_49a988:
    // 0x49a988: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x49a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_49a98c:
    // 0x49a98c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49a990:
    if (ctx->pc == 0x49A990u) {
        ctx->pc = 0x49A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A98Cu;
        // 0x49a990: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A994u;
        goto label_49a994;
    }
    ctx->pc = 0x49A98Cu;
    {
        const bool branch_taken_0x49a98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A98Cu;
        // 0x49a990: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a98c) {
            ctx->pc = 0x49A99Cu;
            goto label_49a99c;
        }
    }
    ctx->pc = 0x49A994u;
label_49a994:
    // 0x49a994: 0x10000009  b           . + 4 + (0x9 << 2)
label_49a998:
    if (ctx->pc == 0x49A998u) {
        ctx->pc = 0x49A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A994u;
        // 0x49a998: 0x8e10fffc  lw          $s0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A99Cu;
        goto label_49a99c;
    }
    ctx->pc = 0x49A994u;
    {
        const bool branch_taken_0x49a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A994u;
        // 0x49a998: 0x8e10fffc  lw          $s0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a994) {
            ctx->pc = 0x49A9BCu;
            goto label_49a9bc;
        }
    }
    ctx->pc = 0x49A99Cu;
label_49a99c:
    // 0x49a99c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x49a99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_49a9a0:
    // 0x49a9a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a9a4:
    if (ctx->pc == 0x49A9A4u) {
        ctx->pc = 0x49A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9A0u;
        // 0x49a9a4: 0x30a50007  andi        $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A9A8u;
        goto label_49a9a8;
    }
    ctx->pc = 0x49A9A0u;
    {
        const bool branch_taken_0x49a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9A0u;
        // 0x49a9a4: 0x30a50007  andi        $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9a0) {
            ctx->pc = 0x49A9BCu;
            goto label_49a9bc;
        }
    }
    ctx->pc = 0x49A9A8u;
label_49a9a8:
    // 0x49a9a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a9ac:
    // 0x49a9ac: 0xc127068  jal         func_49C1A0
label_49a9b0:
    if (ctx->pc == 0x49A9B0u) {
        ctx->pc = 0x49A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9ACu;
        // 0x49a9b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A9B4u;
        goto label_49a9b4;
    }
    ctx->pc = 0x49A9ACu;
    SET_GPR_U32(ctx, 31, 0x49A9B4u);
    ctx->pc = 0x49A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A9ACu;
    // 0x49a9b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C1A0u, 0x49A9ACu, 0x49A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A9B4u;
label_49a9b4:
    // 0x49a9b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x49a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_49a9b8:
    // 0x49a9b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x49a9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49a9bc:
    // 0x49a9bc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x49a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_49a9c0:
    // 0x49a9c0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_49a9c4:
    if (ctx->pc == 0x49A9C4u) {
        ctx->pc = 0x49A9C8u;
        goto label_49a9c8;
    }
    ctx->pc = 0x49A9C0u;
    {
        const bool branch_taken_0x49a9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a9c0) {
            ctx->pc = 0x49AA2Cu;
            goto label_49aa2c;
        }
    }
    ctx->pc = 0x49A9C8u;
label_49a9c8:
    // 0x49a9c8: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_49a9cc:
    if (ctx->pc == 0x49A9CCu) {
        ctx->pc = 0x49A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9C8u;
        // 0x49a9cc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A9D0u;
        goto label_49a9d0;
    }
    ctx->pc = 0x49A9C8u;
    {
        const bool branch_taken_0x49a9c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a9c8) {
            ctx->pc = 0x49A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A9C8u;
            // 0x49a9cc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A9E4u;
            goto label_49a9e4;
        }
    }
    ctx->pc = 0x49A9D0u;
label_49a9d0:
    // 0x49a9d0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_49a9d4:
    // 0x49a9d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x49a9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_49a9d8:
    // 0x49a9d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_49a9dc:
    if (ctx->pc == 0x49A9DCu) {
        ctx->pc = 0x49A9E0u;
        goto label_49a9e0;
    }
    ctx->pc = 0x49A9D8u;
    {
        const bool branch_taken_0x49a9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a9d8) {
            ctx->pc = 0x49AA2Cu;
            goto label_49aa2c;
        }
    }
    ctx->pc = 0x49A9E0u;
label_49a9e0:
    // 0x49a9e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x49a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49a9e4:
    // 0x49a9e4: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x49a9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_49a9e8:
    // 0x49a9e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a9ec:
    if (ctx->pc == 0x49A9ECu) {
        ctx->pc = 0x49A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9E8u;
        // 0x49a9ec: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A9F0u;
        goto label_49a9f0;
    }
    ctx->pc = 0x49A9E8u;
    {
        const bool branch_taken_0x49a9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9E8u;
        // 0x49a9ec: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9e8) {
            ctx->pc = 0x49AA04u;
            goto label_49aa04;
        }
    }
    ctx->pc = 0x49A9F0u;
label_49a9f0:
    // 0x49a9f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x49a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_49a9f4:
    // 0x49a9f4: 0xc12a9a0  jal         func_4AA680
label_49a9f8:
    if (ctx->pc == 0x49A9F8u) {
        ctx->pc = 0x49A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9F4u;
        // 0x49a9f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A9FCu;
        goto label_49a9fc;
    }
    ctx->pc = 0x49A9F4u;
    SET_GPR_U32(ctx, 31, 0x49A9FCu);
    ctx->pc = 0x49A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A9F4u;
    // 0x49a9f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49A9F4u, 0x49A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A9FCu;
label_49a9fc:
    // 0x49a9fc: 0x10000010  b           . + 4 + (0x10 << 2)
label_49aa00:
    if (ctx->pc == 0x49AA00u) {
        ctx->pc = 0x49AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9FCu;
        // 0x49aa00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA04u;
        goto label_49aa04;
    }
    ctx->pc = 0x49A9FCu;
    {
        const bool branch_taken_0x49a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9FCu;
        // 0x49aa00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9fc) {
            ctx->pc = 0x49AA40u;
            goto label_49aa40;
        }
    }
    ctx->pc = 0x49AA04u;
label_49aa04:
    // 0x49aa04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49aa08:
    if (ctx->pc == 0x49AA08u) {
        ctx->pc = 0x49AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA04u;
        // 0x49aa08: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA0Cu;
        goto label_49aa0c;
    }
    ctx->pc = 0x49AA04u;
    {
        const bool branch_taken_0x49aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA04u;
        // 0x49aa08: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa04) {
            ctx->pc = 0x49AA1Cu;
            goto label_49aa1c;
        }
    }
    ctx->pc = 0x49AA0Cu;
label_49aa0c:
    // 0x49aa0c: 0xc12ada4  jal         func_4AB690
label_49aa10:
    if (ctx->pc == 0x49AA10u) {
        ctx->pc = 0x49AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA0Cu;
        // 0x49aa10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA14u;
        goto label_49aa14;
    }
    ctx->pc = 0x49AA0Cu;
    SET_GPR_U32(ctx, 31, 0x49AA14u);
    ctx->pc = 0x49AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AA0Cu;
    // 0x49aa10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB690u, 0x49AA0Cu, 0x49AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AA14u;
label_49aa14:
    // 0x49aa14: 0x1000000a  b           . + 4 + (0xA << 2)
label_49aa18:
    if (ctx->pc == 0x49AA18u) {
        ctx->pc = 0x49AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA14u;
        // 0x49aa18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA1Cu;
        goto label_49aa1c;
    }
    ctx->pc = 0x49AA14u;
    {
        const bool branch_taken_0x49aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA14u;
        // 0x49aa18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa14) {
            ctx->pc = 0x49AA40u;
            goto label_49aa40;
        }
    }
    ctx->pc = 0x49AA1Cu;
label_49aa1c:
    // 0x49aa1c: 0xc127cae  jal         func_49F2B8
label_49aa20:
    if (ctx->pc == 0x49AA20u) {
        ctx->pc = 0x49AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA1Cu;
        // 0x49aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA24u;
        goto label_49aa24;
    }
    ctx->pc = 0x49AA1Cu;
    SET_GPR_U32(ctx, 31, 0x49AA24u);
    ctx->pc = 0x49AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AA1Cu;
    // 0x49aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49AA1Cu, 0x49AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AA24u;
label_49aa24:
    // 0x49aa24: 0x10000006  b           . + 4 + (0x6 << 2)
label_49aa28:
    if (ctx->pc == 0x49AA28u) {
        ctx->pc = 0x49AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA24u;
        // 0x49aa28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA2Cu;
        goto label_49aa2c;
    }
    ctx->pc = 0x49AA24u;
    {
        const bool branch_taken_0x49aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA24u;
        // 0x49aa28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa24) {
            ctx->pc = 0x49AA40u;
            goto label_49aa40;
        }
    }
    ctx->pc = 0x49AA2Cu;
label_49aa2c:
    // 0x49aa2c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_49aa30:
    if (ctx->pc == 0x49AA30u) {
        ctx->pc = 0x49AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA2Cu;
        // 0x49aa30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA34u;
        goto label_49aa34;
    }
    ctx->pc = 0x49AA2Cu;
    {
        const bool branch_taken_0x49aa2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA2Cu;
        // 0x49aa30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa2c) {
            ctx->pc = 0x49AA3Cu;
            goto label_49aa3c;
        }
    }
    ctx->pc = 0x49AA34u;
label_49aa34:
    // 0x49aa34: 0x240f809  jalr        $s2
label_49aa38:
    if (ctx->pc == 0x49AA38u) {
        ctx->pc = 0x49AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA34u;
        // 0x49aa38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA3Cu;
        goto label_49aa3c;
    }
    ctx->pc = 0x49AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x49AA3Cu);
        ctx->pc = 0x49AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA34u;
        // 0x49aa38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AA34u, 0x49AA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49AA3Cu;
label_49aa3c:
    // 0x49aa3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x49aa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49aa40:
    // 0x49aa40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x49aa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49aa44:
    // 0x49aa44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x49aa44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49aa48:
    // 0x49aa48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49aa48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49aa4c:
    // 0x49aa4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x49aa4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49aa50:
    // 0x49aa50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49aa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49aa54:
    // 0x49aa54: 0x3e00008  jr          $ra
label_49aa58:
    if (ctx->pc == 0x49AA58u) {
        ctx->pc = 0x49AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA54u;
        // 0x49aa58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49AA5Cu;
        goto label_49aa5c;
    }
    ctx->pc = 0x49AA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA54u;
        // 0x49aa58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AA5Cu;
label_49aa5c:
    // 0x49aa5c: 0x0  nop
    ctx->pc = 0x49aa5cu;
    // NOP
    ctx->pc = 0x49aa60u;
}
