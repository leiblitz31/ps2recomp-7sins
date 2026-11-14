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

// Function: sub_003DB098
// Address: 0x3db098 - 0x3db370
void sub_003DB098_0x3db098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB098_0x3db098");
#endif

    switch (ctx->pc) {
        case 0x3db1f8u: goto label_3db1f8;
        case 0x3db350u: goto label_3db350;
        default: break;
    }

    ctx->pc = 0x3db098u;

    // 0x3db098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3db09c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3db0a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3db0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3db0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3db0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db0b0: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db0b4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3db0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3db0b8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3DB0B8u;
    {
        const bool branch_taken_0x3db0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0B8u;
        // 0x3db0bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db0b8) {
            ctx->pc = 0x3DB128u;
            goto label_3db128;
        }
    }
    ctx->pc = 0x3DB0C0u;
    // 0x3db0c0: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db0c4: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x3db0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db0c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3db0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db0cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3db0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3db0d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3db0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3db0d4: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db0d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db0dc: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db0e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db0e4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3db0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db0e8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db0ec: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3db0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3db0f0: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db0f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db0f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3db0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db0f8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db0fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db100: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db104: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3db104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db108: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3db108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3db10c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x3db10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db110: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3db110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db114: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x3db114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x3db118: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3db118u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3db11c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x3db11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x3db120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB120u;
    {
        const bool branch_taken_0x3db120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB120u;
        // 0x3db124: 0xa60616d0  sh          $a2, 0x16D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db120) {
            ctx->pc = 0x3DB144u;
            goto label_3db144;
        }
    }
    ctx->pc = 0x3DB128u;
label_3db128:
    // 0x3db128: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db12c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3db12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3db130: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3db130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db134: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3db134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3db138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3db138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3db13c: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3db140: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3db144:
    // 0x3db144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3db144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3db148: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3db148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db14c: 0x2443c9a0  addiu       $v1, $v0, -0x3660
    ctx->pc = 0x3db14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
    // 0x3db150: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3db150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db154: 0x94670402  lhu         $a3, 0x402($v1)
    ctx->pc = 0x3db154u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x5FCDA2u));
    // 0x3db158: 0x8e0516d4  lw          $a1, 0x16D4($s0)
    ctx->pc = 0x3db158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db15c: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x3db15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3db160: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3db160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3db164: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DB164u;
    {
        const bool branch_taken_0x3db164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db164) {
            ctx->pc = 0x3DB168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB164u;
            // 0x3db168: 0x94620400  lhu         $v0, 0x400($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB1D8u;
            goto label_3db1d8;
        }
    }
    ctx->pc = 0x3DB16Cu;
    // 0x3db16c: 0x94660400  lhu         $a2, 0x400($v1)
    ctx->pc = 0x3db16cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x3db170: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db174: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3db174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3db178: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3db178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3db17c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3db17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3db180: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3db180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db184: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db18c: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db190: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db194: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3db194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db198: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db19c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3db19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3db1a0: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db1a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db1a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db1a8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db1ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db1b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db1b4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3db1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3db1b8: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x3db1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db1bc: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x3db1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3db1c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3db1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3db1c4: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3db1c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3db1c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3db1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3db1cc: 0xa60616d0  sh          $a2, 0x16D0($s0)
    ctx->pc = 0x3db1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3db1d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB1D0u;
    {
        const bool branch_taken_0x3db1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1D0u;
        // 0x3db1d4: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db1d0) {
            ctx->pc = 0x3DB1F0u;
            goto label_3db1f0;
        }
    }
    ctx->pc = 0x3DB1D8u;
label_3db1d8:
    // 0x3db1d8: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x3db1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3db1dc: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db1dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db1e0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3db1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3db1e4: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3db1e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3db1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3db1ec: 0xa60316d0  sh          $v1, 0x16D0($s0)
    ctx->pc = 0x3db1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3db1f0:
    // 0x3db1f0: 0xc0f70b4  jal         func_3DC2D0
    ctx->pc = 0x3DB1F0u;
    SET_GPR_U32(ctx, 31, 0x3DB1F8u);
    ctx->pc = 0x3DB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB1F0u;
    // 0x3db1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC2D0u, 0x3DB1F0u, 0x3DB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1F8u;
label_3db1f8:
    // 0x3db1f8: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db1fc: 0x8e0216cc  lw          $v0, 0x16CC($s0)
    ctx->pc = 0x3db1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5836)));
    // 0x3db200: 0x2483fff5  addiu       $v1, $a0, -0xB
    ctx->pc = 0x3db200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967285));
    // 0x3db204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3db204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db208: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3db208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3db20c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3DB20Cu;
    {
        const bool branch_taken_0x3db20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB20Cu;
        // 0x3db210: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db20c) {
            ctx->pc = 0x3DB350u;
            goto label_3db350;
        }
    }
    ctx->pc = 0x3DB214u;
    // 0x3db214: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3db214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3db218: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3DB218u;
    {
        const bool branch_taken_0x3db218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB218u;
        // 0x3db21c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db218) {
            ctx->pc = 0x3DB288u;
            goto label_3db288;
        }
    }
    ctx->pc = 0x3DB220u;
    // 0x3db220: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db224: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x3db224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db228: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3db228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db22c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3db22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3db230: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3db230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3db234: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db23c: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db240: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db244: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3db244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db248: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db24c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3db24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3db250: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db254: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3db254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db258: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db25c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db260: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db264: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3db264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db268: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3db268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3db26c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x3db26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db270: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3db270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db274: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x3db274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x3db278: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3db278u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3db27c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x3db27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x3db280: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB280u;
    {
        const bool branch_taken_0x3db280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB280u;
        // 0x3db284: 0xa60616d0  sh          $a2, 0x16D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db280) {
            ctx->pc = 0x3DB2A4u;
            goto label_3db2a4;
        }
    }
    ctx->pc = 0x3DB288u;
label_3db288:
    // 0x3db288: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db28c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3db28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3db290: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3db290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db294: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3db294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3db298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3db298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3db29c: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3db2a0: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3db2a4:
    // 0x3db2a4: 0x2623c9a0  addiu       $v1, $s1, -0x3660
    ctx->pc = 0x3db2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953376));
    // 0x3db2a8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3db2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3db2ac: 0x94670402  lhu         $a3, 0x402($v1)
    ctx->pc = 0x3db2acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1026)));
    // 0x3db2b0: 0x8e0516d4  lw          $a1, 0x16D4($s0)
    ctx->pc = 0x3db2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db2b4: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x3db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3db2b8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3db2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3db2bc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DB2BCu;
    {
        const bool branch_taken_0x3db2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db2bc) {
            ctx->pc = 0x3DB2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB2BCu;
            // 0x3db2c0: 0x94620400  lhu         $v0, 0x400($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB330u;
            goto label_3db330;
        }
    }
    ctx->pc = 0x3DB2C4u;
    // 0x3db2c4: 0x94660400  lhu         $a2, 0x400($v1)
    ctx->pc = 0x3db2c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x3db2c8: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db2c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db2cc: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3db2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3db2d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3db2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3db2d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3db2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3db2d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3db2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db2dc: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db2e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db2e4: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3db2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db2e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3db2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db2ec: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3db2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3db2f0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3db2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3db2f4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3db2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3db2f8: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db2fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db300: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3db300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3db304: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db308: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3db308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db30c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3db30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3db310: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x3db310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db314: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x3db314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3db318: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3db318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3db31c: 0x663007  srav        $a2, $a2, $v1
    ctx->pc = 0x3db31cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3db320: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3db320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3db324: 0xa60616d0  sh          $a2, 0x16D0($s0)
    ctx->pc = 0x3db324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
    // 0x3db328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB328u;
    {
        const bool branch_taken_0x3db328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB328u;
        // 0x3db32c: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db328) {
            ctx->pc = 0x3DB348u;
            goto label_3db348;
        }
    }
    ctx->pc = 0x3DB330u;
label_3db330:
    // 0x3db330: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x3db330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3db334: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3db334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db338: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3db338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3db33c: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3db340: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3db340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3db344: 0xa60316d0  sh          $v1, 0x16D0($s0)
    ctx->pc = 0x3db344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 3));
label_3db348:
    // 0x3db348: 0xc0f70b4  jal         func_3DC2D0
    ctx->pc = 0x3DB348u;
    SET_GPR_U32(ctx, 31, 0x3DB350u);
    ctx->pc = 0x3DB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB348u;
    // 0x3db34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC2D0u, 0x3DB348u, 0x3DB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB350u;
label_3db350:
    // 0x3db350: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3db350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3db354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db358: 0xae0216cc  sw          $v0, 0x16CC($s0)
    ctx->pc = 0x3db358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5836), GPR_U32(ctx, 2));
    // 0x3db35c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3db35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db364: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB364u;
        // 0x3db368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB36Cu;
    // 0x3db36c: 0x0  nop
    ctx->pc = 0x3db36cu;
    // NOP
    ctx->pc = 0x3db370u;
}
