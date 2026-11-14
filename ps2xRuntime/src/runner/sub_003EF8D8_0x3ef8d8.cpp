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

// Function: sub_003EF8D8
// Address: 0x3ef8d8 - 0x3f05a8
void sub_003EF8D8_0x3ef8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF8D8_0x3ef8d8");
#endif

    switch (ctx->pc) {
        case 0x3efa70u: goto label_3efa70;
        case 0x3efc80u: goto label_3efc80;
        case 0x3efea8u: goto label_3efea8;
        case 0x3f0070u: goto label_3f0070;
        case 0x3f01b8u: goto label_3f01b8;
        case 0x3f0368u: goto label_3f0368;
        case 0x3f0488u: goto label_3f0488;
        case 0x3f058cu: goto label_3f058c;
        default: break;
    }

    ctx->pc = 0x3ef8d8u;

    // 0x3ef8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef8dc: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3ef8dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef8e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ef8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ef8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef8e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef8ec: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3ef8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ef8f0: 0x14600263  bnez        $v1, . + 4 + (0x263 << 2)
    ctx->pc = 0x3EF8F0u;
    {
        const bool branch_taken_0x3ef8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8F0u;
        // 0x3ef8f4: 0xde0b0000  ld          $t3, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8f0) {
            ctx->pc = 0x3F0280u;
            goto label_3f0280;
        }
    }
    ctx->pc = 0x3EF8F8u;
    // 0x3ef8f8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF8F8u;
    {
        const bool branch_taken_0x3ef8f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8F8u;
        // 0x3ef8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8f8) {
            ctx->pc = 0x3EF904u;
            goto label_3ef904;
        }
    }
    ctx->pc = 0x3EF900u;
    // 0x3ef900: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x3ef900u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_3ef904:
    // 0x3ef904: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3ef904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ef908: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3ef908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3ef90c: 0x1040019a  beqz        $v0, . + 4 + (0x19A << 2)
    ctx->pc = 0x3EF90Cu;
    {
        const bool branch_taken_0x3ef90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF90Cu;
        // 0x3ef910: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef90c) {
            ctx->pc = 0x3EFF78u;
            goto label_3eff78;
        }
    }
    ctx->pc = 0x3EF914u;
    // 0x3ef914: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3ef914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ef918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ef918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ef91c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x3EF91Cu;
    {
        const bool branch_taken_0x3ef91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF91Cu;
        // 0x3ef920: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef91c) {
            ctx->pc = 0x3EFB28u;
            goto label_3efb28;
        }
    }
    ctx->pc = 0x3EF924u;
    // 0x3ef924: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF924u;
    {
        const bool branch_taken_0x3ef924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF924u;
        // 0x3ef928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef924) {
            ctx->pc = 0x3EF93Cu;
            goto label_3ef93c;
        }
    }
    ctx->pc = 0x3EF92Cu;
    // 0x3ef92c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF92Cu;
    {
        const bool branch_taken_0x3ef92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF92Cu;
        // 0x3ef930: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef92c) {
            ctx->pc = 0x3EF950u;
            goto label_3ef950;
        }
    }
    ctx->pc = 0x3EF934u;
    // 0x3ef934: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x3EF934u;
    {
        const bool branch_taken_0x3ef934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF934u;
        // 0x3ef938: 0xfe0b0008  sd          $t3, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef934) {
            ctx->pc = 0x3EFF70u;
            goto label_3eff70;
        }
    }
    ctx->pc = 0x3EF93Cu;
label_3ef93c:
    // 0x3ef93c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ef93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef940: 0x10620111  beq         $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x3EF940u;
    {
        const bool branch_taken_0x3ef940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF940u;
        // 0x3ef944: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef940) {
            ctx->pc = 0x3EFD88u;
            goto label_3efd88;
        }
    }
    ctx->pc = 0x3EF948u;
    // 0x3ef948: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x3EF948u;
    {
        const bool branch_taken_0x3ef948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF948u;
        // 0x3ef94c: 0xfe0b0008  sd          $t3, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef948) {
            ctx->pc = 0x3EFF70u;
            goto label_3eff70;
        }
    }
    ctx->pc = 0x3EF950u;
label_3ef950:
    // 0x3ef950: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3ef950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3ef954: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef958: 0x65630007  daddiu      $v1, $t3, 0x7
    ctx->pc = 0x3ef958u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)7);
    // 0x3ef95c: 0x1e24021  addu        $t0, $t7, $v0
    ctx->pc = 0x3ef95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3ef960: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3ef960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3ef964: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x3ef964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x3ef968: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ef968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ef96c: 0x6564ffff  daddiu      $a0, $t3, -0x1
    ctx->pc = 0x3ef96cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
    // 0x3ef970: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ef970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3ef974: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ef974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ef978: 0xac2823  subu        $a1, $a1, $t4
    ctx->pc = 0x3ef978u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3ef97c: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x3ef97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x3ef980: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3ef980u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3ef984: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x3ef984u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef988: 0x30acffff  andi        $t4, $a1, 0xFFFF
    ctx->pc = 0x3ef988u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3ef98c: 0x1e44821  addu        $t1, $t7, $a0
    ctx->pc = 0x3ef98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3ef990: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3ef990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3ef994: 0x11600174  beqz        $t3, . + 4 + (0x174 << 2)
    ctx->pc = 0x3EF994u;
    {
        const bool branch_taken_0x3ef994 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF994u;
        // 0x3ef998: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef994) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EF99Cu;
    // 0x3ef99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef9a0: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x3ef9a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ef9a4: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x3ef9a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ef9a8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3ef9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef9ac: 0x19600020  blez        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x3EF9ACu;
    {
        const bool branch_taken_0x3ef9ac = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3EF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9ACu;
        // 0x3ef9b0: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef9ac) {
            ctx->pc = 0x3EFA30u;
            goto label_3efa30;
        }
    }
    ctx->pc = 0x3EF9B4u;
    // 0x3ef9b4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3EF9B4u;
    {
        const bool branch_taken_0x3ef9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9B4u;
        // 0x3ef9b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef9b4) {
            ctx->pc = 0x3EFA68u;
            goto label_3efa68;
        }
    }
    ctx->pc = 0x3EF9BCu;
    // 0x3ef9bc: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EF9BCu;
    {
        const bool branch_taken_0x3ef9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9bc) {
            ctx->pc = 0x3EF9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF9BCu;
            // 0x3ef9c0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFA34u;
            goto label_3efa34;
        }
    }
    ctx->pc = 0x3EF9C4u;
    // 0x3ef9c4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ef9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ef9c8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3EF9C8u;
    {
        const bool branch_taken_0x3ef9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9c8) {
            ctx->pc = 0x3EF9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF9C8u;
            // 0x3ef9cc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFA04u;
            goto label_3efa04;
        }
    }
    ctx->pc = 0x3EF9D0u;
    // 0x3ef9d0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef9d4: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3ef9d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ef9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef9dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF9DCu;
    {
        const bool branch_taken_0x3ef9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9dc) {
            ctx->pc = 0x3EF9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF9DCu;
            // 0x3ef9e0: 0xa100ffff  sb          $zero, -0x1($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF9E8u;
            goto label_3ef9e8;
        }
    }
    ctx->pc = 0x3EF9E4u;
    // 0x3ef9e4: 0xa10effff  sb          $t6, -0x1($t0)
    ctx->pc = 0x3ef9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967295), (uint8_t)GPR_U32(ctx, 14));
label_3ef9e8:
    // 0x3ef9e8: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF9E8u;
    {
        const bool branch_taken_0x3ef9e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9E8u;
        // 0x3ef9ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef9e8) {
            ctx->pc = 0x3EF9F8u;
            goto label_3ef9f8;
        }
    }
    ctx->pc = 0x3EF9F0u;
    // 0x3ef9f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ef9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef9f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ef9f8:
    // 0x3ef9f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ef9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ef9fc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3ef9fcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efa00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efa00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3efa04:
    // 0x3efa04: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efa04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efa08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efa0c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFA0Cu;
    {
        const bool branch_taken_0x3efa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa0c) {
            ctx->pc = 0x3EFA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFA0Cu;
            // 0x3efa10: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFA18u;
            goto label_3efa18;
        }
    }
    ctx->pc = 0x3EFA14u;
    // 0x3efa14: 0xa0ae0000  sb          $t6, 0x0($a1)
    ctx->pc = 0x3efa14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 14));
label_3efa18:
    // 0x3efa18: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFA18u;
    {
        const bool branch_taken_0x3efa18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA18u;
        // 0x3efa1c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa18) {
            ctx->pc = 0x3EFA28u;
            goto label_3efa28;
        }
    }
    ctx->pc = 0x3EFA20u;
    // 0x3efa20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efa20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efa24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efa28:
    // 0x3efa28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3efa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3efa2c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efa2cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3efa30:
    // 0x3efa30: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3efa34:
    // 0x3efa34: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efa34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efa38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efa3c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFA3Cu;
    {
        const bool branch_taken_0x3efa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa3c) {
            ctx->pc = 0x3EFA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFA3Cu;
            // 0x3efa40: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFA48u;
            goto label_3efa48;
        }
    }
    ctx->pc = 0x3EFA44u;
    // 0x3efa44: 0xa0ae0000  sb          $t6, 0x0($a1)
    ctx->pc = 0x3efa44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 14));
label_3efa48:
    // 0x3efa48: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFA48u;
    {
        const bool branch_taken_0x3efa48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA48u;
        // 0x3efa4c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa48) {
            ctx->pc = 0x3EFA58u;
            goto label_3efa58;
        }
    }
    ctx->pc = 0x3EFA50u;
    // 0x3efa50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efa50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efa54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efa58:
    // 0x3efa58: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efa58u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efa5c: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3efa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3efa60: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x3EFA60u;
    {
        const bool branch_taken_0x3efa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA60u;
        // 0x3efa64: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa60) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EFA68u;
label_3efa68:
    // 0x3efa68: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3efa68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efa6c: 0x0  nop
    ctx->pc = 0x3efa6cu;
    // NOP
label_3efa70:
    // 0x3efa70: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efa70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3efa74: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efa74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efa78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efa7c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFA7Cu;
    {
        const bool branch_taken_0x3efa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa7c) {
            ctx->pc = 0x3EFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFA7Cu;
            // 0x3efa80: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFA88u;
            goto label_3efa88;
        }
    }
    ctx->pc = 0x3EFA84u;
    // 0x3efa84: 0xa06e0000  sb          $t6, 0x0($v1)
    ctx->pc = 0x3efa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 14));
label_3efa88:
    // 0x3efa88: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFA88u;
    {
        const bool branch_taken_0x3efa88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA88u;
        // 0x3efa8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa88) {
            ctx->pc = 0x3EFA98u;
            goto label_3efa98;
        }
    }
    ctx->pc = 0x3EFA90u;
    // 0x3efa90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efa90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efa94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efa98:
    // 0x3efa98: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3efa9c: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efa9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efaa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efaa4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFAA4u;
    {
        const bool branch_taken_0x3efaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efaa4) {
            ctx->pc = 0x3EFAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFAA4u;
            // 0x3efaa8: 0xa060ffff  sb          $zero, -0x1($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFAB0u;
            goto label_3efab0;
        }
    }
    ctx->pc = 0x3EFAACu;
    // 0x3efaac: 0xa06effff  sb          $t6, -0x1($v1)
    ctx->pc = 0x3efaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 14));
label_3efab0:
    // 0x3efab0: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFAB0u;
    {
        const bool branch_taken_0x3efab0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAB0u;
        // 0x3efab4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efab0) {
            ctx->pc = 0x3EFAC0u;
            goto label_3efac0;
        }
    }
    ctx->pc = 0x3EFAB8u;
    // 0x3efab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efabc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efac0:
    // 0x3efac0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3efac4: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efac8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efacc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFACCu;
    {
        const bool branch_taken_0x3efacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efacc) {
            ctx->pc = 0x3EFAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFACCu;
            // 0x3efad0: 0xa060fffe  sb          $zero, -0x2($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294967294), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFAD8u;
            goto label_3efad8;
        }
    }
    ctx->pc = 0x3EFAD4u;
    // 0x3efad4: 0xa06efffe  sb          $t6, -0x2($v1)
    ctx->pc = 0x3efad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967294), (uint8_t)GPR_U32(ctx, 14));
label_3efad8:
    // 0x3efad8: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFAD8u;
    {
        const bool branch_taken_0x3efad8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAD8u;
        // 0x3efadc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efad8) {
            ctx->pc = 0x3EFAE8u;
            goto label_3efae8;
        }
    }
    ctx->pc = 0x3EFAE0u;
    // 0x3efae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efae4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efae8:
    // 0x3efae8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3efae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3efaec: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efaecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efaf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efaf4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFAF4u;
    {
        const bool branch_taken_0x3efaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efaf4) {
            ctx->pc = 0x3EFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFAF4u;
            // 0x3efaf8: 0xa060fffd  sb          $zero, -0x3($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294967293), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFB00u;
            goto label_3efb00;
        }
    }
    ctx->pc = 0x3EFAFCu;
    // 0x3efafc: 0xa06efffd  sb          $t6, -0x3($v1)
    ctx->pc = 0x3efafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967293), (uint8_t)GPR_U32(ctx, 14));
label_3efb00:
    // 0x3efb00: 0x14ed0003  bne         $a3, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFB00u;
    {
        const bool branch_taken_0x3efb00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB00u;
        // 0x3efb04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb00) {
            ctx->pc = 0x3EFB10u;
            goto label_3efb10;
        }
    }
    ctx->pc = 0x3EFB08u;
    // 0x3efb08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efb0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3efb10:
    // 0x3efb10: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3efb10u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3efb14: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3efb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3efb18: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3EFB18u;
    {
        const bool branch_taken_0x3efb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB18u;
        // 0x3efb1c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb18) {
            ctx->pc = 0x3EFA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3efa70;
        }
    }
    ctx->pc = 0x3EFB20u;
    // 0x3efb20: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x3EFB20u;
    {
        const bool branch_taken_0x3efb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB20u;
        // 0x3efb24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb20) {
            ctx->pc = 0x3EFF6Cu;
            goto label_3eff6c;
        }
    }
    ctx->pc = 0x3EFB28u;
label_3efb28:
    // 0x3efb28: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x3efb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3efb2c: 0x65620003  daddiu      $v0, $t3, 0x3
    ctx->pc = 0x3efb2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)3);
    // 0x3efb30: 0x1852818  mult        $a1, $t4, $a1
    ctx->pc = 0x3efb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3efb34: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3efb34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3efb38: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efb3c: 0x6563ffff  daddiu      $v1, $t3, -0x1
    ctx->pc = 0x3efb3cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
    // 0x3efb40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3efb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3efb44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3efb44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3efb48: 0xb203c  dsll32      $a0, $t3, 0
    ctx->pc = 0x3efb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3efb4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3efb4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3efb50: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x3efb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x3efb54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3efb54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3efb58: 0x1e47021  addu        $t6, $t7, $a0
    ctx->pc = 0x3efb58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x3efb5c: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x3efb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3efb60: 0x30acffff  andi        $t4, $a1, 0xFFFF
    ctx->pc = 0x3efb60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3efb64: 0x1e34821  addu        $t1, $t7, $v1
    ctx->pc = 0x3efb64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x3efb68: 0x25c2ffff  addiu       $v0, $t6, -0x1
    ctx->pc = 0x3efb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3efb6c: 0x116000fe  beqz        $t3, . + 4 + (0xFE << 2)
    ctx->pc = 0x3EFB6Cu;
    {
        const bool branch_taken_0x3efb6c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB6Cu;
        // 0x3efb70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb6c) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EFB74u;
    // 0x3efb74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3efb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efb78: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x3efb78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3efb7c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3efb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efb80: 0x1960002b  blez        $t3, . + 4 + (0x2B << 2)
    ctx->pc = 0x3EFB80u;
    {
        const bool branch_taken_0x3efb80 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3EFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB80u;
        // 0x3efb84: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb80) {
            ctx->pc = 0x3EFC30u;
            goto label_3efc30;
        }
    }
    ctx->pc = 0x3EFB88u;
    // 0x3efb88: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x3EFB88u;
    {
        const bool branch_taken_0x3efb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efb88) {
            ctx->pc = 0x3EFB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFB88u;
            // 0x3efb8c: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFC84u;
            goto label_3efc84;
        }
    }
    ctx->pc = 0x3EFB90u;
    // 0x3efb90: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3efb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3efb94: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x3EFB94u;
    {
        const bool branch_taken_0x3efb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3efb94) {
            ctx->pc = 0x3EFB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFB94u;
            // 0x3efb98: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFC34u;
            goto label_3efc34;
        }
    }
    ctx->pc = 0x3EFB9Cu;
    // 0x3efb9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3efb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3efba0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EFBA0u;
    {
        const bool branch_taken_0x3efba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3efba0) {
            ctx->pc = 0x3EFBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFBA0u;
            // 0x3efba4: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFBF0u;
            goto label_3efbf0;
        }
    }
    ctx->pc = 0x3EFBA8u;
    // 0x3efba8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3efba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3efbac: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efbacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efbb0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efbb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efbb8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efbbc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efbc0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efbc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efbc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efbcc: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFBCCu;
    {
        const bool branch_taken_0x3efbcc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBCCu;
        // 0x3efbd0: 0xa1c3ffff  sb          $v1, -0x1($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 4294967295), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efbcc) {
            ctx->pc = 0x3EFBE0u;
            goto label_3efbe0;
        }
    }
    ctx->pc = 0x3EFBD4u;
    // 0x3efbd4: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x3efbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3efbd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFBD8u;
    {
        const bool branch_taken_0x3efbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBD8u;
        // 0x3efbdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efbd8) {
            ctx->pc = 0x3EFBE4u;
            goto label_3efbe4;
        }
    }
    ctx->pc = 0x3EFBE0u;
label_3efbe0:
    // 0x3efbe0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efbe4:
    // 0x3efbe4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3efbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3efbe8: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efbe8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efbec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efbecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efbf0:
    // 0x3efbf0: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efbf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efbf4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efbf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efbfc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efc00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efc04: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efc08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efc0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efc10: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFC10u;
    {
        const bool branch_taken_0x3efc10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC10u;
        // 0x3efc14: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc10) {
            ctx->pc = 0x3EFC24u;
            goto label_3efc24;
        }
    }
    ctx->pc = 0x3EFC18u;
    // 0x3efc18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efc18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efc1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFC1Cu;
    {
        const bool branch_taken_0x3efc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC1Cu;
        // 0x3efc20: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc1c) {
            ctx->pc = 0x3EFC28u;
            goto label_3efc28;
        }
    }
    ctx->pc = 0x3EFC24u;
label_3efc24:
    // 0x3efc24: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efc28:
    // 0x3efc28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3efc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3efc2c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efc2cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3efc30:
    // 0x3efc30: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efc34:
    // 0x3efc34: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efc34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efc38: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efc3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efc40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efc44: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efc48: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efc4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efc50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efc54: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFC54u;
    {
        const bool branch_taken_0x3efc54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC54u;
        // 0x3efc58: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc54) {
            ctx->pc = 0x3EFC68u;
            goto label_3efc68;
        }
    }
    ctx->pc = 0x3EFC5Cu;
    // 0x3efc5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efc5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efc60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFC60u;
    {
        const bool branch_taken_0x3efc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC60u;
        // 0x3efc64: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc60) {
            ctx->pc = 0x3EFC6Cu;
            goto label_3efc6c;
        }
    }
    ctx->pc = 0x3EFC68u;
label_3efc68:
    // 0x3efc68: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efc6c:
    // 0x3efc6c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efc6cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efc70: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3efc70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3efc74: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x3EFC74u;
    {
        const bool branch_taken_0x3efc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFC74u;
        // 0x3efc78: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efc74) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EFC7Cu;
    // 0x3efc7c: 0x0  nop
    ctx->pc = 0x3efc7cu;
    // NOP
label_3efc80:
    // 0x3efc80: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efc84:
    // 0x3efc84: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efc84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efc88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efc8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efc90: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efc90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efc94: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efc98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efc9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efca4: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFCA4u;
    {
        const bool branch_taken_0x3efca4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCA4u;
        // 0x3efca8: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efca4) {
            ctx->pc = 0x3EFCB8u;
            goto label_3efcb8;
        }
    }
    ctx->pc = 0x3EFCACu;
    // 0x3efcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efcb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFCB0u;
    {
        const bool branch_taken_0x3efcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCB0u;
        // 0x3efcb4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efcb0) {
            ctx->pc = 0x3EFCBCu;
            goto label_3efcbc;
        }
    }
    ctx->pc = 0x3EFCB8u;
label_3efcb8:
    // 0x3efcb8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efcbc:
    // 0x3efcbc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3efcc0: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efcc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efcc4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efcc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efccc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efcccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efcd0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efcd4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efcd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efcdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efce0: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFCE0u;
    {
        const bool branch_taken_0x3efce0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCE0u;
        // 0x3efce4: 0xa0a3ffff  sb          $v1, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efce0) {
            ctx->pc = 0x3EFCF4u;
            goto label_3efcf4;
        }
    }
    ctx->pc = 0x3EFCE8u;
    // 0x3efce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efcec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFCECu;
    {
        const bool branch_taken_0x3efcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCECu;
        // 0x3efcf0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efcec) {
            ctx->pc = 0x3EFCF8u;
            goto label_3efcf8;
        }
    }
    ctx->pc = 0x3EFCF4u;
label_3efcf4:
    // 0x3efcf4: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efcf8:
    // 0x3efcf8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efcf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3efcfc: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efcfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efd00: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efd04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efd08: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efd0c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efd10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efd14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efd18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efd1c: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFD1Cu;
    {
        const bool branch_taken_0x3efd1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD1Cu;
        // 0x3efd20: 0xa0a3fffe  sb          $v1, -0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd1c) {
            ctx->pc = 0x3EFD30u;
            goto label_3efd30;
        }
    }
    ctx->pc = 0x3EFD24u;
    // 0x3efd24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efd28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFD28u;
    {
        const bool branch_taken_0x3efd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD28u;
        // 0x3efd2c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd28) {
            ctx->pc = 0x3EFD34u;
            goto label_3efd34;
        }
    }
    ctx->pc = 0x3EFD30u;
label_3efd30:
    // 0x3efd30: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efd34:
    // 0x3efd34: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efd34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3efd38: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efd38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efd3c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3efd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3efd40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3efd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3efd44: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3efd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efd48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efd4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3efd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3efd50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3efd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3efd54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efd58: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFD58u;
    {
        const bool branch_taken_0x3efd58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        ctx->pc = 0x3EFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD58u;
        // 0x3efd5c: 0xa0a3fffd  sb          $v1, -0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd58) {
            ctx->pc = 0x3EFD6Cu;
            goto label_3efd6c;
        }
    }
    ctx->pc = 0x3EFD60u;
    // 0x3efd60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFD64u;
    {
        const bool branch_taken_0x3efd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD64u;
        // 0x3efd68: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd64) {
            ctx->pc = 0x3EFD70u;
            goto label_3efd70;
        }
    }
    ctx->pc = 0x3EFD6Cu;
label_3efd6c:
    // 0x3efd6c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3efd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3efd70:
    // 0x3efd70: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3efd70u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3efd74: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3efd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3efd78: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3EFD78u;
    {
        const bool branch_taken_0x3efd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD78u;
        // 0x3efd7c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd78) {
            ctx->pc = 0x3EFC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3efc80;
        }
    }
    ctx->pc = 0x3EFD80u;
    // 0x3efd80: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3EFD80u;
    {
        const bool branch_taken_0x3efd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD80u;
        // 0x3efd84: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd80) {
            ctx->pc = 0x3EFF6Cu;
            goto label_3eff6c;
        }
    }
    ctx->pc = 0x3EFD88u;
label_3efd88:
    // 0x3efd88: 0x65630001  daddiu      $v1, $t3, 0x1
    ctx->pc = 0x3efd88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3efd8c: 0x6562ffff  daddiu      $v0, $t3, -0x1
    ctx->pc = 0x3efd8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
    // 0x3efd90: 0xc2100  sll         $a0, $t4, 4
    ctx->pc = 0x3efd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x3efd94: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3efd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3efd98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3efd98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3efd9c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3efd9cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3efda0: 0xb283c  dsll32      $a1, $t3, 0
    ctx->pc = 0x3efda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3efda4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3efda4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3efda8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3efda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x3efdac: 0x1e56821  addu        $t5, $t7, $a1
    ctx->pc = 0x3efdacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x3efdb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3efdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3efdb4: 0x1e24821  addu        $t1, $t7, $v0
    ctx->pc = 0x3efdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3efdb8: 0x308cffff  andi        $t4, $a0, 0xFFFF
    ctx->pc = 0x3efdb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3efdbc: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x3efdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3efdc0: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x3efdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3efdc4: 0x11600068  beqz        $t3, . + 4 + (0x68 << 2)
    ctx->pc = 0x3EFDC4u;
    {
        const bool branch_taken_0x3efdc4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDC4u;
        // 0x3efdc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efdc4) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EFDCCu;
    // 0x3efdcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3efdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efdd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3efdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3efdd4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3efdd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efdd8: 0x19600023  blez        $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x3EFDD8u;
    {
        const bool branch_taken_0x3efdd8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3EFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDD8u;
        // 0x3efddc: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efdd8) {
            ctx->pc = 0x3EFE68u;
            goto label_3efe68;
        }
    }
    ctx->pc = 0x3EFDE0u;
    // 0x3efde0: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x3EFDE0u;
    {
        const bool branch_taken_0x3efde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efde0) {
            ctx->pc = 0x3EFDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFDE0u;
            // 0x3efde4: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFEACu;
            goto label_3efeac;
        }
    }
    ctx->pc = 0x3EFDE8u;
    // 0x3efde8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3efde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3efdec: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3EFDECu;
    {
        const bool branch_taken_0x3efdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3efdec) {
            ctx->pc = 0x3EFDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFDECu;
            // 0x3efdf0: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFE6Cu;
            goto label_3efe6c;
        }
    }
    ctx->pc = 0x3EFDF4u;
    // 0x3efdf4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3efdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3efdf8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3EFDF8u;
    {
        const bool branch_taken_0x3efdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3efdf8) {
            ctx->pc = 0x3EFDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFDF8u;
            // 0x3efdfc: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFE38u;
            goto label_3efe38;
        }
    }
    ctx->pc = 0x3EFE00u;
    // 0x3efe00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3efe00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3efe04: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efe04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efe08: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3efe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3efe0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3efe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efe10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efe14: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFE14u;
    {
        const bool branch_taken_0x3efe14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE14u;
        // 0x3efe18: 0xa1a3ffff  sb          $v1, -0x1($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 4294967295), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe14) {
            ctx->pc = 0x3EFE28u;
            goto label_3efe28;
        }
    }
    ctx->pc = 0x3EFE1Cu;
    // 0x3efe1c: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x3efe1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3efe20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFE20u;
    {
        const bool branch_taken_0x3efe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE20u;
        // 0x3efe24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe20) {
            ctx->pc = 0x3EFE2Cu;
            goto label_3efe2c;
        }
    }
    ctx->pc = 0x3EFE28u;
label_3efe28:
    // 0x3efe28: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3efe28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3efe2c:
    // 0x3efe2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3efe30: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efe30u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efe34: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efe34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efe38:
    // 0x3efe38: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efe38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efe3c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3efe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3efe40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3efe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efe44: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efe44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efe48: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFE48u;
    {
        const bool branch_taken_0x3efe48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE48u;
        // 0x3efe4c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe48) {
            ctx->pc = 0x3EFE5Cu;
            goto label_3efe5c;
        }
    }
    ctx->pc = 0x3EFE50u;
    // 0x3efe50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efe50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efe54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFE54u;
    {
        const bool branch_taken_0x3efe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE54u;
        // 0x3efe58: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe54) {
            ctx->pc = 0x3EFE60u;
            goto label_3efe60;
        }
    }
    ctx->pc = 0x3EFE5Cu;
label_3efe5c:
    // 0x3efe5c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3efe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3efe60:
    // 0x3efe60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3efe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3efe64: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efe64u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3efe68:
    // 0x3efe68: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efe68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efe6c:
    // 0x3efe6c: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efe6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efe70: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3efe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3efe74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3efe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efe78: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efe7c: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFE7Cu;
    {
        const bool branch_taken_0x3efe7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE7Cu;
        // 0x3efe80: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe7c) {
            ctx->pc = 0x3EFE90u;
            goto label_3efe90;
        }
    }
    ctx->pc = 0x3EFE84u;
    // 0x3efe84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efe84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efe88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFE88u;
    {
        const bool branch_taken_0x3efe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE88u;
        // 0x3efe8c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe88) {
            ctx->pc = 0x3EFE94u;
            goto label_3efe94;
        }
    }
    ctx->pc = 0x3EFE90u;
label_3efe90:
    // 0x3efe90: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3efe90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3efe94:
    // 0x3efe94: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3efe94u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3efe98: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3efe98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3efe9c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3EFE9Cu;
    {
        const bool branch_taken_0x3efe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE9Cu;
        // 0x3efea0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe9c) {
            ctx->pc = 0x3EFF68u;
            goto label_3eff68;
        }
    }
    ctx->pc = 0x3EFEA4u;
    // 0x3efea4: 0x0  nop
    ctx->pc = 0x3efea4u;
    // NOP
label_3efea8:
    // 0x3efea8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3efeac:
    // 0x3efeac: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efeacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efeb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3efeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3efeb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3efeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efeb8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efebc: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFEBCu;
    {
        const bool branch_taken_0x3efebc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEBCu;
        // 0x3efec0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efebc) {
            ctx->pc = 0x3EFED0u;
            goto label_3efed0;
        }
    }
    ctx->pc = 0x3EFEC4u;
    // 0x3efec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFEC8u;
    {
        const bool branch_taken_0x3efec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEC8u;
        // 0x3efecc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efec8) {
            ctx->pc = 0x3EFED4u;
            goto label_3efed4;
        }
    }
    ctx->pc = 0x3EFED0u;
label_3efed0:
    // 0x3efed0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3efed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3efed4:
    // 0x3efed4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3efed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3efed8: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3efed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3efedc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3efedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3efee0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3efee4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3efee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3efee8: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFEE8u;
    {
        const bool branch_taken_0x3efee8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEE8u;
        // 0x3efeec: 0xa083ffff  sb          $v1, -0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efee8) {
            ctx->pc = 0x3EFEFCu;
            goto label_3efefc;
        }
    }
    ctx->pc = 0x3EFEF0u;
    // 0x3efef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3efef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efef4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFEF4u;
    {
        const bool branch_taken_0x3efef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEF4u;
        // 0x3efef8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efef4) {
            ctx->pc = 0x3EFF00u;
            goto label_3eff00;
        }
    }
    ctx->pc = 0x3EFEFCu;
label_3efefc:
    // 0x3efefc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3efefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eff00:
    // 0x3eff00: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3eff00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3eff04: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3eff04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3eff08: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3eff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eff0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3eff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3eff10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3eff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3eff14: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFF14u;
    {
        const bool branch_taken_0x3eff14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF14u;
        // 0x3eff18: 0xa083fffe  sb          $v1, -0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff14) {
            ctx->pc = 0x3EFF28u;
            goto label_3eff28;
        }
    }
    ctx->pc = 0x3EFF1Cu;
    // 0x3eff1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3eff1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFF20u;
    {
        const bool branch_taken_0x3eff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF20u;
        // 0x3eff24: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff20) {
            ctx->pc = 0x3EFF2Cu;
            goto label_3eff2c;
        }
    }
    ctx->pc = 0x3EFF28u;
label_3eff28:
    // 0x3eff28: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3eff28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eff2c:
    // 0x3eff2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3eff2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3eff30: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3eff30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3eff34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3eff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eff38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3eff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3eff3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3eff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3eff40: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFF40u;
    {
        const bool branch_taken_0x3eff40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3EFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF40u;
        // 0x3eff44: 0xa083fffd  sb          $v1, -0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff40) {
            ctx->pc = 0x3EFF54u;
            goto label_3eff54;
        }
    }
    ctx->pc = 0x3EFF48u;
    // 0x3eff48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3eff48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFF4Cu;
    {
        const bool branch_taken_0x3eff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF4Cu;
        // 0x3eff50: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff4c) {
            ctx->pc = 0x3EFF58u;
            goto label_3eff58;
        }
    }
    ctx->pc = 0x3EFF54u;
label_3eff54:
    // 0x3eff54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3eff54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eff58:
    // 0x3eff58: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3eff58u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3eff5c: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x3eff5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3eff60: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3EFF60u;
    {
        const bool branch_taken_0x3eff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF60u;
        // 0x3eff64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff60) {
            ctx->pc = 0x3EFEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3efea8;
        }
    }
    ctx->pc = 0x3EFF68u;
label_3eff68:
    // 0x3eff68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eff6c:
    // 0x3eff6c: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x3eff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
label_3eff70:
    // 0x3eff70: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3eff70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eff74: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x3eff74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_3eff78:
    // 0x3eff78: 0x10c00186  beqz        $a2, . + 4 + (0x186 << 2)
    ctx->pc = 0x3EFF78u;
    {
        const bool branch_taken_0x3eff78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF78u;
        // 0x3eff7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff78) {
            ctx->pc = 0x3F0594u;
            goto label_3f0594;
        }
    }
    ctx->pc = 0x3EFF80u;
    // 0x3eff80: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3eff80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3eff84: 0x54620063  bnel        $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3EFF84u;
    {
        const bool branch_taken_0x3eff84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eff84) {
            ctx->pc = 0x3EFF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFF84u;
            // 0x3eff88: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0114u;
            goto label_3f0114;
        }
    }
    ctx->pc = 0x3EFF8Cu;
    // 0x3eff8c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3eff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3eff90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3eff90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3eff94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3eff94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff98: 0x1e24021  addu        $t0, $t7, $v0
    ctx->pc = 0x3eff98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3eff9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3eff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3effa0: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x3effa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3effa4: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x3effa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3effa8: 0x116000af  beqz        $t3, . + 4 + (0xAF << 2)
    ctx->pc = 0x3EFFA8u;
    {
        const bool branch_taken_0x3effa8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFA8u;
        // 0x3effac: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3effa8) {
            ctx->pc = 0x3F0268u;
            goto label_3f0268;
        }
    }
    ctx->pc = 0x3EFFB0u;
    // 0x3effb0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x3effb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3effb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3effb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3effb8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3effb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3effbc: 0x1960001f  blez        $t3, . + 4 + (0x1F << 2)
    ctx->pc = 0x3EFFBCu;
    {
        const bool branch_taken_0x3effbc = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3EFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFBCu;
        // 0x3effc0: 0x31660003  andi        $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3effbc) {
            ctx->pc = 0x3F003Cu;
            goto label_3f003c;
        }
    }
    ctx->pc = 0x3EFFC4u;
    // 0x3effc4: 0x50c0002b  beql        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3EFFC4u;
    {
        const bool branch_taken_0x3effc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3effc4) {
            ctx->pc = 0x3EFFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFC4u;
            // 0x3effc8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0074u;
            goto label_3f0074;
        }
    }
    ctx->pc = 0x3EFFCCu;
    // 0x3effcc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3effccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3effd0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3EFFD0u;
    {
        const bool branch_taken_0x3effd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3effd0) {
            ctx->pc = 0x3EFFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFD0u;
            // 0x3effd4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0040u;
            goto label_3f0040;
        }
    }
    ctx->pc = 0x3EFFD8u;
    // 0x3effd8: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3effd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3effdc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3EFFDCu;
    {
        const bool branch_taken_0x3effdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3effdc) {
            ctx->pc = 0x3EFFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFDCu;
            // 0x3effe0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0018u;
            goto label_3f0018;
        }
    }
    ctx->pc = 0x3EFFE4u;
    // 0x3effe4: 0x9102ffff  lbu         $v0, -0x1($t0)
    ctx->pc = 0x3effe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967295)));
    // 0x3effe8: 0x544c0004  bnel        $v0, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFFE8u;
    {
        const bool branch_taken_0x3effe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x3effe8) {
            ctx->pc = 0x3EFFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFE8u;
            // 0x3effec: 0xa0a7ffff  sb          $a3, -0x1($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFFFCu;
            goto label_3efffc;
        }
    }
    ctx->pc = 0x3EFFF0u;
    // 0x3efff0: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x3efff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3efff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EFFF4u;
    {
        const bool branch_taken_0x3efff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFF4u;
        // 0x3efff8: 0xa0a0ffff  sb          $zero, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efff4) {
            ctx->pc = 0x3F0000u;
            goto label_3f0000;
        }
    }
    ctx->pc = 0x3EFFFCu;
label_3efffc:
    // 0x3efffc: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x3efffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_3f0000:
    // 0x3f0000: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f0004: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f0004u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f0008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3f0008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3f000c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f000cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0010: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0014: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f0018:
    // 0x3f0018: 0x544c0002  bnel        $v0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0018u;
    {
        const bool branch_taken_0x3f0018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x3f0018) {
            ctx->pc = 0x3F001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0018u;
            // 0x3f001c: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0024u;
            goto label_3f0024;
        }
    }
    ctx->pc = 0x3F0020u;
    // 0x3f0020: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f0020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f0024:
    // 0x3f0024: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0028: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f002c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f002cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f0030: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3f0030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3f0034: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0038: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3f003c:
    // 0x3f003c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f003cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f0040:
    // 0x3f0040: 0x544c0002  bnel        $v0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0040u;
    {
        const bool branch_taken_0x3f0040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x3f0040) {
            ctx->pc = 0x3F0044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0040u;
            // 0x3f0044: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F004Cu;
            goto label_3f004c;
        }
    }
    ctx->pc = 0x3F0048u;
    // 0x3f0048: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f0048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f004c:
    // 0x3f004c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f0054: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f0054u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f0058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3f0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3f005c: 0x14b282b  sltu        $a1, $t2, $t3
    ctx->pc = 0x3f005cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0060: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0064: 0x10a00080  beqz        $a1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3F0064u;
    {
        const bool branch_taken_0x3f0064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0064u;
        // 0x3f0068: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0064) {
            ctx->pc = 0x3F0268u;
            goto label_3f0268;
        }
    }
    ctx->pc = 0x3F006Cu;
    // 0x3f006c: 0x0  nop
    ctx->pc = 0x3f006cu;
    // NOP
label_3f0070:
    // 0x3f0070: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f0074:
    // 0x3f0074: 0x544c0002  bnel        $v0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0074u;
    {
        const bool branch_taken_0x3f0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x3f0074) {
            ctx->pc = 0x3F0078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0074u;
            // 0x3f0078: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0080u;
            goto label_3f0080;
        }
    }
    ctx->pc = 0x3F007Cu;
    // 0x3f007c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f007cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f0080:
    // 0x3f0080: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0084: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3f0084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f0088: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f008c: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x3f008cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x3f0090: 0x144c0003  bne         $v0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F0090u;
    {
        const bool branch_taken_0x3f0090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x3F0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0090u;
        // 0x3f0094: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0090) {
            ctx->pc = 0x3F00A0u;
            goto label_3f00a0;
        }
    }
    ctx->pc = 0x3F0098u;
    // 0x3f0098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0098u;
    {
        const bool branch_taken_0x3f0098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0098u;
        // 0x3f009c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0098) {
            ctx->pc = 0x3F00A4u;
            goto label_3f00a4;
        }
    }
    ctx->pc = 0x3F00A0u;
label_3f00a0:
    // 0x3f00a0: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f00a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3f00a4:
    // 0x3f00a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f00a8: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x3f00a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x3f00ac: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f00acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f00b0: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x3f00b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3f00b4: 0x144c0003  bne         $v0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F00B4u;
    {
        const bool branch_taken_0x3f00b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x3F00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00B4u;
        // 0x3f00b8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00b4) {
            ctx->pc = 0x3F00C4u;
            goto label_3f00c4;
        }
    }
    ctx->pc = 0x3F00BCu;
    // 0x3f00bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F00BCu;
    {
        const bool branch_taken_0x3f00bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00BCu;
        // 0x3f00c0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00bc) {
            ctx->pc = 0x3F00C8u;
            goto label_3f00c8;
        }
    }
    ctx->pc = 0x3F00C4u;
label_3f00c4:
    // 0x3f00c4: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f00c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3f00c8:
    // 0x3f00c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f00cc: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x3f00ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3f00d0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f00d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f00d4: 0x9062fffd  lbu         $v0, -0x3($v1)
    ctx->pc = 0x3f00d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967293)));
    // 0x3f00d8: 0x144c0003  bne         $v0, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F00D8u;
    {
        const bool branch_taken_0x3f00d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x3F00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00D8u;
        // 0x3f00dc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00d8) {
            ctx->pc = 0x3F00E8u;
            goto label_3f00e8;
        }
    }
    ctx->pc = 0x3F00E0u;
    // 0x3f00e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F00E0u;
    {
        const bool branch_taken_0x3f00e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00E0u;
        // 0x3f00e4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00e0) {
            ctx->pc = 0x3F00ECu;
            goto label_3f00ec;
        }
    }
    ctx->pc = 0x3F00E8u;
label_3f00e8:
    // 0x3f00e8: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f00e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3f00ec:
    // 0x3f00ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f00f0: 0x9062fffd  lbu         $v0, -0x3($v1)
    ctx->pc = 0x3f00f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967293)));
    // 0x3f00f4: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3f00f4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3f00f8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3f00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3f00fc: 0x14b282b  sltu        $a1, $t2, $t3
    ctx->pc = 0x3f00fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0100: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0100u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0104: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3F0104u;
    {
        const bool branch_taken_0x3f0104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0104u;
        // 0x3f0108: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0104) {
            ctx->pc = 0x3F0070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0070;
        }
    }
    ctx->pc = 0x3F010Cu;
    // 0x3f010c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3F010Cu;
    {
        const bool branch_taken_0x3f010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F010Cu;
        // 0x3f0110: 0x92020011  lbu         $v0, 0x11($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f010c) {
            ctx->pc = 0x3F026Cu;
            goto label_3f026c;
        }
    }
    ctx->pc = 0x3F0114u;
label_3f0114:
    // 0x3f0114: 0x54620055  bnel        $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3F0114u;
    {
        const bool branch_taken_0x3f0114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0114) {
            ctx->pc = 0x3F0118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0114u;
            // 0x3f0118: 0x92020011  lbu         $v0, 0x11($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F026Cu;
            goto label_3f026c;
        }
    }
    ctx->pc = 0x3F011Cu;
    // 0x3f011c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3f011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f0120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0124: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x3f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3f0128: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3f0128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3f012c: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x3f012cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3f0130: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x3f0130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3f0134: 0x1160004c  beqz        $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x3F0134u;
    {
        const bool branch_taken_0x3f0134 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0134u;
        // 0x3f0138: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0134) {
            ctx->pc = 0x3F0268u;
            goto label_3f0268;
        }
    }
    ctx->pc = 0x3F013Cu;
    // 0x3f013c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0140: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3f0140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f0144: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3f0144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0148: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F0148u;
    {
        const bool branch_taken_0x3f0148 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3F014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0148u;
        // 0x3f014c: 0x31620001  andi        $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0148) {
            ctx->pc = 0x3F0158u;
            goto label_3f0158;
        }
    }
    ctx->pc = 0x3F0150u;
    // 0x3f0150: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F0150u;
    {
        const bool branch_taken_0x3f0150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0150) {
            ctx->pc = 0x3F0154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0150u;
            // 0x3f0154: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F01B8u;
            goto label_3f01b8;
        }
    }
    ctx->pc = 0x3F0158u;
label_3f0158:
    // 0x3f0158: 0x9122ffff  lbu         $v0, -0x1($t1)
    ctx->pc = 0x3f0158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967295)));
    // 0x3f015c: 0x9063ffff  lbu         $v1, -0x1($v1)
    ctx->pc = 0x3f015cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x3f0160: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f0164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f0164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f0168: 0x546c0005  bnel        $v1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F0168u;
    {
        const bool branch_taken_0x3f0168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x3f0168) {
            ctx->pc = 0x3F016Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0168u;
            // 0x3f016c: 0xa0a7ffff  sb          $a3, -0x1($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0180u;
            goto label_3f0180;
        }
    }
    ctx->pc = 0x3F0170u;
    // 0x3f0170: 0x24a4fffd  addiu       $a0, $a1, -0x3
    ctx->pc = 0x3f0170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3f0174: 0xa0a0ffff  sb          $zero, -0x1($a1)
    ctx->pc = 0x3f0174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f0178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F0178u;
    {
        const bool branch_taken_0x3f0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0178u;
        // 0x3f017c: 0xa0a0fffe  sb          $zero, -0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0178) {
            ctx->pc = 0x3F0188u;
            goto label_3f0188;
        }
    }
    ctx->pc = 0x3F0180u;
label_3f0180:
    // 0x3f0180: 0x24a4fffd  addiu       $a0, $a1, -0x3
    ctx->pc = 0x3f0180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3f0184: 0xa0a7fffe  sb          $a3, -0x2($a1)
    ctx->pc = 0x3f0184u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 7));
label_3f0188:
    // 0x3f0188: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f0188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f018c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f018cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f0190: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3f0190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3f0194: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x3f0194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0198: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f019c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f01a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f01a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f01a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3f01a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3f01a8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f01a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f01ac: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3F01ACu;
    {
        const bool branch_taken_0x3f01ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01ACu;
        // 0x3f01b0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f01ac) {
            ctx->pc = 0x3F0268u;
            goto label_3f0268;
        }
    }
    ctx->pc = 0x3F01B4u;
    // 0x3f01b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3f01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f01b8:
    // 0x3f01b8: 0x90c2ffff  lbu         $v0, -0x1($a2)
    ctx->pc = 0x3f01b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3f01bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f01bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f01c0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f01c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f01c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f01c8: 0x546c0005  bnel        $v1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F01C8u;
    {
        const bool branch_taken_0x3f01c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x3f01c8) {
            ctx->pc = 0x3F01CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F01C8u;
            // 0x3f01cc: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F01E0u;
            goto label_3f01e0;
        }
    }
    ctx->pc = 0x3F01D0u;
    // 0x3f01d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f01d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f01d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f01d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F01D8u;
    {
        const bool branch_taken_0x3f01d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01D8u;
        // 0x3f01dc: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f01d8) {
            ctx->pc = 0x3F01E8u;
            goto label_3f01e8;
        }
    }
    ctx->pc = 0x3F01E0u;
label_3f01e0:
    // 0x3f01e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f01e4: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f01e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3f01e8:
    // 0x3f01e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f01e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f01ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f01ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f01f0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f01f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f01f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f01f8: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3f01f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3f01fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f01fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0200: 0x90c2fffd  lbu         $v0, -0x3($a2)
    ctx->pc = 0x3f0200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967293)));
    // 0x3f0204: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3f0204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3f0208: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f0208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f020c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f020cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f0210: 0x146c0005  bne         $v1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F0210u;
    {
        const bool branch_taken_0x3f0210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x3F0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0210u;
        // 0x3f0214: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0210) {
            ctx->pc = 0x3F0228u;
            goto label_3f0228;
        }
    }
    ctx->pc = 0x3F0218u;
    // 0x3f0218: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f0218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f021c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F0220u;
    {
        const bool branch_taken_0x3f0220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0220u;
        // 0x3f0224: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0220) {
            ctx->pc = 0x3F0234u;
            goto label_3f0234;
        }
    }
    ctx->pc = 0x3F0228u;
label_3f0228:
    // 0x3f0228: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f0228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3f022c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0230: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3f0230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3f0234:
    // 0x3f0234: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0238: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3f0238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3f023c: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x3f023cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3f0240: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3f0240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3f0244: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3f0244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3f0248: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f024c: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x3f024cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0250: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0254: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0258: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f025c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f025cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0260: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3F0260u;
    {
        const bool branch_taken_0x3f0260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0260u;
        // 0x3f0264: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0260) {
            ctx->pc = 0x3F01B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f01b8;
        }
    }
    ctx->pc = 0x3F0268u;
label_3f0268:
    // 0x3f0268: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3f0268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_3f026c:
    // 0x3f026c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3f026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f0270: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f0270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f0274: 0xa2040012  sb          $a0, 0x12($s0)
    ctx->pc = 0x3f0274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f0278: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3F0278u;
    {
        const bool branch_taken_0x3f0278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0278u;
        // 0x3f027c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0278) {
            ctx->pc = 0x3F0578u;
            goto label_3f0578;
        }
    }
    ctx->pc = 0x3F0280u;
label_3f0280:
    // 0x3f0280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f0284: 0x546200c4  bnel        $v1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x3F0284u;
    {
        const bool branch_taken_0x3f0284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0284) {
            ctx->pc = 0x3F0288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0284u;
            // 0x3f0288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0598u;
            goto label_3f0598;
        }
    }
    ctx->pc = 0x3F028Cu;
    // 0x3f028c: 0x10c000c1  beqz        $a2, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3F028Cu;
    {
        const bool branch_taken_0x3f028c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F028Cu;
        // 0x3f0290: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f028c) {
            ctx->pc = 0x3F0594u;
            goto label_3f0594;
        }
    }
    ctx->pc = 0x3F0294u;
    // 0x3f0294: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3f0294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3f0298: 0x5462006c  bnel        $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3F0298u;
    {
        const bool branch_taken_0x3f0298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0298) {
            ctx->pc = 0x3F029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0298u;
            // 0x3f029c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F044Cu;
            goto label_3f044c;
        }
    }
    ctx->pc = 0x3F02A0u;
    // 0x3f02a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3f02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f02a4: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3f02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3f02a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f02a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f02ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f02acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f02b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f02b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f02b4: 0x1e34021  addu        $t0, $t7, $v1
    ctx->pc = 0x3f02b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x3f02b8: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x3f02b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3f02bc: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x3f02bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3f02c0: 0x116000a8  beqz        $t3, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3F02C0u;
    {
        const bool branch_taken_0x3f02c0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02C0u;
        // 0x3f02c4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f02c0) {
            ctx->pc = 0x3F0564u;
            goto label_3f0564;
        }
    }
    ctx->pc = 0x3F02C8u;
    // 0x3f02c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f02cc: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x3f02ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f02d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3f02d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f02d4: 0x19600003  blez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F02D4u;
    {
        const bool branch_taken_0x3f02d4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3F02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02D4u;
        // 0x3f02d8: 0x31620001  andi        $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f02d4) {
            ctx->pc = 0x3F02E4u;
            goto label_3f02e4;
        }
    }
    ctx->pc = 0x3F02DCu;
    // 0x3f02dc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F02DCu;
    {
        const bool branch_taken_0x3f02dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f02dc) {
            ctx->pc = 0x3F02E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F02DCu;
            // 0x3f02e0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0364u;
            goto label_3f0364;
        }
    }
    ctx->pc = 0x3F02E4u;
label_3f02e4:
    // 0x3f02e4: 0x9123fffe  lbu         $v1, -0x2($t1)
    ctx->pc = 0x3f02e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967294)));
    // 0x3f02e8: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3f02e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f02ec: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F02ECu;
    {
        const bool branch_taken_0x3f02ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f02ec) {
            ctx->pc = 0x3F02F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F02ECu;
            // 0x3f02f0: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0320u;
            goto label_3f0320;
        }
    }
    ctx->pc = 0x3F02F4u;
    // 0x3f02f4: 0x9123ffff  lbu         $v1, -0x1($t1)
    ctx->pc = 0x3f02f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967295)));
    // 0x3f02f8: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x3f02f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3f02fc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F02FCu;
    {
        const bool branch_taken_0x3f02fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f02fc) {
            ctx->pc = 0x3F0300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F02FCu;
            // 0x3f0300: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0320u;
            goto label_3f0320;
        }
    }
    ctx->pc = 0x3F0304u;
    // 0x3f0304: 0x9103ffff  lbu         $v1, -0x1($t0)
    ctx->pc = 0x3f0304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967295)));
    // 0x3f0308: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3f0308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3f030c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F030Cu;
    {
        const bool branch_taken_0x3f030c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f030c) {
            ctx->pc = 0x3F0310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F030Cu;
            // 0x3f0310: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0320u;
            goto label_3f0320;
        }
    }
    ctx->pc = 0x3F0314u;
    // 0x3f0314: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x3f0314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3f0318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0318u;
    {
        const bool branch_taken_0x3f0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0318u;
        // 0x3f031c: 0xa0a0ffff  sb          $zero, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0318) {
            ctx->pc = 0x3F0324u;
            goto label_3f0324;
        }
    }
    ctx->pc = 0x3F0320u;
label_3f0320:
    // 0x3f0320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3f0324:
    // 0x3f0324: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f0324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f0328: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f0328u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f032c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f032cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0330: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x3f0330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0334: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0338: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f033c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f033cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f0340: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f0340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0344: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0344u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0348: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f034c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f034cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f0350: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f0350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0354: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0358: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3F0358u;
    {
        const bool branch_taken_0x3f0358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0358u;
        // 0x3f035c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0358) {
            ctx->pc = 0x3F0564u;
            goto label_3f0564;
        }
    }
    ctx->pc = 0x3F0360u;
    // 0x3f0360: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3f0360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f0364:
    // 0x3f0364: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3f0364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0368:
    // 0x3f0368: 0x90e3fffe  lbu         $v1, -0x2($a3)
    ctx->pc = 0x3f0368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x3f036c: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3f036cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f0370: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F0370u;
    {
        const bool branch_taken_0x3f0370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0370) {
            ctx->pc = 0x3F0374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0370u;
            // 0x3f0374: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F039Cu;
            goto label_3f039c;
        }
    }
    ctx->pc = 0x3F0378u;
    // 0x3f0378: 0x9103ffff  lbu         $v1, -0x1($t0)
    ctx->pc = 0x3f0378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967295)));
    // 0x3f037c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x3f037cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3f0380: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F0380u;
    {
        const bool branch_taken_0x3f0380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0380) {
            ctx->pc = 0x3F0384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0380u;
            // 0x3f0384: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F039Cu;
            goto label_3f039c;
        }
    }
    ctx->pc = 0x3F0388u;
    // 0x3f0388: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f0388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f038c: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3f038cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3f0390: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0390u;
    {
        const bool branch_taken_0x3f0390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0390) {
            ctx->pc = 0x3F0394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0390u;
            // 0x3f0394: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F039Cu;
            goto label_3f039c;
        }
    }
    ctx->pc = 0x3F0398u;
    // 0x3f0398: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3f0398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f039c:
    // 0x3f039c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f03a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f03a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f03a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f03a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f03a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f03ac: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3f03acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3f03b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f03b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f03b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f03b8: 0x90a2fffe  lbu         $v0, -0x2($a1)
    ctx->pc = 0x3f03b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3f03bc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f03bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f03c0: 0x90e3fffb  lbu         $v1, -0x5($a3)
    ctx->pc = 0x3f03c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967291)));
    // 0x3f03c4: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3f03c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f03c8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F03C8u;
    {
        const bool branch_taken_0x3f03c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03C8u;
        // 0x3f03cc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f03c8) {
            ctx->pc = 0x3F03F8u;
            goto label_3f03f8;
        }
    }
    ctx->pc = 0x3F03D0u;
    // 0x3f03d0: 0x9103fffc  lbu         $v1, -0x4($t0)
    ctx->pc = 0x3f03d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x3f03d4: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x3f03d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3f03d8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F03D8u;
    {
        const bool branch_taken_0x3f03d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f03d8) {
            ctx->pc = 0x3F03DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F03D8u;
            // 0x3f03dc: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F03FCu;
            goto label_3f03fc;
        }
    }
    ctx->pc = 0x3F03E0u;
    // 0x3f03e0: 0x90a3fffd  lbu         $v1, -0x3($a1)
    ctx->pc = 0x3f03e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3f03e4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3f03e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3f03e8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F03E8u;
    {
        const bool branch_taken_0x3f03e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f03e8) {
            ctx->pc = 0x3F03ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F03E8u;
            // 0x3f03ec: 0xa08c0000  sb          $t4, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F03FCu;
            goto label_3f03fc;
        }
    }
    ctx->pc = 0x3F03F0u;
    // 0x3f03f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F03F0u;
    {
        const bool branch_taken_0x3f03f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03F0u;
        // 0x3f03f4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f03f0) {
            ctx->pc = 0x3F03FCu;
            goto label_3f03fc;
        }
    }
    ctx->pc = 0x3F03F8u;
label_3f03f8:
    // 0x3f03f8: 0xa08c0000  sb          $t4, 0x0($a0)
    ctx->pc = 0x3f03f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 12));
label_3f03fc:
    // 0x3f03fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0400: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3f0400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3f0404: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x3f0404u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3f0408: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3f0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3f040c: 0x2508fffa  addiu       $t0, $t0, -0x6
    ctx->pc = 0x3f040cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967290));
    // 0x3f0410: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0414: 0x24e7fffa  addiu       $a3, $a3, -0x6
    ctx->pc = 0x3f0414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x3f0418: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f041c: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x3f041cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0420: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0424: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0428: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f042c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3f042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3f0430: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0434: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0438: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f0438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f043c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3F043Cu;
    {
        const bool branch_taken_0x3f043c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F043Cu;
        // 0x3f0440: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f043c) {
            ctx->pc = 0x3F0368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0368;
        }
    }
    ctx->pc = 0x3F0444u;
    // 0x3f0444: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3F0444u;
    {
        const bool branch_taken_0x3f0444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0444u;
        // 0x3f0448: 0x92020011  lbu         $v0, 0x11($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0444) {
            ctx->pc = 0x3F0568u;
            goto label_3f0568;
        }
    }
    ctx->pc = 0x3F044Cu;
label_3f044c:
    // 0x3f044c: 0x54620046  bnel        $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3F044Cu;
    {
        const bool branch_taken_0x3f044c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f044c) {
            ctx->pc = 0x3F0450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F044Cu;
            // 0x3f0450: 0x92020011  lbu         $v0, 0x11($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0568u;
            goto label_3f0568;
        }
    }
    ctx->pc = 0x3F0454u;
    // 0x3f0454: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3f0454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f0458: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3f0458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3f045c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f045cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f0460: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f0460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3f0464: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0464u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0468: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3f0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3f046c: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x3f046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x3f0470: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x3f0470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3f0474: 0x1160003b  beqz        $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x3F0474u;
    {
        const bool branch_taken_0x3f0474 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0474u;
        // 0x3f0478: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0474) {
            ctx->pc = 0x3F0564u;
            goto label_3f0564;
        }
    }
    ctx->pc = 0x3F047Cu;
    // 0x3f047c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3f047cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0480: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f0480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0484: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3f0484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3f0488:
    // 0x3f0488: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3f0488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3f048c: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3f048cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3f0490: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f0490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f0494: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x3f0494u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f0498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f0498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f049c: 0x54640013  bnel        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F049Cu;
    {
        const bool branch_taken_0x3f049c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f049c) {
            ctx->pc = 0x3F04A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F049Cu;
            // 0x3f04a0: 0xa0e80000  sb          $t0, 0x0($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F04ECu;
            goto label_3f04ec;
        }
    }
    ctx->pc = 0x3F04A4u;
    // 0x3f04a4: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3f04a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3f04a8: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3f04a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3f04ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f04acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f04b0: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x3f04b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3f04b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f04b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f04b8: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F04B8u;
    {
        const bool branch_taken_0x3f04b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f04b8) {
            ctx->pc = 0x3F04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F04B8u;
            // 0x3f04bc: 0xa0e80000  sb          $t0, 0x0($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F04ECu;
            goto label_3f04ec;
        }
    }
    ctx->pc = 0x3F04C0u;
    // 0x3f04c0: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3f04c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3f04c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f04c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f04c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f04cc: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x3f04ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3f04d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f04d4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F04D4u;
    {
        const bool branch_taken_0x3f04d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f04d4) {
            ctx->pc = 0x3F04D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F04D4u;
            // 0x3f04d8: 0xa0e80000  sb          $t0, 0x0($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F04ECu;
            goto label_3f04ec;
        }
    }
    ctx->pc = 0x3F04DCu;
    // 0x3f04dc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3f04dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f04e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f04e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f04e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F04E4u;
    {
        const bool branch_taken_0x3f04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F04E4u;
        // 0x3f04e8: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f04e4) {
            ctx->pc = 0x3F04F4u;
            goto label_3f04f4;
        }
    }
    ctx->pc = 0x3F04ECu;
label_3f04ec:
    // 0x3f04ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f04ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f04f0: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x3f04f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
label_3f04f4:
    // 0x3f04f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f04f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f04f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f04f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f04fc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f04fcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f0500: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0504: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x3f0504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3f0508: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0508u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f050c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f050cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0510: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0514: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0518: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0518u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f051c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f051cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0520: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0524: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0528: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0528u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f052c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f052cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0530: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0534: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0538: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0538u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f053c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f053cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0540: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0544: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0548: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0548u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f054c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f0550: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f0550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f0554: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3f0554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3f0558: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f0558u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f055c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3F055Cu;
    {
        const bool branch_taken_0x3f055c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F055Cu;
        // 0x3f0560: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f055c) {
            ctx->pc = 0x3F0488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0488;
        }
    }
    ctx->pc = 0x3F0564u;
label_3f0564:
    // 0x3f0564: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3f0564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_3f0568:
    // 0x3f0568: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f0568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f056c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f0570: 0xa2040012  sb          $a0, 0x12($s0)
    ctx->pc = 0x3f0570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f0574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f0574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f0578:
    // 0x3f0578: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3f0578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f057c: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3f057cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f0580: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3f0580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0584: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F0584u;
    SET_GPR_U32(ctx, 31, 0x3F058Cu);
    ctx->pc = 0x3F0588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0584u;
    // 0x3f0588: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F0584u, 0x3F058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F058Cu;
label_3f058c:
    // 0x3f058c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f0590: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3f0590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_3f0594:
    // 0x3f0594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f0594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0598:
    // 0x3f0598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f059c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F059Cu;
        // 0x3f05a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F059Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F05A4u;
    // 0x3f05a4: 0x0  nop
    ctx->pc = 0x3f05a4u;
    // NOP
    ctx->pc = 0x3f05a8u;
}
