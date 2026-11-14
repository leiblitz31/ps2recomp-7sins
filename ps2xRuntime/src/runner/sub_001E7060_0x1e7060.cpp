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

// Function: sub_001E7060
// Address: 0x1e7060 - 0x1e70e0
void sub_001E7060_0x1e7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7060_0x1e7060");
#endif

    switch (ctx->pc) {
        case 0x1e70acu: goto label_1e70ac;
        case 0x1e70ccu: goto label_1e70cc;
        default: break;
    }

    ctx->pc = 0x1e7060u;

    // 0x1e7060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7064: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7068: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7070u;
    // 0x1e7070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e7078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e707c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1e707cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7084: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7084u;
    {
        const bool branch_taken_0x1e7084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7084) {
            ctx->pc = 0x1E70CCu;
            goto label_1e70cc;
        }
    }
    ctx->pc = 0x1E708Cu;
    // 0x1e708c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e7090: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x1e7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
    // 0x1e7094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e7098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e709c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e70a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e70a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70a4: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1E70A4u;
    SET_GPR_U32(ctx, 31, 0x1E70ACu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1E70A4u, 0x1E70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70ACu;
label_1e70ac:
    // 0x1e70ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1e70acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e70b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e70b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e70b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e70b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E70B8u;
    {
        const bool branch_taken_0x1e70b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e70b8) {
            ctx->pc = 0x1E70CCu;
            goto label_1e70cc;
        }
    }
    ctx->pc = 0x1E70C0u;
    // 0x1e70c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e70c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1E70C4u;
    SET_GPR_U32(ctx, 31, 0x1E70CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1E70C4u, 0x1E70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70CCu;
label_1e70cc:
    // 0x1e70cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e70d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e70d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e70d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e70d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E70D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E70D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E70E0u;
}
