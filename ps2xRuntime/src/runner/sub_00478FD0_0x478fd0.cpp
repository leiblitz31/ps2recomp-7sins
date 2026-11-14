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

// Function: sub_00478FD0
// Address: 0x478fd0 - 0x479050
void sub_00478FD0_0x478fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478FD0_0x478fd0");
#endif

    switch (ctx->pc) {
        case 0x478ff8u: goto label_478ff8;
        case 0x479008u: goto label_479008;
        case 0x479024u: goto label_479024;
        case 0x47903cu: goto label_47903c;
        default: break;
    }

    ctx->pc = 0x478fd0u;

    // 0x478fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x478fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x478fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x478fdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x478fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x478fe0: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x478fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x478fe4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x478fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x478fe8: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x478fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478fec: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x478fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x478ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x478FF0u;
    {
        const bool branch_taken_0x478ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ff0) {
            ctx->pc = 0x479010u;
            goto label_479010;
        }
    }
    ctx->pc = 0x478FF8u;
label_478ff8:
    // 0x478ff8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x478ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x478ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479000: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479000u;
    SET_GPR_U32(ctx, 31, 0x479008u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479000u, 0x479008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479008u;
label_479008:
    // 0x479008: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x479008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x47900c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x47900cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_479010:
    // 0x479010: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x479010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479014: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x479014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x479018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47901c: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x47901Cu;
    SET_GPR_U32(ctx, 31, 0x479024u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x47901Cu, 0x479024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479024u;
label_479024:
    // 0x479024: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x479024u;
    {
        const bool branch_taken_0x479024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479024) {
            ctx->pc = 0x478FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478ff8;
        }
    }
    ctx->pc = 0x47902Cu;
    // 0x47902c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479030: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x479030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479034: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479034u;
    SET_GPR_U32(ctx, 31, 0x47903Cu);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479034u, 0x47903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47903Cu;
label_47903c:
    // 0x47903c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479044: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x479044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x479048: 0x3e00008  jr          $ra
    ctx->pc = 0x479048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479050u;
}
