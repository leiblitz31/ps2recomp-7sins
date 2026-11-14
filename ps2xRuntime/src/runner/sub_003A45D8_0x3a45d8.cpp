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

// Function: sub_003A45D8
// Address: 0x3a45d8 - 0x3a4cd8
void sub_003A45D8_0x3a45d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A45D8_0x3a45d8");
#endif

    switch (ctx->pc) {
        case 0x3a4700u: goto label_3a4700;
        case 0x3a4750u: goto label_3a4750;
        case 0x3a4850u: goto label_3a4850;
        case 0x3a4898u: goto label_3a4898;
        case 0x3a4970u: goto label_3a4970;
        case 0x3a49c0u: goto label_3a49c0;
        case 0x3a4ad4u: goto label_3a4ad4;
        case 0x3a4ae0u: goto label_3a4ae0;
        case 0x3a4b30u: goto label_3a4b30;
        case 0x3a4c10u: goto label_3a4c10;
        case 0x3a4c84u: goto label_3a4c84;
        case 0x3a4c90u: goto label_3a4c90;
        default: break;
    }

    ctx->pc = 0x3a45d8u;

label_3a45d8:
    // 0x3a45d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a45d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3a45dc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3a45dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a45e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a45e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3a45e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a45e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3a45e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a45e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3a45ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3a45f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3a45f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a45f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3a45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3a45fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3a45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3a4600: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3a4600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3a4604: 0x8dc20030  lw          $v0, 0x30($t6)
    ctx->pc = 0x3a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x3a4608: 0x8dd60008  lw          $s6, 0x8($t6)
    ctx->pc = 0x3a4608u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a460c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4610: 0x246f0018  addiu       $t7, $v1, 0x18
    ctx->pc = 0x3a4610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3a4614: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x3a4614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x3a4618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a461c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a4620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A4620u;
    {
        const bool branch_taken_0x3a4620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4620u;
        // 0x3a4624: 0x8dfe000c  lw          $fp, 0xC($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4620) {
            ctx->pc = 0x3A4650u;
            goto label_3a4650;
        }
    }
    ctx->pc = 0x3A4628u;
    // 0x3a4628: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3a4628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3a462c: 0x2443bc38  addiu       $v1, $v0, -0x43C8
    ctx->pc = 0x3a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949944));
    // 0x3a4630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a4630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4634: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x3a4634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3a4638: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x3a4638u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x5FBC3Fu));
    // 0x3a463c: 0x90740008  lbu         $s4, 0x8($v1)
    ctx->pc = 0x3a463cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x5FBC40u));
    // 0x3a4640: 0x24720009  addiu       $s2, $v1, 0x9
    ctx->pc = 0x3a4640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x3a4644: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A4644u;
    {
        const bool branch_taken_0x3a4644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4644u;
        // 0x3a4648: 0x2471000c  addiu       $s1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4644) {
            ctx->pc = 0x3A4670u;
            goto label_3a4670;
        }
    }
    ctx->pc = 0x3A464Cu;
    // 0x3a464c: 0x0  nop
    ctx->pc = 0x3a464cu;
    // NOP
label_3a4650:
    // 0x3a4650: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3a4650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3a4654: 0x2443bc38  addiu       $v1, $v0, -0x43C8
    ctx->pc = 0x3a4654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949944));
    // 0x3a4658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a4658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a465c: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x3a465cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x5FBC3Au));
    // 0x3a4660: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x3a4660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3a4664: 0x90740003  lbu         $s4, 0x3($v1)
    ctx->pc = 0x3a4664u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x5FBC3Bu));
    // 0x3a4668: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x3a4668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a466c: 0x24710005  addiu       $s1, $v1, 0x5
    ctx->pc = 0x3a466cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_3a4670:
    // 0x3a4670: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x3a4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x3a4674: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a4674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a4678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a467c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3a467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a4680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4680u;
    {
        const bool branch_taken_0x3a4680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4680u;
        // 0x3a4684: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4680) {
            ctx->pc = 0x3A4690u;
            goto label_3a4690;
        }
    }
    ctx->pc = 0x3A4688u;
    // 0x3a4688: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3a468c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3a468cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a4690:
    // 0x3a4690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a4694: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3a4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3a4698: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4698u;
    {
        const bool branch_taken_0x3a4698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4698u;
        // 0x3a469c: 0x24b8bc38  addiu       $t8, $a1, -0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4698) {
            ctx->pc = 0x3A46B4u;
            goto label_3a46b4;
        }
    }
    ctx->pc = 0x3A46A0u;
    // 0x3a46a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a46a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46a4: 0x8dc3002c  lw          $v1, 0x2C($t6)
    ctx->pc = 0x3a46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    // 0x3a46a8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3a46a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a46acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46b0: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x3a46b0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a46b4:
    // 0x3a46b4: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x3a46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
    // 0x3a46b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a46bc: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A46BCu;
    {
        const bool branch_taken_0x3a46bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a46bc) {
            ctx->pc = 0x3A46C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A46BCu;
            // 0x3a46c0: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4804u;
            goto label_3a4804;
        }
    }
    ctx->pc = 0x3A46C4u;
    // 0x3a46c4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3a46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3a46c8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a46c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a46cc: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x3A46CCu;
    {
        const bool branch_taken_0x3a46cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a46cc) {
            ctx->pc = 0x3A46D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A46CCu;
            // 0x3a46d0: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4804u;
            goto label_3a4804;
        }
    }
    ctx->pc = 0x3A46D4u;
    // 0x3a46d4: 0x8de20098  lw          $v0, 0x98($t7)
    ctx->pc = 0x3a46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
    // 0x3a46d8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a46d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46dc: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a46e0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3a46e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a46e8: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x3a46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3a46ec: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a46ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a46f0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3a46f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a46f4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3a46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3a46f8: 0x19400041  blez        $t2, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A46F8u;
    {
        const bool branch_taken_0x3a46f8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46F8u;
        // 0x3a46fc: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46f8) {
            ctx->pc = 0x3A4800u;
            goto label_3a4800;
        }
    }
    ctx->pc = 0x3A4700u;
label_3a4700:
    // 0x3a4700: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x3a4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3a4704: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3a4704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a4708: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4708u;
    {
        const bool branch_taken_0x3a4708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4708) {
            ctx->pc = 0x3A470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4708u;
            // 0x3a470c: 0x8de50090  lw          $a1, 0x90($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A472Cu;
            goto label_3a472c;
        }
    }
    ctx->pc = 0x3A4710u;
    // 0x3a4710: 0x85e200a4  lh          $v0, 0xA4($t7)
    ctx->pc = 0x3a4710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 164)));
    // 0x3a4714: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4718: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a4718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a471c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a471cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4720: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a4720u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a4724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4724u;
    {
        const bool branch_taken_0x3a4724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4724u;
        // 0x3a4728: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4724) {
            ctx->pc = 0x3A4734u;
            goto label_3a4734;
        }
    }
    ctx->pc = 0x3A472Cu;
label_3a472c:
    // 0x3a472c: 0xb31023  subu        $v0, $a1, $s3
    ctx->pc = 0x3a472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3a4730: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a4730u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a4734:
    // 0x3a4734: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a4734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4738: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A4738u;
    {
        const bool branch_taken_0x3a4738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4738u;
        // 0x3a473c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4738) {
            ctx->pc = 0x3A47E8u;
            goto label_3a47e8;
        }
    }
    ctx->pc = 0x3A4740u;
    // 0x3a4740: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a4740u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4744: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a4744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4748: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x3a4748u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a474c: 0x0  nop
    ctx->pc = 0x3a474cu;
    // NOP
label_3a4750:
    // 0x3a4750: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x3a4750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a4754: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x3a4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x3a4758: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a4758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a475c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a475cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a4760: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a4760u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4764: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a4764u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a4768: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a4768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a476c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a476cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a4770: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a4770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a4774: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a4774u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a4778: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a477c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a477cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a4780: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a4780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4784: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a4784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4788: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a4788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a478c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a478cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a4790: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a4790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a4794: 0x600013  mtlo        $v1
    ctx->pc = 0x3a4794u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3a4798: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a479c: 0x70591000  madd        $v0, $v0, $t9
    ctx->pc = 0x3a479cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a47a0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x3a47a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3a47a4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x3a47a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3a47a8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3a47a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a47ac: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x3a47acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a47b0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x3a47b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a47b4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3a47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3a47b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3a47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a47bc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a47bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a47c0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a47c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a47c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3a47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a47c8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a47c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a47cc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a47ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a47d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3a47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a47d4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a47d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a47d8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a47d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a47dc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a47dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a47e0: 0x14a0ffdb  bnez        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3A47E0u;
    {
        const bool branch_taken_0x3a47e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47E0u;
        // 0x3a47e4: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47e0) {
            ctx->pc = 0x3A4750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4750;
        }
    }
    ctx->pc = 0x3A47E8u;
label_3a47e8:
    // 0x3a47e8: 0x85e200a0  lh          $v0, 0xA0($t7)
    ctx->pc = 0x3a47e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x3a47ec: 0x1334823  subu        $t1, $t1, $s3
    ctx->pc = 0x3a47ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x3a47f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a47f4: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a47f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a47f8: 0x1d40ffc1  bgtz        $t2, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3A47F8u;
    {
        const bool branch_taken_0x3a47f8 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47F8u;
        // 0x3a47fc: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47f8) {
            ctx->pc = 0x3A4700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4700;
        }
    }
    ctx->pc = 0x3A4800u;
label_3a4800:
    // 0x3a4800: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x3a4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_3a4804:
    // 0x3a4804: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3a4804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3a4808: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A4808u;
    {
        const bool branch_taken_0x3a4808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4808) {
            ctx->pc = 0x3A480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4808u;
            // 0x3a480c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4928u;
            goto label_3a4928;
        }
    }
    ctx->pc = 0x3A4810u;
    // 0x3a4810: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3a4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3a4814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a4814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a4818: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x3A4818u;
    {
        const bool branch_taken_0x3a4818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4818) {
            ctx->pc = 0x3A481Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4818u;
            // 0x3a481c: 0x8dc20034  lw          $v0, 0x34($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4928u;
            goto label_3a4928;
        }
    }
    ctx->pc = 0x3A4820u;
    // 0x3a4820: 0x8de200c8  lw          $v0, 0xC8($t7)
    ctx->pc = 0x3a4820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
    // 0x3a4824: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a4824u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4828: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a482c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3a482cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4830: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a4830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4834: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x3a4834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3a4838: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a4838u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a483c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3a483cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4840: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3a4840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3a4844: 0x19400037  blez        $t2, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A4844u;
    {
        const bool branch_taken_0x3a4844 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4844u;
        // 0x3a4848: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4844) {
            ctx->pc = 0x3A4924u;
            goto label_3a4924;
        }
    }
    ctx->pc = 0x3A484Cu;
    // 0x3a484c: 0x8df70018  lw          $s7, 0x18($t7)
    ctx->pc = 0x3a484cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_3a4850:
    // 0x3a4850: 0x2ea102a  slt         $v0, $s7, $t2
    ctx->pc = 0x3a4850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a4854: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4854u;
    {
        const bool branch_taken_0x3a4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4854) {
            ctx->pc = 0x3A4858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4854u;
            // 0x3a4858: 0x8de500c0  lw          $a1, 0xC0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4878u;
            goto label_3a4878;
        }
    }
    ctx->pc = 0x3A485Cu;
    // 0x3a485c: 0x85e200d4  lh          $v0, 0xD4($t7)
    ctx->pc = 0x3a485cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 212)));
    // 0x3a4860: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4864: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a4864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4868: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a4868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a486c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a486cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a4870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4870u;
    {
        const bool branch_taken_0x3a4870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4870u;
        // 0x3a4874: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4870) {
            ctx->pc = 0x3A4880u;
            goto label_3a4880;
        }
    }
    ctx->pc = 0x3A4878u;
label_3a4878:
    // 0x3a4878: 0xb31023  subu        $v0, $a1, $s3
    ctx->pc = 0x3a4878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3a487c: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a487cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a4880:
    // 0x3a4880: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a4880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4884: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A4884u;
    {
        const bool branch_taken_0x3a4884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4884u;
        // 0x3a4888: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4884) {
            ctx->pc = 0x3A490Cu;
            goto label_3a490c;
        }
    }
    ctx->pc = 0x3A488Cu;
    // 0x3a488c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a488cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4890: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a4890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4894: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x3a4894u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3a4898:
    // 0x3a4898: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x3a4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a489c: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x3a489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x3a48a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a48a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a48a4: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a48a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a48a8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a48a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a48ac: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a48acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a48b0: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a48b4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a48b8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a48bc: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a48bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a48c0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a48c4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a48c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a48c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a48c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a48cc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a48ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a48d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a48d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a48d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a48d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a48dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a48e0: 0x600013  mtlo        $v1
    ctx->pc = 0x3a48e0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3a48e4: 0x70591000  madd        $v0, $v0, $t9
    ctx->pc = 0x3a48e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a48e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3a48e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a48ec: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a48ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a48f0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a48f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a48f4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3a48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a48f8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a48f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a48fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a48fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a4900: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a4900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a4904: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3A4904u;
    {
        const bool branch_taken_0x3a4904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4904u;
        // 0x3a4908: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4904) {
            ctx->pc = 0x3A4898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4898;
        }
    }
    ctx->pc = 0x3A490Cu;
label_3a490c:
    // 0x3a490c: 0x85e200d0  lh          $v0, 0xD0($t7)
    ctx->pc = 0x3a490cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x3a4910: 0x1334823  subu        $t1, $t1, $s3
    ctx->pc = 0x3a4910u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x3a4914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a4914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4918: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a4918u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a491c: 0x1d40ffcc  bgtz        $t2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3A491Cu;
    {
        const bool branch_taken_0x3a491c = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A491Cu;
        // 0x3a4920: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a491c) {
            ctx->pc = 0x3A4850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4850;
        }
    }
    ctx->pc = 0x3A4924u;
label_3a4924:
    // 0x3a4924: 0x8dc20034  lw          $v0, 0x34($t6)
    ctx->pc = 0x3a4924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
label_3a4928:
    // 0x3a4928: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3a4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3a492c: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A492Cu;
    {
        const bool branch_taken_0x3a492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a492c) {
            ctx->pc = 0x3A4930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A492Cu;
            // 0x3a4930: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4A74u;
            goto label_3a4a74;
        }
    }
    ctx->pc = 0x3A4934u;
    // 0x3a4934: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3a4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3a4938: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a4938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a493c: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x3A493Cu;
    {
        const bool branch_taken_0x3a493c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a493c) {
            ctx->pc = 0x3A4940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A493Cu;
            // 0x3a4940: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4A74u;
            goto label_3a4a74;
        }
    }
    ctx->pc = 0x3A4944u;
    // 0x3a4944: 0x8de200f8  lw          $v0, 0xF8($t7)
    ctx->pc = 0x3a4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
    // 0x3a4948: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3a4948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a494c: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a4950: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3a4950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4954: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a4954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4958: 0x8ed4000c  lw          $s4, 0xC($s6)
    ctx->pc = 0x3a4958u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3a495c: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x3a495cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a4960: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a4960u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4964: 0x19400042  blez        $t2, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A4964u;
    {
        const bool branch_taken_0x3a4964 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4964u;
        // 0x3a4968: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4964) {
            ctx->pc = 0x3A4A70u;
            goto label_3a4a70;
        }
    }
    ctx->pc = 0x3A496Cu;
    // 0x3a496c: 0x0  nop
    ctx->pc = 0x3a496cu;
    // NOP
label_3a4970:
    // 0x3a4970: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x3a4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3a4974: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3a4974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a4978: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4978u;
    {
        const bool branch_taken_0x3a4978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4978) {
            ctx->pc = 0x3A497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4978u;
            // 0x3a497c: 0x8de500f0  lw          $a1, 0xF0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A499Cu;
            goto label_3a499c;
        }
    }
    ctx->pc = 0x3A4980u;
    // 0x3a4980: 0x85e20104  lh          $v0, 0x104($t7)
    ctx->pc = 0x3a4980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 260)));
    // 0x3a4984: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a4984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a4988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a498c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4990: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x3a4990u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a4994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4994u;
    {
        const bool branch_taken_0x3a4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4994u;
        // 0x3a4998: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4994) {
            ctx->pc = 0x3A49A4u;
            goto label_3a49a4;
        }
    }
    ctx->pc = 0x3A499Cu;
label_3a499c:
    // 0x3a499c: 0xb31023  subu        $v0, $a1, $s3
    ctx->pc = 0x3a499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3a49a0: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a49a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a49a4:
    // 0x3a49a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a49a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49a8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A49A8u;
    {
        const bool branch_taken_0x3a49a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49A8u;
        // 0x3a49ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49a8) {
            ctx->pc = 0x3A4A58u;
            goto label_3a4a58;
        }
    }
    ctx->pc = 0x3A49B0u;
    // 0x3a49b0: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3a49b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49b4: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x3a49b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49b8: 0x24190024  addiu       $t9, $zero, 0x24
    ctx->pc = 0x3a49b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a49bc: 0x0  nop
    ctx->pc = 0x3a49bcu;
    // NOP
label_3a49c0:
    // 0x3a49c0: 0x24d1021  addu        $v0, $s2, $t5
    ctx->pc = 0x3a49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a49c4: 0x22d2821  addu        $a1, $s1, $t5
    ctx->pc = 0x3a49c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x3a49c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a49c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a49cc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a49d0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a49d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a49d4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a49d8: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a49dc: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x3a49dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a49e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a49e4: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a49e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a49e8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a49ec: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a49ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a49f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a49f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a49f4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x3a49f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49f8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3a49f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3a49fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a4a00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a4a04: 0x591818  mult        $v1, $v0, $t9
    ctx->pc = 0x3a4a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a4a08: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x3a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3a4a0c: 0x8844000f  lwl         $a0, 0xF($v0)
    ctx->pc = 0x3a4a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3a4a10: 0x9844000c  lwr         $a0, 0xC($v0)
    ctx->pc = 0x3a4a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3a4a14: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x3a4a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a4a18: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x3a4a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a4a1c: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x3a4a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x3a4a20: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3a4a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4a24: 0x93a40012  lbu         $a0, 0x12($sp)
    ctx->pc = 0x3a4a24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x3a4a28: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a4a2c: 0x93a50013  lbu         $a1, 0x13($sp)
    ctx->pc = 0x3a4a2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x3a4a30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a4a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4a34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a4a38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a4a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a4a3c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3a4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a4a40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a4a44: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x3a4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x3a4a48: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3a4a48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3a4a4c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3a4a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a4a50: 0x14e0ffdb  bnez        $a3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3A4A50u;
    {
        const bool branch_taken_0x3a4a50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A50u;
        // 0x3a4a54: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a50) {
            ctx->pc = 0x3A49C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a49c0;
        }
    }
    ctx->pc = 0x3A4A58u;
label_3a4a58:
    // 0x3a4a58: 0x85e20100  lh          $v0, 0x100($t7)
    ctx->pc = 0x3a4a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x3a4a5c: 0x1334823  subu        $t1, $t1, $s3
    ctx->pc = 0x3a4a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x3a4a60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a4a64: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x3a4a64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a4a68: 0x1d40ffc1  bgtz        $t2, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3A4A68u;
    {
        const bool branch_taken_0x3a4a68 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A68u;
        // 0x3a4a6c: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a68) {
            ctx->pc = 0x3A4970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4970;
        }
    }
    ctx->pc = 0x3A4A70u;
label_3a4a70:
    // 0x3a4a70: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a4a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a4a74:
    // 0x3a4a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4a78: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a4a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a4a7c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a4a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a4a80: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a4a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a4a84: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a4a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a4a88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a4a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a4a8c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3a4a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a4a90: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3a4a90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4a94: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3a4a94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4a98: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A98u;
        // 0x3a4a9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4AA0u;
    // 0x3a4aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a4aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a4aa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a4aa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a4aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a4aac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a4aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a4ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a4ab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a4ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ab8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a4ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a4abc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a4abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ac0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a4ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4ac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4acc: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3A4ACCu;
    SET_GPR_U32(ctx, 31, 0x3A4AD4u);
    ctx->pc = 0x3A4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4ACCu;
    // 0x3a4ad0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3A4ACCu, 0x3A4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4AD4u;
label_3a4ad4:
    // 0x3a4ad4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3a4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3a4ad8: 0xc10a4a8  jal         func_4292A0
    ctx->pc = 0x3A4AD8u;
    SET_GPR_U32(ctx, 31, 0x3A4AE0u);
    ctx->pc = 0x3A4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4AD8u;
    // 0x3a4adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4292A0u, 0x3A4AD8u, 0x3A4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4AE0u;
label_3a4ae0:
    // 0x3a4ae0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a4ae4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a4ae8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3a4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3a4aec: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3a4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3a4af0: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3a4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x3a4af4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3a4af8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a4afc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3a4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3a4b00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a4b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4b04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a4b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4b08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4b0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a4b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4b14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B14u;
        // 0x3a4b18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4B1Cu;
    // 0x3a4b1c: 0x0  nop
    ctx->pc = 0x3a4b1cu;
    // NOP
    // 0x3a4b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4b28: 0xc0e9176  jal         func_3A45D8
    ctx->pc = 0x3A4B28u;
    SET_GPR_U32(ctx, 31, 0x3A4B30u);
    ctx->pc = 0x3A45D8u;
    goto label_3a45d8;
    ctx->pc = 0x3A4B30u;
label_3a4b30:
    // 0x3a4b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B34u;
        // 0x3a4b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4B3Cu;
    // 0x3a4b3c: 0x0  nop
    ctx->pc = 0x3a4b3cu;
    // NOP
    // 0x3a4b40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B40u;
        // 0x3a4b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4B48u;
    // 0x3a4b48: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a4b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a4b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b50: 0x2782aa28  addiu       $v0, $gp, -0x55D8
    ctx->pc = 0x3a4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945320));
    // 0x3a4b54: 0x8d05002c  lw          $a1, 0x2C($t0)
    ctx->pc = 0x3a4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x3a4b58: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x3a4b58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x3a4b5c: 0x24e3af20  addiu       $v1, $a3, -0x50E0
    ctx->pc = 0x3a4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946592));
    // 0x3a4b60: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x3a4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x3a4b64: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x3a4b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5DAF28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF28u, _value); } while (0);
    // 0x3a4b68: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x3a4b6c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3a4b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF2Cu, _value); } while (0);
    // 0x3a4b70: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3a4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x3a4b74: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3a4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x3a4b78: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x3a4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x3a4b7c: 0x91030024  lbu         $v1, 0x24($t0)
    ctx->pc = 0x3a4b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x3a4b80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a4b84: 0x8d050028  lw          $a1, 0x28($t0)
    ctx->pc = 0x3a4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x3a4b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4b8c: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x3a4b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x3a4b90: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4B90u;
    {
        const bool branch_taken_0x3a4b90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B90u;
        // 0x3a4b94: 0xace2af20  sw          $v0, -0x50E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294946592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b90) {
            ctx->pc = 0x3A4BA0u;
            goto label_3a4ba0;
        }
    }
    ctx->pc = 0x3A4B98u;
    // 0x3a4b98: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a4b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3a4b9c: 0xace2af20  sw          $v0, -0x50E0($a3)
    ctx->pc = 0x3a4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946592), GPR_U32(ctx, 2));
label_3a4ba0:
    // 0x3a4ba0: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x3a4ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3a4ba4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3a4ba8: 0x8d05002c  lw          $a1, 0x2C($t0)
    ctx->pc = 0x3a4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x3a4bac: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x3a4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
    // 0x3a4bb0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x3a4bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3a4bb4: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x3a4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3a4bb8: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x3a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x3a4bbc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x3a4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x3a4bc0: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3a4bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3a4bc4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3a4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3a4bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BC8u;
        // 0x3a4bcc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4BD0u;
    // 0x3a4bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4BD8u;
    // 0x3a4bd8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3a4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3a4bdc: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x3a4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x3a4be0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BE0u;
        // 0x3a4be4: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4BE8u;
    // 0x3a4be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4bec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a4becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4bf4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3a4bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a4bf8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a4bfc: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x3a4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x3a4c00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4C00u;
    {
        const bool branch_taken_0x3a4c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C00u;
        // 0x3a4c04: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c00) {
            ctx->pc = 0x3A4C18u;
            goto label_3a4c18;
        }
    }
    ctx->pc = 0x3A4C08u;
    // 0x3a4c08: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3A4C08u;
    SET_GPR_U32(ctx, 31, 0x3A4C10u);
    ctx->pc = 0x3A4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C08u;
    // 0x3a4c0c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3A4C08u, 0x3A4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C10u;
label_3a4c10:
    // 0x3a4c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4C10u;
    {
        const bool branch_taken_0x3a4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C10u;
        // 0x3a4c14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c10) {
            ctx->pc = 0x3A4C20u;
            goto label_3a4c20;
        }
    }
    ctx->pc = 0x3A4C18u;
label_3a4c18:
    // 0x3a4c18: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3a4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x3a4c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4c20:
    // 0x3a4c20: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C20u;
        // 0x3a4c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4C28u;
    // 0x3a4c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4c2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a4c30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3a4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3a4c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4C34u;
    {
        const bool branch_taken_0x3a4c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C34u;
        // 0x3a4c38: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c34) {
            ctx->pc = 0x3A4C48u;
            goto label_3a4c48;
        }
    }
    ctx->pc = 0x3A4C3Cu;
    // 0x3a4c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4c40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3a4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3a4c44: 0x0  nop
    ctx->pc = 0x3a4c44u;
    // NOP
label_3a4c48:
    // 0x3a4c48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4C50u;
    // 0x3a4c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a4c54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a4c58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a4c5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a4c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a4c64: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3a4c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a4c6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a4c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a4c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4c78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c7c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3A4C7Cu;
    SET_GPR_U32(ctx, 31, 0x3A4C84u);
    ctx->pc = 0x3A4C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C7Cu;
    // 0x3a4c80: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3A4C7Cu, 0x3A4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C84u;
label_3a4c84:
    // 0x3a4c84: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3a4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3a4c88: 0xc10a4a8  jal         func_4292A0
    ctx->pc = 0x3A4C88u;
    SET_GPR_U32(ctx, 31, 0x3A4C90u);
    ctx->pc = 0x3A4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C88u;
    // 0x3a4c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4292A0u, 0x3A4C88u, 0x3A4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C90u;
label_3a4c90:
    // 0x3a4c90: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3a4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a4c94: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x3a4c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x3a4c98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3a4c9c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3a4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3a4ca0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a4ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4ca4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a4ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4ca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4cac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a4cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4cb4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3a4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3a4cb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3a4cbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a4cc0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3a4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3a4cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CC4u;
        // 0x3a4cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CCCu;
    // 0x3a4ccc: 0x0  nop
    ctx->pc = 0x3a4cccu;
    // NOP
    // 0x3a4cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CD8u;
}
