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

// Function: sub_00113200
// Address: 0x113200 - 0x113270
void sub_00113200_0x113200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113200_0x113200");
#endif

    switch (ctx->pc) {
        case 0x113234u: goto label_113234;
        case 0x113254u: goto label_113254;
        default: break;
    }

    ctx->pc = 0x113200u;

    // 0x113200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11320c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11320cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x113210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113214: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x113214u;
    {
        const bool branch_taken_0x113214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113214) {
            ctx->pc = 0x113254u;
            goto label_113254;
        }
    }
    ctx->pc = 0x11321Cu;
    // 0x11321c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113220: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113224: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x113224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113228: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11322c: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x11322Cu;
    SET_GPR_U32(ctx, 31, 0x113234u);
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x11322Cu, 0x113234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113234u;
label_113234:
    // 0x113234: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x113234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113238: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x113238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11323c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11323cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113240: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113240u;
    {
        const bool branch_taken_0x113240 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x113240) {
            ctx->pc = 0x113254u;
            goto label_113254;
        }
    }
    ctx->pc = 0x113248u;
    // 0x113248: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11324c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11324Cu;
    SET_GPR_U32(ctx, 31, 0x113254u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11324Cu, 0x113254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113254u;
label_113254:
    // 0x113254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11325c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11325cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113260: 0x3e00008  jr          $ra
    ctx->pc = 0x113260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113268u;
    // 0x113268: 0x0  nop
    ctx->pc = 0x113268u;
    // NOP
    // 0x11326c: 0x0  nop
    ctx->pc = 0x11326cu;
    // NOP
    ctx->pc = 0x113270u;
}
