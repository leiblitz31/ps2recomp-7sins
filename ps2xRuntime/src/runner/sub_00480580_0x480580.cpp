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

// Function: sub_00480580
// Address: 0x480580 - 0x480670
void sub_00480580_0x480580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480580_0x480580");
#endif

    switch (ctx->pc) {
        case 0x4805ccu: goto label_4805cc;
        case 0x480608u: goto label_480608;
        case 0x480644u: goto label_480644;
        case 0x480658u: goto label_480658;
        default: break;
    }

    ctx->pc = 0x480580u;

    // 0x480580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x480584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x480588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48058c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x480590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x480594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x480598: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x480598u;
    {
        const bool branch_taken_0x480598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480598) {
            ctx->pc = 0x4805D4u;
            goto label_4805d4;
        }
    }
    ctx->pc = 0x4805A0u;
    // 0x4805a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805a4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4805a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x4805a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805ac: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4805acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x4805b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805b4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x4805b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4805b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4805bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4805c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4805c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805c4: 0xc0f511e  jal         func_3D4478
    ctx->pc = 0x4805C4u;
    SET_GPR_U32(ctx, 31, 0x4805CCu);
    ctx->pc = 0x3D4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4478u, 0x4805C4u, 0x4805CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4805CCu;
label_4805cc:
    // 0x4805cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805d0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4805d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_4805d4:
    // 0x4805d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4805dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4805DCu;
    {
        const bool branch_taken_0x4805dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4805dc) {
            ctx->pc = 0x480610u;
            goto label_480610;
        }
    }
    ctx->pc = 0x4805E4u;
    // 0x4805e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4805ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4805ECu;
    {
        const bool branch_taken_0x4805ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4805ec) {
            ctx->pc = 0x480610u;
            goto label_480610;
        }
    }
    ctx->pc = 0x4805F4u;
    // 0x4805f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4805f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4805f8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x4805f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x4805fc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4805fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x480600: 0xc1200bc  jal         func_4802F0
    ctx->pc = 0x480600u;
    SET_GPR_U32(ctx, 31, 0x480608u);
    ctx->pc = 0x4802F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4802F0u, 0x480600u, 0x480608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480608u;
label_480608:
    // 0x480608: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48060c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48060cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_480610:
    // 0x480610: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480614: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x480614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x480618: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x480618u;
    {
        const bool branch_taken_0x480618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480618) {
            ctx->pc = 0x48064Cu;
            goto label_48064c;
        }
    }
    ctx->pc = 0x480620u;
    // 0x480620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480624: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x480624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x480628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x480628u;
    {
        const bool branch_taken_0x480628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480628) {
            ctx->pc = 0x48064Cu;
            goto label_48064c;
        }
    }
    ctx->pc = 0x480630u;
    // 0x480630: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480634: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x480634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x480638: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x480638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48063c: 0xc120048  jal         func_480120
    ctx->pc = 0x48063Cu;
    SET_GPR_U32(ctx, 31, 0x480644u);
    ctx->pc = 0x480120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480120u, 0x48063Cu, 0x480644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480644u;
label_480644:
    // 0x480644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x480644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480648: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x480648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_48064c:
    // 0x48064c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480650: 0xc0f5362  jal         func_3D4D88
    ctx->pc = 0x480650u;
    SET_GPR_U32(ctx, 31, 0x480658u);
    ctx->pc = 0x3D4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4D88u, 0x480650u, 0x480658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480658u;
label_480658:
    // 0x480658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x480658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48065c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480660: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x480664: 0x3e00008  jr          $ra
    ctx->pc = 0x480664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48066Cu;
    // 0x48066c: 0x0  nop
    ctx->pc = 0x48066cu;
    // NOP
    ctx->pc = 0x480670u;
}
