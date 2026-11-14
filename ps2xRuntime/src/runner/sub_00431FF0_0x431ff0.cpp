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

// Function: sub_00431FF0
// Address: 0x431ff0 - 0x432168
void sub_00431FF0_0x431ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431FF0_0x431ff0");
#endif

    switch (ctx->pc) {
        case 0x4320d0u: goto label_4320d0;
        case 0x432134u: goto label_432134;
        case 0x432140u: goto label_432140;
        default: break;
    }

    ctx->pc = 0x431ff0u;

    // 0x431ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x431ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x431ff4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x431ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x431ff8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x431ff8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x431ffc: 0x35298006  ori         $t1, $t1, 0x8006
    ctx->pc = 0x431ffcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32774);
    // 0x432000: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x432000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x432004: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x432004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x432008: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x432008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x43200c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x43200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x432010: 0x72699b89  pcpyld      $s3, $s3, $t1
    ctx->pc = 0x432010u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 9)));
    // 0x432014: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x432014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x432018: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x432018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x43201c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x43201cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x432020: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x432020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x432024: 0x2416003b  addiu       $s6, $zero, 0x3B
    ctx->pc = 0x432024u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x432028: 0x8c48d380  lw          $t0, -0x2C80($v0)
    ctx->pc = 0x432028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955904)));
    // 0x43202c: 0x72c9b389  pcpyld      $s6, $s6, $t1
    ctx->pc = 0x43202cu;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 22), GPR_VEC(ctx, 9)));
    // 0x432030: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x432030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x432034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x432038: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x432038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x43203c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x43203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x432040: 0x24120049  addiu       $s2, $zero, 0x49
    ctx->pc = 0x432040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x432044: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x432044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x432048: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x432048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43204c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x43204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x432050: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x432050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x432054: 0x72509389  pcpyld      $s2, $s2, $s0
    ctx->pc = 0x432054u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x432058: 0x3c096071  lui         $t1, 0x6071
    ctx->pc = 0x432058u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24689 << 16));
    // 0x43205c: 0x35292435  ori         $t1, $t1, 0x2435
    ctx->pc = 0x43205cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)9269);
    // 0x432060: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x432060u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x432064: 0x35297160  ori         $t1, $t1, 0x7160
    ctx->pc = 0x432064u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)29024);
    // 0x432068: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x432068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x43206c: 0x35293524  ori         $t1, $t1, 0x3524
    ctx->pc = 0x43206cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13604);
    // 0x432070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x432070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432078: 0xaf84ae8c  sw          $a0, -0x5174($gp)
    ctx->pc = 0x432078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946444), GPR_U32(ctx, 4));
    // 0x43207c: 0x24110042  addiu       $s1, $zero, 0x42
    ctx->pc = 0x43207cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x432080: 0xff85ae68  sd          $a1, -0x5198($gp)
    ctx->pc = 0x432080u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 5));
    // 0x432084: 0x24140044  addiu       $s4, $zero, 0x44
    ctx->pc = 0x432084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x432088: 0x24150046  addiu       $s5, $zero, 0x46
    ctx->pc = 0x432088u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x43208c: 0x72288b89  pcpyld      $s1, $s1, $t0
    ctx->pc = 0x43208cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 8)));
    // 0x432090: 0x7289a389  pcpyld      $s4, $s4, $t1
    ctx->pc = 0x432090u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 9)));
    // 0x432094: 0x72a2ab89  pcpyld      $s5, $s5, $v0
    ctx->pc = 0x432094u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 2)));
    // 0x432098: 0x70f08389  pcpyld      $s0, $a3, $s0
    ctx->pc = 0x432098u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x43209c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43209cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4320a0: 0xaf86becc  sw          $a2, -0x4134($gp)
    ctx->pc = 0x4320a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950604), GPR_U32(ctx, 6));
    // 0x4320a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4320a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4320a8: 0xaf83bee4  sw          $v1, -0x411C($gp)
    ctx->pc = 0x4320a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 3));
    // 0x4320ac: 0xaf86ae88  sw          $a2, -0x5178($gp)
    ctx->pc = 0x4320acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946440), GPR_U32(ctx, 6));
    // 0x4320b0: 0xff88ae70  sd          $t0, -0x5190($gp)
    ctx->pc = 0x4320b0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 8));
    // 0x4320b4: 0xff87ae80  sd          $a3, -0x5180($gp)
    ctx->pc = 0x4320b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 7));
    // 0x4320b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4320b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4320bc: 0xaf80bec8  sw          $zero, -0x4138($gp)
    ctx->pc = 0x4320bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 0));
    // 0x4320c0: 0xaf80bec4  sw          $zero, -0x413C($gp)
    ctx->pc = 0x4320c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
    // 0x4320c4: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x4320c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x4320c8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x4320C8u;
    SET_GPR_U32(ctx, 31, 0x4320D0u);
    ctx->pc = 0x4320CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4320C8u;
    // 0x4320cc: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x4320C8u, 0x4320D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4320D0u;
label_4320d0:
    // 0x4320d0: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x4320d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4320d4: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x4320d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x4320d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4320d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4320dc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4320dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4320e0: 0x7c710000  sq          $s1, 0x0($v1)
    ctx->pc = 0x4320e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 17));
    // 0x4320e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4320e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4320e8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4320e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4320ec: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x4320ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x4320f0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x4320f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4320f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4320f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4320f8: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x4320f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x4320fc: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x4320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x432100: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x432100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x432104: 0x7c760030  sq          $s6, 0x30($v1)
    ctx->pc = 0x432104u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 22));
    // 0x432108: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x432108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x43210c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43210cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x432110: 0x7c740040  sq          $s4, 0x40($v1)
    ctx->pc = 0x432110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 20));
    // 0x432114: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x432114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x432118: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x432118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x43211c: 0x7c750050  sq          $s5, 0x50($v1)
    ctx->pc = 0x43211cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 21));
    // 0x432120: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x432120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x432124: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x432124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x432128: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x432128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x43212c: 0xc10a85e  jal         func_42A178
    ctx->pc = 0x43212Cu;
    SET_GPR_U32(ctx, 31, 0x432134u);
    ctx->pc = 0x432130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43212Cu;
    // 0x432130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A178u, 0x43212Cu, 0x432134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432134u;
label_432134:
    // 0x432134: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x432134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x432138: 0xc10a85e  jal         func_42A178
    ctx->pc = 0x432138u;
    SET_GPR_U32(ctx, 31, 0x432140u);
    ctx->pc = 0x43213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432138u;
    // 0x43213c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A178u, 0x432138u, 0x432140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432140u;
label_432140:
    // 0x432140: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x432140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x432144: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x432144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x432148: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x432148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43214c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43214cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x432150: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x432150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x432154: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x432154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432158: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x432158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43215c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432160: 0x3e00008  jr          $ra
    ctx->pc = 0x432160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432160u;
        // 0x432164: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432168u;
}
