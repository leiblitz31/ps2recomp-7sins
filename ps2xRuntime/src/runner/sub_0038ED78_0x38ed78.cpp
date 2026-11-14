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

// Function: sub_0038ED78
// Address: 0x38ed78 - 0x38efc0
void sub_0038ED78_0x38ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ED78_0x38ed78");
#endif

    switch (ctx->pc) {
        case 0x38edb8u: goto label_38edb8;
        case 0x38edd0u: goto label_38edd0;
        case 0x38ee18u: goto label_38ee18;
        case 0x38ee50u: goto label_38ee50;
        case 0x38ee78u: goto label_38ee78;
        case 0x38ee8cu: goto label_38ee8c;
        case 0x38ee94u: goto label_38ee94;
        case 0x38eeb0u: goto label_38eeb0;
        case 0x38eec0u: goto label_38eec0;
        case 0x38eefcu: goto label_38eefc;
        case 0x38ef28u: goto label_38ef28;
        case 0x38ef30u: goto label_38ef30;
        case 0x38ef7cu: goto label_38ef7c;
        default: break;
    }

    ctx->pc = 0x38ed78u;

    // 0x38ed78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38ed7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38ed7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ed80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x38ed84: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x38ed88: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x38ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x38ed8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ed8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ed90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x38ed94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38ed94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ed98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38ed9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38eda0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x38eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38eda4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x38eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38eda8: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x38EDA8u;
    {
        const bool branch_taken_0x38eda8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDA8u;
        // 0x38edac: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eda8) {
            ctx->pc = 0x38EE34u;
            goto label_38ee34;
        }
    }
    ctx->pc = 0x38EDB0u;
    // 0x38edb0: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x38edb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x38edb4: 0x0  nop
    ctx->pc = 0x38edb4u;
    // NOP
label_38edb8:
    // 0x38edb8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x38edb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edbc: 0x25320001  addiu       $s2, $t1, 0x1
    ctx->pc = 0x38edbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x38edc0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x38edc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edc4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x38edc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edc8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38edc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edcc: 0x0  nop
    ctx->pc = 0x38edccu;
    // NOP
label_38edd0:
    // 0x38edd0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38edd4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x38edd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38EDD8u;
    {
        const bool branch_taken_0x38edd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDD8u;
        // 0x38eddc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38edd8) {
            ctx->pc = 0x38EDFCu;
            goto label_38edfc;
        }
    }
    ctx->pc = 0x38EDE0u;
    // 0x38ede0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38ede4: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x38ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x38ede8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x38ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x38edec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38edf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38edf4: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x38EDF4u;
    {
        const bool branch_taken_0x38edf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x38EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDF4u;
        // 0x38edf8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38edf4) {
            ctx->pc = 0x38EDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38edd0;
        }
    }
    ctx->pc = 0x38EDFCu;
label_38edfc:
    // 0x38edfc: 0x5030009  bgezl       $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38EDFCu;
    {
        const bool branch_taken_0x38edfc = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x38edfc) {
            ctx->pc = 0x38EE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EDFCu;
            // 0x38ee00: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EE24u;
            goto label_38ee24;
        }
    }
    ctx->pc = 0x38EE04u;
    // 0x38ee04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38ee08: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x38ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x38ee0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38ee10: 0xc0e3a3a  jal         func_38E8E8
    ctx->pc = 0x38EE10u;
    SET_GPR_U32(ctx, 31, 0x38EE18u);
    ctx->pc = 0x38EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE10u;
    // 0x38ee14: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E8E8u, 0x38EE10u, 0x38EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE18u;
label_38ee18:
    // 0x38ee18: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x38ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x38ee1c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x38ee1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38ee20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x38ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38ee24:
    // 0x38ee24: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38ee24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ee28: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x38ee28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38ee2c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x38EE2Cu;
    {
        const bool branch_taken_0x38ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE2Cu;
        // 0x38ee30: 0x95080  sll         $t2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee2c) {
            ctx->pc = 0x38EDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38edb8;
        }
    }
    ctx->pc = 0x38EE34u;
label_38ee34:
    // 0x38ee34: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38ee34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38ee38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38ee38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ee3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ee40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x38ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ee44: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38ee44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38ee48: 0xc103404  jal         func_40D010
    ctx->pc = 0x38EE48u;
    SET_GPR_U32(ctx, 31, 0x38EE50u);
    ctx->pc = 0x38EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE48u;
    // 0x38ee4c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38EE48u, 0x38EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE50u;
label_38ee50:
    // 0x38ee50: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38EE50u;
    {
        const bool branch_taken_0x38ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE50u;
        // 0x38ee54: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee50) {
            ctx->pc = 0x38EE94u;
            goto label_38ee94;
        }
    }
    ctx->pc = 0x38EE58u;
    // 0x38ee58: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x38ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38ee5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ee60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ee64: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x38ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38ee68: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38ee68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38ee6c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x38ee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x38ee70: 0xc103404  jal         func_40D010
    ctx->pc = 0x38EE70u;
    SET_GPR_U32(ctx, 31, 0x38EE78u);
    ctx->pc = 0x38EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE70u;
    // 0x38ee74: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38EE70u, 0x38EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE78u;
label_38ee78:
    // 0x38ee78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38EE78u;
    {
        const bool branch_taken_0x38ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE78u;
        // 0x38ee7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee78) {
            ctx->pc = 0x38EE94u;
            goto label_38ee94;
        }
    }
    ctx->pc = 0x38EE80u;
    // 0x38ee80: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x38ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x38ee84: 0xc103440  jal         func_40D100
    ctx->pc = 0x38EE84u;
    SET_GPR_U32(ctx, 31, 0x38EE8Cu);
    ctx->pc = 0x38EE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE84u;
    // 0x38ee88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38EE84u, 0x38EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE8Cu;
label_38ee8c:
    // 0x38ee8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE8Cu;
    {
        const bool branch_taken_0x38ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ee8c) {
            ctx->pc = 0x38EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EE8Cu;
            // 0x38ee90: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EE9Cu;
            goto label_38ee9c;
        }
    }
    ctx->pc = 0x38EE94u;
label_38ee94:
    // 0x38ee94: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x38EE94u;
    {
        const bool branch_taken_0x38ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE94u;
        // 0x38ee98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee94) {
            ctx->pc = 0x38EFA0u;
            goto label_38efa0;
        }
    }
    ctx->pc = 0x38EE9Cu;
label_38ee9c:
    // 0x38ee9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38ee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eea0: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x38EEA0u;
    {
        const bool branch_taken_0x38eea0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEA0u;
        // 0x38eea4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eea0) {
            ctx->pc = 0x38EF18u;
            goto label_38ef18;
        }
    }
    ctx->pc = 0x38EEA8u;
    // 0x38eea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38eea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eeac: 0x0  nop
    ctx->pc = 0x38eeacu;
    // NOP
label_38eeb0:
    // 0x38eeb0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x38eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x38eeb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38eeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eeb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38eeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eebc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38eebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38eec0:
    // 0x38eec0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38EEC0u;
    {
        const bool branch_taken_0x38eec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEC0u;
        // 0x38eec4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eec0) {
            ctx->pc = 0x38EEE8u;
            goto label_38eee8;
        }
    }
    ctx->pc = 0x38EEC8u;
    // 0x38eec8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38eecc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x38eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38eed0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38eed4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x38eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x38eed8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38eedc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38eee0: 0x14a3fff7  bne         $a1, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38EEE0u;
    {
        const bool branch_taken_0x38eee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x38EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEE0u;
        // 0x38eee4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eee0) {
            ctx->pc = 0x38EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EEE8u;
label_38eee8:
    // 0x38eee8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x38eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x38eeec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eef0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38eef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eef4: 0xc103440  jal         func_40D100
    ctx->pc = 0x38EEF4u;
    SET_GPR_U32(ctx, 31, 0x38EEFCu);
    ctx->pc = 0x38EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEF4u;
    // 0x38eef8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38EEF4u, 0x38EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEFCu;
label_38eefc:
    // 0x38eefc: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x38EEFCu;
    {
        const bool branch_taken_0x38eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEFCu;
        // 0x38ef00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eefc) {
            ctx->pc = 0x38EE94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ee94;
        }
    }
    ctx->pc = 0x38EF04u;
    // 0x38ef04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x38ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38ef08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38ef08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38ef0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38ef10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x38EF10u;
    {
        const bool branch_taken_0x38ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF10u;
        // 0x38ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef10) {
            ctx->pc = 0x38EEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eeb0;
        }
    }
    ctx->pc = 0x38EF18u;
label_38ef18:
    // 0x38ef18: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x38EF18u;
    {
        const bool branch_taken_0x38ef18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF18u;
        // 0x38ef1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef18) {
            ctx->pc = 0x38EF9Cu;
            goto label_38ef9c;
        }
    }
    ctx->pc = 0x38EF20u;
    // 0x38ef20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38ef20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38ef24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ef28:
    // 0x38ef28: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x38ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x38ef2c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x38ef2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_38ef30:
    // 0x38ef30: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef34: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x38ef38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38EF38u;
    {
        const bool branch_taken_0x38ef38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF38u;
        // 0x38ef3c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef38) {
            ctx->pc = 0x38EF60u;
            goto label_38ef60;
        }
    }
    ctx->pc = 0x38EF40u;
    // 0x38ef40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38ef44: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x38ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38ef48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38ef4c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x38ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x38ef50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ef54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38ef58: 0x54a3fff5  bnel        $a1, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x38EF58u;
    {
        const bool branch_taken_0x38ef58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x38ef58) {
            ctx->pc = 0x38EF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EF58u;
            // 0x38ef5c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ef30;
        }
    }
    ctx->pc = 0x38EF60u;
label_38ef60:
    // 0x38ef60: 0x4c30009  bgezl       $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x38EF60u;
    {
        const bool branch_taken_0x38ef60 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x38ef60) {
            ctx->pc = 0x38EF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EF60u;
            // 0x38ef64: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EF88u;
            goto label_38ef88;
        }
    }
    ctx->pc = 0x38EF68u;
    // 0x38ef68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38ef6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x38ef74: 0xc0e38b2  jal         func_38E2C8
    ctx->pc = 0x38EF74u;
    SET_GPR_U32(ctx, 31, 0x38EF7Cu);
    ctx->pc = 0x38EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF74u;
    // 0x38ef78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E2C8u, 0x38EF74u, 0x38EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF7Cu;
label_38ef7c:
    // 0x38ef7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38EF7Cu;
    {
        const bool branch_taken_0x38ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF7Cu;
        // 0x38ef80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef7c) {
            ctx->pc = 0x38EFA0u;
            goto label_38efa0;
        }
    }
    ctx->pc = 0x38EF84u;
    // 0x38ef84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x38ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38ef88:
    // 0x38ef88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38ef88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38ef8c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x38ef8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x38ef90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38ef90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38ef94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x38EF94u;
    {
        const bool branch_taken_0x38ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF94u;
        // 0x38ef98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef94) {
            ctx->pc = 0x38EF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ef28;
        }
    }
    ctx->pc = 0x38EF9Cu;
label_38ef9c:
    // 0x38ef9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38ef9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38efa0:
    // 0x38efa0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38efa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38efa4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38efa8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38efa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38efac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38efacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38efb0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x38efb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38efb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38efb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x38EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFB8u;
        // 0x38efbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EFC0u;
}
