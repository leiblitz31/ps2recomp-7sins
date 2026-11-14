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

// Function: sub_0042FE90
// Address: 0x42fe90 - 0x430178
void sub_0042FE90_0x42fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FE90_0x42fe90");
#endif

    switch (ctx->pc) {
        case 0x42fed0u: goto label_42fed0;
        case 0x42ff00u: goto label_42ff00;
        case 0x42ff38u: goto label_42ff38;
        case 0x42ff48u: goto label_42ff48;
        case 0x430058u: goto label_430058;
        case 0x430100u: goto label_430100;
        default: break;
    }

    ctx->pc = 0x42fe90u;

    // 0x42fe90: 0x27bdef60  addiu       $sp, $sp, -0x10A0
    ctx->pc = 0x42fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963040));
    // 0x42fe94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x42fe94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fe98: 0x7fb01090  sq          $s0, 0x1090($sp)
    ctx->pc = 0x42fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4240), GPR_VEC(ctx, 16));
    // 0x42fe9c: 0x7fb11080  sq          $s1, 0x1080($sp)
    ctx->pc = 0x42fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4224), GPR_VEC(ctx, 17));
    // 0x42fea0: 0x7fb21070  sq          $s2, 0x1070($sp)
    ctx->pc = 0x42fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 18));
    // 0x42fea4: 0x7fb31060  sq          $s3, 0x1060($sp)
    ctx->pc = 0x42fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 19));
    // 0x42fea8: 0x7fb41050  sq          $s4, 0x1050($sp)
    ctx->pc = 0x42fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 20));
    // 0x42feac: 0x7fb51040  sq          $s5, 0x1040($sp)
    ctx->pc = 0x42feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 21));
    // 0x42feb0: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x42feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x42feb4: 0x184000a7  blez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x42FEB4u;
    {
        const bool branch_taken_0x42feb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FEB4u;
        // 0x42feb8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42feb4) {
            ctx->pc = 0x430154u;
            goto label_430154;
        }
    }
    ctx->pc = 0x42FEBCu;
    // 0x42febc: 0x8d95000c  lw          $s5, 0xC($t4)
    ctx->pc = 0x42febcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x42fec0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42fec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fec4: 0x27b21000  addiu       $s2, $sp, 0x1000
    ctx->pc = 0x42fec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x42fec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42fec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42fecc: 0x0  nop
    ctx->pc = 0x42feccu;
    // NOP
label_42fed0:
    // 0x42fed0: 0x1aa0005d  blez        $s5, . + 4 + (0x5D << 2)
    ctx->pc = 0x42FED0u;
    {
        const bool branch_taken_0x42fed0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x42FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FED0u;
        // 0x42fed4: 0x25b30004  addiu       $s3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fed0) {
            ctx->pc = 0x430048u;
            goto label_430048;
        }
    }
    ctx->pc = 0x42FED8u;
    // 0x42fed8: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x42fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x42fedc: 0x25a50002  addiu       $a1, $t5, 0x2
    ctx->pc = 0x42fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x42fee0: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x42fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x42fee4: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x42fee4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x42fee8: 0x1a41018  mult        $v0, $t5, $a0
    ctx->pc = 0x42fee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x42feec: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x42feecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x42fef0: 0x8d91000c  lw          $s1, 0xC($t4)
    ctx->pc = 0x42fef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x42fef4: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x42fef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x42fef8: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x42fef8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42fefc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x42fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_42ff00:
    // 0x42ff00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42ff00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ff04: 0x992821  addu        $a1, $a0, $t9
    ctx->pc = 0x42ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x42ff08: 0x25180010  addiu       $t8, $t0, 0x10
    ctx->pc = 0x42ff08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x42ff0c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x42ff0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42ff10: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x42ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x42ff14: 0x7fa31000  sq          $v1, 0x1000($sp)
    ctx->pc = 0x42ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4096), GPR_VEC(ctx, 3));
    // 0x42ff18: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x42ff18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x42ff1c: 0x7fa21010  sq          $v0, 0x1010($sp)
    ctx->pc = 0x42ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 2));
    // 0x42ff20: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x42ff20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ff24: 0x7fa31020  sq          $v1, 0x1020($sp)
    ctx->pc = 0x42ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 3));
    // 0x42ff28: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x42ff28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x42ff2c: 0x7fa21030  sq          $v0, 0x1030($sp)
    ctx->pc = 0x42ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 2));
    // 0x42ff30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42ff30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ff34: 0x0  nop
    ctx->pc = 0x42ff34u;
    // NOP
label_42ff38:
    // 0x42ff38: 0x254e0010  addiu       $t6, $t2, 0x10
    ctx->pc = 0x42ff38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x42ff3c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x42ff3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ff40: 0xa4827  nor         $t1, $zero, $t2
    ctx->pc = 0x42ff40u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x42ff44: 0x0  nop
    ctx->pc = 0x42ff44u;
    // NOP
label_42ff48:
    // 0x42ff48: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x42FF48u;
    {
        const bool branch_taken_0x42ff48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF48u;
        // 0x42ff4c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff48) {
            ctx->pc = 0x42FFA4u;
            goto label_42ffa4;
        }
    }
    ctx->pc = 0x42FF50u;
    // 0x42ff50: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x42ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x42ff54: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x42ff54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x42ff58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x42ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42ff5c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x42ff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x42ff60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42ff60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x42ff64: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x42ff64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x42ff68: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x42ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x42ff6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42ff6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x42ff70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x42ff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x42ff74: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x42ff74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x42ff78: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x42ff78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x42ff7c: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x42ff7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x42ff80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42ff80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x42ff84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x42ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x42ff88: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x42ff88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x42ff8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x42ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x42ff90: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x42ff90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x42ff94: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x42ff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x42ff98: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x42ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x42ff9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x42FF9Cu;
    {
        const bool branch_taken_0x42ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FF9Cu;
        // 0x42ffa0: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ff9c) {
            ctx->pc = 0x42FFF0u;
            goto label_42fff0;
        }
    }
    ctx->pc = 0x42FFA4u;
label_42ffa4:
    // 0x42ffa4: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x42ffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x42ffa8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x42ffa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x42ffac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x42ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42ffb0: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x42ffb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x42ffb4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42ffb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x42ffb8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x42ffb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x42ffbc: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x42ffbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x42ffc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42ffc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x42ffc4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x42ffc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x42ffc8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x42ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x42ffcc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x42ffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x42ffd0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x42ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x42ffd4: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x42ffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x42ffd8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x42ffd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x42ffdc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x42ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x42ffe0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42ffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x42ffe4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42ffe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x42ffe8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x42ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x42ffec: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x42ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_42fff0:
    // 0x42fff0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x42fff0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x42fff4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x42fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x42fff8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x42fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x42fffc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x42fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x430000: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x430000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x430004: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x430004u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43000c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x43000cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x430010: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x430010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x430014: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x430014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x430018: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x430018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x43001c: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x43001cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x430020: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x430020u;
    {
        const bool branch_taken_0x430020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430020u;
        // 0x430024: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430020) {
            ctx->pc = 0x42FF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ff48;
        }
    }
    ctx->pc = 0x430028u;
    // 0x430028: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x430028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43002c: 0x29420040  slti        $v0, $t2, 0x40
    ctx->pc = 0x43002cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x430030: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x430030u;
    {
        const bool branch_taken_0x430030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430030) {
            ctx->pc = 0x430034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430030u;
            // 0x430034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ff38;
        }
    }
    ctx->pc = 0x430038u;
    // 0x430038: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x430038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43003c: 0x111102a  slt         $v0, $t0, $s1
    ctx->pc = 0x43003cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x430040: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x430040u;
    {
        const bool branch_taken_0x430040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430040u;
        // 0x430044: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430040) {
            ctx->pc = 0x42FF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ff00;
        }
    }
    ctx->pc = 0x430048u;
label_430048:
    // 0x430048: 0x8d89000c  lw          $t1, 0xC($t4)
    ctx->pc = 0x430048u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x43004c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43004cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x430050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430054: 0x0  nop
    ctx->pc = 0x430054u;
    // NOP
label_430058:
    // 0x430058: 0x19200036  blez        $t1, . + 4 + (0x36 << 2)
    ctx->pc = 0x430058u;
    {
        const bool branch_taken_0x430058 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430058u;
        // 0x43005c: 0x24ca0001  addiu       $t2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430058) {
            ctx->pc = 0x430134u;
            goto label_430134;
        }
    }
    ctx->pc = 0x430060u;
    // 0x430060: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x430060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x430064: 0x1a61821  addu        $v1, $t5, $a2
    ctx->pc = 0x430064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x430068: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x430068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x43006c: 0x61280  sll         $v0, $a2, 10
    ctx->pc = 0x43006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x430070: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x430070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x430074: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x430074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x430078: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x430078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43007c: 0x3124003f  andi        $a0, $t1, 0x3F
    ctx->pc = 0x43007cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x430080: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x430080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x430084: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x430084u;
    {
        const bool branch_taken_0x430084 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x430088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430084u;
        // 0x430088: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430084) {
            ctx->pc = 0x4300DCu;
            goto label_4300dc;
        }
    }
    ctx->pc = 0x43008Cu;
    // 0x43008c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43008Cu;
    {
        const bool branch_taken_0x43008c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x430090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43008Cu;
        // 0x430090: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43008c) {
            ctx->pc = 0x4300F8u;
            goto label_4300f8;
        }
    }
    ctx->pc = 0x430094u;
    // 0x430094: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x430094u;
    {
        const bool branch_taken_0x430094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430094) {
            ctx->pc = 0x430098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430094u;
            // 0x430098: 0x78c20000  lq          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4300E0u;
            goto label_4300e0;
        }
    }
    ctx->pc = 0x43009Cu;
    // 0x43009c: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x43009cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x4300a0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4300A0u;
    {
        const bool branch_taken_0x4300a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4300a0) {
            ctx->pc = 0x4300A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4300A0u;
            // 0x4300a4: 0x78c20000  lq          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4300CCu;
            goto label_4300cc;
        }
    }
    ctx->pc = 0x4300A8u;
    // 0x4300a8: 0x28820031  slti        $v0, $a0, 0x31
    ctx->pc = 0x4300a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x4300ac: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4300ACu;
    {
        const bool branch_taken_0x4300ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4300ac) {
            ctx->pc = 0x4300B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4300ACu;
            // 0x4300b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4300FCu;
            goto label_4300fc;
        }
    }
    ctx->pc = 0x4300B4u;
    // 0x4300b4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x4300b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4300b8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x4300b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4300bc: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x4300bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4300c0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x4300c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4300c4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4300c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4300c8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4300c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4300cc:
    // 0x4300cc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4300ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4300d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4300d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4300d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4300d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4300d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4300d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4300dc:
    // 0x4300dc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4300dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4300e0:
    // 0x4300e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4300e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4300e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4300e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4300e8: 0x109382a  slt         $a3, $t0, $t1
    ctx->pc = 0x4300e8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4300ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x4300ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x4300f0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x4300F0u;
    {
        const bool branch_taken_0x4300f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4300F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4300F0u;
        // 0x4300f4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4300f0) {
            ctx->pc = 0x430134u;
            goto label_430134;
        }
    }
    ctx->pc = 0x4300F8u;
label_4300f8:
    // 0x4300f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4300f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4300fc:
    // 0x4300fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4300fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_430100:
    // 0x430100: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430100u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430104: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x430104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x430108: 0x109382a  slt         $a3, $t0, $t1
    ctx->pc = 0x430108u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x43010c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x43010cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x430110: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x430110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x430114: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x430114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x430118: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x430118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x43011c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x43011cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x430120: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x430120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x430124: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x430124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x430128: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x430128u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x43012c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x43012Cu;
    {
        const bool branch_taken_0x43012c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x430130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43012Cu;
        // 0x430130: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43012c) {
            ctx->pc = 0x430100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430100;
        }
    }
    ctx->pc = 0x430134u;
label_430134:
    // 0x430134: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x430134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430138: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x430138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x43013c: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x43013Cu;
    {
        const bool branch_taken_0x43013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43013c) {
            ctx->pc = 0x430140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43013Cu;
            // 0x430140: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430058;
        }
    }
    ctx->pc = 0x430144u;
    // 0x430144: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x430144u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430148: 0x1b4102a  slt         $v0, $t5, $s4
    ctx->pc = 0x430148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x43014c: 0x5440ff60  bnel        $v0, $zero, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x43014Cu;
    {
        const bool branch_taken_0x43014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43014c) {
            ctx->pc = 0x430150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43014Cu;
            // 0x430150: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42fed0;
        }
    }
    ctx->pc = 0x430154u;
label_430154:
    // 0x430154: 0x7bb01090  lq          $s0, 0x1090($sp)
    ctx->pc = 0x430154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4240)));
    // 0x430158: 0x7bb11080  lq          $s1, 0x1080($sp)
    ctx->pc = 0x430158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4224)));
    // 0x43015c: 0x7bb21070  lq          $s2, 0x1070($sp)
    ctx->pc = 0x43015cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x430160: 0x7bb31060  lq          $s3, 0x1060($sp)
    ctx->pc = 0x430160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x430164: 0x7bb41050  lq          $s4, 0x1050($sp)
    ctx->pc = 0x430164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x430168: 0x7bb51040  lq          $s5, 0x1040($sp)
    ctx->pc = 0x430168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x43016c: 0x3e00008  jr          $ra
    ctx->pc = 0x43016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43016Cu;
        // 0x430170: 0x27bd10a0  addiu       $sp, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430174u;
    // 0x430174: 0x0  nop
    ctx->pc = 0x430174u;
    // NOP
    ctx->pc = 0x430178u;
}
