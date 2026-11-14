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

// Function: sub_00232CD0
// Address: 0x232cd0 - 0x232d50
void sub_00232CD0_0x232cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232CD0_0x232cd0");
#endif

    switch (ctx->pc) {
        case 0x232d04u: goto label_232d04;
        case 0x232d14u: goto label_232d14;
        case 0x232d34u: goto label_232d34;
        default: break;
    }

    ctx->pc = 0x232cd0u;

    // 0x232cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232cdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x232cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x232ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232ce4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x232CE4u;
    {
        const bool branch_taken_0x232ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ce4) {
            ctx->pc = 0x232D34u;
            goto label_232d34;
        }
    }
    ctx->pc = 0x232CECu;
    // 0x232cec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232cf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232cfc: 0xc04d9f8  jal         func_1367E0
    ctx->pc = 0x232CFCu;
    SET_GPR_U32(ctx, 31, 0x232D04u);
    ctx->pc = 0x1367E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367E0u, 0x232CFCu, 0x232D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D04u;
label_232d04:
    // 0x232d04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d0c: 0xc08cb54  jal         func_232D50
    ctx->pc = 0x232D0Cu;
    SET_GPR_U32(ctx, 31, 0x232D14u);
    ctx->pc = 0x232D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D50u, 0x232D0Cu, 0x232D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D14u;
label_232d14:
    // 0x232d14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232d18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232d1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232d20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232D20u;
    {
        const bool branch_taken_0x232d20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232d20) {
            ctx->pc = 0x232D34u;
            goto label_232d34;
        }
    }
    ctx->pc = 0x232D28u;
    // 0x232d28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x232D2Cu;
    SET_GPR_U32(ctx, 31, 0x232D34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x232D2Cu, 0x232D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D34u;
label_232d34:
    // 0x232d34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232d40: 0x3e00008  jr          $ra
    ctx->pc = 0x232D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D48u;
    // 0x232d48: 0x0  nop
    ctx->pc = 0x232d48u;
    // NOP
    // 0x232d4c: 0x0  nop
    ctx->pc = 0x232d4cu;
    // NOP
    ctx->pc = 0x232d50u;
}
