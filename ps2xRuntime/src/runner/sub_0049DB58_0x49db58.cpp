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

// Function: sub_0049DB58
// Address: 0x49db58 - 0x49dbd8
void sub_0049DB58_0x49db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DB58_0x49db58");
#endif

    switch (ctx->pc) {
        case 0x49db98u: goto label_49db98;
        case 0x49dba4u: goto label_49dba4;
        default: break;
    }

    ctx->pc = 0x49db58u;

    // 0x49db58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49db58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49db5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49db60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49db64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49db64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49db68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49db6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49db70: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DB70u;
    {
        const bool branch_taken_0x49db70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB70u;
        // 0x49db74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db70) {
            ctx->pc = 0x49DB80u;
            goto label_49db80;
        }
    }
    ctx->pc = 0x49DB78u;
    // 0x49db78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49DB78u;
    {
        const bool branch_taken_0x49db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB78u;
        // 0x49db7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db78) {
            ctx->pc = 0x49DBBCu;
            goto label_49dbbc;
        }
    }
    ctx->pc = 0x49DB80u;
label_49db80:
    // 0x49db80: 0x8f90c1a8  lw          $s0, -0x3E58($gp)
    ctx->pc = 0x49db80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
    // 0x49db84: 0x2793c1a8  addiu       $s3, $gp, -0x3E58
    ctx->pc = 0x49db84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
    // 0x49db88: 0x1213000c  beq         $s0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x49DB88u;
    {
        const bool branch_taken_0x49db88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x49DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB88u;
        // 0x49db8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db88) {
            ctx->pc = 0x49DBBCu;
            goto label_49dbbc;
        }
    }
    ctx->pc = 0x49DB90u;
    // 0x49db90: 0x8e04ffe0  lw          $a0, -0x20($s0)
    ctx->pc = 0x49db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
    // 0x49db94: 0x0  nop
    ctx->pc = 0x49db94u;
    // NOP
label_49db98:
    // 0x49db98: 0x2612ffe0  addiu       $s2, $s0, -0x20
    ctx->pc = 0x49db98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x49db9c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x49DB9Cu;
    SET_GPR_U32(ctx, 31, 0x49DBA4u);
    ctx->pc = 0x49DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DB9Cu;
    // 0x49dba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49DB9Cu, 0x49DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DBA4u;
label_49dba4:
    // 0x49dba4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49DBA4u;
    {
        const bool branch_taken_0x49dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBA4u;
        // 0x49dba8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dba4) {
            ctx->pc = 0x49DBBCu;
            goto label_49dbbc;
        }
    }
    ctx->pc = 0x49DBACu;
    // 0x49dbac: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x49dbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49dbb0: 0x5613fff9  bnel        $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49DBB0u;
    {
        const bool branch_taken_0x49dbb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x49dbb0) {
            ctx->pc = 0x49DBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DBB0u;
            // 0x49dbb4: 0x8e04ffe0  lw          $a0, -0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49db98;
        }
    }
    ctx->pc = 0x49DBB8u;
    // 0x49dbb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49dbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dbbc:
    // 0x49dbbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49dbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49dbc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49dbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49dbc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49dbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49dbc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49dbc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49dbcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49dbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x49DBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBD0u;
        // 0x49dbd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DBD8u;
}
