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

// Function: sub_0033AB40
// Address: 0x33ab40 - 0x33aec0
void sub_0033AB40_0x33ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB40_0x33ab40");
#endif

    switch (ctx->pc) {
        case 0x33ab7cu: goto label_33ab7c;
        case 0x33ab90u: goto label_33ab90;
        case 0x33aba4u: goto label_33aba4;
        case 0x33abb8u: goto label_33abb8;
        case 0x33abccu: goto label_33abcc;
        case 0x33abe0u: goto label_33abe0;
        case 0x33abf8u: goto label_33abf8;
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac28u: goto label_33ac28;
        case 0x33ac40u: goto label_33ac40;
        case 0x33ac58u: goto label_33ac58;
        case 0x33ac70u: goto label_33ac70;
        case 0x33ac88u: goto label_33ac88;
        case 0x33aca0u: goto label_33aca0;
        case 0x33acc4u: goto label_33acc4;
        case 0x33acd8u: goto label_33acd8;
        case 0x33acecu: goto label_33acec;
        case 0x33ad00u: goto label_33ad00;
        case 0x33ad14u: goto label_33ad14;
        case 0x33ad28u: goto label_33ad28;
        case 0x33ad3cu: goto label_33ad3c;
        case 0x33ad54u: goto label_33ad54;
        case 0x33ad6cu: goto label_33ad6c;
        case 0x33ad84u: goto label_33ad84;
        case 0x33ad9cu: goto label_33ad9c;
        case 0x33adb4u: goto label_33adb4;
        case 0x33adc8u: goto label_33adc8;
        case 0x33addcu: goto label_33addc;
        case 0x33adf0u: goto label_33adf0;
        case 0x33ae04u: goto label_33ae04;
        case 0x33ae18u: goto label_33ae18;
        case 0x33ae2cu: goto label_33ae2c;
        case 0x33ae40u: goto label_33ae40;
        case 0x33ae58u: goto label_33ae58;
        case 0x33ae70u: goto label_33ae70;
        case 0x33ae88u: goto label_33ae88;
        case 0x33aea0u: goto label_33aea0;
        default: break;
    }

    ctx->pc = 0x33ab40u;

    // 0x33ab40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ab44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33ab48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33ab4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ab50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ab50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ab58: 0x2451c210  addiu       $s1, $v0, -0x3DF0
    ctx->pc = 0x33ab58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33ab5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ab60: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x33ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C218u));
    // 0x33ab64: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x33ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33ab68: 0x1043004e  beq         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x33AB68u;
    {
        const bool branch_taken_0x33ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB68u;
        // 0x33ab6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab68) {
            ctx->pc = 0x33ACA4u;
            goto label_33aca4;
        }
    }
    ctx->pc = 0x33AB70u;
    // 0x33ab70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x33ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x33ab74: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AB74u;
    SET_GPR_U32(ctx, 31, 0x33AB7Cu);
    ctx->pc = 0x33AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB74u;
    // 0x33ab78: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AB74u, 0x33AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB7Cu;
label_33ab7c:
    // 0x33ab7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ab80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ab84: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x33ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x33ab88: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AB88u;
    SET_GPR_U32(ctx, 31, 0x33AB90u);
    ctx->pc = 0x33AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB88u;
    // 0x33ab8c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AB88u, 0x33AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB90u;
label_33ab90:
    // 0x33ab90: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ab94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ab98: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x33ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x33ab9c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AB9Cu;
    SET_GPR_U32(ctx, 31, 0x33ABA4u);
    ctx->pc = 0x33ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB9Cu;
    // 0x33aba0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AB9Cu, 0x33ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABA4u;
label_33aba4:
    // 0x33aba4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33aba8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33abac: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x33abacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x33abb0: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ABB0u;
    SET_GPR_U32(ctx, 31, 0x33ABB8u);
    ctx->pc = 0x33ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABB0u;
    // 0x33abb4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ABB0u, 0x33ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABB8u;
label_33abb8:
    // 0x33abb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33abbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33abc0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x33abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x33abc4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ABC4u;
    SET_GPR_U32(ctx, 31, 0x33ABCCu);
    ctx->pc = 0x33ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABC4u;
    // 0x33abc8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ABC4u, 0x33ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABCCu;
label_33abcc:
    // 0x33abcc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33abd0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33abd4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x33abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x33abd8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ABD8u;
    SET_GPR_U32(ctx, 31, 0x33ABE0u);
    ctx->pc = 0x33ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABD8u;
    // 0x33abdc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ABD8u, 0x33ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABE0u;
label_33abe0:
    // 0x33abe0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33abe4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33abe8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33abe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33abec: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x33abecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x33abf0: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ABF0u;
    SET_GPR_U32(ctx, 31, 0x33ABF8u);
    ctx->pc = 0x33ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABF0u;
    // 0x33abf4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ABF0u, 0x33ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABF8u;
label_33abf8:
    // 0x33abf8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33abfc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac00: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33ac00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33ac04: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x33ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x33ac08: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC08u;
    SET_GPR_U32(ctx, 31, 0x33AC10u);
    ctx->pc = 0x33AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC08u;
    // 0x33ac0c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC08u, 0x33AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC10u;
label_33ac10:
    // 0x33ac10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac14: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac18: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33ac18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33ac1c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x33ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x33ac20: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC20u;
    SET_GPR_U32(ctx, 31, 0x33AC28u);
    ctx->pc = 0x33AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC20u;
    // 0x33ac24: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC20u, 0x33AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC28u;
label_33ac28:
    // 0x33ac28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac2c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac30: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33ac30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33ac34: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x33ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x33ac38: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC38u;
    SET_GPR_U32(ctx, 31, 0x33AC40u);
    ctx->pc = 0x33AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC38u;
    // 0x33ac3c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC38u, 0x33AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC40u;
label_33ac40:
    // 0x33ac40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac48: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33ac48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33ac4c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x33ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x33ac50: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC50u;
    SET_GPR_U32(ctx, 31, 0x33AC58u);
    ctx->pc = 0x33AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC50u;
    // 0x33ac54: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC50u, 0x33AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC58u;
label_33ac58:
    // 0x33ac58: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac5c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac60: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x33ac60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x33ac64: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x33ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x33ac68: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC68u;
    SET_GPR_U32(ctx, 31, 0x33AC70u);
    ctx->pc = 0x33AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC68u;
    // 0x33ac6c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC68u, 0x33AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC70u;
label_33ac70:
    // 0x33ac70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac74: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac78: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33ac78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33ac7c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33ac80: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC80u;
    SET_GPR_U32(ctx, 31, 0x33AC88u);
    ctx->pc = 0x33AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC80u;
    // 0x33ac84: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC80u, 0x33AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC88u;
label_33ac88:
    // 0x33ac88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ac8c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ac90: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x33ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x33ac94: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x33ac94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x33ac98: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AC98u;
    SET_GPR_U32(ctx, 31, 0x33ACA0u);
    ctx->pc = 0x33AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC98u;
    // 0x33ac9c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AC98u, 0x33ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACA0u;
label_33aca0:
    // 0x33aca0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x33aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_33aca4:
    // 0x33aca4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x33aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33aca8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33acac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x33acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33acb0: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x33ACB0u;
    {
        const bool branch_taken_0x33acb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACB0u;
        // 0x33acb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acb0) {
            ctx->pc = 0x33AEA4u;
            goto label_33aea4;
        }
    }
    ctx->pc = 0x33ACB8u;
    // 0x33acb8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x33acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x33acbc: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ACBCu;
    SET_GPR_U32(ctx, 31, 0x33ACC4u);
    ctx->pc = 0x33ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACBCu;
    // 0x33acc0: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ACBCu, 0x33ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACC4u;
label_33acc4:
    // 0x33acc4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33acc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33accc: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x33acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x33acd0: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ACD0u;
    SET_GPR_U32(ctx, 31, 0x33ACD8u);
    ctx->pc = 0x33ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACD0u;
    // 0x33acd4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ACD0u, 0x33ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACD8u;
label_33acd8:
    // 0x33acd8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33acdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ace0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x33ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x33ace4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ACE4u;
    SET_GPR_U32(ctx, 31, 0x33ACECu);
    ctx->pc = 0x33ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACE4u;
    // 0x33ace8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ACE4u, 0x33ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACECu;
label_33acec:
    // 0x33acec: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33acf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33acf4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x33acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x33acf8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ACF8u;
    SET_GPR_U32(ctx, 31, 0x33AD00u);
    ctx->pc = 0x33ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACF8u;
    // 0x33acfc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ACF8u, 0x33AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD00u;
label_33ad00:
    // 0x33ad00: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ad08: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x33ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x33ad0c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD0Cu;
    SET_GPR_U32(ctx, 31, 0x33AD14u);
    ctx->pc = 0x33AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD0Cu;
    // 0x33ad10: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD0Cu, 0x33AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD14u;
label_33ad14:
    // 0x33ad14: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33ad1c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x33ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x33ad20: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD20u;
    SET_GPR_U32(ctx, 31, 0x33AD28u);
    ctx->pc = 0x33AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD20u;
    // 0x33ad24: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD20u, 0x33AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD28u;
label_33ad28:
    // 0x33ad28: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad2c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ad30: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x33ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x33ad34: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD34u;
    SET_GPR_U32(ctx, 31, 0x33AD3Cu);
    ctx->pc = 0x33AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD34u;
    // 0x33ad38: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD34u, 0x33AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD3Cu;
label_33ad3c:
    // 0x33ad3c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad40: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ad44: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33ad44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33ad48: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x33ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x33ad4c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD4Cu;
    SET_GPR_U32(ctx, 31, 0x33AD54u);
    ctx->pc = 0x33AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD4Cu;
    // 0x33ad50: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD4Cu, 0x33AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD54u;
label_33ad54:
    // 0x33ad54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad58: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ad5c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33ad5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33ad60: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x33ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x33ad64: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD64u;
    SET_GPR_U32(ctx, 31, 0x33AD6Cu);
    ctx->pc = 0x33AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD64u;
    // 0x33ad68: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD64u, 0x33AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD6Cu;
label_33ad6c:
    // 0x33ad6c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad70: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ad74: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33ad74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33ad78: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x33ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x33ad7c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD7Cu;
    SET_GPR_U32(ctx, 31, 0x33AD84u);
    ctx->pc = 0x33AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD7Cu;
    // 0x33ad80: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD7Cu, 0x33AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD84u;
label_33ad84:
    // 0x33ad84: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ad88: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ad8c: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33ad8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33ad90: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x33ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x33ad94: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33AD94u;
    SET_GPR_U32(ctx, 31, 0x33AD9Cu);
    ctx->pc = 0x33AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD94u;
    // 0x33ad98: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33AD94u, 0x33AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD9Cu;
label_33ad9c:
    // 0x33ad9c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ada0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ada4: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33ada4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33ada8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x33ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x33adac: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33ADACu;
    SET_GPR_U32(ctx, 31, 0x33ADB4u);
    ctx->pc = 0x33ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADACu;
    // 0x33adb0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33ADACu, 0x33ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADB4u;
label_33adb4:
    // 0x33adb4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33adb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33adbc: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x33adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x33adc0: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33ADC0u;
    SET_GPR_U32(ctx, 31, 0x33ADC8u);
    ctx->pc = 0x33ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADC0u;
    // 0x33adc4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33ADC0u, 0x33ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADC8u;
label_33adc8:
    // 0x33adc8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33adcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33adccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33add0: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x33add0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x33add4: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33ADD4u;
    SET_GPR_U32(ctx, 31, 0x33ADDCu);
    ctx->pc = 0x33ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADD4u;
    // 0x33add8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33ADD4u, 0x33ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADDCu;
label_33addc:
    // 0x33addc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ade0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ade4: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x33ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x33ade8: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33ADE8u;
    SET_GPR_U32(ctx, 31, 0x33ADF0u);
    ctx->pc = 0x33ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADE8u;
    // 0x33adec: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33ADE8u, 0x33ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADF0u;
label_33adf0:
    // 0x33adf0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33adf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33adf8: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x33adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x33adfc: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33ADFCu;
    SET_GPR_U32(ctx, 31, 0x33AE04u);
    ctx->pc = 0x33AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADFCu;
    // 0x33ae00: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33ADFCu, 0x33AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE04u;
label_33ae04:
    // 0x33ae04: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ae0c: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x33ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x33ae10: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE10u;
    SET_GPR_U32(ctx, 31, 0x33AE18u);
    ctx->pc = 0x33AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE10u;
    // 0x33ae14: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE10u, 0x33AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE18u;
label_33ae18:
    // 0x33ae18: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33ae20: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x33ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x33ae24: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE24u;
    SET_GPR_U32(ctx, 31, 0x33AE2Cu);
    ctx->pc = 0x33AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE24u;
    // 0x33ae28: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE24u, 0x33AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE2Cu;
label_33ae2c:
    // 0x33ae2c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae30: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ae34: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x33ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x33ae38: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE38u;
    SET_GPR_U32(ctx, 31, 0x33AE40u);
    ctx->pc = 0x33AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE38u;
    // 0x33ae3c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE38u, 0x33AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE40u;
label_33ae40:
    // 0x33ae40: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ae48: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33ae48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33ae4c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x33ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x33ae50: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE50u;
    SET_GPR_U32(ctx, 31, 0x33AE58u);
    ctx->pc = 0x33AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE50u;
    // 0x33ae54: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE50u, 0x33AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE58u;
label_33ae58:
    // 0x33ae58: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae5c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ae60: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33ae60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33ae64: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x33ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x33ae68: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE68u;
    SET_GPR_U32(ctx, 31, 0x33AE70u);
    ctx->pc = 0x33AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE68u;
    // 0x33ae6c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE68u, 0x33AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE70u;
label_33ae70:
    // 0x33ae70: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae74: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ae78: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33ae78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33ae7c: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x33ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x33ae80: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE80u;
    SET_GPR_U32(ctx, 31, 0x33AE88u);
    ctx->pc = 0x33AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE80u;
    // 0x33ae84: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE80u, 0x33AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE88u;
label_33ae88:
    // 0x33ae88: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ae8c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33ae90: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x33ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x33ae94: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33ae94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33ae98: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x33AE98u;
    SET_GPR_U32(ctx, 31, 0x33AEA0u);
    ctx->pc = 0x33AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE98u;
    // 0x33ae9c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x33AE98u, 0x33AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEA0u;
label_33aea0:
    // 0x33aea0: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x33aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_33aea4:
    // 0x33aea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33aea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aeac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33aeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x33AEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEB4u;
        // 0x33aeb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AEBCu;
    // 0x33aebc: 0x0  nop
    ctx->pc = 0x33aebcu;
    // NOP
    ctx->pc = 0x33aec0u;
}
