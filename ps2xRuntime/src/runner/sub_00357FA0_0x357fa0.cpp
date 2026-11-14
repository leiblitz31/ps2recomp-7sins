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

// Function: sub_00357FA0
// Address: 0x357fa0 - 0x358010
void sub_00357FA0_0x357fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357FA0_0x357fa0");
#endif

    switch (ctx->pc) {
        case 0x357fb4u: goto label_357fb4;
        case 0x357fc8u: goto label_357fc8;
        case 0x357fe4u: goto label_357fe4;
        case 0x357fecu: goto label_357fec;
        case 0x357ffcu: goto label_357ffc;
        default: break;
    }

    ctx->pc = 0x357fa0u;

    // 0x357fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357fa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x357fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357fac: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x357FACu;
    SET_GPR_U32(ctx, 31, 0x357FB4u);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x357FACu, 0x357FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FB4u;
label_357fb4:
    // 0x357fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fb8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x357FB8u;
    {
        const bool branch_taken_0x357fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FB8u;
        // 0x357fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fb8) {
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FC0u;
    // 0x357fc0: 0xc112074  jal         func_4481D0
    ctx->pc = 0x357FC0u;
    SET_GPR_U32(ctx, 31, 0x357FC8u);
    ctx->pc = 0x357FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FC0u;
    // 0x357fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x357FC0u, 0x357FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FC8u;
label_357fc8:
    // 0x357fc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x357FC8u;
    {
        const bool branch_taken_0x357fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FC8u;
        // 0x357fcc: 0x3c06005e  lui         $a2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fc8) {
            ctx->pc = 0x357FF4u;
            goto label_357ff4;
        }
    }
    ctx->pc = 0x357FD0u;
    // 0x357fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fd4: 0x24c68110  addiu       $a2, $a2, -0x7EF0
    ctx->pc = 0x357fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934800));
    // 0x357fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357fdc: 0xc1120d8  jal         func_448360
    ctx->pc = 0x357FDCu;
    SET_GPR_U32(ctx, 31, 0x357FE4u);
    ctx->pc = 0x357FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FDCu;
    // 0x357fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x357FDCu, 0x357FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FE4u;
label_357fe4:
    // 0x357fe4: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x357FE4u;
    SET_GPR_U32(ctx, 31, 0x357FECu);
    ctx->pc = 0x357FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FE4u;
    // 0x357fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x357FE4u, 0x357FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FECu;
label_357fec:
    // 0x357fec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357FECu;
    {
        const bool branch_taken_0x357fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FECu;
        // 0x357ff0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fec) {
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FF4u;
label_357ff4:
    // 0x357ff4: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x357FF4u;
    SET_GPR_U32(ctx, 31, 0x357FFCu);
    ctx->pc = 0x357FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FF4u;
    // 0x357ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x357FF4u, 0x357FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FFCu;
label_357ffc:
    // 0x357ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358000:
    // 0x358000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x358000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358008: 0x3e00008  jr          $ra
    ctx->pc = 0x358008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358008u;
        // 0x35800c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358010u;
}
