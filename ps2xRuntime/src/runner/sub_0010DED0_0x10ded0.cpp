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

// Function: sub_0010DED0
// Address: 0x10ded0 - 0x10df30
void sub_0010DED0_0x10ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DED0_0x10ded0");
#endif

    switch (ctx->pc) {
        case 0x10defcu: goto label_10defc;
        case 0x10df1cu: goto label_10df1c;
        default: break;
    }

    ctx->pc = 0x10ded0u;

    // 0x10ded0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ded4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ded8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10dedc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10dedcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10dee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dee4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DEE4u;
    {
        const bool branch_taken_0x10dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dee4) {
            ctx->pc = 0x10DF1Cu;
            goto label_10df1c;
        }
    }
    ctx->pc = 0x10DEECu;
    // 0x10deec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10deecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10def0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10def4: 0xc0437cc  jal         func_10DF30
    ctx->pc = 0x10DEF4u;
    SET_GPR_U32(ctx, 31, 0x10DEFCu);
    ctx->pc = 0x10DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF30u, 0x10DEF4u, 0x10DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEFCu;
label_10defc:
    // 0x10defc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10df00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10df04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10df04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10df08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DF08u;
    {
        const bool branch_taken_0x10df08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10df08) {
            ctx->pc = 0x10DF1Cu;
            goto label_10df1c;
        }
    }
    ctx->pc = 0x10DF10u;
    // 0x10df10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10DF14u;
    SET_GPR_U32(ctx, 31, 0x10DF1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10DF14u, 0x10DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF1Cu;
label_10df1c:
    // 0x10df1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10df24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10df24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10df28: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DF30u;
}
