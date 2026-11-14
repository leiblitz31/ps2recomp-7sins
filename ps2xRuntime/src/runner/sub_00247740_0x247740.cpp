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

// Function: sub_00247740
// Address: 0x247740 - 0x2477a0
void sub_00247740_0x247740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247740_0x247740");
#endif

    switch (ctx->pc) {
        case 0x24776cu: goto label_24776c;
        case 0x24778cu: goto label_24778c;
        default: break;
    }

    ctx->pc = 0x247740u;

    // 0x247740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24774c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24774cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x247750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247754: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247754u;
    {
        const bool branch_taken_0x247754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247754) {
            ctx->pc = 0x24778Cu;
            goto label_24778c;
        }
    }
    ctx->pc = 0x24775Cu;
    // 0x24775c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247760: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x247760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247764: 0xc091de8  jal         func_2477A0
    ctx->pc = 0x247764u;
    SET_GPR_U32(ctx, 31, 0x24776Cu);
    ctx->pc = 0x2477A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477A0u, 0x247764u, 0x24776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24776Cu;
label_24776c:
    // 0x24776c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x24776cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247770: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247778: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247778u;
    {
        const bool branch_taken_0x247778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247778) {
            ctx->pc = 0x24778Cu;
            goto label_24778c;
        }
    }
    ctx->pc = 0x247780u;
    // 0x247780: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247784: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247784u;
    SET_GPR_U32(ctx, 31, 0x24778Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247784u, 0x24778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24778Cu;
label_24778c:
    // 0x24778c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247798: 0x3e00008  jr          $ra
    ctx->pc = 0x247798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477A0u;
}
