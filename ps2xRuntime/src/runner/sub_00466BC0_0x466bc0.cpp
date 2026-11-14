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

// Function: sub_00466BC0
// Address: 0x466bc0 - 0x466c90
void sub_00466BC0_0x466bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466BC0_0x466bc0");
#endif

    switch (ctx->pc) {
        case 0x466c10u: goto label_466c10;
        case 0x466c20u: goto label_466c20;
        case 0x466c40u: goto label_466c40;
        default: break;
    }

    ctx->pc = 0x466bc0u;

    // 0x466bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x466bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x466bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x466bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x466bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x466bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x466bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x466bd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x466bd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x466bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x466bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466be0: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x466be0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x466be4: 0x2652f700  addiu       $s2, $s2, -0x900
    ctx->pc = 0x466be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964992));
    // 0x466be8: 0x3c130000  lui         $s3, 0x0
    ctx->pc = 0x466be8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)0 << 16));
    // 0x466bec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x466becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x466bf0: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x466bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x466bf4: 0x26310000  addiu       $s1, $s1, 0x0
    ctx->pc = 0x466bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 0));
    // 0x466bf8: 0x3c0201fe  lui         $v0, 0x1FE
    ctx->pc = 0x466bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)510 << 16));
    // 0x466bfc: 0x344203e8  ori         $v0, $v0, 0x3E8
    ctx->pc = 0x466bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1000);
    // 0x466c00: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x466c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x466c04: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x466c04u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x466c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x466C08u;
    {
        const bool branch_taken_0x466c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466c08) {
            ctx->pc = 0x466C24u;
            goto label_466c24;
        }
    }
    ctx->pc = 0x466C10u;
label_466c10:
    // 0x466c10: 0x2610fc18  addiu       $s0, $s0, -0x3E8
    ctx->pc = 0x466c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966296));
    // 0x466c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x466c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466c18: 0xc0bb484  jal         func_2ED210
    ctx->pc = 0x466C18u;
    SET_GPR_U32(ctx, 31, 0x466C20u);
    ctx->pc = 0x2ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED210u, 0x466C18u, 0x466C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466C20u;
label_466c20:
    // 0x466c20: 0xaf82c028  sw          $v0, -0x3FD8($gp)
    ctx->pc = 0x466c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950952), GPR_U32(ctx, 2));
label_466c24:
    // 0x466c24: 0x8f82c028  lw          $v0, -0x3FD8($gp)
    ctx->pc = 0x466c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950952)));
    // 0x466c28: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x466C28u;
    {
        const bool branch_taken_0x466c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466c28) {
            ctx->pc = 0x466C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466c10;
        }
    }
    ctx->pc = 0x466C30u;
    // 0x466c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x466c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466c34: 0x8f85c028  lw          $a1, -0x3FD8($gp)
    ctx->pc = 0x466c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950952)));
    // 0x466c38: 0xc119b3c  jal         func_466CF0
    ctx->pc = 0x466C38u;
    SET_GPR_U32(ctx, 31, 0x466C40u);
    ctx->pc = 0x466CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466CF0u, 0x466C38u, 0x466C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466C40u;
label_466c40:
    // 0x466c40: 0x8f83c028  lw          $v1, -0x3FD8($gp)
    ctx->pc = 0x466c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950952)));
    // 0x466c44: 0xaf83c010  sw          $v1, -0x3FF0($gp)
    ctx->pc = 0x466c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950928), GPR_U32(ctx, 3));
    // 0x466c48: 0xaf90c01c  sw          $s0, -0x3FE4($gp)
    ctx->pc = 0x466c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950940), GPR_U32(ctx, 16));
    // 0x466c4c: 0x8f84c010  lw          $a0, -0x3FF0($gp)
    ctx->pc = 0x466c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950928)));
    // 0x466c50: 0x8f83c01c  lw          $v1, -0x3FE4($gp)
    ctx->pc = 0x466c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950940)));
    // 0x466c54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x466c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466c58: 0xaf83c014  sw          $v1, -0x3FEC($gp)
    ctx->pc = 0x466c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 3));
    // 0x466c5c: 0x8f84c010  lw          $a0, -0x3FF0($gp)
    ctx->pc = 0x466c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950928)));
    // 0x466c60: 0x8f83c01c  lw          $v1, -0x3FE4($gp)
    ctx->pc = 0x466c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950940)));
    // 0x466c64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x466c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x466c68: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x466c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x466c6c: 0xaf83c00c  sw          $v1, -0x3FF4($gp)
    ctx->pc = 0x466c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 3));
    // 0x466c70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x466c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x466c74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x466c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466c78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466c84: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x466c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x466c88: 0x3e00008  jr          $ra
    ctx->pc = 0x466C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466C90u;
}
