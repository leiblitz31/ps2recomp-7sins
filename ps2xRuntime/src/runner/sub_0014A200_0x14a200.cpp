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

// Function: sub_0014A200
// Address: 0x14a200 - 0x14a270
void sub_0014A200_0x14a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A200_0x14a200");
#endif

    switch (ctx->pc) {
        case 0x14a228u: goto label_14a228;
        case 0x14a238u: goto label_14a238;
        case 0x14a258u: goto label_14a258;
        default: break;
    }

    ctx->pc = 0x14a200u;

    // 0x14a200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a20c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14a20cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14a210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a214: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A214u;
    {
        const bool branch_taken_0x14a214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a214) {
            ctx->pc = 0x14A258u;
            goto label_14a258;
        }
    }
    ctx->pc = 0x14A21Cu;
    // 0x14a21c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a220: 0xc0528b8  jal         func_14A2E0
    ctx->pc = 0x14A220u;
    SET_GPR_U32(ctx, 31, 0x14A228u);
    ctx->pc = 0x14A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2E0u, 0x14A220u, 0x14A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A228u;
label_14a228:
    // 0x14a228: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a230: 0xc05289c  jal         func_14A270
    ctx->pc = 0x14A230u;
    SET_GPR_U32(ctx, 31, 0x14A238u);
    ctx->pc = 0x14A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A270u, 0x14A230u, 0x14A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A238u;
label_14a238:
    // 0x14a238: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a23c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14a240: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14a240u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14a244: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A244u;
    {
        const bool branch_taken_0x14a244 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a244) {
            ctx->pc = 0x14A258u;
            goto label_14a258;
        }
    }
    ctx->pc = 0x14A24Cu;
    // 0x14a24c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a250: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14A250u;
    SET_GPR_U32(ctx, 31, 0x14A258u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14A250u, 0x14A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A258u;
label_14a258:
    // 0x14a258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a264: 0x3e00008  jr          $ra
    ctx->pc = 0x14A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A26Cu;
    // 0x14a26c: 0x0  nop
    ctx->pc = 0x14a26cu;
    // NOP
    ctx->pc = 0x14a270u;
}
