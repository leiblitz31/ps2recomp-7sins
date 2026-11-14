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

// Function: sub_003DC058
// Address: 0x3dc058 - 0x3dc1a0
void sub_003DC058_0x3dc058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC058_0x3dc058");
#endif

    switch (ctx->pc) {
        case 0x3dc0a0u: goto label_3dc0a0;
        case 0x3dc160u: goto label_3dc160;
        default: break;
    }

    ctx->pc = 0x3dc058u;

    // 0x3dc058: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3dc058u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc05c: 0x256900a4  addiu       $t1, $t3, 0xA4
    ctx->pc = 0x3dc05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 164));
    // 0x3dc060: 0x956700a4  lhu         $a3, 0xA4($t3)
    ctx->pc = 0x3dc060u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x3dc064: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x3dc064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3dc068: 0x95230008  lhu         $v1, 0x8($t1)
    ctx->pc = 0x3dc068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3dc06c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3dc06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3dc070: 0x9524000c  lhu         $a0, 0xC($t1)
    ctx->pc = 0x3dc070u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3dc074: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3dc074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3dc078: 0x95250010  lhu         $a1, 0x10($t1)
    ctx->pc = 0x3dc078u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3dc07c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3dc07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3dc080: 0x95230014  lhu         $v1, 0x14($t1)
    ctx->pc = 0x3dc080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x3dc084: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x3dc084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3dc088: 0x95220018  lhu         $v0, 0x18($t1)
    ctx->pc = 0x3dc088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x3dc08c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3dc08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3dc090: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3dc090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3dc094: 0x956600c0  lhu         $a2, 0xC0($t3)
    ctx->pc = 0x3dc094u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 192)));
    // 0x3dc098: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3dc098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dc09c: 0x256800c4  addiu       $t0, $t3, 0xC4
    ctx->pc = 0x3dc09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 196));
label_3dc0a0:
    // 0x3dc0a0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3dc0a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3dc0a4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3dc0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3dc0a8: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x3dc0a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3dc0ac: 0x29450080  slti        $a1, $t2, 0x80
    ctx->pc = 0x3dc0acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3dc0b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3dc0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3dc0b4: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x3dc0b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dc0b8: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x3dc0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3dc0bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3dc0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3dc0c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3dc0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3dc0c4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3dc0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3dc0c8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3DC0C8u;
    {
        const bool branch_taken_0x3dc0c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0C8u;
        // 0x3dc0cc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0c8) {
            ctx->pc = 0x3DC0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc0a0;
        }
    }
    ctx->pc = 0x3DC0D0u;
    // 0x3dc0d0: 0x29420100  slti        $v0, $t2, 0x100
    ctx->pc = 0x3dc0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3dc0d4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3DC0D4u;
    {
        const bool branch_taken_0x3dc0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0D4u;
        // 0x3dc0d8: 0x66082  srl         $t4, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0d4) {
            ctx->pc = 0x3DC190u;
            goto label_3dc190;
        }
    }
    ctx->pc = 0x3DC0DCu;
    // 0x3dc0dc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x3dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3dc0e0: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x3dc0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dc0e4: 0x252a0400  addiu       $t2, $t1, 0x400
    ctx->pc = 0x3dc0e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x3dc0e8: 0x1451823  subu        $v1, $t2, $a1
    ctx->pc = 0x3dc0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3dc0ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dc0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc0f0: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x3dc0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3dc0f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DC0F4u;
    {
        const bool branch_taken_0x3dc0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0F4u;
        // 0x3dc0f8: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0f4) {
            ctx->pc = 0x3DC144u;
            goto label_3dc144;
        }
    }
    ctx->pc = 0x3DC0FCu;
    // 0x3dc0fc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3DC0FCu;
    {
        const bool branch_taken_0x3dc0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0FCu;
        // 0x3dc100: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0fc) {
            ctx->pc = 0x3DC15Cu;
            goto label_3dc15c;
        }
    }
    ctx->pc = 0x3DC104u;
    // 0x3dc104: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC104u;
    {
        const bool branch_taken_0x3dc104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc104) {
            ctx->pc = 0x3DC108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC104u;
            // 0x3dc108: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC148u;
            goto label_3dc148;
        }
    }
    ctx->pc = 0x3DC10Cu;
    // 0x3dc10c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3dc10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3dc110: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC110u;
    {
        const bool branch_taken_0x3dc110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc110) {
            ctx->pc = 0x3DC114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC110u;
            // 0x3dc114: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC138u;
            goto label_3dc138;
        }
    }
    ctx->pc = 0x3DC118u;
    // 0x3dc118: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x3dc118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3dc11c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC11Cu;
    {
        const bool branch_taken_0x3dc11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc11c) {
            ctx->pc = 0x3DC120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC11Cu;
            // 0x3dc120: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC160u;
            goto label_3dc160;
        }
    }
    ctx->pc = 0x3DC124u;
    // 0x3dc124: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3dc124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dc128: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dc128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3dc12c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3dc12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3dc130: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dc130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc134: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3dc134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3dc138:
    // 0x3dc138: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dc138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3dc13c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3dc140: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3dc140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3dc144:
    // 0x3dc144: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3dc144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3dc148:
    // 0x3dc148: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dc148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3dc14c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dc14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3dc150: 0xaa402a  slt         $t0, $a1, $t2
    ctx->pc = 0x3dc150u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3dc154: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DC154u;
    {
        const bool branch_taken_0x3dc154 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC154u;
        // 0x3dc158: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc154) {
            ctx->pc = 0x3DC190u;
            goto label_3dc190;
        }
    }
    ctx->pc = 0x3DC15Cu;
label_3dc15c:
    // 0x3dc15c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dc15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc160:
    // 0x3dc160: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3dc160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dc164: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3dc164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3dc168: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x3dc168u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3dc16c: 0xaa402a  slt         $t0, $a1, $t2
    ctx->pc = 0x3dc16cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3dc170: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3dc170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3dc174: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x3dc174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc178: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x3dc178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3dc17c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3dc17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3dc180: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3dc180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3dc184: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3dc184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3dc188: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3DC188u;
    {
        const bool branch_taken_0x3dc188 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC188u;
        // 0x3dc18c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc188) {
            ctx->pc = 0x3DC160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc160;
        }
    }
    ctx->pc = 0x3DC190u;
label_3dc190:
    // 0x3dc190: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3dc190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3dc194: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3dc194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3dc198: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC198u;
        // 0x3dc19c: 0xa1620024  sb          $v0, 0x24($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC1A0u;
}
