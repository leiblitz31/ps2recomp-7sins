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

// Function: sub_002DF230
// Address: 0x2df230 - 0x2df290
void sub_002DF230_0x2df230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF230_0x2df230");
#endif

    switch (ctx->pc) {
        case 0x2df25cu: goto label_2df25c;
        case 0x2df27cu: goto label_2df27c;
        default: break;
    }

    ctx->pc = 0x2df230u;

    // 0x2df230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df23c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df23cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df244: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF244u;
    {
        const bool branch_taken_0x2df244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df244) {
            ctx->pc = 0x2DF27Cu;
            goto label_2df27c;
        }
    }
    ctx->pc = 0x2DF24Cu;
    // 0x2df24c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df250: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2df250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df254: 0xc0b7ca4  jal         func_2DF290
    ctx->pc = 0x2DF254u;
    SET_GPR_U32(ctx, 31, 0x2DF25Cu);
    ctx->pc = 0x2DF290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF290u, 0x2DF254u, 0x2DF25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF25Cu;
label_2df25c:
    // 0x2df25c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df25cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df260: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF268u;
    {
        const bool branch_taken_0x2df268 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df268) {
            ctx->pc = 0x2DF27Cu;
            goto label_2df27c;
        }
    }
    ctx->pc = 0x2DF270u;
    // 0x2df270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df274: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF274u;
    SET_GPR_U32(ctx, 31, 0x2DF27Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF274u, 0x2DF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF27Cu;
label_2df27c:
    // 0x2df27c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df284: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df288: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF290u;
}
