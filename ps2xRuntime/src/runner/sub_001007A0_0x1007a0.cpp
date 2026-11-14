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

// Function: sub_001007A0
// Address: 0x1007a0 - 0x1007f0
void sub_001007A0_0x1007a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007A0_0x1007a0");
#endif

    switch (ctx->pc) {
        case 0x1007ccu: goto label_1007cc;
        case 0x1007d8u: goto label_1007d8;
        default: break;
    }

    ctx->pc = 0x1007a0u;

    // 0x1007a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1007a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1007a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1007a8: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1007a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1007ac: 0x1003000b  beq         $zero, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1007ACu;
    {
        const bool branch_taken_0x1007ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1007ac) {
            ctx->pc = 0x1007DCu;
            goto label_1007dc;
        }
    }
    ctx->pc = 0x1007B4u;
    // 0x1007b4: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1007b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1007B8u;
    {
        const bool branch_taken_0x1007b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007b8) {
            ctx->pc = 0x1007DCu;
            goto label_1007dc;
        }
    }
    ctx->pc = 0x1007C0u;
    // 0x1007c0: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1007c4: 0xc0401fc  jal         func_1007F0
    ctx->pc = 0x1007C4u;
    SET_GPR_U32(ctx, 31, 0x1007CCu);
    ctx->pc = 0x1007F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007F0u, 0x1007C4u, 0x1007CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007CCu;
label_1007cc:
    // 0x1007cc: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x1007ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1007d0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1007D0u;
    SET_GPR_U32(ctx, 31, 0x1007D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1007D0u, 0x1007D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007D8u;
label_1007d8:
    // 0x1007d8: 0xaf80bb80  sw          $zero, -0x4480($gp)
    ctx->pc = 0x1007d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949760), GPR_U32(ctx, 0));
label_1007dc:
    // 0x1007dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1007dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1007e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1007e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1007E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1007ECu;
    // 0x1007ec: 0x0  nop
    ctx->pc = 0x1007ecu;
    // NOP
    ctx->pc = 0x1007f0u;
}
