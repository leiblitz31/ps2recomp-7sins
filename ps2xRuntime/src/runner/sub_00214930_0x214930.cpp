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

// Function: sub_00214930
// Address: 0x214930 - 0x214990
void sub_00214930_0x214930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214930_0x214930");
#endif

    switch (ctx->pc) {
        case 0x21495cu: goto label_21495c;
        case 0x21497cu: goto label_21497c;
        default: break;
    }

    ctx->pc = 0x214930u;

    // 0x214930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21493c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21493cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x214940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214944: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214944) {
            ctx->pc = 0x21497Cu;
            goto label_21497c;
        }
    }
    ctx->pc = 0x21494Cu;
    // 0x21494c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21494cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214954: 0xc085170  jal         func_2145C0
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 31, 0x21495Cu);
    ctx->pc = 0x2145C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2145C0u, 0x214954u, 0x21495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214960: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x214964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x214964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x214968: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214968u;
    {
        const bool branch_taken_0x214968 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x214968) {
            ctx->pc = 0x21497Cu;
            goto label_21497c;
        }
    }
    ctx->pc = 0x214970u;
    // 0x214970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214974: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x214974u;
    SET_GPR_U32(ctx, 31, 0x21497Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x214974u, 0x21497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21497Cu;
label_21497c:
    // 0x21497c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214984: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x214984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x214988: 0x3e00008  jr          $ra
    ctx->pc = 0x214988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214990u;
}
