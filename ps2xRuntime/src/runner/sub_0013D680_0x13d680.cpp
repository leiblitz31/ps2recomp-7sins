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

// Function: sub_0013D680
// Address: 0x13d680 - 0x13d6f0
void sub_0013D680_0x13d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D680_0x13d680");
#endif

    switch (ctx->pc) {
        case 0x13d6bcu: goto label_13d6bc;
        case 0x13d6dcu: goto label_13d6dc;
        default: break;
    }

    ctx->pc = 0x13d680u;

    // 0x13d680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d68c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13d68cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x13d690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d694: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13D694u;
    {
        const bool branch_taken_0x13d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d694) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D69Cu;
    // 0x13d69c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13d6a0: 0x24633790  addiu       $v1, $v1, 0x3790
    ctx->pc = 0x13d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14224));
    // 0x13d6a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d6ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6b4: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x13D6B4u;
    SET_GPR_U32(ctx, 31, 0x13D6BCu);
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x13D6B4u, 0x13D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6BCu;
label_13d6bc:
    // 0x13d6bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x13d6bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d6c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d6c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d6c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D6C8u;
    {
        const bool branch_taken_0x13d6c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13d6c8) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D6D0u;
    // 0x13d6d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x13D6D4u;
    SET_GPR_U32(ctx, 31, 0x13D6DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x13D6D4u, 0x13D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6DCu;
label_13d6dc:
    // 0x13d6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D6F0u;
}
