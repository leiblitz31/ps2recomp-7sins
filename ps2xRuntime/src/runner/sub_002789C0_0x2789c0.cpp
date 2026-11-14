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

// Function: sub_002789C0
// Address: 0x2789c0 - 0x278a20
void sub_002789C0_0x2789c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002789C0_0x2789c0");
#endif

    switch (ctx->pc) {
        case 0x278a0cu: goto label_278a0c;
        default: break;
    }

    ctx->pc = 0x2789c0u;

    // 0x2789c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2789c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2789c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2789c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2789c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2789c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2789cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2789ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2789d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2789d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2789d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2789d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2789d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2789dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2789DCu;
    {
        const bool branch_taken_0x2789dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2789dc) {
            ctx->pc = 0x2789F0u;
            goto label_2789f0;
        }
    }
    ctx->pc = 0x2789E4u;
    // 0x2789e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2789e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2789e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2789ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2789ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2789f0:
    // 0x2789f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2789f4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2789f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2789f8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2789f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2789fc: 0x24a58980  addiu       $a1, $a1, -0x7680
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936960));
    // 0x278a00: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x278a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278a04: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x278A04u;
    SET_GPR_U32(ctx, 31, 0x278A0Cu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x278A04u, 0x278A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A0Cu;
label_278a0c:
    // 0x278a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278a14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278a18: 0x3e00008  jr          $ra
    ctx->pc = 0x278A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278A20u;
}
