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

// Function: sub_00100260
// Address: 0x100260 - 0x1002c0
void sub_00100260_0x100260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100260_0x100260");
#endif

    switch (ctx->pc) {
        case 0x1002acu: goto label_1002ac;
        default: break;
    }

    ctx->pc = 0x100260u;

    // 0x100260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10026c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10026cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x100270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100274: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x100274u;
    {
        const bool branch_taken_0x100274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100274) {
            ctx->pc = 0x1002ACu;
            goto label_1002ac;
        }
    }
    ctx->pc = 0x10027Cu;
    // 0x10027c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x100280: 0x246331f0  addiu       $v1, $v1, 0x31F0
    ctx->pc = 0x100280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12784));
    // 0x100284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x100288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10028c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10028cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100290: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100298: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100298u;
    {
        const bool branch_taken_0x100298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100298) {
            ctx->pc = 0x1002ACu;
            goto label_1002ac;
        }
    }
    ctx->pc = 0x1002A0u;
    // 0x1002a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1002a4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1002A4u;
    SET_GPR_U32(ctx, 31, 0x1002ACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1002A4u, 0x1002ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002ACu;
label_1002ac:
    // 0x1002ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1002b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1002b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1002b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1002b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1002B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1002B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002C0u;
}
