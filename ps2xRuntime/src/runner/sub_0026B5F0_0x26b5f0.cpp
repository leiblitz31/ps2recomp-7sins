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

// Function: sub_0026B5F0
// Address: 0x26b5f0 - 0x26b6b0
void sub_0026B5F0_0x26b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B5F0_0x26b5f0");
#endif

    ctx->pc = 0x26b5f0u;

    // 0x26b5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b5f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26b5f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x26b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26b5fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b604: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26B604u;
    {
        const bool branch_taken_0x26b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b604) {
            ctx->pc = 0x26B680u;
            goto label_26b680;
        }
    }
    ctx->pc = 0x26B60Cu;
    // 0x26b60c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b610: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B610u;
    {
        const bool branch_taken_0x26b610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b610) {
            ctx->pc = 0x26B670u;
            goto label_26b670;
        }
    }
    ctx->pc = 0x26B618u;
    // 0x26b618: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b61c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B61Cu;
    {
        const bool branch_taken_0x26b61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b61c) {
            ctx->pc = 0x26B660u;
            goto label_26b660;
        }
    }
    ctx->pc = 0x26B624u;
    // 0x26b624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b628: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B628u;
    {
        const bool branch_taken_0x26b628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b628) {
            ctx->pc = 0x26B650u;
            goto label_26b650;
        }
    }
    ctx->pc = 0x26B630u;
    // 0x26b630: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B630u;
    {
        const bool branch_taken_0x26b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b630) {
            ctx->pc = 0x26B640u;
            goto label_26b640;
        }
    }
    ctx->pc = 0x26B638u;
    // 0x26b638: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26B638u;
    {
        const bool branch_taken_0x26b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b638) {
            ctx->pc = 0x26B690u;
            goto label_26b690;
        }
    }
    ctx->pc = 0x26B640u;
label_26b640:
    // 0x26b640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b644: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b648: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26B648u;
    {
        const bool branch_taken_0x26b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b648) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B650u;
label_26b650:
    // 0x26b650: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b654: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b658: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26B658u;
    {
        const bool branch_taken_0x26b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b658) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B660u;
label_26b660:
    // 0x26b660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b664: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x26b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b668: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26B668u;
    {
        const bool branch_taken_0x26b668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b668) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B670u;
label_26b670:
    // 0x26b670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b674: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x26b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B678u;
    {
        const bool branch_taken_0x26b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b678) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B680u;
label_26b680:
    // 0x26b680: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b684: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x26b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B688u;
    {
        const bool branch_taken_0x26b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b688) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B690u;
label_26b690:
    // 0x26b690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b694: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x26b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_26b698:
    // 0x26b698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b69c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B6A4u;
    // 0x26b6a4: 0x0  nop
    ctx->pc = 0x26b6a4u;
    // NOP
    // 0x26b6a8: 0x0  nop
    ctx->pc = 0x26b6a8u;
    // NOP
    // 0x26b6ac: 0x0  nop
    ctx->pc = 0x26b6acu;
    // NOP
    ctx->pc = 0x26b6b0u;
}
