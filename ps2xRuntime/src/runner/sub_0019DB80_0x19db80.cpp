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

// Function: sub_0019DB80
// Address: 0x19db80 - 0x19dc00
void sub_0019DB80_0x19db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DB80_0x19db80");
#endif

    switch (ctx->pc) {
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbb8u: goto label_19dbb8;
        default: break;
    }

    ctx->pc = 0x19db80u;

    // 0x19db80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19db84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19db88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19db8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19db90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19db90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19db94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19db98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19db98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19db9c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x19db9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19dba0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19DBA0u;
    {
        const bool branch_taken_0x19dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dba0) {
            ctx->pc = 0x19DBCCu;
            goto label_19dbcc;
        }
    }
    ctx->pc = 0x19DBA8u;
label_19dba8:
    // 0x19dba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dbb0: 0xc067670  jal         func_19D9C0
    ctx->pc = 0x19DBB0u;
    SET_GPR_U32(ctx, 31, 0x19DBB8u);
    ctx->pc = 0x19D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9C0u, 0x19DBB0u, 0x19DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBB8u;
label_19dbb8:
    // 0x19dbb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dbbc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x19dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x19dbc0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x19dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x19dbc4: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x19dbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19dbc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19dbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19dbcc:
    // 0x19dbcc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dbd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dbd4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19DBD4u;
    {
        const bool branch_taken_0x19dbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19dbd4) {
            ctx->pc = 0x19DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dba8;
        }
    }
    ctx->pc = 0x19DBDCu;
    // 0x19dbdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19dbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19dbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dbe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19dbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dbec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19dbecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DBF8u;
    // 0x19dbf8: 0x0  nop
    ctx->pc = 0x19dbf8u;
    // NOP
    // 0x19dbfc: 0x0  nop
    ctx->pc = 0x19dbfcu;
    // NOP
    ctx->pc = 0x19dc00u;
}
