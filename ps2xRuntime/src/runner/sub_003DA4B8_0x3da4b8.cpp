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

// Function: sub_003DA4B8
// Address: 0x3da4b8 - 0x3dac30
void sub_003DA4B8_0x3da4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA4B8_0x3da4b8");
#endif

    switch (ctx->pc) {
        case 0x3da530u: goto label_3da530;
        case 0x3da624u: goto label_3da624;
        default: break;
    }

    ctx->pc = 0x3da4b8u;

    // 0x3da4b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3da4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3da4bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3da4bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3da4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3da4c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3da4c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3da4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3da4cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3da4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3da4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3da4d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3da4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3da4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3da4dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3da4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3da4e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3da4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3da4e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3da4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3da4e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3da4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3da4ec: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3da4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3da4f0: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x3da4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x3da4f4: 0x96580002  lhu         $t8, 0x2($s2)
    ctx->pc = 0x3da4f4u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3da4f8: 0x17000003  bnez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA4F8u;
    {
        const bool branch_taken_0x3da4f8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4F8u;
        // 0x3da4fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4f8) {
            ctx->pc = 0x3DA508u;
            goto label_3da508;
        }
    }
    ctx->pc = 0x3DA500u;
    // 0x3da500: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x3da500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3da504: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3da504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3da508:
    // 0x3da508: 0x62001be  bltz        $s1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x3DA508u;
    {
        const bool branch_taken_0x3da508 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3DA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA508u;
        // 0x3da50c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da508) {
            ctx->pc = 0x3DAC04u;
            goto label_3dac04;
        }
    }
    ctx->pc = 0x3DA510u;
    // 0x3da510: 0x25100a8e  addiu       $s0, $t0, 0xA8E
    ctx->pc = 0x3da510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 2702));
    // 0x3da514: 0x25190a8c  addiu       $t9, $t0, 0xA8C
    ctx->pc = 0x3da514u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 2700));
    // 0x3da518: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3da518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da51c: 0x320a02d  daddu       $s4, $t9, $zero
    ctx->pc = 0x3da51cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da520: 0x2415000e  addiu       $s5, $zero, 0xE
    ctx->pc = 0x3da520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3da524: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x3da524u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3da528: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x3da528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3da52c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x3da52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_3da530:
    // 0x3da530: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x3da530u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da534: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3da534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3da538: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3da538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3da53c: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x3da53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA540u;
    {
        const bool branch_taken_0x3da540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA540u;
        // 0x3da544: 0x94780006  lhu         $t8, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da540) {
            ctx->pc = 0x3DA550u;
            goto label_3da550;
        }
    }
    ctx->pc = 0x3DA548u;
    // 0x3da548: 0x11f801aa  beq         $t7, $t8, . + 4 + (0x1AA << 2)
    ctx->pc = 0x3DA548u;
    {
        const bool branch_taken_0x3da548 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 24));
        ctx->pc = 0x3DA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA548u;
        // 0x3da54c: 0x25ab0001  addiu       $t3, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da548) {
            ctx->pc = 0x3DABF4u;
            goto label_3dabf4;
        }
    }
    ctx->pc = 0x3DA550u;
label_3da550:
    // 0x3da550: 0x184102a  slt         $v0, $t4, $a0
    ctx->pc = 0x3da550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3da554: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x3DA554u;
    {
        const bool branch_taken_0x3da554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA554u;
        // 0x3da558: 0x25ab0001  addiu       $t3, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da554) {
            ctx->pc = 0x3DA76Cu;
            goto label_3da76c;
        }
    }
    ctx->pc = 0x3DA55Cu;
    // 0x3da55c: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x3da55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x3da560: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x3da560u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3da564: 0x2835021  addu        $t2, $s4, $v1
    ctx->pc = 0x3da564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3da568: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x3da568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x3da56c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3DA56Cu;
    {
        const bool branch_taken_0x3da56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA56Cu;
        // 0x3da570: 0x2637021  addu        $t6, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da56c) {
            ctx->pc = 0x3DA620u;
            goto label_3da620;
        }
    }
    ctx->pc = 0x3DA574u;
    // 0x3da574: 0x95c90000  lhu         $t1, 0x0($t6)
    ctx->pc = 0x3da574u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3da578: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3da578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da57c: 0x1a91023  subu        $v0, $t5, $t1
    ctx->pc = 0x3da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x3da580: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3da580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da584: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA584u;
    {
        const bool branch_taken_0x3da584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da584) {
            ctx->pc = 0x3DA588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA584u;
            // 0x3da588: 0x95420000  lhu         $v0, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA5F8u;
            goto label_3da5f8;
        }
    }
    ctx->pc = 0x3DA58Cu;
    // 0x3da58c: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x3da58cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3da590: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da594: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3da594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da598: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3da598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da59c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da5a0: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3da5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da5a4: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da5a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3da5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3da5ac: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da5b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3da5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da5b4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3da5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da5b8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3da5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da5bc: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3da5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3da5c0: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da5c4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da5c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da5cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da5d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da5d4: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da5d8: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da5dc: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x3da5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da5e0: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x3da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3da5e4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3da5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3da5e8: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3da5e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3da5ec: 0xad0316d4  sw          $v1, 0x16D4($t0)
    ctx->pc = 0x3da5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 3));
    // 0x3da5f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA5F0u;
    {
        const bool branch_taken_0x3da5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5F0u;
        // 0x3da5f4: 0xa50616d0  sh          $a2, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da5f0) {
            ctx->pc = 0x3DA610u;
            goto label_3da610;
        }
    }
    ctx->pc = 0x3DA5F8u;
label_3da5f8:
    // 0x3da5f8: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3da5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3da5fc: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da600: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3da600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da604: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da604u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3da608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da60c: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da60cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3da610:
    // 0x3da610: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3da610u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3da614: 0x5180016c  beql        $t4, $zero, . + 4 + (0x16C << 2)
    ctx->pc = 0x3DA614u;
    {
        const bool branch_taken_0x3da614 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da614) {
            ctx->pc = 0x3DA618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA614u;
            // 0x3da618: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DABC8u;
            goto label_3dabc8;
        }
    }
    ctx->pc = 0x3DA61Cu;
    // 0x3da61c: 0x0  nop
    ctx->pc = 0x3da61cu;
    // NOP
label_3da620:
    // 0x3da620: 0x95c90000  lhu         $t1, 0x0($t6)
    ctx->pc = 0x3da620u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_3da624:
    // 0x3da624: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3da624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da628: 0x1a91023  subu        $v0, $t5, $t1
    ctx->pc = 0x3da628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x3da62c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3da62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da630: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA630u;
    {
        const bool branch_taken_0x3da630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da630) {
            ctx->pc = 0x3DA634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA630u;
            // 0x3da634: 0x95420000  lhu         $v0, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA6A4u;
            goto label_3da6a4;
        }
    }
    ctx->pc = 0x3DA638u;
    // 0x3da638: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x3da638u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3da63c: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da640: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3da640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da644: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3da644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da64c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3da64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da650: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da650u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da654: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3da654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3da658: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da65c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3da65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da660: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x3da660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da664: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3da664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da668: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3da668u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3da66c: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da66cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da670: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da674: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3da678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3da67c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da680: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da684: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da688: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x3da688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da68c: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x3da68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3da690: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3da690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3da694: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3da694u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3da698: 0xad0316d4  sw          $v1, 0x16D4($t0)
    ctx->pc = 0x3da698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 3));
    // 0x3da69c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA69Cu;
    {
        const bool branch_taken_0x3da69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA69Cu;
        // 0x3da6a0: 0xa50616d0  sh          $a2, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da69c) {
            ctx->pc = 0x3DA6BCu;
            goto label_3da6bc;
        }
    }
    ctx->pc = 0x3DA6A4u;
label_3da6a4:
    // 0x3da6a4: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3da6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3da6a8: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da6a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da6ac: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3da6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da6b0: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3da6b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da6b8: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3da6bc:
    // 0x3da6bc: 0x95c90000  lhu         $t1, 0x0($t6)
    ctx->pc = 0x3da6bcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3da6c0: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3da6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da6c4: 0x1a91023  subu        $v0, $t5, $t1
    ctx->pc = 0x3da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x3da6c8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3da6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da6cc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA6CCu;
    {
        const bool branch_taken_0x3da6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da6cc) {
            ctx->pc = 0x3DA6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA6CCu;
            // 0x3da6d0: 0x95420000  lhu         $v0, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA740u;
            goto label_3da740;
        }
    }
    ctx->pc = 0x3DA6D4u;
    // 0x3da6d4: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x3da6d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3da6d8: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da6dc: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3da6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da6e0: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3da6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da6e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da6e8: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3da6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da6ec: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da6f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3da6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3da6f4: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da6f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3da6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da6fc: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x3da6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da700: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3da700u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da704: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3da704u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3da708: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da70c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da710: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da714: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3da714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3da718: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da71c: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da71cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da720: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da724: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x3da724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da728: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x3da728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3da72c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3da72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3da730: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3da730u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3da734: 0xad0316d4  sw          $v1, 0x16D4($t0)
    ctx->pc = 0x3da734u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 3));
    // 0x3da738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA738u;
    {
        const bool branch_taken_0x3da738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA738u;
        // 0x3da73c: 0xa50616d0  sh          $a2, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da738) {
            ctx->pc = 0x3DA758u;
            goto label_3da758;
        }
    }
    ctx->pc = 0x3DA740u;
label_3da740:
    // 0x3da740: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3da740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3da744: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da748: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3da748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da74c: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da74cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3da750: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da754: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da754u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3da758:
    // 0x3da758: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x3da758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x3da75c: 0x5580ffb1  bnel        $t4, $zero, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3DA75Cu;
    {
        const bool branch_taken_0x3da75c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da75c) {
            ctx->pc = 0x3DA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA75Cu;
            // 0x3da760: 0x95c90000  lhu         $t1, 0x0($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da624;
        }
    }
    ctx->pc = 0x3DA764u;
    // 0x3da764: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x3DA764u;
    {
        const bool branch_taken_0x3da764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA764u;
        // 0x3da768: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da764) {
            ctx->pc = 0x3DABC8u;
            goto label_3dabc8;
        }
    }
    ctx->pc = 0x3DA76Cu;
label_3da76c:
    // 0x3da76c: 0x11e0007a  beqz        $t7, . + 4 + (0x7A << 2)
    ctx->pc = 0x3DA76Cu;
    {
        const bool branch_taken_0x3da76c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA76Cu;
        // 0x3da770: 0x2982000b  slti        $v0, $t4, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da76c) {
            ctx->pc = 0x3DA958u;
            goto label_3da958;
        }
    }
    ctx->pc = 0x3DA774u;
    // 0x3da774: 0x11e6002d  beq         $t7, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x3DA774u;
    {
        const bool branch_taken_0x3da774 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 6));
        ctx->pc = 0x3DA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA774u;
        // 0x3da778: 0xf2080  sll         $a0, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da774) {
            ctx->pc = 0x3DA82Cu;
            goto label_3da82c;
        }
    }
    ctx->pc = 0x3DA77Cu;
    // 0x3da77c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3da77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3da780: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x3da780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3da784: 0x8d0716d4  lw          $a3, 0x16D4($t0)
    ctx->pc = 0x3da784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da788: 0x94690000  lhu         $t1, 0x0($v1)
    ctx->pc = 0x3da788u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3da78c: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x3da78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3da790: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3da790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3da794: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA794u;
    {
        const bool branch_taken_0x3da794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA794u;
        // 0x3da798: 0x3241021  addu        $v0, $t9, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da794) {
            ctx->pc = 0x3DA808u;
            goto label_3da808;
        }
    }
    ctx->pc = 0x3DA79Cu;
    // 0x3da79c: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da79cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da7a0: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x3da7a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da7a4: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3da7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da7a8: 0xe61004  sllv        $v0, $a2, $a3
    ctx->pc = 0x3da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x3da7ac: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3da7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da7b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da7b4: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
    // 0x3da7b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3da7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3da7bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3da7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da7c0: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da7c4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3da7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da7c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3da7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da7cc: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3da7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3da7d0: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da7d4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da7d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da7dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da7e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da7e4: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da7e8: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da7ec: 0x1421823  subu        $v1, $t2, $v0
    ctx->pc = 0x3da7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3da7f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3da7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da7f4: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3da7f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3da7f8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3da7fc: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3da7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3da800: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA800u;
    {
        const bool branch_taken_0x3da800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA800u;
        // 0x3da804: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da800) {
            ctx->pc = 0x3DA828u;
            goto label_3da828;
        }
    }
    ctx->pc = 0x3DA808u;
label_3da808:
    // 0x3da808: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x3da808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x3da80c: 0x950516d0  lhu         $a1, 0x16D0($t0)
    ctx->pc = 0x3da80cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da810: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3da810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3da814: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x3da814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3da818: 0xad0216d4  sw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da818u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
    // 0x3da81c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x3da81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x3da820: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3da820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3da824: 0xa50516d0  sh          $a1, 0x16D0($t0)
    ctx->pc = 0x3da824u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 5));
label_3da828:
    // 0x3da828: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3da828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_3da82c:
    // 0x3da82c: 0x95090ace  lhu         $t1, 0xACE($t0)
    ctx->pc = 0x3da82cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2766)));
    // 0x3da830: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3da830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3da834: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3da834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da838: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x3da838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3da83c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3da83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da840: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA840u;
    {
        const bool branch_taken_0x3da840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da840) {
            ctx->pc = 0x3DA844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA840u;
            // 0x3da844: 0x95020acc  lhu         $v0, 0xACC($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2764)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA8B4u;
            goto label_3da8b4;
        }
    }
    ctx->pc = 0x3DA848u;
    // 0x3da848: 0x95060acc  lhu         $a2, 0xACC($t0)
    ctx->pc = 0x3da848u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2764)));
    // 0x3da84c: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da850: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3da850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da854: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3da854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da85c: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3da85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da860: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da860u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da864: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3da864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3da868: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da86c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3da86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da870: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3da870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da874: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3da874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da878: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3da878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3da87c: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da880: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da884: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da884u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da888: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da88c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da88cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da890: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da890u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da894: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da898: 0x1421823  subu        $v1, $t2, $v0
    ctx->pc = 0x3da898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3da89c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3da89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da8a0: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3da8a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3da8a4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3da8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3da8a8: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3da8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3da8ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA8ACu;
    {
        const bool branch_taken_0x3da8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8ACu;
        // 0x3da8b0: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8ac) {
            ctx->pc = 0x3DA8CCu;
            goto label_3da8cc;
        }
    }
    ctx->pc = 0x3DA8B4u;
label_3da8b4:
    // 0x3da8b4: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3da8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3da8b8: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da8bc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da8c0: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3da8c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da8c8: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3da8cc:
    // 0x3da8cc: 0x8d0416d4  lw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da8d0: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x3da8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3da8d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DA8D4u;
    {
        const bool branch_taken_0x3da8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8D4u;
        // 0x3da8d8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8d4) {
            ctx->pc = 0x3DA940u;
            goto label_3da940;
        }
    }
    ctx->pc = 0x3DA8DCu;
    // 0x3da8dc: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da8e0: 0x2586fffd  addiu       $a2, $t4, -0x3
    ctx->pc = 0x3da8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967293));
    // 0x3da8e4: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x3da8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3da8e8: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3da8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da8ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da8f0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3da8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da8f4: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da8f8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3da8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3da8fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3da8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3da900: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3da900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3da904: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3da908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da90c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3da90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da910: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3da910u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da914: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3da914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3da918: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da91c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da920: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da924: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da928: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da92c: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da92cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da930: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da934: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x3da934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3da938: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x3DA938u;
    {
        const bool branch_taken_0x3da938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA938u;
        // 0x3da93c: 0x2442fff2  addiu       $v0, $v0, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da938) {
            ctx->pc = 0x3DAB94u;
            goto label_3dab94;
        }
    }
    ctx->pc = 0x3DA940u;
label_3da940:
    // 0x3da940: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da944: 0x2582fffd  addiu       $v0, $t4, -0x3
    ctx->pc = 0x3da944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967293));
    // 0x3da948: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3da948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3da94c: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3da94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3da950: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x3DA950u;
    {
        const bool branch_taken_0x3da950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA950u;
        // 0x3da954: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da950) {
            ctx->pc = 0x3DABB8u;
            goto label_3dabb8;
        }
    }
    ctx->pc = 0x3DA958u;
label_3da958:
    // 0x3da958: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3DA958u;
    {
        const bool branch_taken_0x3da958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA958u;
        // 0x3da95c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da958) {
            ctx->pc = 0x3DAA88u;
            goto label_3daa88;
        }
    }
    ctx->pc = 0x3DA960u;
    // 0x3da960: 0x95090ad2  lhu         $t1, 0xAD2($t0)
    ctx->pc = 0x3da960u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2770)));
    // 0x3da964: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3da964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da968: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x3da968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3da96c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3da96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3da970: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DA970u;
    {
        const bool branch_taken_0x3da970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da970) {
            ctx->pc = 0x3DA974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA970u;
            // 0x3da974: 0x95020ad0  lhu         $v0, 0xAD0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA9E4u;
            goto label_3da9e4;
        }
    }
    ctx->pc = 0x3DA978u;
    // 0x3da978: 0x95060ad0  lhu         $a2, 0xAD0($t0)
    ctx->pc = 0x3da978u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2768)));
    // 0x3da97c: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da980: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3da980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da984: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3da984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da988: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3da988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3da98c: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3da98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3da990: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3da990u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da994: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3da994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3da998: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3da998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da99c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3da99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da9a0: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3da9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3da9a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3da9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da9a8: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3da9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3da9ac: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da9b0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3da9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3da9b4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3da9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3da9b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3da9bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3da9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da9c0: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3da9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3da9c4: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3da9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3da9c8: 0x1421823  subu        $v1, $t2, $v0
    ctx->pc = 0x3da9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3da9cc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3da9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3da9d0: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3da9d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3da9d4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3da9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3da9d8: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3da9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3da9dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA9DCu;
    {
        const bool branch_taken_0x3da9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9DCu;
        // 0x3da9e0: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9dc) {
            ctx->pc = 0x3DA9FCu;
            goto label_3da9fc;
        }
    }
    ctx->pc = 0x3DA9E4u;
label_3da9e4:
    // 0x3da9e4: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3da9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3da9e8: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3da9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3da9ec: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3da9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3da9f0: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3da9f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3da9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3da9f8: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3da9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3da9fc:
    // 0x3da9fc: 0x8d0416d4  lw          $a0, 0x16D4($t0)
    ctx->pc = 0x3da9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3daa00: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x3daa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3daa04: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DAA04u;
    {
        const bool branch_taken_0x3daa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA04u;
        // 0x3daa08: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa04) {
            ctx->pc = 0x3DAA70u;
            goto label_3daa70;
        }
    }
    ctx->pc = 0x3DAA0Cu;
    // 0x3daa0c: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3daa0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daa10: 0x2586fffd  addiu       $a2, $t4, -0x3
    ctx->pc = 0x3daa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967293));
    // 0x3daa14: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x3daa14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3daa18: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3daa18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3daa1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3daa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3daa20: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3daa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3daa24: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3daa24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daa28: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3daa28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3daa2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3daa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3daa30: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3daa30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3daa34: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3daa34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daa38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3daa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3daa3c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3daa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3daa40: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3daa40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daa44: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3daa44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3daa48: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3daa48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daa4c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3daa50: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3daa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3daa54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3daa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3daa58: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3daa58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daa5c: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3daa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3daa60: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3daa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3daa64: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x3daa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3daa68: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3DAA68u;
    {
        const bool branch_taken_0x3daa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA68u;
        // 0x3daa6c: 0x2442fff3  addiu       $v0, $v0, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa68) {
            ctx->pc = 0x3DAB94u;
            goto label_3dab94;
        }
    }
    ctx->pc = 0x3DAA70u;
label_3daa70:
    // 0x3daa70: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3daa70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daa74: 0x2582fffd  addiu       $v0, $t4, -0x3
    ctx->pc = 0x3daa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967293));
    // 0x3daa78: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3daa78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3daa7c: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3daa7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3daa80: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3DAA80u;
    {
        const bool branch_taken_0x3daa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA80u;
        // 0x3daa84: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa80) {
            ctx->pc = 0x3DABB8u;
            goto label_3dabb8;
        }
    }
    ctx->pc = 0x3DAA88u;
label_3daa88:
    // 0x3daa88: 0x95090ad6  lhu         $t1, 0xAD6($t0)
    ctx->pc = 0x3daa88u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2774)));
    // 0x3daa8c: 0x8d0516d4  lw          $a1, 0x16D4($t0)
    ctx->pc = 0x3daa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3daa90: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x3daa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3daa94: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3daa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3daa98: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DAA98u;
    {
        const bool branch_taken_0x3daa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daa98) {
            ctx->pc = 0x3DAA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DAA98u;
            // 0x3daa9c: 0x95020ad4  lhu         $v0, 0xAD4($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DAB0Cu;
            goto label_3dab0c;
        }
    }
    ctx->pc = 0x3DAAA0u;
    // 0x3daaa0: 0x95060ad4  lhu         $a2, 0xAD4($t0)
    ctx->pc = 0x3daaa0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2772)));
    // 0x3daaa4: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3daaa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daaa8: 0xa61804  sllv        $v1, $a2, $a1
    ctx->pc = 0x3daaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3daaac: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3daaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3daab0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3daab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3daab4: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3daab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3daab8: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3daab8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daabc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3daabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3daac0: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3daac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3daac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3daac8: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3daac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3daacc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3daaccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daad0: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3daad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3daad4: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3daad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daad8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3daad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3daadc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3daadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3daae0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3daae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3daae4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3daae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daae8: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3daae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3daaec: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3daaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3daaf0: 0x1421823  subu        $v1, $t2, $v0
    ctx->pc = 0x3daaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3daaf4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3daaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3daaf8: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3daaf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3daafc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3daafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3dab00: 0xa50616d0  sh          $a2, 0x16D0($t0)
    ctx->pc = 0x3dab00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dab04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DAB04u;
    {
        const bool branch_taken_0x3dab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB04u;
        // 0x3dab08: 0xad0216d4  sw          $v0, 0x16D4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab04) {
            ctx->pc = 0x3DAB24u;
            goto label_3dab24;
        }
    }
    ctx->pc = 0x3DAB0Cu;
label_3dab0c:
    // 0x3dab0c: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3dab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3dab10: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dab10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dab14: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3dab14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3dab18: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dab18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dab1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dab1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dab20: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3dab20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3dab24:
    // 0x3dab24: 0x8d0416d4  lw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dab28: 0x2e4102a  slt         $v0, $s7, $a0
    ctx->pc = 0x3dab28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3dab2c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAB2Cu;
    {
        const bool branch_taken_0x3dab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB2Cu;
        // 0x3dab30: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab2c) {
            ctx->pc = 0x3DABA4u;
            goto label_3daba4;
        }
    }
    ctx->pc = 0x3DAB34u;
    // 0x3dab34: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dab34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dab38: 0x2586fff5  addiu       $a2, $t4, -0xB
    ctx->pc = 0x3dab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967285));
    // 0x3dab3c: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x3dab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dab40: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x3dab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dab44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dab48: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3dab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dab4c: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dab4cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dab50: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3dab50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3dab54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dab58: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3dab58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3dab5c: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dab5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dab60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dab64: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3dab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dab68: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3dab68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dab6c: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dab70: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dab70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dab74: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dab78: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dab7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dab80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dab80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dab84: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x3dab84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x3dab88: 0x8d0216d4  lw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dab8c: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x3dab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3dab90: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x3dab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_3dab94:
    // 0x3dab94: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3dab94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3dab98: 0xad0216d4  sw          $v0, 0x16D4($t0)
    ctx->pc = 0x3dab98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 2));
    // 0x3dab9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DAB9Cu;
    {
        const bool branch_taken_0x3dab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB9Cu;
        // 0x3daba0: 0xa50616d0  sh          $a2, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab9c) {
            ctx->pc = 0x3DABC4u;
            goto label_3dabc4;
        }
    }
    ctx->pc = 0x3DABA4u;
label_3daba4:
    // 0x3daba4: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3daba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3daba8: 0x2582fff5  addiu       $v0, $t4, -0xB
    ctx->pc = 0x3daba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967285));
    // 0x3dabac: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3dabacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dabb0: 0x25ab0001  addiu       $t3, $t5, 0x1
    ctx->pc = 0x3dabb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3dabb4: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x3dabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_3dabb8:
    // 0x3dabb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dabb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dabbc: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dabbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dabc0: 0xa50316d0  sh          $v1, 0x16D0($t0)
    ctx->pc = 0x3dabc0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3dabc4:
    // 0x3dabc4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3dabc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dabc8:
    // 0x3dabc8: 0x17000004  bnez        $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DABC8u;
    {
        const bool branch_taken_0x3dabc8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABC8u;
        // 0x3dabcc: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabc8) {
            ctx->pc = 0x3DABDCu;
            goto label_3dabdc;
        }
    }
    ctx->pc = 0x3DABD0u;
    // 0x3dabd0: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x3dabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3dabd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DABD4u;
    {
        const bool branch_taken_0x3dabd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABD4u;
        // 0x3dabd8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabd4) {
            ctx->pc = 0x3DABF4u;
            goto label_3dabf4;
        }
    }
    ctx->pc = 0x3DABDCu;
label_3dabdc:
    // 0x3dabdc: 0x15f80004  bne         $t7, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DABDCu;
    {
        const bool branch_taken_0x3dabdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 24));
        ctx->pc = 0x3DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABDCu;
        // 0x3dabe0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabdc) {
            ctx->pc = 0x3DABF0u;
            goto label_3dabf0;
        }
    }
    ctx->pc = 0x3DABE4u;
    // 0x3dabe4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3dabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3dabe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DABE8u;
    {
        const bool branch_taken_0x3dabe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABE8u;
        // 0x3dabec: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabe8) {
            ctx->pc = 0x3DABF4u;
            goto label_3dabf4;
        }
    }
    ctx->pc = 0x3DABF0u;
label_3dabf0:
    // 0x3dabf0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3dabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dabf4:
    // 0x3dabf4: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x3dabf4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dabf8: 0x22d102a  slt         $v0, $s1, $t5
    ctx->pc = 0x3dabf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3dabfc: 0x1040fe4c  beqz        $v0, . + 4 + (-0x1B4 << 2)
    ctx->pc = 0x3DABFCu;
    {
        const bool branch_taken_0x3dabfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABFCu;
        // 0x3dac00: 0xd1880  sll         $v1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabfc) {
            ctx->pc = 0x3DA530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da530;
        }
    }
    ctx->pc = 0x3DAC04u;
label_3dac04:
    // 0x3dac04: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3dac04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3dac08: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3dac08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3dac0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3dac0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dac10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dac10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dac14: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3dac14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dac18: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3dac18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dac1c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3dac1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dac20: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x3dac20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dac24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC24u;
        // 0x3dac28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAC2Cu;
    // 0x3dac2c: 0x0  nop
    ctx->pc = 0x3dac2cu;
    // NOP
    ctx->pc = 0x3dac30u;
}
