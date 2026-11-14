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

// Function: sub_00382B88
// Address: 0x382b88 - 0x382e28
void sub_00382B88_0x382b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382B88_0x382b88");
#endif

    switch (ctx->pc) {
        case 0x382bc4u: goto label_382bc4;
        case 0x382bf8u: goto label_382bf8;
        case 0x382c2cu: goto label_382c2c;
        case 0x382c4cu: goto label_382c4c;
        case 0x382c6cu: goto label_382c6c;
        case 0x382c90u: goto label_382c90;
        case 0x382cacu: goto label_382cac;
        case 0x382cccu: goto label_382ccc;
        case 0x382ce8u: goto label_382ce8;
        case 0x382d08u: goto label_382d08;
        case 0x382d24u: goto label_382d24;
        case 0x382d44u: goto label_382d44;
        case 0x382d60u: goto label_382d60;
        case 0x382d80u: goto label_382d80;
        case 0x382d9cu: goto label_382d9c;
        case 0x382decu: goto label_382dec;
        case 0x382e14u: goto label_382e14;
        default: break;
    }

    ctx->pc = 0x382b88u;

    // 0x382b88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x382b8c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x382b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x382b90: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x382b90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x382b94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x382b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x382b98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x382b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x382b9c: 0x24c63870  addiu       $a2, $a2, 0x3870
    ctx->pc = 0x382b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14448));
    // 0x382ba0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x382ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x382ba4: 0x24e73888  addiu       $a3, $a3, 0x3888
    ctx->pc = 0x382ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14472));
    // 0x382ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x382bac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x382bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x382bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x382bb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x382bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x382bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382bbc: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x382BBCu;
    SET_GPR_U32(ctx, 31, 0x382BC4u);
    ctx->pc = 0x382BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BBCu;
    // 0x382bc0: 0x2405011f  addiu       $a1, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x382BBCu, 0x382BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BC4u;
label_382bc4:
    // 0x382bc4: 0x4400079  bltz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x382BC4u;
    {
        const bool branch_taken_0x382bc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BC4u;
        // 0x382bc8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bc4) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382BCCu;
    // 0x382bcc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x382bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x382bd0: 0x245438a0  addiu       $s4, $v0, 0x38A0
    ctx->pc = 0x382bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14496));
    // 0x382bd4: 0x247538b8  addiu       $s5, $v1, 0x38B8
    ctx->pc = 0x382bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 14520));
    // 0x382bd8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x382bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x382bdc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382be0: 0x24533a08  addiu       $s3, $v0, 0x3A08
    ctx->pc = 0x382be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14856));
    // 0x382be4: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382be8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bf0: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x382BF0u;
    SET_GPR_U32(ctx, 31, 0x382BF8u);
    ctx->pc = 0x382BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BF0u;
    // 0x382bf4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x382BF0u, 0x382BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BF8u;
label_382bf8:
    // 0x382bf8: 0x440006c  bltz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x382BF8u;
    {
        const bool branch_taken_0x382bf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BF8u;
        // 0x382bfc: 0xaf82a924  sw          $v0, -0x56DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bf8) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382C00u;
    // 0x382c00: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x382c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x382c04: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x382c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x382c08: 0x24513a38  addiu       $s1, $v0, 0x3A38
    ctx->pc = 0x382c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14904));
    // 0x382c0c: 0x24723af8  addiu       $s2, $v1, 0x3AF8
    ctx->pc = 0x382c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 15096));
    // 0x382c10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x382c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x382c14: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382c18: 0x24503c70  addiu       $s0, $v0, 0x3C70
    ctx->pc = 0x382c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
    // 0x382c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c24: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x382C24u;
    SET_GPR_U32(ctx, 31, 0x382C2Cu);
    ctx->pc = 0x382C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C24u;
    // 0x382c28: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x382C24u, 0x382C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C2Cu;
label_382c2c:
    // 0x382c2c: 0x440005f  bltz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x382C2Cu;
    {
        const bool branch_taken_0x382c2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C2Cu;
        // 0x382c30: 0xaf82a928  sw          $v0, -0x56D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c2c) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382C34u;
    // 0x382c34: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382c38: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382c3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c40: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c44: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x382C44u;
    SET_GPR_U32(ctx, 31, 0x382C4Cu);
    ctx->pc = 0x382C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C44u;
    // 0x382c48: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x382C44u, 0x382C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C4Cu;
label_382c4c:
    // 0x382c4c: 0x8f83a924  lw          $v1, -0x56DC($gp)
    ctx->pc = 0x382c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945060)));
    // 0x382c50: 0x4600056  bltz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x382C50u;
    {
        const bool branch_taken_0x382c50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x382C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C50u;
        // 0x382c54: 0xaf82a92c  sw          $v0, -0x56D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c50) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382C58u;
    // 0x382c58: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382c5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c64: 0xc0e63b4  jal         func_398ED0
    ctx->pc = 0x382C64u;
    SET_GPR_U32(ctx, 31, 0x382C6Cu);
    ctx->pc = 0x382C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C64u;
    // 0x382c68: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x382C64u, 0x382C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C6Cu;
label_382c6c:
    // 0x382c6c: 0x8f83a928  lw          $v1, -0x56D8($gp)
    ctx->pc = 0x382c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945064)));
    // 0x382c70: 0x460004e  bltz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x382C70u;
    {
        const bool branch_taken_0x382c70 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x382C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C70u;
        // 0x382c74: 0xaf82a930  sw          $v0, -0x56D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c70) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382C78u;
    // 0x382c78: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382c7c: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382c80: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c88: 0xc106850  jal         func_41A140
    ctx->pc = 0x382C88u;
    SET_GPR_U32(ctx, 31, 0x382C90u);
    ctx->pc = 0x382C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C88u;
    // 0x382c8c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A140u, 0x382C88u, 0x382C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C90u;
label_382c90:
    // 0x382c90: 0x4400046  bltz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x382C90u;
    {
        const bool branch_taken_0x382c90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C90u;
        // 0x382c94: 0xaf82a934  sw          $v0, -0x56CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c90) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382C98u;
    // 0x382c98: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ca0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ca4: 0xc1056c6  jal         func_415B18
    ctx->pc = 0x382CA4u;
    SET_GPR_U32(ctx, 31, 0x382CACu);
    ctx->pc = 0x382CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382CA4u;
    // 0x382ca8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415B18u, 0x382CA4u, 0x382CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382CACu;
label_382cac:
    // 0x382cac: 0x440003f  bltz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x382CACu;
    {
        const bool branch_taken_0x382cac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CACu;
        // 0x382cb0: 0xaf82a938  sw          $v0, -0x56C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382cac) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382CB4u;
    // 0x382cb4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382cb8: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382cbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cc0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cc4: 0xc1060b4  jal         func_4182D0
    ctx->pc = 0x382CC4u;
    SET_GPR_U32(ctx, 31, 0x382CCCu);
    ctx->pc = 0x382CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382CC4u;
    // 0x382cc8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4182D0u, 0x382CC4u, 0x382CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382CCCu;
label_382ccc:
    // 0x382ccc: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x382CCCu;
    {
        const bool branch_taken_0x382ccc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CCCu;
        // 0x382cd0: 0xaf82a93c  sw          $v0, -0x56C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ccc) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382CD4u;
    // 0x382cd4: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ce0: 0xc1054a8  jal         func_4152A0
    ctx->pc = 0x382CE0u;
    SET_GPR_U32(ctx, 31, 0x382CE8u);
    ctx->pc = 0x382CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382CE0u;
    // 0x382ce4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4152A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4152A0u, 0x382CE0u, 0x382CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382CE8u;
label_382ce8:
    // 0x382ce8: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x382CE8u;
    {
        const bool branch_taken_0x382ce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CE8u;
        // 0x382cec: 0xaf82a940  sw          $v0, -0x56C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ce8) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382CF0u;
    // 0x382cf0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382cf4: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382cf8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cfc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d00: 0xc0e36f6  jal         func_38DBD8
    ctx->pc = 0x382D00u;
    SET_GPR_U32(ctx, 31, 0x382D08u);
    ctx->pc = 0x382D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D00u;
    // 0x382d04: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DBD8u, 0x382D00u, 0x382D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D08u;
label_382d08:
    // 0x382d08: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x382D08u;
    {
        const bool branch_taken_0x382d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D08u;
        // 0x382d0c: 0xaf82a944  sw          $v0, -0x56BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d08) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382D10u;
    // 0x382d10: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d1c: 0xc0e3708  jal         func_38DC20
    ctx->pc = 0x382D1Cu;
    SET_GPR_U32(ctx, 31, 0x382D24u);
    ctx->pc = 0x382D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D1Cu;
    // 0x382d20: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DC20u, 0x382D1Cu, 0x382D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D24u;
label_382d24:
    // 0x382d24: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x382D24u;
    {
        const bool branch_taken_0x382d24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D24u;
        // 0x382d28: 0xaf82a948  sw          $v0, -0x56B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d24) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382D2Cu;
    // 0x382d2c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382d30: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x382d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382d34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d38: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d3c: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x382D3Cu;
    SET_GPR_U32(ctx, 31, 0x382D44u);
    ctx->pc = 0x382D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D3Cu;
    // 0x382d40: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x382D3Cu, 0x382D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D44u;
label_382d44:
    // 0x382d44: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x382D44u;
    {
        const bool branch_taken_0x382d44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D44u;
        // 0x382d48: 0xaf82a94c  sw          $v0, -0x56B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d44) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382D4Cu;
    // 0x382d4c: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x382d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x382d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d58: 0xc0e3a08  jal         func_38E820
    ctx->pc = 0x382D58u;
    SET_GPR_U32(ctx, 31, 0x382D60u);
    ctx->pc = 0x382D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D58u;
    // 0x382d5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E820u, 0x382D58u, 0x382D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D60u;
label_382d60:
    // 0x382d60: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x382D60u;
    {
        const bool branch_taken_0x382d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D60u;
        // 0x382d64: 0xaf82a950  sw          $v0, -0x56B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d60) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382D68u;
    // 0x382d68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d6c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x382d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d70: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x382d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d74: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x382d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382d78: 0xc108312  jal         func_420C48
    ctx->pc = 0x382D78u;
    SET_GPR_U32(ctx, 31, 0x382D80u);
    ctx->pc = 0x382D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D78u;
    // 0x382d7c: 0x2405011f  addiu       $a1, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420C48u, 0x382D78u, 0x382D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D80u;
label_382d80:
    // 0x382d80: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x382D80u;
    {
        const bool branch_taken_0x382d80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x382D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D80u;
        // 0x382d84: 0xaf82a954  sw          $v0, -0x56AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d80) {
            ctx->pc = 0x382DACu;
            goto label_382dac;
        }
    }
    ctx->pc = 0x382D88u;
    // 0x382d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x382d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d94: 0xc105976  jal         func_4165D8
    ctx->pc = 0x382D94u;
    SET_GPR_U32(ctx, 31, 0x382D9Cu);
    ctx->pc = 0x382D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D94u;
    // 0x382d98: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4165D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4165D8u, 0x382D94u, 0x382D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D9Cu;
label_382d9c:
    // 0x382d9c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x382d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x382da0: 0xaf82a958  sw          $v0, -0x56A8($gp)
    ctx->pc = 0x382da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945112), GPR_U32(ctx, 2));
    // 0x382da4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382DA4u;
    {
        const bool branch_taken_0x382da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DA4u;
        // 0x382da8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382da4) {
            ctx->pc = 0x382DB0u;
            goto label_382db0;
        }
    }
    ctx->pc = 0x382DACu;
label_382dac:
    // 0x382dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382db0:
    // 0x382db0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x382db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x382db4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x382db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382db8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x382db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382dc0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x382dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382dc4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x382dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x382DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DCCu;
        // 0x382dd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382DD4u;
    // 0x382dd4: 0x0  nop
    ctx->pc = 0x382dd4u;
    // NOP
    // 0x382dd8: 0x8f82a924  lw          $v0, -0x56DC($gp)
    ctx->pc = 0x382dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945060)));
    // 0x382ddc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x382ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x382de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382de4: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x382DE4u;
    SET_GPR_U32(ctx, 31, 0x382DECu);
    ctx->pc = 0x382DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382DE4u;
    // 0x382de8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x382DE4u, 0x382DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382DECu;
label_382dec:
    // 0x382dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382df0: 0x3e00008  jr          $ra
    ctx->pc = 0x382DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DF0u;
        // 0x382df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382DF8u;
    // 0x382df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x382df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x382dfc: 0x8f82a924  lw          $v0, -0x56DC($gp)
    ctx->pc = 0x382dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945060)));
    // 0x382e00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x382e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x382e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382e0c: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x382E0Cu;
    SET_GPR_U32(ctx, 31, 0x382E14u);
    ctx->pc = 0x382E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E0Cu;
    // 0x382e10: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x382E0Cu, 0x382E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E14u;
label_382e14:
    // 0x382e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x382e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x382e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382e20: 0x3e00008  jr          $ra
    ctx->pc = 0x382E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E20u;
        // 0x382e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382E28u;
}
