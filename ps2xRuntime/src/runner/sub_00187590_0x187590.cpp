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

// Function: sub_00187590
// Address: 0x187590 - 0x187600
void sub_00187590_0x187590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187590_0x187590");
#endif

    switch (ctx->pc) {
        case 0x1875b8u: goto label_1875b8;
        default: break;
    }

    ctx->pc = 0x187590u;

    // 0x187590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x187598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18759c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18759cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1875a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1875a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1875A4u;
    {
        const bool branch_taken_0x1875a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1875a4) {
            ctx->pc = 0x1875C0u;
            goto label_1875c0;
        }
    }
    ctx->pc = 0x1875ACu;
    // 0x1875ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875b0: 0xc05e04c  jal         func_178130
    ctx->pc = 0x1875B0u;
    SET_GPR_U32(ctx, 31, 0x1875B8u);
    ctx->pc = 0x178130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178130u, 0x1875B0u, 0x1875B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875B8u;
label_1875b8:
    // 0x1875b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1875B8u;
    {
        const bool branch_taken_0x1875b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1875b8) {
            ctx->pc = 0x1875E4u;
            goto label_1875e4;
        }
    }
    ctx->pc = 0x1875C0u;
label_1875c0:
    // 0x1875c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1875c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1875c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1875c8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1875c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1875cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1875ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1875d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1875d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1875d4: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1875d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1875d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1875dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875e0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1875e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1875e4:
    // 0x1875e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1875e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1875e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1875e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1875ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1875ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1875ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1875F4u;
    // 0x1875f4: 0x0  nop
    ctx->pc = 0x1875f4u;
    // NOP
    // 0x1875f8: 0x0  nop
    ctx->pc = 0x1875f8u;
    // NOP
    // 0x1875fc: 0x0  nop
    ctx->pc = 0x1875fcu;
    // NOP
    ctx->pc = 0x187600u;
}
