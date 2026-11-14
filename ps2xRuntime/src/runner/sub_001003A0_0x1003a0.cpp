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

// Function: sub_001003A0
// Address: 0x1003a0 - 0x100430
void sub_001003A0_0x1003a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003A0_0x1003a0");
#endif

    switch (ctx->pc) {
        case 0x1003ccu: goto label_1003cc;
        case 0x1003d8u: goto label_1003d8;
        case 0x100400u: goto label_100400;
        case 0x10040cu: goto label_10040c;
        default: break;
    }

    ctx->pc = 0x1003a0u;

    // 0x1003a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1003a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1003a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1003a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1003a8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1003a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1003ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1003ACu;
    {
        const bool branch_taken_0x1003ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003ac) {
            ctx->pc = 0x1003DCu;
            goto label_1003dc;
        }
    }
    ctx->pc = 0x1003B4u;
    // 0x1003b4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1003b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1003b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1003B8u;
    {
        const bool branch_taken_0x1003b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003b8) {
            ctx->pc = 0x1003DCu;
            goto label_1003dc;
        }
    }
    ctx->pc = 0x1003C0u;
    // 0x1003c0: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1003c4: 0xc040118  jal         func_100460
    ctx->pc = 0x1003C4u;
    SET_GPR_U32(ctx, 31, 0x1003CCu);
    ctx->pc = 0x100460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100460u, 0x1003C4u, 0x1003CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003CCu;
label_1003cc:
    // 0x1003cc: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1003ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1003d0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1003D0u;
    SET_GPR_U32(ctx, 31, 0x1003D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1003D0u, 0x1003D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003D8u;
label_1003d8:
    // 0x1003d8: 0xaf80bcc4  sw          $zero, -0x433C($gp)
    ctx->pc = 0x1003d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950084), GPR_U32(ctx, 0));
label_1003dc:
    // 0x1003dc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1003e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1003E0u;
    {
        const bool branch_taken_0x1003e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003e0) {
            ctx->pc = 0x100410u;
            goto label_100410;
        }
    }
    ctx->pc = 0x1003E8u;
    // 0x1003e8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1003ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1003ECu;
    {
        const bool branch_taken_0x1003ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003ec) {
            ctx->pc = 0x100410u;
            goto label_100410;
        }
    }
    ctx->pc = 0x1003F4u;
    // 0x1003f4: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1003f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1003f8: 0xc04010c  jal         func_100430
    ctx->pc = 0x1003F8u;
    SET_GPR_U32(ctx, 31, 0x100400u);
    ctx->pc = 0x100430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100430u, 0x1003F8u, 0x100400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100400u;
label_100400:
    // 0x100400: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x100404: 0xc119c5c  jal         func_467170
    ctx->pc = 0x100404u;
    SET_GPR_U32(ctx, 31, 0x10040Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x100404u, 0x10040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10040Cu;
label_10040c:
    // 0x10040c: 0xaf80bb70  sw          $zero, -0x4490($gp)
    ctx->pc = 0x10040cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949744), GPR_U32(ctx, 0));
label_100410:
    // 0x100410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x100418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10041c: 0x3e00008  jr          $ra
    ctx->pc = 0x10041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100424u;
    // 0x100424: 0x0  nop
    ctx->pc = 0x100424u;
    // NOP
    // 0x100428: 0x0  nop
    ctx->pc = 0x100428u;
    // NOP
    // 0x10042c: 0x0  nop
    ctx->pc = 0x10042cu;
    // NOP
    ctx->pc = 0x100430u;
}
