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

// Function: sub_001061F0
// Address: 0x1061f0 - 0x106280
void sub_001061F0_0x1061f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001061F0_0x1061f0");
#endif

    switch (ctx->pc) {
        case 0x10622cu: goto label_10622c;
        case 0x10626cu: goto label_10626c;
        default: break;
    }

    ctx->pc = 0x1061f0u;

    // 0x1061f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1061f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1061f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1061f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1061f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1061f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1061fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1061fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x106200: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106204: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x106204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x106208: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10620c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x10620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106210: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x106210) {
            ctx->pc = 0x106244u;
            goto label_106244;
        }
    }
    ctx->pc = 0x106218u;
    // 0x106218: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10621c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x106220: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106224: 0xc041978  jal         func_1065E0
    ctx->pc = 0x106224u;
    SET_GPR_U32(ctx, 31, 0x10622Cu);
    ctx->pc = 0x1065E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065E0u, 0x106224u, 0x10622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10622Cu;
label_10622c:
    // 0x10622c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106230: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106234: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x106234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x106238: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x106238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10623c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10623Cu;
    {
        const bool branch_taken_0x10623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10623c) {
            ctx->pc = 0x10626Cu;
            goto label_10626c;
        }
    }
    ctx->pc = 0x106244u;
label_106244:
    // 0x106244: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106248: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x106248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x10624c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106250: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x106250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x106254: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x106254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106258: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x106258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10625c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10625cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106260: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x106260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106264: 0xc0418a0  jal         func_106280
    ctx->pc = 0x106264u;
    SET_GPR_U32(ctx, 31, 0x10626Cu);
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x106264u, 0x10626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10626Cu;
label_10626c:
    // 0x10626c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10626cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106270: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106274: 0x3e00008  jr          $ra
    ctx->pc = 0x106274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10627Cu;
    // 0x10627c: 0x0  nop
    ctx->pc = 0x10627cu;
    // NOP
    ctx->pc = 0x106280u;
}
