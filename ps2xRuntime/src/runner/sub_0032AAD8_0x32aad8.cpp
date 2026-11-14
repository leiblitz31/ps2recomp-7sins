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

// Function: sub_0032AAD8
// Address: 0x32aad8 - 0x32ace0
void sub_0032AAD8_0x32aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AAD8_0x32aad8");
#endif

    switch (ctx->pc) {
        case 0x32aad8u: goto label_32aad8;
        case 0x32aadcu: goto label_32aadc;
        case 0x32aae0u: goto label_32aae0;
        case 0x32aae4u: goto label_32aae4;
        case 0x32aae8u: goto label_32aae8;
        case 0x32aaecu: goto label_32aaec;
        case 0x32aaf0u: goto label_32aaf0;
        case 0x32aaf4u: goto label_32aaf4;
        case 0x32aaf8u: goto label_32aaf8;
        case 0x32aafcu: goto label_32aafc;
        case 0x32ab00u: goto label_32ab00;
        case 0x32ab04u: goto label_32ab04;
        case 0x32ab08u: goto label_32ab08;
        case 0x32ab0cu: goto label_32ab0c;
        case 0x32ab10u: goto label_32ab10;
        case 0x32ab14u: goto label_32ab14;
        case 0x32ab18u: goto label_32ab18;
        case 0x32ab1cu: goto label_32ab1c;
        case 0x32ab20u: goto label_32ab20;
        case 0x32ab24u: goto label_32ab24;
        case 0x32ab28u: goto label_32ab28;
        case 0x32ab2cu: goto label_32ab2c;
        case 0x32ab30u: goto label_32ab30;
        case 0x32ab34u: goto label_32ab34;
        case 0x32ab38u: goto label_32ab38;
        case 0x32ab3cu: goto label_32ab3c;
        case 0x32ab40u: goto label_32ab40;
        case 0x32ab44u: goto label_32ab44;
        case 0x32ab48u: goto label_32ab48;
        case 0x32ab4cu: goto label_32ab4c;
        case 0x32ab50u: goto label_32ab50;
        case 0x32ab54u: goto label_32ab54;
        case 0x32ab58u: goto label_32ab58;
        case 0x32ab5cu: goto label_32ab5c;
        case 0x32ab60u: goto label_32ab60;
        case 0x32ab64u: goto label_32ab64;
        case 0x32ab68u: goto label_32ab68;
        case 0x32ab6cu: goto label_32ab6c;
        case 0x32ab70u: goto label_32ab70;
        case 0x32ab74u: goto label_32ab74;
        case 0x32ab78u: goto label_32ab78;
        case 0x32ab7cu: goto label_32ab7c;
        case 0x32ab80u: goto label_32ab80;
        case 0x32ab84u: goto label_32ab84;
        case 0x32ab88u: goto label_32ab88;
        case 0x32ab8cu: goto label_32ab8c;
        case 0x32ab90u: goto label_32ab90;
        case 0x32ab94u: goto label_32ab94;
        case 0x32ab98u: goto label_32ab98;
        case 0x32ab9cu: goto label_32ab9c;
        case 0x32aba0u: goto label_32aba0;
        case 0x32aba4u: goto label_32aba4;
        case 0x32aba8u: goto label_32aba8;
        case 0x32abacu: goto label_32abac;
        case 0x32abb0u: goto label_32abb0;
        case 0x32abb4u: goto label_32abb4;
        case 0x32abb8u: goto label_32abb8;
        case 0x32abbcu: goto label_32abbc;
        case 0x32abc0u: goto label_32abc0;
        case 0x32abc4u: goto label_32abc4;
        case 0x32abc8u: goto label_32abc8;
        case 0x32abccu: goto label_32abcc;
        case 0x32abd0u: goto label_32abd0;
        case 0x32abd4u: goto label_32abd4;
        case 0x32abd8u: goto label_32abd8;
        case 0x32abdcu: goto label_32abdc;
        case 0x32abe0u: goto label_32abe0;
        case 0x32abe4u: goto label_32abe4;
        case 0x32abe8u: goto label_32abe8;
        case 0x32abecu: goto label_32abec;
        case 0x32abf0u: goto label_32abf0;
        case 0x32abf4u: goto label_32abf4;
        case 0x32abf8u: goto label_32abf8;
        case 0x32abfcu: goto label_32abfc;
        case 0x32ac00u: goto label_32ac00;
        case 0x32ac04u: goto label_32ac04;
        case 0x32ac08u: goto label_32ac08;
        case 0x32ac0cu: goto label_32ac0c;
        case 0x32ac10u: goto label_32ac10;
        case 0x32ac14u: goto label_32ac14;
        case 0x32ac18u: goto label_32ac18;
        case 0x32ac1cu: goto label_32ac1c;
        case 0x32ac20u: goto label_32ac20;
        case 0x32ac24u: goto label_32ac24;
        case 0x32ac28u: goto label_32ac28;
        case 0x32ac2cu: goto label_32ac2c;
        case 0x32ac30u: goto label_32ac30;
        case 0x32ac34u: goto label_32ac34;
        case 0x32ac38u: goto label_32ac38;
        case 0x32ac3cu: goto label_32ac3c;
        case 0x32ac40u: goto label_32ac40;
        case 0x32ac44u: goto label_32ac44;
        case 0x32ac48u: goto label_32ac48;
        case 0x32ac4cu: goto label_32ac4c;
        case 0x32ac50u: goto label_32ac50;
        case 0x32ac54u: goto label_32ac54;
        case 0x32ac58u: goto label_32ac58;
        case 0x32ac5cu: goto label_32ac5c;
        case 0x32ac60u: goto label_32ac60;
        case 0x32ac64u: goto label_32ac64;
        case 0x32ac68u: goto label_32ac68;
        case 0x32ac6cu: goto label_32ac6c;
        case 0x32ac70u: goto label_32ac70;
        case 0x32ac74u: goto label_32ac74;
        case 0x32ac78u: goto label_32ac78;
        case 0x32ac7cu: goto label_32ac7c;
        case 0x32ac80u: goto label_32ac80;
        case 0x32ac84u: goto label_32ac84;
        case 0x32ac88u: goto label_32ac88;
        case 0x32ac8cu: goto label_32ac8c;
        case 0x32ac90u: goto label_32ac90;
        case 0x32ac94u: goto label_32ac94;
        case 0x32ac98u: goto label_32ac98;
        case 0x32ac9cu: goto label_32ac9c;
        case 0x32aca0u: goto label_32aca0;
        case 0x32aca4u: goto label_32aca4;
        case 0x32aca8u: goto label_32aca8;
        case 0x32acacu: goto label_32acac;
        case 0x32acb0u: goto label_32acb0;
        case 0x32acb4u: goto label_32acb4;
        case 0x32acb8u: goto label_32acb8;
        case 0x32acbcu: goto label_32acbc;
        case 0x32acc0u: goto label_32acc0;
        case 0x32acc4u: goto label_32acc4;
        case 0x32acc8u: goto label_32acc8;
        case 0x32acccu: goto label_32accc;
        case 0x32acd0u: goto label_32acd0;
        case 0x32acd4u: goto label_32acd4;
        case 0x32acd8u: goto label_32acd8;
        case 0x32acdcu: goto label_32acdc;
        default: break;
    }

    ctx->pc = 0x32aad8u;

label_32aad8:
    // 0x32aad8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32aadc:
    // 0x32aadc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32aae0:
    // 0x32aae0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32aae4:
    // 0x32aae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32aae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32aae8:
    // 0x32aae8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_32aaec:
    // 0x32aaec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32aaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32aaf0:
    // 0x32aaf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32aaf4:
    // 0x32aaf4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32aaf8:
    // 0x32aaf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_32aafc:
    if (ctx->pc == 0x32AAFCu) {
        ctx->pc = 0x32AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF8u;
        // 0x32aafc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB00u;
        goto label_32ab00;
    }
    ctx->pc = 0x32AAF8u;
    {
        const bool branch_taken_0x32aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF8u;
        // 0x32aafc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aaf8) {
            ctx->pc = 0x32AB70u;
            goto label_32ab70;
        }
    }
    ctx->pc = 0x32AB00u;
label_32ab00:
    // 0x32ab00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ab04:
    // 0x32ab04: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x32ab04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab08:
    // 0x32ab08: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x32ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_32ab0c:
    // 0x32ab0c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32ab10:
    // 0x32ab10: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_32ab14:
    if (ctx->pc == 0x32AB14u) {
        ctx->pc = 0x32AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB10u;
        // 0x32ab14: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB18u;
        goto label_32ab18;
    }
    ctx->pc = 0x32AB10u;
    {
        const bool branch_taken_0x32ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x32AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB10u;
        // 0x32ab14: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab10) {
            ctx->pc = 0x32AB40u;
            goto label_32ab40;
        }
    }
    ctx->pc = 0x32AB18u;
label_32ab18:
    // 0x32ab18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32ab18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32ab1c:
    // 0x32ab1c: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x32ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_32ab20:
    // 0x32ab20: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x32ab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32ab24:
    // 0x32ab24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32ab28:
    // 0x32ab28: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_32ab2c:
    // 0x32ab2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_32ab30:
    if (ctx->pc == 0x32AB30u) {
        ctx->pc = 0x32AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB2Cu;
        // 0x32ab30: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB34u;
        goto label_32ab34;
    }
    ctx->pc = 0x32AB2Cu;
    {
        const bool branch_taken_0x32ab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB2Cu;
        // 0x32ab30: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab2c) {
            ctx->pc = 0x32AB70u;
            goto label_32ab70;
        }
    }
    ctx->pc = 0x32AB34u;
label_32ab34:
    // 0x32ab34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ab38:
    // 0x32ab38: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
label_32ab3c:
    if (ctx->pc == 0x32AB3Cu) {
        ctx->pc = 0x32AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB38u;
        // 0x32ab3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB40u;
        goto label_32ab40;
    }
    ctx->pc = 0x32AB38u;
    {
        const bool branch_taken_0x32ab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x32ab38) {
            ctx->pc = 0x32AB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB38u;
            // 0x32ab3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ab28;
        }
    }
    ctx->pc = 0x32AB40u;
label_32ab40:
    // 0x32ab40: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x32ab40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_32ab44:
    // 0x32ab44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_32ab48:
    if (ctx->pc == 0x32AB48u) {
        ctx->pc = 0x32AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB44u;
        // 0x32ab48: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB4Cu;
        goto label_32ab4c;
    }
    ctx->pc = 0x32AB44u;
    {
        const bool branch_taken_0x32ab44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB44u;
        // 0x32ab48: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab44) {
            ctx->pc = 0x32AB70u;
            goto label_32ab70;
        }
    }
    ctx->pc = 0x32AB4Cu;
label_32ab4c:
    // 0x32ab4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32ab50:
    // 0x32ab50: 0xc1035f6  jal         func_40D7D8
label_32ab54:
    if (ctx->pc == 0x32AB54u) {
        ctx->pc = 0x32AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB50u;
        // 0x32ab54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB58u;
        goto label_32ab58;
    }
    ctx->pc = 0x32AB50u;
    SET_GPR_U32(ctx, 31, 0x32AB58u);
    ctx->pc = 0x32AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB50u;
    // 0x32ab54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x32AB50u, 0x32AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB58u;
label_32ab58:
    // 0x32ab58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32ab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32ab5c:
    // 0x32ab5c: 0xc103628  jal         func_40D8A0
label_32ab60:
    if (ctx->pc == 0x32AB60u) {
        ctx->pc = 0x32AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB5Cu;
        // 0x32ab60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB64u;
        goto label_32ab64;
    }
    ctx->pc = 0x32AB5Cu;
    SET_GPR_U32(ctx, 31, 0x32AB64u);
    ctx->pc = 0x32AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB5Cu;
    // 0x32ab60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32AB5Cu, 0x32AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB64u;
label_32ab64:
    // 0x32ab64: 0x10000056  b           . + 4 + (0x56 << 2)
label_32ab68:
    if (ctx->pc == 0x32AB68u) {
        ctx->pc = 0x32AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB64u;
        // 0x32ab68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB6Cu;
        goto label_32ab6c;
    }
    ctx->pc = 0x32AB64u;
    {
        const bool branch_taken_0x32ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB64u;
        // 0x32ab68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab64) {
            ctx->pc = 0x32ACC0u;
            goto label_32acc0;
        }
    }
    ctx->pc = 0x32AB6Cu;
label_32ab6c:
    // 0x32ab6c: 0x0  nop
    ctx->pc = 0x32ab6cu;
    // NOP
label_32ab70:
    // 0x32ab70: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x32ab70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32ab74:
    // 0x32ab74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32ab78:
    // 0x32ab78: 0x54e2000e  bnel        $a3, $v0, . + 4 + (0xE << 2)
label_32ab7c:
    if (ctx->pc == 0x32AB7Cu) {
        ctx->pc = 0x32AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB78u;
        // 0x32ab7c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB80u;
        goto label_32ab80;
    }
    ctx->pc = 0x32AB78u;
    {
        const bool branch_taken_0x32ab78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ab78) {
            ctx->pc = 0x32AB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB78u;
            // 0x32ab7c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32ABB4u;
            goto label_32abb4;
        }
    }
    ctx->pc = 0x32AB80u;
label_32ab80:
    // 0x32ab80: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x32ab80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_32ab84:
    // 0x32ab84: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x32ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32ab88:
    // 0x32ab88: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x32ab88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_32ab8c:
    // 0x32ab8c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32ab90:
    // 0x32ab90: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x32ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_32ab94:
    // 0x32ab94: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x32ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_32ab98:
    // 0x32ab98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ab9c:
    // 0x32ab9c: 0x34c60131  ori         $a2, $a2, 0x131
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)305);
label_32aba0:
    // 0x32aba0: 0x2812  mflo        $a1
    ctx->pc = 0x32aba0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_32aba4:
    // 0x32aba4: 0x40f809  jalr        $v0
label_32aba8:
    if (ctx->pc == 0x32ABA8u) {
        ctx->pc = 0x32ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA4u;
        // 0x32aba8: 0xae270008  sw          $a3, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABACu;
        goto label_32abac;
    }
    ctx->pc = 0x32ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32ABACu);
        ctx->pc = 0x32ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA4u;
        // 0x32aba8: 0xae270008  sw          $a3, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ABA4u, 0x32ABACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32ABACu;
label_32abac:
    // 0x32abac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32abacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32abb0:
    // 0x32abb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32abb4:
    // 0x32abb4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32abb8:
    // 0x32abb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32abbc:
    // 0x32abbc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x32abbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_32abc0:
    // 0x32abc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32abc4:
    // 0x32abc4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x32abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_32abc8:
    // 0x32abc8: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x32abc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32abcc:
    // 0x32abcc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x32abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_32abd0:
    // 0x32abd0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x32abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_32abd4:
    // 0x32abd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_32abd8:
    // 0x32abd8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x32abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_32abdc:
    // 0x32abdc: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x32abdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32abe0:
    // 0x32abe0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x32abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_32abe4:
    // 0x32abe4: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x32abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_32abe8:
    // 0x32abe8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x32abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32abec:
    // 0x32abec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32abf0:
    // 0x32abf0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_32abf4:
    if (ctx->pc == 0x32ABF4u) {
        ctx->pc = 0x32ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF0u;
        // 0x32abf4: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABF8u;
        goto label_32abf8;
    }
    ctx->pc = 0x32ABF0u;
    {
        const bool branch_taken_0x32abf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF0u;
        // 0x32abf4: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abf0) {
            ctx->pc = 0x32ACC0u;
            goto label_32acc0;
        }
    }
    ctx->pc = 0x32ABF8u;
label_32abf8:
    // 0x32abf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32abfc:
    // 0x32abfc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_32ac00:
    if (ctx->pc == 0x32AC00u) {
        ctx->pc = 0x32AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABFCu;
        // 0x32ac00: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC04u;
        goto label_32ac04;
    }
    ctx->pc = 0x32ABFCu;
    {
        const bool branch_taken_0x32abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABFCu;
        // 0x32ac00: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abfc) {
            ctx->pc = 0x32AC18u;
            goto label_32ac18;
        }
    }
    ctx->pc = 0x32AC04u;
label_32ac04:
    // 0x32ac04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32ac08:
    // 0x32ac08: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_32ac0c:
    if (ctx->pc == 0x32AC0Cu) {
        ctx->pc = 0x32AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC08u;
        // 0x32ac0c: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC10u;
        goto label_32ac10;
    }
    ctx->pc = 0x32AC08u;
    {
        const bool branch_taken_0x32ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC08u;
        // 0x32ac0c: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac08) {
            ctx->pc = 0x32AC28u;
            goto label_32ac28;
        }
    }
    ctx->pc = 0x32AC10u;
label_32ac10:
    // 0x32ac10: 0x10000025  b           . + 4 + (0x25 << 2)
label_32ac14:
    if (ctx->pc == 0x32AC14u) {
        ctx->pc = 0x32AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC10u;
        // 0x32ac14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC18u;
        goto label_32ac18;
    }
    ctx->pc = 0x32AC10u;
    {
        const bool branch_taken_0x32ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC10u;
        // 0x32ac14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac10) {
            ctx->pc = 0x32ACA8u;
            goto label_32aca8;
        }
    }
    ctx->pc = 0x32AC18u;
label_32ac18:
    // 0x32ac18: 0xc0cac08  jal         func_32B020
label_32ac1c:
    if (ctx->pc == 0x32AC1Cu) {
        ctx->pc = 0x32AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC18u;
        // 0x32ac1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC20u;
        goto label_32ac20;
    }
    ctx->pc = 0x32AC18u;
    SET_GPR_U32(ctx, 31, 0x32AC20u);
    ctx->pc = 0x32AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC18u;
    // 0x32ac1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B020u, 0x32AC18u, 0x32AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC20u;
label_32ac20:
    // 0x32ac20: 0x1000001e  b           . + 4 + (0x1E << 2)
label_32ac24:
    if (ctx->pc == 0x32AC24u) {
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC28u;
        goto label_32ac28;
    }
    ctx->pc = 0x32AC20u;
    {
        const bool branch_taken_0x32ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac20) {
            ctx->pc = 0x32AC9Cu;
            goto label_32ac9c;
        }
    }
    ctx->pc = 0x32AC28u;
label_32ac28:
    // 0x32ac28: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_32ac2c:
    if (ctx->pc == 0x32AC2Cu) {
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC30u;
        goto label_32ac30;
    }
    ctx->pc = 0x32AC28u;
    {
        const bool branch_taken_0x32ac28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac28) {
            ctx->pc = 0x32AC8Cu;
            goto label_32ac8c;
        }
    }
    ctx->pc = 0x32AC30u;
label_32ac30:
    // 0x32ac30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32ac34:
    // 0x32ac34: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_32ac38:
    if (ctx->pc == 0x32AC38u) {
        ctx->pc = 0x32AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC34u;
        // 0x32ac38: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC3Cu;
        goto label_32ac3c;
    }
    ctx->pc = 0x32AC34u;
    {
        const bool branch_taken_0x32ac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC34u;
        // 0x32ac38: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac34) {
            ctx->pc = 0x32AC90u;
            goto label_32ac90;
        }
    }
    ctx->pc = 0x32AC3Cu;
label_32ac3c:
    // 0x32ac3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ac40:
    // 0x32ac40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32ac44:
    // 0x32ac44: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_32ac48:
    if (ctx->pc == 0x32AC48u) {
        ctx->pc = 0x32AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC44u;
        // 0x32ac48: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC4Cu;
        goto label_32ac4c;
    }
    ctx->pc = 0x32AC44u;
    {
        const bool branch_taken_0x32ac44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x32AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC44u;
        // 0x32ac48: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac44) {
            ctx->pc = 0x32AC58u;
            goto label_32ac58;
        }
    }
    ctx->pc = 0x32AC4Cu;
label_32ac4c:
    // 0x32ac4c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x32ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_32ac50:
    // 0x32ac50: 0x1000000f  b           . + 4 + (0xF << 2)
label_32ac54:
    if (ctx->pc == 0x32AC54u) {
        ctx->pc = 0x32AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC50u;
        // 0x32ac54: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC58u;
        goto label_32ac58;
    }
    ctx->pc = 0x32AC50u;
    {
        const bool branch_taken_0x32ac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC50u;
        // 0x32ac54: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac50) {
            ctx->pc = 0x32AC90u;
            goto label_32ac90;
        }
    }
    ctx->pc = 0x32AC58u;
label_32ac58:
    // 0x32ac58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_32ac5c:
    // 0x32ac5c: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x32ac5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_32ac60:
    // 0x32ac60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32ac64:
    if (ctx->pc == 0x32AC64u) {
        ctx->pc = 0x32AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC60u;
        // 0x32ac64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC68u;
        goto label_32ac68;
    }
    ctx->pc = 0x32AC60u;
    {
        const bool branch_taken_0x32ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC60u;
        // 0x32ac64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac60) {
            ctx->pc = 0x32AC90u;
            goto label_32ac90;
        }
    }
    ctx->pc = 0x32AC68u;
label_32ac68:
    // 0x32ac68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32ac6c:
    // 0x32ac6c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x32ac6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_32ac70:
    // 0x32ac70: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_32ac74:
    // 0x32ac74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32ac78:
    // 0x32ac78: 0x1483fff8  bne         $a0, $v1, . + 4 + (-0x8 << 2)
label_32ac7c:
    if (ctx->pc == 0x32AC7Cu) {
        ctx->pc = 0x32AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC78u;
        // 0x32ac7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC80u;
        goto label_32ac80;
    }
    ctx->pc = 0x32AC78u;
    {
        const bool branch_taken_0x32ac78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC78u;
        // 0x32ac7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac78) {
            ctx->pc = 0x32AC5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ac5c;
        }
    }
    ctx->pc = 0x32AC80u;
label_32ac80:
    // 0x32ac80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32ac84:
    // 0x32ac84: 0x10000002  b           . + 4 + (0x2 << 2)
label_32ac88:
    if (ctx->pc == 0x32AC88u) {
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC8Cu;
        goto label_32ac8c;
    }
    ctx->pc = 0x32AC84u;
    {
        const bool branch_taken_0x32ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac84) {
            ctx->pc = 0x32AC90u;
            goto label_32ac90;
        }
    }
    ctx->pc = 0x32AC8Cu;
label_32ac8c:
    // 0x32ac8c: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x32ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_32ac90:
    // 0x32ac90: 0xc0cac94  jal         func_32B250
label_32ac94:
    if (ctx->pc == 0x32AC94u) {
        ctx->pc = 0x32AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC90u;
        // 0x32ac94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC98u;
        goto label_32ac98;
    }
    ctx->pc = 0x32AC90u;
    SET_GPR_U32(ctx, 31, 0x32AC98u);
    ctx->pc = 0x32AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC90u;
    // 0x32ac94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B250u, 0x32AC90u, 0x32AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC98u;
label_32ac98:
    // 0x32ac98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32ac9c:
    // 0x32ac9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_32aca0:
    // 0x32aca0: 0x10000007  b           . + 4 + (0x7 << 2)
label_32aca4:
    if (ctx->pc == 0x32ACA4u) {
        ctx->pc = 0x32ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA0u;
        // 0x32aca4: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACA8u;
        goto label_32aca8;
    }
    ctx->pc = 0x32ACA0u;
    {
        const bool branch_taken_0x32aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA0u;
        // 0x32aca4: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aca0) {
            ctx->pc = 0x32ACC0u;
            goto label_32acc0;
        }
    }
    ctx->pc = 0x32ACA8u;
label_32aca8:
    // 0x32aca8: 0xc1035f6  jal         func_40D7D8
label_32acac:
    if (ctx->pc == 0x32ACACu) {
        ctx->pc = 0x32ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA8u;
        // 0x32acac: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACB0u;
        goto label_32acb0;
    }
    ctx->pc = 0x32ACA8u;
    SET_GPR_U32(ctx, 31, 0x32ACB0u);
    ctx->pc = 0x32ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACA8u;
    // 0x32acac: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x32ACA8u, 0x32ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACB0u;
label_32acb0:
    // 0x32acb0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x32acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_32acb4:
    // 0x32acb4: 0xc103628  jal         func_40D8A0
label_32acb8:
    if (ctx->pc == 0x32ACB8u) {
        ctx->pc = 0x32ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACB4u;
        // 0x32acb8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACBCu;
        goto label_32acbc;
    }
    ctx->pc = 0x32ACB4u;
    SET_GPR_U32(ctx, 31, 0x32ACBCu);
    ctx->pc = 0x32ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACB4u;
    // 0x32acb8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32ACB4u, 0x32ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACBCu;
label_32acbc:
    // 0x32acbc: 0x0  nop
    ctx->pc = 0x32acbcu;
    // NOP
label_32acc0:
    // 0x32acc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32acc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32acc4:
    // 0x32acc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32acc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32acc8:
    // 0x32acc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32acc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32accc:
    // 0x32accc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32acccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32acd0:
    // 0x32acd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32acd4:
    // 0x32acd4: 0x3e00008  jr          $ra
label_32acd8:
    if (ctx->pc == 0x32ACD8u) {
        ctx->pc = 0x32ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD4u;
        // 0x32acd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACDCu;
        goto label_32acdc;
    }
    ctx->pc = 0x32ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD4u;
        // 0x32acd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACDCu;
label_32acdc:
    // 0x32acdc: 0x0  nop
    ctx->pc = 0x32acdcu;
    // NOP
    ctx->pc = 0x32ace0u;
}
