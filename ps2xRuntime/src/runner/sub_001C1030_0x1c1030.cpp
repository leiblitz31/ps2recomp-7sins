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

// Function: sub_001C1030
// Address: 0x1c1030 - 0x1c1260
void sub_001C1030_0x1c1030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1030_0x1c1030");
#endif

    switch (ctx->pc) {
        case 0x1c1058u: goto label_1c1058;
        case 0x1c1064u: goto label_1c1064;
        case 0x1c10b0u: goto label_1c10b0;
        case 0x1c10bcu: goto label_1c10bc;
        case 0x1c112cu: goto label_1c112c;
        case 0x1c11c0u: goto label_1c11c0;
        case 0x1c1234u: goto label_1c1234;
        default: break;
    }

    ctx->pc = 0x1c1030u;

    // 0x1c1030: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c1034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c1038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c103c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c1040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c1044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c104c: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x1c104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x1c1050: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x1c1050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x1c1054: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x1c1054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c1058:
    // 0x1c1058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c1058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105c: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C105Cu;
    SET_GPR_U32(ctx, 31, 0x1C1064u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C105Cu, 0x1C1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1064u;
label_1c1064:
    // 0x1c1064: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1c1064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1c1068: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c106c: 0x0  nop
    ctx->pc = 0x1c106cu;
    // NOP
    // 0x1c1070: 0x1682fff9  bne         $s4, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C1058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1058;
        }
    }
    ctx->pc = 0x1C1078u;
    // 0x1c1078: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1c1078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c107c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1080: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C10A4u;
            goto label_1c10a4;
        }
    }
    ctx->pc = 0x1C1088u;
    // 0x1c1088: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c108c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1090: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1090u;
    {
        const bool branch_taken_0x1c1090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1090) {
            ctx->pc = 0x1C10A4u;
            goto label_1c10a4;
        }
    }
    ctx->pc = 0x1C1098u;
    // 0x1c1098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c109c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1C109Cu;
    {
        const bool branch_taken_0x1c109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c109c) {
            ctx->pc = 0x1C1238u;
            goto label_1c1238;
        }
    }
    ctx->pc = 0x1C10A4u;
label_1c10a4:
    // 0x1c10a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c10a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1C10A8u;
    {
        const bool branch_taken_0x1c10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10a8) {
            ctx->pc = 0x1C1214u;
            goto label_1c1214;
        }
    }
    ctx->pc = 0x1C10B0u;
label_1c10b0:
    // 0x1c10b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c10b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10b4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C10B4u;
    {
        const bool branch_taken_0x1c10b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10b4) {
            ctx->pc = 0x1C1204u;
            goto label_1c1204;
        }
    }
    ctx->pc = 0x1C10BCu;
label_1c10bc:
    // 0x1c10bc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1c10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c10c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c10c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c10c8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c10cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c10d0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c10d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c10d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c10dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1c10dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c10e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c10e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c10e8: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C10E8u;
    {
        const bool branch_taken_0x1c10e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c10e8) {
            ctx->pc = 0x1C1174u;
            goto label_1c1174;
        }
    }
    ctx->pc = 0x1C10F0u;
    // 0x1c10f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c10f4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c10f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c10fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1104: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c1108: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c110c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c1110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1118: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1c111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1124: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C1124u;
    SET_GPR_U32(ctx, 31, 0x1C112Cu);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C1124u, 0x1C112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C112Cu;
label_1c112c:
    // 0x1c112c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1130: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C1130u;
    {
        const bool branch_taken_0x1c1130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1130) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C1138u;
    // 0x1c1138: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x1c1138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1c113c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1140: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1140u;
    {
        const bool branch_taken_0x1c1140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1140) {
            ctx->pc = 0x1C1158u;
            goto label_1c1158;
        }
    }
    ctx->pc = 0x1C1148u;
    // 0x1c1148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c114c: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x1c114cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1150: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C1150u;
    {
        const bool branch_taken_0x1c1150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1150) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C1158u;
label_1c1158:
    // 0x1c1158: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x1c1158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1c115c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1168: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x1c1168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c116c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C116Cu;
    {
        const bool branch_taken_0x1c116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c116c) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C1174u;
label_1c1174:
    // 0x1c1174: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c1178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c117c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C117Cu;
    {
        const bool branch_taken_0x1c117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c117c) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C1184u;
    // 0x1c1184: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c1188: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c118c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1190: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1c1190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c1194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1198: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c119c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c11a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c11a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c11a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c11ac: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1c11b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c11b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b8: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C11B8u;
    SET_GPR_U32(ctx, 31, 0x1C11C0u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C11B8u, 0x1C11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C0u;
label_1c11c0:
    // 0x1c11c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c11c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C11C4u;
    {
        const bool branch_taken_0x1c11c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11c4) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C11CCu;
    // 0x1c11cc: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x1c11ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1c11d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c11d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c11d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C11D8u;
    {
        const bool branch_taken_0x1c11d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c11d8) {
            ctx->pc = 0x1C11ECu;
            goto label_1c11ec;
        }
    }
    ctx->pc = 0x1C11E0u;
    // 0x1c11e0: 0xa220000b  sb          $zero, 0xB($s1)
    ctx->pc = 0x1c11e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c11e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C11E4u;
    {
        const bool branch_taken_0x1c11e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11e4) {
            ctx->pc = 0x1C1200u;
            goto label_1c1200;
        }
    }
    ctx->pc = 0x1C11ECu;
label_1c11ec:
    // 0x1c11ec: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x1c11ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1c11f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c11f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c11f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c11f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c11f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c11fc: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x1c11fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
label_1c1200:
    // 0x1c1200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c1200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c1204:
    // 0x1c1204: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1c1204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c1208: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1C1208u;
    {
        const bool branch_taken_0x1c1208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1208) {
            ctx->pc = 0x1C10BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10bc;
        }
    }
    ctx->pc = 0x1C1210u;
    // 0x1c1210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c1214:
    // 0x1c1214: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1c1214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c1218: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1C1218u;
    {
        const bool branch_taken_0x1c1218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1218) {
            ctx->pc = 0x1C10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10b0;
        }
    }
    ctx->pc = 0x1C1220u;
    // 0x1c1220: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1c1220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c1224: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c1224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1228: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1c1228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c122c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1C122Cu;
    SET_GPR_U32(ctx, 31, 0x1C1234u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1C122Cu, 0x1C1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1234u;
label_1c1234:
    // 0x1c1234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1238:
    // 0x1c1238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c1238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c123c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c123cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c124c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c124cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1250: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c1254: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0x0  nop
    ctx->pc = 0x1c125cu;
    // NOP
    ctx->pc = 0x1c1260u;
}
