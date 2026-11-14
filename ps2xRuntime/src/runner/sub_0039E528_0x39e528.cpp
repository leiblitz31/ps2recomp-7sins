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

// Function: sub_0039E528
// Address: 0x39e528 - 0x39ecf0
void sub_0039E528_0x39e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E528_0x39e528");
#endif

    switch (ctx->pc) {
        case 0x39e5d0u: goto label_39e5d0;
        case 0x39e6dcu: goto label_39e6dc;
        case 0x39e6f0u: goto label_39e6f0;
        case 0x39e890u: goto label_39e890;
        case 0x39e968u: goto label_39e968;
        case 0x39eab0u: goto label_39eab0;
        case 0x39eba0u: goto label_39eba0;
        default: break;
    }

    ctx->pc = 0x39e528u;

    // 0x39e528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e52c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x39e52cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39e534: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x39e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x39e538: 0x8dc300b0  lw          $v1, 0xB0($t6)
    ctx->pc = 0x39e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 176)));
    // 0x39e53c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e540: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E540u;
    {
        const bool branch_taken_0x39e540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E540u;
        // 0x39e544: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e540) {
            ctx->pc = 0x39E554u;
            goto label_39e554;
        }
    }
    ctx->pc = 0x39E548u;
    // 0x39e548: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x39e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39e54c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39E54Cu;
    {
        const bool branch_taken_0x39e54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E54Cu;
        // 0x39e550: 0x3062000c  andi        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e54c) {
            ctx->pc = 0x39E574u;
            goto label_39e574;
        }
    }
    ctx->pc = 0x39E554u;
label_39e554:
    // 0x39e554: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x39e558: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39e55c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e560: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x39e560u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e564: 0xa1c300b8  sb          $v1, 0xB8($t6)
    ctx->pc = 0x39e564u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x39e568: 0xa1c400b9  sb          $a0, 0xB9($t6)
    ctx->pc = 0x39e568u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 4));
    // 0x39e56c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39E56Cu;
    {
        const bool branch_taken_0x39e56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E56Cu;
        // 0x39e570: 0xa1c001f1  sb          $zero, 0x1F1($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e56c) {
            ctx->pc = 0x39E5A0u;
            goto label_39e5a0;
        }
    }
    ctx->pc = 0x39E574u;
label_39e574:
    // 0x39e574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E574u;
    {
        const bool branch_taken_0x39e574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E574u;
        // 0x39e578: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e574) {
            ctx->pc = 0x39E590u;
            goto label_39e590;
        }
    }
    ctx->pc = 0x39E57Cu;
    // 0x39e57c: 0xa1d900b9  sb          $t9, 0xB9($t6)
    ctx->pc = 0x39e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 25));
    // 0x39e580: 0xa1c200b8  sb          $v0, 0xB8($t6)
    ctx->pc = 0x39e580u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e584: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x39e584u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39E588u;
    {
        const bool branch_taken_0x39e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E588u;
        // 0x39e58c: 0xa1c001f1  sb          $zero, 0x1F1($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e588) {
            ctx->pc = 0x39E5A0u;
            goto label_39e5a0;
        }
    }
    ctx->pc = 0x39E590u;
label_39e590:
    // 0x39e590: 0xa1c001f1  sb          $zero, 0x1F1($t6)
    ctx->pc = 0x39e590u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e594: 0xa1c200b8  sb          $v0, 0xB8($t6)
    ctx->pc = 0x39e594u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e598: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x39e598u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e59c: 0xa1c000b9  sb          $zero, 0xB9($t6)
    ctx->pc = 0x39e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 0));
label_39e5a0:
    // 0x39e5a0: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x39e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x39e5a4: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x39e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x39e5a8: 0x34422001  ori         $v0, $v0, 0x2001
    ctx->pc = 0x39e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x39e5ac: 0x34632001  ori         $v1, $v1, 0x2001
    ctx->pc = 0x39e5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8193);
    // 0x39e5b0: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x39e5b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x39e5b4: 0xadc20070  sw          $v0, 0x70($t6)
    ctx->pc = 0x39e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 112), GPR_U32(ctx, 2));
    // 0x39e5b8: 0xadc30078  sw          $v1, 0x78($t6)
    ctx->pc = 0x39e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 120), GPR_U32(ctx, 3));
    // 0x39e5bc: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x39e5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e5c0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x39e5c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5c4: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x39e5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5c8: 0x25c60070  addiu       $a2, $t6, 0x70
    ctx->pc = 0x39e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x39e5cc: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x39e5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_39e5d0:
    // 0x39e5d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39e5d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e5d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E5D8u;
    {
        const bool branch_taken_0x39e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5D8u;
        // 0x39e5dc: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5d8) {
            ctx->pc = 0x39E5F4u;
            goto label_39e5f4;
        }
    }
    ctx->pc = 0x39E5E0u;
    // 0x39e5e0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e5e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E5E4u;
    {
        const bool branch_taken_0x39e5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5E4u;
        // 0x39e5e8: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5e4) {
            ctx->pc = 0x39E600u;
            goto label_39e600;
        }
    }
    ctx->pc = 0x39E5ECu;
    // 0x39e5ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E5ECu;
    {
        const bool branch_taken_0x39e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E5ECu;
        // 0x39e5f0: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5ec) {
            ctx->pc = 0x39E600u;
            goto label_39e600;
        }
    }
    ctx->pc = 0x39E5F4u;
label_39e5f4:
    // 0x39e5f4: 0x2c80a  movz        $t9, $zero, $v0
    ctx->pc = 0x39e5f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x39e5f8: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x39e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x39e5fc: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x39e5fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_39e600:
    // 0x39e600: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x39e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39e604: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e608: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E608u;
    {
        const bool branch_taken_0x39e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E608u;
        // 0x39e60c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e608) {
            ctx->pc = 0x39E624u;
            goto label_39e624;
        }
    }
    ctx->pc = 0x39E610u;
    // 0x39e610: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e614: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E614u;
    {
        const bool branch_taken_0x39e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E614u;
        // 0x39e618: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e614) {
            ctx->pc = 0x39E630u;
            goto label_39e630;
        }
    }
    ctx->pc = 0x39E61Cu;
    // 0x39e61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E61Cu;
    {
        const bool branch_taken_0x39e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E61Cu;
        // 0x39e620: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e61c) {
            ctx->pc = 0x39E630u;
            goto label_39e630;
        }
    }
    ctx->pc = 0x39E624u;
label_39e624:
    // 0x39e624: 0x2c80a  movz        $t9, $zero, $v0
    ctx->pc = 0x39e624u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x39e628: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x39e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x39e62c: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x39e62cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_39e630:
    // 0x39e630: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x39e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39e634: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e638: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E638u;
    {
        const bool branch_taken_0x39e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E638u;
        // 0x39e63c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e638) {
            ctx->pc = 0x39E654u;
            goto label_39e654;
        }
    }
    ctx->pc = 0x39E640u;
    // 0x39e640: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E644u;
    {
        const bool branch_taken_0x39e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E644u;
        // 0x39e648: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e644) {
            ctx->pc = 0x39E660u;
            goto label_39e660;
        }
    }
    ctx->pc = 0x39E64Cu;
    // 0x39e64c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E64Cu;
    {
        const bool branch_taken_0x39e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E64Cu;
        // 0x39e650: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e64c) {
            ctx->pc = 0x39E660u;
            goto label_39e660;
        }
    }
    ctx->pc = 0x39E654u;
label_39e654:
    // 0x39e654: 0x2c80a  movz        $t9, $zero, $v0
    ctx->pc = 0x39e654u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x39e658: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x39e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x39e65c: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x39e65cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_39e660:
    // 0x39e660: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x39e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39e664: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e668: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E668u;
    {
        const bool branch_taken_0x39e668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E668u;
        // 0x39e66c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e668) {
            ctx->pc = 0x39E684u;
            goto label_39e684;
        }
    }
    ctx->pc = 0x39E670u;
    // 0x39e670: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E674u;
    {
        const bool branch_taken_0x39e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E674u;
        // 0x39e678: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e674) {
            ctx->pc = 0x39E690u;
            goto label_39e690;
        }
    }
    ctx->pc = 0x39E67Cu;
    // 0x39e67c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E67Cu;
    {
        const bool branch_taken_0x39e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E67Cu;
        // 0x39e680: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e67c) {
            ctx->pc = 0x39E690u;
            goto label_39e690;
        }
    }
    ctx->pc = 0x39E684u;
label_39e684:
    // 0x39e684: 0x2c80a  movz        $t9, $zero, $v0
    ctx->pc = 0x39e684u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x39e688: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x39e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x39e68c: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x39e68cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_39e690:
    // 0x39e690: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x39e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x39e694: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e698: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E698u;
    {
        const bool branch_taken_0x39e698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E698u;
        // 0x39e69c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e698) {
            ctx->pc = 0x39E6B4u;
            goto label_39e6b4;
        }
    }
    ctx->pc = 0x39E6A0u;
    // 0x39e6a0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39e6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E6A4u;
    {
        const bool branch_taken_0x39e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6A4u;
        // 0x39e6a8: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6a4) {
            ctx->pc = 0x39E6C0u;
            goto label_39e6c0;
        }
    }
    ctx->pc = 0x39E6ACu;
    // 0x39e6ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E6ACu;
    {
        const bool branch_taken_0x39e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6ACu;
        // 0x39e6b0: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6ac) {
            ctx->pc = 0x39E6C0u;
            goto label_39e6c0;
        }
    }
    ctx->pc = 0x39E6B4u;
label_39e6b4:
    // 0x39e6b4: 0x2c80a  movz        $t9, $zero, $v0
    ctx->pc = 0x39e6b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x39e6b8: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x39e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x39e6bc: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x39e6bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_39e6c0:
    // 0x39e6c0: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x39e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x39e6c4: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x39e6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x39e6c8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x39E6C8u;
    {
        const bool branch_taken_0x39e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6C8u;
        // 0x39e6cc: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6c8) {
            ctx->pc = 0x39E5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e5d0;
        }
    }
    ctx->pc = 0x39E6D0u;
    // 0x39e6d0: 0x91c200b6  lbu         $v0, 0xB6($t6)
    ctx->pc = 0x39e6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 182)));
    // 0x39e6d4: 0x11e20003  beq         $t7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E6D4u;
    {
        const bool branch_taken_0x39e6d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6D4u;
        // 0x39e6d8: 0xa1d900b4  sb          $t9, 0xB4($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 180), (uint8_t)GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6d4) {
            ctx->pc = 0x39E6E4u;
            goto label_39e6e4;
        }
    }
    ctx->pc = 0x39E6DCu;
label_39e6dc:
    // 0x39e6dc: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x39E6DCu;
    {
        const bool branch_taken_0x39e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6DCu;
        // 0x39e6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6dc) {
            ctx->pc = 0x39ECE0u;
            goto label_39ece0;
        }
    }
    ctx->pc = 0x39E6E4u;
label_39e6e4:
    // 0x39e6e4: 0x25c901f0  addiu       $t1, $t6, 0x1F0
    ctx->pc = 0x39e6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 496));
    // 0x39e6e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x39e6e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e6ec: 0x0  nop
    ctx->pc = 0x39e6ecu;
    // NOP
label_39e6f0:
    // 0x39e6f0: 0x5320003a  beql        $t9, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x39E6F0u;
    {
        const bool branch_taken_0x39e6f0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e6f0) {
            ctx->pc = 0x39E6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E6F0u;
            // 0x39e6f4: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E7DCu;
            goto label_39e7dc;
        }
    }
    ctx->pc = 0x39E6F8u;
    // 0x39e6f8: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x39e6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x39e6fc: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39E6FCu;
    {
        const bool branch_taken_0x39e6fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e6fc) {
            ctx->pc = 0x39E700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E6FCu;
            // 0x39e700: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E704u;
            goto label_39e704;
        }
    }
    ctx->pc = 0x39E704u;
label_39e704:
    // 0x39e704: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x39e704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39e708: 0xef001b  divu        $zero, $a3, $t7
    ctx->pc = 0x39e708u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x39e70c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x39e70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e710: 0x1012  mflo        $v0
    ctx->pc = 0x39e710u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39e714: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x39e714u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39e718: 0x1012  mflo        $v0
    ctx->pc = 0x39e718u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39e71c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x39e71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39e720: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x39e720u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39e724: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x39E724u;
    {
        const bool branch_taken_0x39e724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E724u;
        // 0x39e728: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e724) {
            ctx->pc = 0x39E6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e6dc;
        }
    }
    ctx->pc = 0x39E72Cu;
    // 0x39e72c: 0x25e80002  addiu       $t0, $t7, 0x2
    ctx->pc = 0x39e72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x39e730: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x39e730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x39e734: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x39e734u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x39e738: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39e738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39e73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39e740: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x39e740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x39e744: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x39e744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x39e748: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x39e748u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x39e74c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x39e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x39e750: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39e754: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39e758: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39e758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39e75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e760: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x39e760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x39e764: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39E764u;
    {
        const bool branch_taken_0x39e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e764) {
            ctx->pc = 0x39E768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E764u;
            // 0x39e768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E76Cu;
            goto label_39e76c;
        }
    }
    ctx->pc = 0x39E76Cu;
label_39e76c:
    // 0x39e76c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x39e76cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39e770: 0x3012  mflo        $a2
    ctx->pc = 0x39e770u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x39e774: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x39e774u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39e778: 0x1812  mflo        $v1
    ctx->pc = 0x39e778u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39e77c: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x39e77cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x39e780: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x39e780u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x39e784: 0x3012  mflo        $a2
    ctx->pc = 0x39e784u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x39e788: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x39e788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39e78c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x39e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x39e790: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x39e790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39e794: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x39e794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39e798: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39e798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39e79c: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x39e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x39e7a0: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x39e7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x39e7a4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x39e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x39e7a8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39e7a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39e7ac: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x39e7acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x39e7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e7b4: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x39e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x39e7b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39e7bc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x39e7bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x39e7c0: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x39e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x39e7c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39e7c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39e7cc: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x39e7ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39e7d0: 0x3812  mflo        $a3
    ctx->pc = 0x39e7d0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x39e7d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x39E7D4u;
    {
        const bool branch_taken_0x39e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7D4u;
        // 0x39e7d8: 0xad270014  sw          $a3, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7d4) {
            ctx->pc = 0x39E870u;
            goto label_39e870;
        }
    }
    ctx->pc = 0x39E7DCu;
label_39e7dc:
    // 0x39e7dc: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39E7DCu;
    {
        const bool branch_taken_0x39e7dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e7dc) {
            ctx->pc = 0x39E7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E7DCu;
            // 0x39e7e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E7E4u;
            goto label_39e7e4;
        }
    }
    ctx->pc = 0x39E7E4u;
label_39e7e4:
    // 0x39e7e4: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x39e7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x39e7e8: 0x10f001b  divu        $zero, $t0, $t7
    ctx->pc = 0x39e7e8u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x39e7ec: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x39e7ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39e7f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x39e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7f4: 0x1012  mflo        $v0
    ctx->pc = 0x39e7f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39e7f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e7fc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x39e7fcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39e800: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x39e800u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x39e804: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x39e804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e808: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39e808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e810: 0x3012  mflo        $a2
    ctx->pc = 0x39e810u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x39e814: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x39e814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39e818: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x39e818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x39e81c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x39e81cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39e820: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x39E820u;
    {
        const bool branch_taken_0x39e820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E820u;
        // 0x39e824: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e820) {
            ctx->pc = 0x39E6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e6dc;
        }
    }
    ctx->pc = 0x39E828u;
    // 0x39e828: 0x25e20002  addiu       $v0, $t7, 0x2
    ctx->pc = 0x39e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x39e82c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39e82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e830: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x39e830u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x39e834: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x39e834u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x39e838: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39E838u;
    {
        const bool branch_taken_0x39e838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e838) {
            ctx->pc = 0x39E83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E838u;
            // 0x39e83c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E840u;
            goto label_39e840;
        }
    }
    ctx->pc = 0x39E840u;
label_39e840:
    // 0x39e840: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x39e840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x39e844: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x39e844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39e848: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x39e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e84c: 0x1812  mflo        $v1
    ctx->pc = 0x39e84cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39e850: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x39e850u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39e854: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x39e854u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39e858: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x39e858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x39e85c: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x39e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x39e860: 0x3012  mflo        $a2
    ctx->pc = 0x39e860u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x39e864: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x39e864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39e868: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39e86c: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x39e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_39e870:
    // 0x39e870: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x39e870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e878: 0x25510001  addiu       $s1, $t2, 0x1
    ctx->pc = 0x39e878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39e87c: 0x91c500b5  lbu         $a1, 0xB5($t6)
    ctx->pc = 0x39e87cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 181)));
    // 0x39e880: 0x59400b  movn        $t0, $v0, $t9
    ctx->pc = 0x39e880u;
    if (GPR_U64(ctx, 25) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x39e884: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39e884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e888: 0x25d000b8  addiu       $s0, $t6, 0xB8
    ctx->pc = 0x39e888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 184));
    // 0x39e88c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x39e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_39e890:
    // 0x39e890: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x39e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x39e894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e898: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x39e898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e89c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x39E89Cu;
    {
        const bool branch_taken_0x39e89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E89Cu;
        // 0x39e8a0: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e89c) {
            ctx->pc = 0x39E93Cu;
            goto label_39e93c;
        }
    }
    ctx->pc = 0x39E8A4u;
    // 0x39e8a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x39E8A4u;
    {
        const bool branch_taken_0x39e8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8A4u;
        // 0x39e8a8: 0x2d420006  sltiu       $v0, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8a4) {
            ctx->pc = 0x39E938u;
            goto label_39e938;
        }
    }
    ctx->pc = 0x39E8ACu;
    // 0x39e8ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x39E8ACu;
    {
        const bool branch_taken_0x39e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8ACu;
        // 0x39e8b0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8ac) {
            ctx->pc = 0x39E930u;
            goto label_39e930;
        }
    }
    ctx->pc = 0x39E8B4u;
    // 0x39e8b4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x39e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39e8b8: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x39e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
    // 0x39e8bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e8c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39e8c4: 0x800008  jr          $a0
    ctx->pc = 0x39E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39E8CCu: goto label_39e8cc;
            case 0x39E8E4u: goto label_39e8e4;
            case 0x39E8ECu: goto label_39e8ec;
            case 0x39E900u: goto label_39e900;
            case 0x39E908u: goto label_39e908;
            case 0x39E918u: goto label_39e918;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E8C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39E8CCu;
label_39e8cc:
    // 0x39e8cc: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x39e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39e8d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39e8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e8d8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39e8dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39E8DCu;
    {
        const bool branch_taken_0x39e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8DCu;
        // 0x39e8e0: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8dc) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E8E4u;
label_39e8e4:
    // 0x39e8e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39E8E4u;
    {
        const bool branch_taken_0x39e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8E4u;
        // 0x39e8e8: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8e4) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E8ECu;
label_39e8ec:
    // 0x39e8ec: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39e8f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39e8f4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39e8f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39E8F8u;
    {
        const bool branch_taken_0x39e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E8F8u;
        // 0x39e8fc: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e8f8) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E900u;
label_39e900:
    // 0x39e900: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39E900u;
    {
        const bool branch_taken_0x39e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E900u;
        // 0x39e904: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e900) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E908u;
label_39e908:
    // 0x39e908: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39e90c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39e910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39E910u;
    {
        const bool branch_taken_0x39e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E910u;
        // 0x39e914: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e910) {
            ctx->pc = 0x39E92Cu;
            goto label_39e92c;
        }
    }
    ctx->pc = 0x39E918u;
label_39e918:
    // 0x39e918: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x39e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39e91c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39e920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e924: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39e928: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39e928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_39e92c:
    // 0x39e92c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x39e92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_39e930:
    // 0x39e930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39E930u;
    {
        const bool branch_taken_0x39e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E930u;
        // 0x39e934: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e930) {
            ctx->pc = 0x39E93Cu;
            goto label_39e93c;
        }
    }
    ctx->pc = 0x39E938u;
label_39e938:
    // 0x39e938: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x39e938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_39e93c:
    // 0x39e93c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39e93cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39e940: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x39e940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x39e944: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x39E944u;
    {
        const bool branch_taken_0x39e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E944u;
        // 0x39e948: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e944) {
            ctx->pc = 0x39E890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e890;
        }
    }
    ctx->pc = 0x39E94Cu;
    // 0x39e94c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39e950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39e950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e954: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x39e954u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39e958: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x39e958u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e95c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39e95cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e960: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x39e960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x39e964: 0x0  nop
    ctx->pc = 0x39e964u;
    // NOP
label_39e968:
    // 0x39e968: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x39e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x39e96c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39e970: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39e974: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x39E974u;
    {
        const bool branch_taken_0x39e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E974u;
        // 0x39e978: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e974) {
            ctx->pc = 0x39EA4Cu;
            goto label_39ea4c;
        }
    }
    ctx->pc = 0x39E97Cu;
    // 0x39e97c: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x39e97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39e980: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x39e980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x39e984: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x39e984u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x39e988: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39e98c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x39e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x39e990: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x39E990u;
    {
        const bool branch_taken_0x39e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E990u;
        // 0x39e994: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e990) {
            ctx->pc = 0x39EA28u;
            goto label_39ea28;
        }
    }
    ctx->pc = 0x39E998u;
    // 0x39e998: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x39e998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39e99c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x39e99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e9a0: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x39e9a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39e9a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39e9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e9a8: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x39e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x39e9ac: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x39e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39e9b0: 0xac4d0020  sw          $t5, 0x20($v0)
    ctx->pc = 0x39e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 13));
    // 0x39e9b4: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x39e9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39e9b8: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x39e9b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39e9bc: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x39e9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x39e9c0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x39E9C0u;
    {
        const bool branch_taken_0x39e9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9C0u;
        // 0x39e9c4: 0xa4e80028  sh          $t0, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9c0) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39E9C8u;
    // 0x39e9c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x39e9cc: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x39e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39e9d0: 0x2442ba90  addiu       $v0, $v0, -0x4570
    ctx->pc = 0x39e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
    // 0x39e9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e9d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39e9dc: 0x800008  jr          $a0
    ctx->pc = 0x39E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39E9E4u: goto label_39e9e4;
            case 0x39E9F0u: goto label_39e9f0;
            case 0x39EA00u: goto label_39ea00;
            case 0x39EA08u: goto label_39ea08;
            case 0x39EA14u: goto label_39ea14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E9DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39E9E4u;
label_39e9e4:
    // 0x39e9e4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39e9e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39E9E8u;
    {
        const bool branch_taken_0x39e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9E8u;
        // 0x39e9ec: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9e8) {
            ctx->pc = 0x39E9F4u;
            goto label_39e9f4;
        }
    }
    ctx->pc = 0x39E9F0u;
label_39e9f0:
    // 0x39e9f0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39e9f4:
    // 0x39e9f4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39e9f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39E9F8u;
    {
        const bool branch_taken_0x39e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E9F8u;
        // 0x39e9fc: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e9f8) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA00u;
label_39ea00:
    // 0x39ea00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x39EA00u;
    {
        const bool branch_taken_0x39ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA00u;
        // 0x39ea04: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea00) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA08u;
label_39ea08:
    // 0x39ea08: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x39ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x39ea0c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x39EA0Cu;
    {
        const bool branch_taken_0x39ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA0Cu;
        // 0x39ea10: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea0c) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA14u;
label_39ea14:
    // 0x39ea14: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39ea18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39ea1c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39ea20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x39EA20u;
    {
        const bool branch_taken_0x39ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA20u;
        // 0x39ea24: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea20) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA28u;
label_39ea28:
    // 0x39ea28: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x39ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x39ea2c: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x39ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39ea30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39ea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ea34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x39ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x39ea38: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x39ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x39ea3c: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x39ea3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39ea40: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x39ea40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ea44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39EA44u;
    {
        const bool branch_taken_0x39ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA44u;
        // 0x39ea48: 0xa4e00028  sh          $zero, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea44) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA4Cu;
label_39ea4c:
    // 0x39ea4c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39ea50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39EA50u;
    {
        const bool branch_taken_0x39ea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA50u;
        // 0x39ea54: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea50) {
            ctx->pc = 0x39EA84u;
            goto label_39ea84;
        }
    }
    ctx->pc = 0x39EA58u;
    // 0x39ea58: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x39ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39ea5c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x39ea5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39ea60: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x39ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x39ea64: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x39ea64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x39ea68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x39ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ea6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39ea6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ea70: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x39ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x39ea74: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x39ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x39ea78: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x39ea78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x39ea7c: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x39ea7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ea80: 0xa4600028  sh          $zero, 0x28($v1)
    ctx->pc = 0x39ea80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 0));
label_39ea84:
    // 0x39ea84: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39ea84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39ea88: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x39ea88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x39ea8c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x39EA8Cu;
    {
        const bool branch_taken_0x39ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EA8Cu;
        // 0x39ea90: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea8c) {
            ctx->pc = 0x39E968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e968;
        }
    }
    ctx->pc = 0x39EA94u;
    // 0x39ea94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x39ea94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39ea98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ea9c: 0x91c500b5  lbu         $a1, 0xB5($t6)
    ctx->pc = 0x39ea9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 181)));
    // 0x39eaa0: 0x59400b  movn        $t0, $v0, $t9
    ctx->pc = 0x39eaa0u;
    if (GPR_U64(ctx, 25) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x39eaa4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39eaa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eaa8: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x39eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x39eaac: 0x0  nop
    ctx->pc = 0x39eaacu;
    // NOP
label_39eab0:
    // 0x39eab0: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x39eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x39eab4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39eab8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x39eab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39eabc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x39EABCu;
    {
        const bool branch_taken_0x39eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EABCu;
        // 0x39eac0: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eabc) {
            ctx->pc = 0x39EB74u;
            goto label_39eb74;
        }
    }
    ctx->pc = 0x39EAC4u;
    // 0x39eac4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x39EAC4u;
    {
        const bool branch_taken_0x39eac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAC4u;
        // 0x39eac8: 0x2d42000c  sltiu       $v0, $t2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eac4) {
            ctx->pc = 0x39EB70u;
            goto label_39eb70;
        }
    }
    ctx->pc = 0x39EACCu;
    // 0x39eacc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x39EACCu;
    {
        const bool branch_taken_0x39eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EACCu;
        // 0x39ead0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eacc) {
            ctx->pc = 0x39EB68u;
            goto label_39eb68;
        }
    }
    ctx->pc = 0x39EAD4u;
    // 0x39ead4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x39ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39ead8: 0x2442bab0  addiu       $v0, $v0, -0x4550
    ctx->pc = 0x39ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949552));
    // 0x39eadc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39eae0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39eae4: 0x800008  jr          $a0
    ctx->pc = 0x39EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39EAECu: goto label_39eaec;
            case 0x39EB04u: goto label_39eb04;
            case 0x39EB0Cu: goto label_39eb0c;
            case 0x39EB20u: goto label_39eb20;
            case 0x39EB28u: goto label_39eb28;
            case 0x39EB38u: goto label_39eb38;
            case 0x39EB50u: goto label_39eb50;
            case 0x39EB68u: goto label_39eb68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EAE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39EAECu;
label_39eaec:
    // 0x39eaec: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x39eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39eaf0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39eaf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39eaf8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39eafc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x39EAFCu;
    {
        const bool branch_taken_0x39eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EAFCu;
        // 0x39eb00: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eafc) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB04u;
label_39eb04:
    // 0x39eb04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39EB04u;
    {
        const bool branch_taken_0x39eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB04u;
        // 0x39eb08: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb04) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB0Cu;
label_39eb0c:
    // 0x39eb0c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x39eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39eb10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39eb14: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39eb18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39EB18u;
    {
        const bool branch_taken_0x39eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB18u;
        // 0x39eb1c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb18) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB20u;
label_39eb20:
    // 0x39eb20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39EB20u;
    {
        const bool branch_taken_0x39eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB20u;
        // 0x39eb24: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb20) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB28u;
label_39eb28:
    // 0x39eb28: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x39eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39eb2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39eb30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39EB30u;
    {
        const bool branch_taken_0x39eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB30u;
        // 0x39eb34: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb30) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB38u;
label_39eb38:
    // 0x39eb38: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x39eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39eb3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39eb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39eb44: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39eb48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39EB48u;
    {
        const bool branch_taken_0x39eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB48u;
        // 0x39eb4c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb48) {
            ctx->pc = 0x39EB64u;
            goto label_39eb64;
        }
    }
    ctx->pc = 0x39EB50u;
label_39eb50:
    // 0x39eb50: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x39eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39eb54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39eb58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39eb5c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39eb60: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39eb60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_39eb64:
    // 0x39eb64: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x39eb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_39eb68:
    // 0x39eb68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39EB68u;
    {
        const bool branch_taken_0x39eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB68u;
        // 0x39eb6c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb68) {
            ctx->pc = 0x39EB74u;
            goto label_39eb74;
        }
    }
    ctx->pc = 0x39EB70u;
label_39eb70:
    // 0x39eb70: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x39eb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_39eb74:
    // 0x39eb74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39eb74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39eb78: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x39eb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x39eb7c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x39EB7Cu;
    {
        const bool branch_taken_0x39eb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB7Cu;
        // 0x39eb80: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb7c) {
            ctx->pc = 0x39EAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eab0;
        }
    }
    ctx->pc = 0x39EB84u;
    // 0x39eb84: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39eb88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39eb88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb8c: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x39eb8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39eb90: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x39eb90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39eb94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb98: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x39eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x39eb9c: 0x0  nop
    ctx->pc = 0x39eb9cu;
    // NOP
label_39eba0:
    // 0x39eba0: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x39eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x39eba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39eba8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39ebac: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x39EBACu;
    {
        const bool branch_taken_0x39ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBACu;
        // 0x39ebb0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebac) {
            ctx->pc = 0x39EC84u;
            goto label_39ec84;
        }
    }
    ctx->pc = 0x39EBB4u;
    // 0x39ebb4: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x39ebb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39ebb8: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x39ebb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x39ebbc: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x39ebbcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x39ebc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39ebc4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x39ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x39ebc8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x39EBC8u;
    {
        const bool branch_taken_0x39ebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBC8u;
        // 0x39ebcc: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebc8) {
            ctx->pc = 0x39EC60u;
            goto label_39ec60;
        }
    }
    ctx->pc = 0x39EBD0u;
    // 0x39ebd0: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x39ebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39ebd4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x39ebd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ebd8: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x39ebd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39ebdc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39ebdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ebe0: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x39ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x39ebe4: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x39ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39ebe8: 0xac4d0024  sw          $t5, 0x24($v0)
    ctx->pc = 0x39ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 13));
    // 0x39ebec: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x39ebecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ebf0: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x39ebf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39ebf4: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x39ebf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x39ebf8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x39EBF8u;
    {
        const bool branch_taken_0x39ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBF8u;
        // 0x39ebfc: 0xa4e8002a  sh          $t0, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebf8) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC00u;
    // 0x39ec00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x39ec04: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x39ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x39ec08: 0x2442bae0  addiu       $v0, $v0, -0x4520
    ctx->pc = 0x39ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949600));
    // 0x39ec0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ec10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ec14: 0x800008  jr          $a0
    ctx->pc = 0x39EC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39EC1Cu: goto label_39ec1c;
            case 0x39EC24u: goto label_39ec24;
            case 0x39EC2Cu: goto label_39ec2c;
            case 0x39EC38u: goto label_39ec38;
            case 0x39EC4Cu: goto label_39ec4c;
            case 0x39ECBCu: goto label_39ecbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EC14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39EC1Cu;
label_39ec1c:
    // 0x39ec1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39EC1Cu;
    {
        const bool branch_taken_0x39ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC1Cu;
        // 0x39ec20: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec1c) {
            ctx->pc = 0x39EC40u;
            goto label_39ec40;
        }
    }
    ctx->pc = 0x39EC24u;
label_39ec24:
    // 0x39ec24: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x39EC24u;
    {
        const bool branch_taken_0x39ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC24u;
        // 0x39ec28: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec24) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC2Cu;
label_39ec2c:
    // 0x39ec2c: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x39ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x39ec30: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39EC30u;
    {
        const bool branch_taken_0x39ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC30u;
        // 0x39ec34: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec30) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC38u;
label_39ec38:
    // 0x39ec38: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39ec3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_39ec40:
    // 0x39ec40: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39ec44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x39EC44u;
    {
        const bool branch_taken_0x39ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC44u;
        // 0x39ec48: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec44) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC4Cu;
label_39ec4c:
    // 0x39ec4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39ec50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39ec54: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39ec58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x39EC58u;
    {
        const bool branch_taken_0x39ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC58u;
        // 0x39ec5c: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec58) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC60u;
label_39ec60:
    // 0x39ec60: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x39ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x39ec64: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x39ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39ec68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec6c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x39ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x39ec70: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x39ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x39ec74: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x39ec74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39ec78: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x39ec78u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ec7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39EC7Cu;
    {
        const bool branch_taken_0x39ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC7Cu;
        // 0x39ec80: 0xa4e0002a  sh          $zero, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec7c) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC84u;
label_39ec84:
    // 0x39ec84: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x39ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x39ec88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39EC88u;
    {
        const bool branch_taken_0x39ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC88u;
        // 0x39ec8c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec88) {
            ctx->pc = 0x39ECBCu;
            goto label_39ecbc;
        }
    }
    ctx->pc = 0x39EC90u;
    // 0x39ec90: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x39ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x39ec94: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x39ec94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39ec98: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x39ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x39ec9c: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x39ec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x39eca0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x39eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eca4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39eca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eca8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x39eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x39ecac: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x39ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x39ecb0: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x39ecb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x39ecb4: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x39ecb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ecb8: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x39ecb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
label_39ecbc:
    // 0x39ecbc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x39ecbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39ecc0: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x39ecc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x39ecc4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x39ECC4u;
    {
        const bool branch_taken_0x39ecc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECC4u;
        // 0x39ecc8: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ecc4) {
            ctx->pc = 0x39EBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eba0;
        }
    }
    ctx->pc = 0x39ECCCu;
    // 0x39eccc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x39ecccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ecd0: 0x2d420003  sltiu       $v0, $t2, 0x3
    ctx->pc = 0x39ecd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x39ecd4: 0x1440fe86  bnez        $v0, . + 4 + (-0x17A << 2)
    ctx->pc = 0x39ECD4u;
    {
        const bool branch_taken_0x39ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECD4u;
        // 0x39ecd8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ecd4) {
            ctx->pc = 0x39E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e6f0;
        }
    }
    ctx->pc = 0x39ECDCu;
    // 0x39ecdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ece0:
    // 0x39ece0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ece0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ece4: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x39ece4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x39ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECE8u;
        // 0x39ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ECF0u;
}
