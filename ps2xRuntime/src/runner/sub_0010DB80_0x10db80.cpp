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

// Function: sub_0010DB80
// Address: 0x10db80 - 0x10dc00
void sub_0010DB80_0x10db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DB80_0x10db80");
#endif

    switch (ctx->pc) {
        case 0x10dba8u: goto label_10dba8;
        case 0x10dbb8u: goto label_10dbb8;
        default: break;
    }

    ctx->pc = 0x10db80u;

    // 0x10db80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10db84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10db88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10db8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10db90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10db90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x10db94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x10db98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x10db98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x10db9c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x10db9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10dba0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10DBA0u;
    {
        const bool branch_taken_0x10dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dba0) {
            ctx->pc = 0x10DBCCu;
            goto label_10dbcc;
        }
    }
    ctx->pc = 0x10DBA8u;
label_10dba8:
    // 0x10dba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dbb0: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x10DBB0u;
    SET_GPR_U32(ctx, 31, 0x10DBB8u);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x10DBB0u, 0x10DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBB8u;
label_10dbb8:
    // 0x10dbb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dbbc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x10dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x10dbc0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x10dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x10dbc4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x10dbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10dbc8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x10dbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dbcc:
    // 0x10dbcc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dbd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10dbd4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10DBD4u;
    {
        const bool branch_taken_0x10dbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10dbd4) {
            ctx->pc = 0x10DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dba8;
        }
    }
    ctx->pc = 0x10DBDCu;
    // 0x10dbdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10dbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10dbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dbe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dbec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10dbecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DBF8u;
    // 0x10dbf8: 0x0  nop
    ctx->pc = 0x10dbf8u;
    // NOP
    // 0x10dbfc: 0x0  nop
    ctx->pc = 0x10dbfcu;
    // NOP
    ctx->pc = 0x10dc00u;
}
