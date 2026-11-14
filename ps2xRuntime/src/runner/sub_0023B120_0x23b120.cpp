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

// Function: sub_0023B120
// Address: 0x23b120 - 0x23b170
void sub_0023B120_0x23b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B120_0x23b120");
#endif

    switch (ctx->pc) {
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        default: break;
    }

    ctx->pc = 0x23b120u;

label_23b120:
    // 0x23b120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23b124:
    // 0x23b124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b128:
    // 0x23b128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23b12c:
    // 0x23b12c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b130:
    // 0x23b130: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23b134:
    // 0x23b134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b138:
    // 0x23b138: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_23b13c:
    if (ctx->pc == 0x23B13Cu) {
        ctx->pc = 0x23B140u;
        goto label_23b140;
    }
    ctx->pc = 0x23B138u;
    {
        const bool branch_taken_0x23b138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b138) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B140u;
label_23b140:
    // 0x23b140: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b144:
    // 0x23b144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b148:
    // 0x23b148: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_23b14c:
    // 0x23b14c: 0x320f809  jalr        $t9
label_23b150:
    if (ctx->pc == 0x23B150u) {
        ctx->pc = 0x23B154u;
        goto label_23b154;
    }
    ctx->pc = 0x23B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B154u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B14Cu, 0x23B154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B154u;
label_23b154:
    // 0x23b154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b158:
    // 0x23b158: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23b158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23b15c:
    // 0x23b15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b160:
    // 0x23b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b164:
    // 0x23b164: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23b164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23b168:
    // 0x23b168: 0x3e00008  jr          $ra
label_23b16c:
    if (ctx->pc == 0x23B16Cu) {
        ctx->pc = 0x23B170u;
        goto label_fallthrough_0x23b168;
    }
    ctx->pc = 0x23B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b168:
    ctx->pc = 0x23B170u;
}
