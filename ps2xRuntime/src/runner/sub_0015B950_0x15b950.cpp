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

// Function: sub_0015B950
// Address: 0x15b950 - 0x15b9b0
void sub_0015B950_0x15b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B950_0x15b950");
#endif

    switch (ctx->pc) {
        case 0x15b97cu: goto label_15b97c;
        case 0x15b99cu: goto label_15b99c;
        default: break;
    }

    ctx->pc = 0x15b950u;

    // 0x15b950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b95c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15b95cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x15b960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b964: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15B964u;
    {
        const bool branch_taken_0x15b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b964) {
            ctx->pc = 0x15B99Cu;
            goto label_15b99c;
        }
    }
    ctx->pc = 0x15B96Cu;
    // 0x15b96c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b974: 0xc056e6c  jal         func_15B9B0
    ctx->pc = 0x15B974u;
    SET_GPR_U32(ctx, 31, 0x15B97Cu);
    ctx->pc = 0x15B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B9B0u, 0x15B974u, 0x15B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B97Cu;
label_15b97c:
    // 0x15b97c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b980: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b984: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b988: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B988u;
    {
        const bool branch_taken_0x15b988 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b988) {
            ctx->pc = 0x15B99Cu;
            goto label_15b99c;
        }
    }
    ctx->pc = 0x15B990u;
    // 0x15b990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b994: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15B994u;
    SET_GPR_U32(ctx, 31, 0x15B99Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15B994u, 0x15B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B99Cu;
label_15b99c:
    // 0x15b99c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b9a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B9B0u;
}
