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

// Function: sub_002479C0
// Address: 0x2479c0 - 0x247a20
void sub_002479C0_0x2479c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002479C0_0x2479c0");
#endif

    switch (ctx->pc) {
        case 0x2479ecu: goto label_2479ec;
        case 0x247a0cu: goto label_247a0c;
        default: break;
    }

    ctx->pc = 0x2479c0u;

    // 0x2479c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2479c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2479c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2479c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2479c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2479c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2479cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2479ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2479d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2479d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2479d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2479D4u;
    {
        const bool branch_taken_0x2479d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479d4) {
            ctx->pc = 0x247A0Cu;
            goto label_247a0c;
        }
    }
    ctx->pc = 0x2479DCu;
    // 0x2479dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2479e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2479e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2479e4: 0xc091e88  jal         func_247A20
    ctx->pc = 0x2479E4u;
    SET_GPR_U32(ctx, 31, 0x2479ECu);
    ctx->pc = 0x247A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A20u, 0x2479E4u, 0x2479ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ECu;
label_2479ec:
    // 0x2479ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2479ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2479f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2479f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2479f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2479f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2479f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2479F8u;
    {
        const bool branch_taken_0x2479f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2479f8) {
            ctx->pc = 0x247A0Cu;
            goto label_247a0c;
        }
    }
    ctx->pc = 0x247A00u;
    // 0x247a00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a04: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247A04u;
    SET_GPR_U32(ctx, 31, 0x247A0Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247A04u, 0x247A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A0Cu;
label_247a0c:
    // 0x247a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247a14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247a18: 0x3e00008  jr          $ra
    ctx->pc = 0x247A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A20u;
}
