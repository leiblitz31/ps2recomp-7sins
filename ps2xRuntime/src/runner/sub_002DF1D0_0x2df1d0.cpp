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

// Function: sub_002DF1D0
// Address: 0x2df1d0 - 0x2df230
void sub_002DF1D0_0x2df1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1D0_0x2df1d0");
#endif

    switch (ctx->pc) {
        case 0x2df1fcu: goto label_2df1fc;
        case 0x2df21cu: goto label_2df21c;
        default: break;
    }

    ctx->pc = 0x2df1d0u;

    // 0x2df1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df1d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df1dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df1e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df1e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF1E4u;
    {
        const bool branch_taken_0x2df1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1e4) {
            ctx->pc = 0x2DF21Cu;
            goto label_2df21c;
        }
    }
    ctx->pc = 0x2DF1ECu;
    // 0x2df1ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1f4: 0xc0b7c8c  jal         func_2DF230
    ctx->pc = 0x2DF1F4u;
    SET_GPR_U32(ctx, 31, 0x2DF1FCu);
    ctx->pc = 0x2DF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF230u, 0x2DF1F4u, 0x2DF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1FCu;
label_2df1fc:
    // 0x2df1fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df200: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df208: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF208u;
    {
        const bool branch_taken_0x2df208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df208) {
            ctx->pc = 0x2DF21Cu;
            goto label_2df21c;
        }
    }
    ctx->pc = 0x2DF210u;
    // 0x2df210: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df214: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF214u;
    SET_GPR_U32(ctx, 31, 0x2DF21Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF214u, 0x2DF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF21Cu;
label_2df21c:
    // 0x2df21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df224: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df228: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF230u;
}
