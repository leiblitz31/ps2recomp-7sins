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

// Function: sub_0045E900
// Address: 0x45e900 - 0x45e960
void sub_0045E900_0x45e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E900_0x45e900");
#endif

    switch (ctx->pc) {
        case 0x45e91cu: goto label_45e91c;
        case 0x45e940u: goto label_45e940;
        default: break;
    }

    ctx->pc = 0x45e900u;

    // 0x45e900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45e904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45e908: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x45e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x45e90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e910: 0x8f86bf94  lw          $a2, -0x406C($gp)
    ctx->pc = 0x45e910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950804)));
    // 0x45e914: 0xc117a58  jal         func_45E960
    ctx->pc = 0x45E914u;
    SET_GPR_U32(ctx, 31, 0x45E91Cu);
    ctx->pc = 0x45E960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E960u, 0x45E914u, 0x45E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E91Cu;
label_45e91c:
    // 0x45e91c: 0xaf82bf9c  sw          $v0, -0x4064($gp)
    ctx->pc = 0x45e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950812), GPR_U32(ctx, 2));
    // 0x45e920: 0x8f82bf9c  lw          $v0, -0x4064($gp)
    ctx->pc = 0x45e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45e924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45E924u;
    {
        const bool branch_taken_0x45e924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e924) {
            ctx->pc = 0x45E938u;
            goto label_45e938;
        }
    }
    ctx->pc = 0x45E92Cu;
    // 0x45e92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45E930u;
    {
        const bool branch_taken_0x45e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e930) {
            ctx->pc = 0x45E944u;
            goto label_45e944;
        }
    }
    ctx->pc = 0x45E938u;
label_45e938:
    // 0x45e938: 0xc117a0c  jal         func_45E830
    ctx->pc = 0x45E938u;
    SET_GPR_U32(ctx, 31, 0x45E940u);
    ctx->pc = 0x45E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E830u, 0x45E938u, 0x45E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E940u;
label_45e940:
    // 0x45e940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45e944:
    // 0x45e944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e948: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x45E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E954u;
    // 0x45e954: 0x0  nop
    ctx->pc = 0x45e954u;
    // NOP
    // 0x45e958: 0x0  nop
    ctx->pc = 0x45e958u;
    // NOP
    // 0x45e95c: 0x0  nop
    ctx->pc = 0x45e95cu;
    // NOP
    ctx->pc = 0x45e960u;
}
