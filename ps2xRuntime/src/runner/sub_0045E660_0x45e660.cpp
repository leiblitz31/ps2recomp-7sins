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

// Function: sub_0045E660
// Address: 0x45e660 - 0x45e720
void sub_0045E660_0x45e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E660_0x45e660");
#endif

    switch (ctx->pc) {
        case 0x45e684u: goto label_45e684;
        case 0x45e6b0u: goto label_45e6b0;
        case 0x45e6c8u: goto label_45e6c8;
        case 0x45e6f0u: goto label_45e6f0;
        default: break;
    }

    ctx->pc = 0x45e660u;

    // 0x45e660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45e664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45e668: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45e668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45e66c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e670: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45E670u;
    {
        const bool branch_taken_0x45e670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e670) {
            ctx->pc = 0x45E68Cu;
            goto label_45e68c;
        }
    }
    ctx->pc = 0x45E678u;
    // 0x45e678: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45e67c: 0xc117988  jal         func_45E620
    ctx->pc = 0x45E67Cu;
    SET_GPR_U32(ctx, 31, 0x45E684u);
    ctx->pc = 0x45E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E620u, 0x45E67Cu, 0x45E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E684u;
label_45e684:
    // 0x45e684: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x45e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45e688: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x45e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_45e68c:
    // 0x45e68c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e694: 0xaf82bf8c  sw          $v0, -0x4074($gp)
    ctx->pc = 0x45e694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950796), GPR_U32(ctx, 2));
    // 0x45e698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e69c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x45e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45e6a0: 0xaf82bf94  sw          $v0, -0x406C($gp)
    ctx->pc = 0x45e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950804), GPR_U32(ctx, 2));
    // 0x45e6a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x45e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e6a8: 0xc0f0bb4  jal         func_3C2ED0
    ctx->pc = 0x45E6A8u;
    SET_GPR_U32(ctx, 31, 0x45E6B0u);
    ctx->pc = 0x3C2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2ED0u, 0x45E6A8u, 0x45E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E6B0u;
label_45e6b0:
    // 0x45e6b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x45E6B0u;
    {
        const bool branch_taken_0x45e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e6b0) {
            ctx->pc = 0x45E6DCu;
            goto label_45e6dc;
        }
    }
    ctx->pc = 0x45E6B8u;
    // 0x45e6b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e6bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x45e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45e6c0: 0xc117af4  jal         func_45EBD0
    ctx->pc = 0x45E6C0u;
    SET_GPR_U32(ctx, 31, 0x45E6C8u);
    ctx->pc = 0x45EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EBD0u, 0x45E6C0u, 0x45E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E6C8u;
label_45e6c8:
    // 0x45e6c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x45E6C8u;
    {
        const bool branch_taken_0x45e6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e6c8) {
            ctx->pc = 0x45E6E8u;
            goto label_45e6e8;
        }
    }
    ctx->pc = 0x45E6D0u;
    // 0x45e6d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e6d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x45E6D4u;
    {
        const bool branch_taken_0x45e6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e6d4) {
            ctx->pc = 0x45E710u;
            goto label_45e710;
        }
    }
    ctx->pc = 0x45E6DCu;
label_45e6dc:
    // 0x45e6dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e6e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45E6E0u;
    {
        const bool branch_taken_0x45e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e6e0) {
            ctx->pc = 0x45E710u;
            goto label_45e710;
        }
    }
    ctx->pc = 0x45E6E8u;
label_45e6e8:
    // 0x45e6e8: 0xc117a40  jal         func_45E900
    ctx->pc = 0x45E6E8u;
    SET_GPR_U32(ctx, 31, 0x45E6F0u);
    ctx->pc = 0x45E900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E900u, 0x45E6E8u, 0x45E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E6F0u;
label_45e6f0:
    // 0x45e6f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45E6F0u;
    {
        const bool branch_taken_0x45e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e6f0) {
            ctx->pc = 0x45E704u;
            goto label_45e704;
        }
    }
    ctx->pc = 0x45E6F8u;
    // 0x45e6f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e6fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45E6FCu;
    {
        const bool branch_taken_0x45e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e6fc) {
            ctx->pc = 0x45E710u;
            goto label_45e710;
        }
    }
    ctx->pc = 0x45E704u;
label_45e704:
    // 0x45e704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45e708: 0xaf82bf88  sw          $v0, -0x4078($gp)
    ctx->pc = 0x45e708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950792), GPR_U32(ctx, 2));
    // 0x45e70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e710:
    // 0x45e710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e714: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45e714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45e718: 0x3e00008  jr          $ra
    ctx->pc = 0x45E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E720u;
}
