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

// Function: sub_0048DB40
// Address: 0x48db40 - 0x48dbc0
void sub_0048DB40_0x48db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DB40_0x48db40");
#endif

    switch (ctx->pc) {
        case 0x48db68u: goto label_48db68;
        case 0x48db78u: goto label_48db78;
        default: break;
    }

    ctx->pc = 0x48db40u;

    // 0x48db40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48db44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48db48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48db4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48db50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48db50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48db54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48db54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x48db58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x48db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x48db5c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x48db5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48db60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48DB60u;
    {
        const bool branch_taken_0x48db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48db60) {
            ctx->pc = 0x48DB8Cu;
            goto label_48db8c;
        }
    }
    ctx->pc = 0x48DB68u;
label_48db68:
    // 0x48db68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48db6c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48db70: 0xc1236f0  jal         func_48DBC0
    ctx->pc = 0x48DB70u;
    SET_GPR_U32(ctx, 31, 0x48DB78u);
    ctx->pc = 0x48DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DBC0u, 0x48DB70u, 0x48DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DB78u;
label_48db78:
    // 0x48db78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48db7c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x48db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x48db80: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x48db80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x48db84: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48db84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x48db88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48db88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48db8c:
    // 0x48db8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x48db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48db90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48db94: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48DB94u;
    {
        const bool branch_taken_0x48db94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48db94) {
            ctx->pc = 0x48DB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48db68;
        }
    }
    ctx->pc = 0x48DB9Cu;
    // 0x48db9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48db9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48dba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48dba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48dba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dbac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48dbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x48DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DBB8u;
    // 0x48dbb8: 0x0  nop
    ctx->pc = 0x48dbb8u;
    // NOP
    // 0x48dbbc: 0x0  nop
    ctx->pc = 0x48dbbcu;
    // NOP
    ctx->pc = 0x48dbc0u;
}
