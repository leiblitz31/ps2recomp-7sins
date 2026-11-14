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

// Function: sub_0014A140
// Address: 0x14a140 - 0x14a1a0
void sub_0014A140_0x14a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A140_0x14a140");
#endif

    switch (ctx->pc) {
        case 0x14a16cu: goto label_14a16c;
        case 0x14a18cu: goto label_14a18c;
        default: break;
    }

    ctx->pc = 0x14a140u;

    // 0x14a140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a14c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14a14cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14a150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a154: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A154u;
    {
        const bool branch_taken_0x14a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a154) {
            ctx->pc = 0x14A18Cu;
            goto label_14a18c;
        }
    }
    ctx->pc = 0x14A15Cu;
    // 0x14a15c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a164: 0xc052868  jal         func_14A1A0
    ctx->pc = 0x14A164u;
    SET_GPR_U32(ctx, 31, 0x14A16Cu);
    ctx->pc = 0x14A1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A1A0u, 0x14A164u, 0x14A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A16Cu;
label_14a16c:
    // 0x14a16c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a170: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14a174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14a174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14a178: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A178u;
    {
        const bool branch_taken_0x14a178 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a178) {
            ctx->pc = 0x14A18Cu;
            goto label_14a18c;
        }
    }
    ctx->pc = 0x14A180u;
    // 0x14a180: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a184: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14A184u;
    SET_GPR_U32(ctx, 31, 0x14A18Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14A184u, 0x14A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A18Cu;
label_14a18c:
    // 0x14a18c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a194: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a198: 0x3e00008  jr          $ra
    ctx->pc = 0x14A198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A1A0u;
}
