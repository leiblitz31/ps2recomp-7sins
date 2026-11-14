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

// Function: sub_004B1078
// Address: 0x4b1078 - 0x4b1348
void sub_004B1078_0x4b1078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1078_0x4b1078");
#endif

    switch (ctx->pc) {
        case 0x4b109cu: goto label_4b109c;
        case 0x4b10f0u: goto label_4b10f0;
        case 0x4b1138u: goto label_4b1138;
        case 0x4b1250u: goto label_4b1250;
        case 0x4b132cu: goto label_4b132c;
        default: break;
    }

    ctx->pc = 0x4b1078u;

    // 0x4b1078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b1078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b107c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b1080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1084: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b1084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b1088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b1088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4b108c: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x4b108cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b1090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1094: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B1094u;
    SET_GPR_U32(ctx, 31, 0x4B109Cu);
    ctx->pc = 0x4B1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1094u;
    // 0x4b1098: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B1094u, 0x4B109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B109Cu;
label_4b109c:
    // 0x4b109c: 0x260a0030  addiu       $t2, $s0, 0x30
    ctx->pc = 0x4b109cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4b10a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4b10a4: 0x8d4b0024  lw          $t3, 0x24($t2)
    ctx->pc = 0x4b10a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x4b10a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b10a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b10ac: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x4b10acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x4b10b0: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x4b10b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x4b10b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b10b8: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x4b10b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4b10bc: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x4b10bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x4b10c0: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x4b10c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4b10c4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4B10C4u;
    {
        const bool branch_taken_0x4b10c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B10C4u;
        // 0x4b10c8: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b10c4) {
            ctx->pc = 0x4B121Cu;
            goto label_4b121c;
        }
    }
    ctx->pc = 0x4B10CCu;
    // 0x4b10cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b10d0: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x4b10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4b10d4: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b10d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4b10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4b10dc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x4b10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b10e0: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x4b10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x4b10e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b10e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b10e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b10e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b10ec: 0x0  nop
    ctx->pc = 0x4b10ecu;
    // NOP
label_4b10f0:
    // 0x4b10f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b10f4: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x4B10F4u;
    {
        const bool branch_taken_0x4b10f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b10f4) {
            ctx->pc = 0x4B10F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B10F4u;
            // 0x4b10f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B120Cu;
            goto label_4b120c;
        }
    }
    ctx->pc = 0x4B10FCu;
    // 0x4b10fc: 0x8f83b90c  lw          $v1, -0x46F4($gp)
    ctx->pc = 0x4b10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1100: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x4b1100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x4b1104: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x4b1104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x4b1108: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4b1108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b110c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b1110: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4b1110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b1114: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b1114u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b1118: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x4b1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b111c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4B111Cu;
    {
        const bool branch_taken_0x4b111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B111Cu;
        // 0x4b1120: 0xa0680600  sb          $t0, 0x600($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1536), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b111c) {
            ctx->pc = 0x4B11F8u;
            goto label_4b11f8;
        }
    }
    ctx->pc = 0x4B1124u;
    // 0x4b1124: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x4b1124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x4b1128: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x4b1128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4b112c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x4b112cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b1130: 0xa143002a  sb          $v1, 0x2A($t2)
    ctx->pc = 0x4b1130u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b1134: 0xad42002c  sw          $v0, 0x2C($t2)
    ctx->pc = 0x4b1134u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 2));
label_4b1138:
    // 0x4b1138: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x4b1138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x4b113c: 0x8f85b90c  lw          $a1, -0x46F4($gp)
    ctx->pc = 0x4b113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b1144: 0x8d49002c  lw          $t1, 0x2C($t2)
    ctx->pc = 0x4b1144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4b1148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b1148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b114c: 0x24a40630  addiu       $a0, $a1, 0x630
    ctx->pc = 0x4b114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x4b1150: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b1154: 0x24a60638  addiu       $a2, $a1, 0x638
    ctx->pc = 0x4b1154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x4b1158: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b115c: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x4b115cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x4b1160: 0x24a80648  addiu       $t0, $a1, 0x648
    ctx->pc = 0x4b1160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x4b1164: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4b1164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4b1168: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x4b1168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x4b116c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b116cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b1170: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x4b1170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x4b1174: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x4b1174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4b1178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b117c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b117cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b1180: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b1180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b1184: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b1184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b1188: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b1188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b118c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b118cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b1190: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x4b1190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x4b1194: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x4b1194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4b1198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b119c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b11a0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b11a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b11a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b11a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b11a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b11ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b11acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b11b0: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x4b11b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x4b11b4: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x4b11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4b11b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b11b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b11bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b11c0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b11c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b11c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b11c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b11c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b11cc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b11d0: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x4b11d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x4b11d4: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x4b11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4b11d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b11d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b11dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b11e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b11e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b11e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b11e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b11ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4B11ECu;
    {
        const bool branch_taken_0x4b11ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B11ECu;
        // 0x4b11f0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b11ec) {
            ctx->pc = 0x4B121Cu;
            goto label_4b121c;
        }
    }
    ctx->pc = 0x4B11F4u;
    // 0x4b11f4: 0x0  nop
    ctx->pc = 0x4b11f4u;
    // NOP
label_4b11f8:
    // 0x4b11f8: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x4b11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x4b11fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4b11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4b1200: 0xa142002a  sb          $v0, 0x2A($t2)
    ctx->pc = 0x4b1200u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1204: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x4B1204u;
    {
        const bool branch_taken_0x4b1204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1204u;
        // 0x4b1208: 0xad43002c  sw          $v1, 0x2C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1204) {
            ctx->pc = 0x4B1138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1138;
        }
    }
    ctx->pc = 0x4B120Cu;
label_4b120c:
    // 0x4b120c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4b120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4b1210: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x4b1210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4b1214: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x4B1214u;
    {
        const bool branch_taken_0x4b1214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1214u;
        // 0x4b1218: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1214) {
            ctx->pc = 0x4B10F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b10f0;
        }
    }
    ctx->pc = 0x4B121Cu;
label_4b121c:
    // 0x4b121c: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x4B121Cu;
    {
        const bool branch_taken_0x4b121c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B121Cu;
        // 0x4b1220: 0x31620020  andi        $v0, $t3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b121c) {
            ctx->pc = 0x4B1324u;
            goto label_4b1324;
        }
    }
    ctx->pc = 0x4B1224u;
    // 0x4b1224: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4B1224u;
    {
        const bool branch_taken_0x4b1224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1224u;
        // 0x4b1228: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1224) {
            ctx->pc = 0x4B1324u;
            goto label_4b1324;
        }
    }
    ctx->pc = 0x4B122Cu;
    // 0x4b122c: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x4b122cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4b1230: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4B1230u;
    {
        const bool branch_taken_0x4b1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1230u;
        // 0x4b1234: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1230) {
            ctx->pc = 0x4B1304u;
            goto label_4b1304;
        }
    }
    ctx->pc = 0x4B1238u;
    // 0x4b1238: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b1238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b123c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4b123cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4b1240: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4b1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b1244: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b1244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1248: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x4b1248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b124c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4b124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b1250:
    // 0x4b1250: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b1254: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x4B1254u;
    {
        const bool branch_taken_0x4b1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1254) {
            ctx->pc = 0x4B1258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1254u;
            // 0x4b1258: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B12F8u;
            goto label_4b12f8;
        }
    }
    ctx->pc = 0x4B125Cu;
    // 0x4b125c: 0x8f83b90c  lw          $v1, -0x46F4($gp)
    ctx->pc = 0x4b125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1260: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x4b1260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x4b1264: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4b1264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x4b1268: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4b1268u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b126c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b1270: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4b1270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b1274: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x4b1274u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x4b1278: 0xa0670600  sb          $a3, 0x600($v1)
    ctx->pc = 0x4b1278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1536), (uint8_t)GPR_U32(ctx, 7));
    // 0x4b127c: 0x8f84b90c  lw          $a0, -0x46F4($gp)
    ctx->pc = 0x4b127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949132)));
    // 0x4b1280: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x4b1280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b1284: 0x24830630  addiu       $v1, $a0, 0x630
    ctx->pc = 0x4b1284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
    // 0x4b1288: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x4b1288u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4b128c: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x4b128cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x4b1290: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b1290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b1294: 0xcb3004  sllv        $a2, $t3, $a2
    ctx->pc = 0x4b1294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x4b1298: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b129c: 0x24870638  addiu       $a3, $a0, 0x638
    ctx->pc = 0x4b129cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
    // 0x4b12a0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x4b12a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4b12a4: 0x24890640  addiu       $t1, $a0, 0x640
    ctx->pc = 0x4b12a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x4b12a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b12a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b12ac: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x4b12acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4b12b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4b12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4b12b4: 0x24880648  addiu       $t0, $a0, 0x648
    ctx->pc = 0x4b12b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    // 0x4b12b8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4b12b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4b12bc: 0x24840650  addiu       $a0, $a0, 0x650
    ctx->pc = 0x4b12bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    // 0x4b12c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b12c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b12c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4b12c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4b12c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4b12cc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b12d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4b12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b12d4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b12d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b12d8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4b12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4b12dc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b12e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4b12e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4b12e4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b12e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b12ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b12ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b12f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B12F0u;
    {
        const bool branch_taken_0x4b12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12F0u;
        // 0x4b12f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b12f0) {
            ctx->pc = 0x4B1304u;
            goto label_4b1304;
        }
    }
    ctx->pc = 0x4B12F8u;
label_4b12f8:
    // 0x4b12f8: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x4b12f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4b12fc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x4B12FCu;
    {
        const bool branch_taken_0x4b12fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12FCu;
        // 0x4b1300: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b12fc) {
            ctx->pc = 0x4B1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1250;
        }
    }
    ctx->pc = 0x4B1304u;
label_4b1304:
    // 0x4b1304: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B1304u;
    {
        const bool branch_taken_0x4b1304 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1304) {
            ctx->pc = 0x4B1324u;
            goto label_4b1324;
        }
    }
    ctx->pc = 0x4B130Cu;
    // 0x4b130c: 0x8d430024  lw          $v1, 0x24($t2)
    ctx->pc = 0x4b130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x4b1310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b1310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1314: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x4b1314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x4b1318: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b131c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4b131cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x4b1320: 0xad430024  sw          $v1, 0x24($t2)
    ctx->pc = 0x4b1320u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 3));
label_4b1324:
    // 0x4b1324: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B1324u;
    SET_GPR_U32(ctx, 31, 0x4B132Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B1324u, 0x4B132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B132Cu;
label_4b132c:
    // 0x4b132c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b132cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1330: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b1330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1334: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b1334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1338: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b1338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b133c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1340: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1340u;
        // 0x4b1344: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1348u;
}
