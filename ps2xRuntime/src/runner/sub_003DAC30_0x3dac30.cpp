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

// Function: sub_003DAC30
// Address: 0x3dac30 - 0x3db098
void sub_003DAC30_0x3dac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAC30_0x3dac30");
#endif

    switch (ctx->pc) {
        case 0x3daf10u: goto label_3daf10;
        case 0x3db06cu: goto label_3db06c;
        case 0x3db07cu: goto label_3db07c;
        default: break;
    }

    ctx->pc = 0x3dac30u;

    // 0x3dac30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dac34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3dac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3dac38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3dac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3dac3c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3dac3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dac44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dac44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3dac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3dac4c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3dac4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dac54: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dac54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dac58: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3dac58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3dac5c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAC5Cu;
    {
        const bool branch_taken_0x3dac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC5Cu;
        // 0x3dac60: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac5c) {
            ctx->pc = 0x3DACD4u;
            goto label_3dacd4;
        }
    }
    ctx->pc = 0x3DAC64u;
    // 0x3dac64: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dac64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dac68: 0x2526feff  addiu       $a2, $t1, -0x101
    ctx->pc = 0x3dac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967039));
    // 0x3dac6c: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3dac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dac70: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3dac70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dac74: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3dac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3dac78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3dac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dac7c: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dac7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dac80: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3dac80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3dac84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dac88: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dac88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dac8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dac90: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3dac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dac94: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dac94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dac98: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3dac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3dac9c: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3dac9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daca0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3daca4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3daca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3daca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3daca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dacac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dacacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dacb0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dacb4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3dacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3dacb8: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dacb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dacbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dacc0: 0x2463fff5  addiu       $v1, $v1, -0xB
    ctx->pc = 0x3dacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967285));
    // 0x3dacc4: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3dacc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3dacc8: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x3daccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DACCCu;
    {
        const bool branch_taken_0x3daccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACCCu;
        // 0x3dacd0: 0xa60616d0  sh          $a2, 0x16D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daccc) {
            ctx->pc = 0x3DACF0u;
            goto label_3dacf0;
        }
    }
    ctx->pc = 0x3DACD4u;
label_3dacd4:
    // 0x3dacd4: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dacd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dacd8: 0x2523feff  addiu       $v1, $t1, -0x101
    ctx->pc = 0x3dacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967039));
    // 0x3dacdc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3dacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dace0: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x3dace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x3dace4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dace8: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dace8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3dacec: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dacecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dacf0:
    // 0x3dacf0: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dacf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dacf4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3dacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3dacf8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3dacf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3dacfc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DACFCu;
    {
        const bool branch_taken_0x3dacfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACFCu;
        // 0x3dad00: 0x2546ffff  addiu       $a2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dacfc) {
            ctx->pc = 0x3DAD74u;
            goto label_3dad74;
        }
    }
    ctx->pc = 0x3DAD04u;
    // 0x3dad04: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dad04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dad08: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x3dad08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dad0c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3dad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dad10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dad14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3dad14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dad18: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dad18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dad1c: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x3dad1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3dad20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dad24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3dad24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dad28: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dad28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dad2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dad30: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x3dad30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dad34: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3dad34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dad38: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3dad38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3dad3c: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3dad3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dad40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3dad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dad44: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dad48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dad4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dad4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dad50: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dad54: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x3dad54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x3dad58: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dad5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dad60: 0x2463fff5  addiu       $v1, $v1, -0xB
    ctx->pc = 0x3dad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967285));
    // 0x3dad64: 0x473807  srav        $a3, $a3, $v0
    ctx->pc = 0x3dad64u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3dad68: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dad68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x3dad6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DAD6Cu;
    {
        const bool branch_taken_0x3dad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD6Cu;
        // 0x3dad70: 0xa60716d0  sh          $a3, 0x16D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad6c) {
            ctx->pc = 0x3DAD94u;
            goto label_3dad94;
        }
    }
    ctx->pc = 0x3DAD74u;
label_3dad74:
    // 0x3dad74: 0x2545ffff  addiu       $a1, $t2, -0x1
    ctx->pc = 0x3dad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3dad78: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dad78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dad7c: 0x851804  sllv        $v1, $a1, $a0
    ctx->pc = 0x3dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dad80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dad80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dad84: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x3dad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x3dad88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dad8c: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3dad90: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dad90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dad94:
    // 0x3dad94: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dad94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dad98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3dad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3dad9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3dad9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3dada0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DADA0u;
    {
        const bool branch_taken_0x3dada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADA0u;
        // 0x3dada4: 0x2506fffc  addiu       $a2, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dada0) {
            ctx->pc = 0x3DAE14u;
            goto label_3dae14;
        }
    }
    ctx->pc = 0x3DADA8u;
    // 0x3dada8: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dada8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dadac: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3dadacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dadb0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3dadb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dadb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3dadb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3dadb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3dadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dadbc: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dadbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dadc0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3dadc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3dadc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dadc8: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dadc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dadcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dadccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dadd0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3dadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dadd4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dadd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dadd8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3dadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3daddc: 0x960316d0  lhu         $v1, 0x16D0($s0)
    ctx->pc = 0x3daddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dade0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3dade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dade4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dade8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dadec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dadecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dadf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dadf4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3dadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x3dadf8: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dadfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dae00: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x3dae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x3dae04: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3dae04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3dae08: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x3dae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x3dae0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAE0Cu;
    {
        const bool branch_taken_0x3dae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE0Cu;
        // 0x3dae10: 0xa60616d0  sh          $a2, 0x16D0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae0c) {
            ctx->pc = 0x3DAE30u;
            goto label_3dae30;
        }
    }
    ctx->pc = 0x3DAE14u;
label_3dae14:
    // 0x3dae14: 0x960216d0  lhu         $v0, 0x16D0($s0)
    ctx->pc = 0x3dae14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dae18: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x3dae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3dae1c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3dae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dae20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3dae24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dae28: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3dae2c: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dae2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dae30:
    // 0x3dae30: 0x2526ffff  addiu       $a2, $t1, -0x1
    ctx->pc = 0x3dae30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3dae34: 0x260500a4  addiu       $a1, $s0, 0xA4
    ctx->pc = 0x3dae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x3dae38: 0x1900008a  blez        $t0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3DAE38u;
    {
        const bool branch_taken_0x3dae38 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE38u;
        // 0x3dae3c: 0x26120998  addiu       $s2, $s0, 0x998 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae38) {
            ctx->pc = 0x3DB064u;
            goto label_3db064;
        }
    }
    ctx->pc = 0x3DAE40u;
    // 0x3dae40: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3dae40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dae44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3dae44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3dae48: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x3dae48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dae4c: 0x240e000d  addiu       $t6, $zero, 0xD
    ctx->pc = 0x3dae4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dae50: 0x260d0a8e  addiu       $t5, $s0, 0xA8E
    ctx->pc = 0x3dae50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 2702));
    // 0x3dae54: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3dae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3dae58: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3DAE58u;
    {
        const bool branch_taken_0x3dae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE58u;
        // 0x3dae5c: 0x248cc988  addiu       $t4, $a0, -0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae58) {
            ctx->pc = 0x3DAF10u;
            goto label_3daf10;
        }
    }
    ctx->pc = 0x3DAE60u;
    // 0x3dae60: 0x8e0916d4  lw          $t1, 0x16D4($s0)
    ctx->pc = 0x3dae60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dae64: 0x1c9102a  slt         $v0, $t6, $t1
    ctx->pc = 0x3dae64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3dae68: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAE68u;
    {
        const bool branch_taken_0x3dae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE68u;
        // 0x3dae6c: 0x9082c988  lbu         $v0, -0x3678($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294953352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae68) {
            ctx->pc = 0x3DAEE0u;
            goto label_3daee0;
        }
    }
    ctx->pc = 0x3DAE70u;
    // 0x3dae70: 0x960a16d0  lhu         $t2, 0x16D0($s0)
    ctx->pc = 0x3dae70u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dae74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dae74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dae78: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x3dae78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dae7c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3dae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3dae80: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3dae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dae84: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3dae84u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dae88: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3dae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3dae8c: 0x12b1004  sllv        $v0, $t3, $t1
    ctx->pc = 0x3dae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x3dae90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3dae90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3dae94: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3dae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3dae98: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3dae98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dae9c: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dae9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daea0: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3daea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daea4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3daea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daea8: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x3daea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x3daeac: 0x960416d0  lhu         $a0, 0x16D0($s0)
    ctx->pc = 0x3daeacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daeb0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3daeb4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3daeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3daeb8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3daeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3daebc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3daebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3daec0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3daec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3daec4: 0xae09001c  sw          $t1, 0x1C($s0)
    ctx->pc = 0x3daec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
    // 0x3daec8: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x3daec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3daecc: 0x2448fff3  addiu       $t0, $v0, -0xD
    ctx->pc = 0x3daeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x3daed0: 0x1e22023  subu        $a0, $t7, $v0
    ctx->pc = 0x3daed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3daed4: 0x8b1007  srav        $v0, $t3, $a0
    ctx->pc = 0x3daed4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x3daed8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DAED8u;
    {
        const bool branch_taken_0x3daed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAED8u;
        // 0x3daedc: 0xae0816d4  sw          $t0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daed8) {
            ctx->pc = 0x3DAF00u;
            goto label_3daf00;
        }
    }
    ctx->pc = 0x3DAEE0u;
label_3daee0:
    // 0x3daee0: 0x960816d0  lhu         $t0, 0x16D0($s0)
    ctx->pc = 0x3daee0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daee4: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x3daee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x3daee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3daee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3daeec: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3daeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3daef0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3daef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3daef4: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3daef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3daef8: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x3daef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x3daefc: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3daefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3daf00:
    // 0x3daf00: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3daf00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daf04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3daf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3daf08: 0x10e00056  beqz        $a3, . + 4 + (0x56 << 2)
    ctx->pc = 0x3DAF08u;
    {
        const bool branch_taken_0x3daf08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF08u;
        // 0x3daf0c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daf08) {
            ctx->pc = 0x3DB064u;
            goto label_3db064;
        }
    }
    ctx->pc = 0x3DAF10u;
label_3daf10:
    // 0x3daf10: 0x8e0916d4  lw          $t1, 0x16D4($s0)
    ctx->pc = 0x3daf10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3daf14: 0x1c9102a  slt         $v0, $t6, $t1
    ctx->pc = 0x3daf14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3daf18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAF18u;
    {
        const bool branch_taken_0x3daf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF18u;
        // 0x3daf1c: 0x91820000  lbu         $v0, 0x0($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daf18) {
            ctx->pc = 0x3DAF90u;
            goto label_3daf90;
        }
    }
    ctx->pc = 0x3DAF20u;
    // 0x3daf20: 0x960a16d0  lhu         $t2, 0x16D0($s0)
    ctx->pc = 0x3daf20u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daf24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3daf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3daf28: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x3daf28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3daf2c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3daf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3daf30: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3daf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3daf34: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3daf34u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3daf38: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3daf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3daf3c: 0x12b1004  sllv        $v0, $t3, $t1
    ctx->pc = 0x3daf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x3daf40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3daf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3daf44: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3daf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3daf48: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3daf48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daf4c: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3daf4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daf50: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3daf50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daf54: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3daf54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daf58: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x3daf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x3daf5c: 0x960416d0  lhu         $a0, 0x16D0($s0)
    ctx->pc = 0x3daf5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daf60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3daf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3daf64: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3daf64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3daf68: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3daf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3daf6c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3daf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3daf70: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3daf70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3daf74: 0xae09001c  sw          $t1, 0x1C($s0)
    ctx->pc = 0x3daf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
    // 0x3daf78: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x3daf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3daf7c: 0x2448fff3  addiu       $t0, $v0, -0xD
    ctx->pc = 0x3daf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x3daf80: 0x1e22023  subu        $a0, $t7, $v0
    ctx->pc = 0x3daf80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3daf84: 0x8b1007  srav        $v0, $t3, $a0
    ctx->pc = 0x3daf84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x3daf88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DAF88u;
    {
        const bool branch_taken_0x3daf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF88u;
        // 0x3daf8c: 0xae0816d4  sw          $t0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daf88) {
            ctx->pc = 0x3DAFB0u;
            goto label_3dafb0;
        }
    }
    ctx->pc = 0x3DAF90u;
label_3daf90:
    // 0x3daf90: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x3daf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x3daf94: 0x960816d0  lhu         $t0, 0x16D0($s0)
    ctx->pc = 0x3daf94u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daf98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3daf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3daf9c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3daf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3dafa0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3dafa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dafa4: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3dafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3dafa8: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x3dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x3dafac: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3dafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3dafb0:
    // 0x3dafb0: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3dafb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dafb4: 0x8e0916d4  lw          $t1, 0x16D4($s0)
    ctx->pc = 0x3dafb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3dafb8: 0x1c9102a  slt         $v0, $t6, $t1
    ctx->pc = 0x3dafb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3dafbc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAFBCu;
    {
        const bool branch_taken_0x3dafbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFBCu;
        // 0x3dafc0: 0x91820001  lbu         $v0, 0x1($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dafbc) {
            ctx->pc = 0x3DB034u;
            goto label_3db034;
        }
    }
    ctx->pc = 0x3DAFC4u;
    // 0x3dafc4: 0x960a16d0  lhu         $t2, 0x16D0($s0)
    ctx->pc = 0x3dafc4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3dafc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dafcc: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x3dafccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3dafd0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3dafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3dafd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3dafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dafd8: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3dafd8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dafdc: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3dafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3dafe0: 0x12b1004  sllv        $v0, $t3, $t1
    ctx->pc = 0x3dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x3dafe4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3dafe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3dafe8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3dafe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3dafec: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3dafecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daff0: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3daff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3daff4: 0x920216d0  lbu         $v0, 0x16D0($s0)
    ctx->pc = 0x3daff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3daff8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3daff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daffc: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x3daffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x3db000: 0x960416d0  lhu         $a0, 0x16D0($s0)
    ctx->pc = 0x3db000u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db004: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3db004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3db008: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3db008u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3db00c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3db00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3db010: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3db010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3db014: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3db014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3db018: 0xae09001c  sw          $t1, 0x1C($s0)
    ctx->pc = 0x3db018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
    // 0x3db01c: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x3db01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x3db020: 0x2448fff3  addiu       $t0, $v0, -0xD
    ctx->pc = 0x3db020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x3db024: 0x1e22023  subu        $a0, $t7, $v0
    ctx->pc = 0x3db024u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3db028: 0x8b1007  srav        $v0, $t3, $a0
    ctx->pc = 0x3db028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x3db02c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DB02Cu;
    {
        const bool branch_taken_0x3db02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB02Cu;
        // 0x3db030: 0xae0816d4  sw          $t0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db02c) {
            ctx->pc = 0x3DB054u;
            goto label_3db054;
        }
    }
    ctx->pc = 0x3DB034u;
label_3db034:
    // 0x3db034: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x3db034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x3db038: 0x960816d0  lhu         $t0, 0x16D0($s0)
    ctx->pc = 0x3db038u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x3db03c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3db040: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x3db040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3db044: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3db044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db048: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x3db048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x3db04c: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x3db04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x3db050: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3db050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3db054:
    // 0x3db054: 0xa60216d0  sh          $v0, 0x16D0($s0)
    ctx->pc = 0x3db054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db058: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3db058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3db05c: 0x14e0ffac  bnez        $a3, . + 4 + (-0x54 << 2)
    ctx->pc = 0x3DB05Cu;
    {
        const bool branch_taken_0x3db05c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB05Cu;
        // 0x3db060: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db05c) {
            ctx->pc = 0x3DAF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3daf10;
        }
    }
    ctx->pc = 0x3DB064u;
label_3db064:
    // 0x3db064: 0xc0f692e  jal         func_3DA4B8
    ctx->pc = 0x3DB064u;
    SET_GPR_U32(ctx, 31, 0x3DB06Cu);
    ctx->pc = 0x3DB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB064u;
    // 0x3db068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA4B8u, 0x3DB064u, 0x3DB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB06Cu;
label_3db06c:
    // 0x3db06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db070: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3db070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db074: 0xc0f692e  jal         func_3DA4B8
    ctx->pc = 0x3DB074u;
    SET_GPR_U32(ctx, 31, 0x3DB07Cu);
    ctx->pc = 0x3DB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB074u;
    // 0x3db078: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA4B8u, 0x3DB074u, 0x3DB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB07Cu;
label_3db07c:
    // 0x3db07c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3db07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3db080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3db080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3db084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db08c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB08Cu;
        // 0x3db090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB094u;
    // 0x3db094: 0x0  nop
    ctx->pc = 0x3db094u;
    // NOP
    ctx->pc = 0x3db098u;
}
