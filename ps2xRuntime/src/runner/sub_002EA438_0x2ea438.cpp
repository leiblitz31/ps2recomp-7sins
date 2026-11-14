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

// Function: sub_002EA438
// Address: 0x2ea438 - 0x2ea668
void sub_002EA438_0x2ea438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA438_0x2ea438");
#endif

    switch (ctx->pc) {
        case 0x2ea4c8u: goto label_2ea4c8;
        case 0x2ea540u: goto label_2ea540;
        case 0x2ea574u: goto label_2ea574;
        case 0x2ea590u: goto label_2ea590;
        case 0x2ea610u: goto label_2ea610;
        default: break;
    }

    ctx->pc = 0x2ea438u;

    // 0x2ea438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ea438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ea43c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2ea43cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea440: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ea440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ea444: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ea444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea44c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ea44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ea450: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ea450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ea454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ea454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ea458: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ea458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ea45c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ea45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2ea460: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ea460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ea464: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x2ea464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2ea468: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ea46c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2ea46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ea470: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2EA470u;
    {
        const bool branch_taken_0x2ea470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA470u;
        // 0x2ea474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea470) {
            ctx->pc = 0x2EA63Cu;
            goto label_2ea63c;
        }
    }
    ctx->pc = 0x2EA478u;
    // 0x2ea478: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ea478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ea47c: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2ea47cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x2ea480: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ea480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea484: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2ea484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2ea488: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x2ea488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2ea48c: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x2ea48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ea490: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ea490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ea494: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2ea494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea498: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x2ea498u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ea49c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea49cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ea4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ea4a4: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x2ea4a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2ea4a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA4A8u;
    {
        const bool branch_taken_0x2ea4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4a8) {
            ctx->pc = 0x2EA4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4A8u;
            // 0x2ea4ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA4B0u;
label_2ea4b0:
    // 0x2ea4b0: 0xa812  mflo        $s5
    ctx->pc = 0x2ea4b0u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x2ea4b4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2ea4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4b8: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EA4B8u;
    {
        const bool branch_taken_0x2ea4b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4B8u;
        // 0x2ea4bc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4b8) {
            ctx->pc = 0x2EA568u;
            goto label_2ea568;
        }
    }
    ctx->pc = 0x2EA4C0u;
    // 0x2ea4c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ea4c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4c4: 0x0  nop
    ctx->pc = 0x2ea4c4u;
    // NOP
label_2ea4c8:
    // 0x2ea4c8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2ea4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ea4cc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2ea4ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2ea4d0: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x2ea4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2ea4d4: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x2ea4d4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2ea4d8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ea4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ea4dc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2ea4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ea4e0: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x2ea4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ea4e4: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2ea4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ea4e8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ea4ec: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ea4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ea4f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea4f4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ea4f8: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x2ea4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ea4fc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ea500: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2ea500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2ea504: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x2ea504u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2ea508: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2ea508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2ea50c: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ea510: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2ea510u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ea514: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2ea514u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ea518: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x2ea518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2ea51c: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x2ea51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2ea520: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2ea520u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ea524: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2ea524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2ea528: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2EA528u;
    {
        const bool branch_taken_0x2ea528 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA528u;
        // 0x2ea52c: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea528) {
            ctx->pc = 0x2EA4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea4c8;
        }
    }
    ctx->pc = 0x2EA530u;
    // 0x2ea530: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2EA530u;
    {
        const bool branch_taken_0x2ea530 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea530) {
            ctx->pc = 0x2EA534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA530u;
            // 0x2ea534: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA56Cu;
            goto label_2ea56c;
        }
    }
    ctx->pc = 0x2EA538u;
    // 0x2ea538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA538u;
    {
        const bool branch_taken_0x2ea538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA538u;
        // 0x2ea53c: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea538) {
            ctx->pc = 0x2EA544u;
            goto label_2ea544;
        }
    }
    ctx->pc = 0x2EA540u;
label_2ea540:
    // 0x2ea540: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ea540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ea544:
    // 0x2ea544: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x2ea544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ea548: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA548u;
    {
        const bool branch_taken_0x2ea548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea548) {
            ctx->pc = 0x2EA54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA548u;
            // 0x2ea54c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA568u;
            goto label_2ea568;
        }
    }
    ctx->pc = 0x2EA550u;
    // 0x2ea550: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ea554: 0x0  nop
    ctx->pc = 0x2ea554u;
    // NOP
    // 0x2ea558: 0x0  nop
    ctx->pc = 0x2ea558u;
    // NOP
    // 0x2ea55c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EA55Cu;
    {
        const bool branch_taken_0x2ea55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea55c) {
            ctx->pc = 0x2EA560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA55Cu;
            // 0x2ea560: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea540;
        }
    }
    ctx->pc = 0x2EA564u;
    // 0x2ea564: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2ea564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2ea568:
    // 0x2ea568: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2ea56c:
    // 0x2ea56c: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EA56Cu;
    SET_GPR_U32(ctx, 31, 0x2EA574u);
    ctx->pc = 0x2EA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA56Cu;
    // 0x2ea570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EA56Cu, 0x2EA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA574u;
label_2ea574:
    // 0x2ea574: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EA574u;
    {
        const bool branch_taken_0x2ea574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2EA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA574u;
        // 0x2ea578: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea574) {
            ctx->pc = 0x2EA638u;
            goto label_2ea638;
        }
    }
    ctx->pc = 0x2EA57Cu;
    // 0x2ea57c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2ea57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ea580: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2ea580u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ea584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea588: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ea588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea58c: 0x0  nop
    ctx->pc = 0x2ea58cu;
    // NOP
label_2ea590:
    // 0x2ea590: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2ea590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2ea594: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2ea594u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2ea598: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2ea598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2ea59c: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x2ea59cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2ea5a0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ea5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ea5a4: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x2ea5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ea5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea5ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2ea5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ea5b0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ea5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea5b4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ea5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ea5b8: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x2ea5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ea5bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea5c0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2ea5c4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2ea5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2ea5c8: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2ea5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2ea5cc: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ea5d0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2ea5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ea5d4: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x2ea5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ea5d8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2ea5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2ea5dc: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x2ea5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2ea5e0: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x2ea5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ea5e4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2ea5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2ea5e8: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EA5E8u;
    {
        const bool branch_taken_0x2ea5e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5E8u;
        // 0x2ea5ec: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5e8) {
            ctx->pc = 0x2EA590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea590;
        }
    }
    ctx->pc = 0x2EA5F0u;
    // 0x2ea5f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ea5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea5f4: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x2ea5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ea5f8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ea5fc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EA5FCu;
    {
        const bool branch_taken_0x2ea5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5FCu;
        // 0x2ea600: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5fc) {
            ctx->pc = 0x2EA63Cu;
            goto label_2ea63c;
        }
    }
    ctx->pc = 0x2EA604u;
    // 0x2ea604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA604u;
    {
        const bool branch_taken_0x2ea604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA604u;
        // 0x2ea608: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea604) {
            ctx->pc = 0x2EA614u;
            goto label_2ea614;
        }
    }
    ctx->pc = 0x2EA60Cu;
    // 0x2ea60c: 0x0  nop
    ctx->pc = 0x2ea60cu;
    // NOP
label_2ea610:
    // 0x2ea610: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2ea610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ea614:
    // 0x2ea614: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x2ea614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ea618: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA618u;
    {
        const bool branch_taken_0x2ea618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea618) {
            ctx->pc = 0x2EA61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA618u;
            // 0x2ea61c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA638u;
            goto label_2ea638;
        }
    }
    ctx->pc = 0x2EA620u;
    // 0x2ea620: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ea620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ea624: 0x0  nop
    ctx->pc = 0x2ea624u;
    // NOP
    // 0x2ea628: 0x0  nop
    ctx->pc = 0x2ea628u;
    // NOP
    // 0x2ea62c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EA62Cu;
    {
        const bool branch_taken_0x2ea62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea62c) {
            ctx->pc = 0x2EA630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA62Cu;
            // 0x2ea630: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea610;
        }
    }
    ctx->pc = 0x2EA634u;
    // 0x2ea634: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2ea634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2ea638:
    // 0x2ea638: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ea638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ea63c:
    // 0x2ea63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ea644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ea644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ea648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ea64c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ea64cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea650: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ea650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ea654: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ea654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea658: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ea658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ea65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA65Cu;
        // 0x2ea660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA664u;
    // 0x2ea664: 0x0  nop
    ctx->pc = 0x2ea664u;
    // NOP
    ctx->pc = 0x2ea668u;
}
