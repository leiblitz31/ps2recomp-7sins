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

// Function: sub_00469630
// Address: 0x469630 - 0x4696f0
void sub_00469630_0x469630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469630_0x469630");
#endif

    switch (ctx->pc) {
        case 0x469650u: goto label_469650;
        case 0x469664u: goto label_469664;
        case 0x469684u: goto label_469684;
        case 0x469698u: goto label_469698;
        case 0x4696b4u: goto label_4696b4;
        case 0x4696d0u: goto label_4696d0;
        default: break;
    }

    ctx->pc = 0x469630u;

    // 0x469630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x469630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x469634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x469634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x469638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x469638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46963c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x469640: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x469640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x469644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469648: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x469648u;
    {
        const bool branch_taken_0x469648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469648) {
            ctx->pc = 0x4696A4u;
            goto label_4696a4;
        }
    }
    ctx->pc = 0x469650u;
label_469650:
    // 0x469650: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x469650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469654: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x469658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46965c: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46965Cu;
    SET_GPR_U32(ctx, 31, 0x469664u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46965Cu, 0x469664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469664u;
label_469664:
    // 0x469664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469668: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x469668u;
    {
        const bool branch_taken_0x469668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469668) {
            ctx->pc = 0x4696A0u;
            goto label_4696a0;
        }
    }
    ctx->pc = 0x469670u;
    // 0x469670: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x469670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469674: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x469678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46967c: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46967Cu;
    SET_GPR_U32(ctx, 31, 0x469684u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46967Cu, 0x469684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469684u;
label_469684:
    // 0x469684: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469688: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x469688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46968c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46968cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469690: 0xc11a4f8  jal         func_4693E0
    ctx->pc = 0x469690u;
    SET_GPR_U32(ctx, 31, 0x469698u);
    ctx->pc = 0x4693E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693E0u, 0x469690u, 0x469698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469698u;
label_469698:
    // 0x469698: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x469698u;
    {
        const bool branch_taken_0x469698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469698) {
            ctx->pc = 0x4696D4u;
            goto label_4696d4;
        }
    }
    ctx->pc = 0x4696A0u;
label_4696a0:
    // 0x4696a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4696a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4696a4:
    // 0x4696a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4696a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4696a8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4696a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4696ac: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x4696ACu;
    SET_GPR_U32(ctx, 31, 0x4696B4u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x4696ACu, 0x4696B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4696B4u;
label_4696b4:
    // 0x4696b4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4696b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4696b8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4696B8u;
    {
        const bool branch_taken_0x4696b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4696b8) {
            ctx->pc = 0x469650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469650;
        }
    }
    ctx->pc = 0x4696C0u;
    // 0x4696c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4696c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4696c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4696c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4696c8: 0xc11a4e8  jal         func_4693A0
    ctx->pc = 0x4696C8u;
    SET_GPR_U32(ctx, 31, 0x4696D0u);
    ctx->pc = 0x4693A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693A0u, 0x4696C8u, 0x4696D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4696D0u;
label_4696d0:
    // 0x4696d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4696d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4696d4:
    // 0x4696d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4696d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4696d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4696d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4696dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4696dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4696e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4696E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4696E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4696E8u;
    // 0x4696e8: 0x0  nop
    ctx->pc = 0x4696e8u;
    // NOP
    // 0x4696ec: 0x0  nop
    ctx->pc = 0x4696ecu;
    // NOP
    ctx->pc = 0x4696f0u;
}
