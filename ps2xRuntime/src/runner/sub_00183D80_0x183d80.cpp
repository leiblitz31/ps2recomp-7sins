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

// Function: sub_00183D80
// Address: 0x183d80 - 0x183de0
void sub_00183D80_0x183d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183D80_0x183d80");
#endif

    switch (ctx->pc) {
        case 0x183dacu: goto label_183dac;
        case 0x183dccu: goto label_183dcc;
        default: break;
    }

    ctx->pc = 0x183d80u;

    // 0x183d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183d8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183d94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183DCCu;
            goto label_183dcc;
        }
    }
    ctx->pc = 0x183D9Cu;
    // 0x183d9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183da0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x183da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183da4: 0xc060f78  jal         func_183DE0
    ctx->pc = 0x183DA4u;
    SET_GPR_U32(ctx, 31, 0x183DACu);
    ctx->pc = 0x183DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183DE0u, 0x183DA4u, 0x183DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DACu;
label_183dac:
    // 0x183dac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183db0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183db8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183DB8u;
    {
        const bool branch_taken_0x183db8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183db8) {
            ctx->pc = 0x183DCCu;
            goto label_183dcc;
        }
    }
    ctx->pc = 0x183DC0u;
    // 0x183dc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183dc4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183DC4u;
    SET_GPR_U32(ctx, 31, 0x183DCCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183DC4u, 0x183DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DCCu;
label_183dcc:
    // 0x183dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183dd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x183DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183DE0u;
}
