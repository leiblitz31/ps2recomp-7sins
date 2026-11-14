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

// Function: sub_004689A0
// Address: 0x4689a0 - 0x468a10
void sub_004689A0_0x4689a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004689A0_0x4689a0");
#endif

    switch (ctx->pc) {
        case 0x4689dcu: goto label_4689dc;
        case 0x4689fcu: goto label_4689fc;
        default: break;
    }

    ctx->pc = 0x4689a0u;

    // 0x4689a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4689a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4689a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4689a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4689a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4689a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4689ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4689acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4689b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4689b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4689b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4689B4u;
    {
        const bool branch_taken_0x4689b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4689b4) {
            ctx->pc = 0x4689FCu;
            goto label_4689fc;
        }
    }
    ctx->pc = 0x4689BCu;
    // 0x4689bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4689bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x4689c0: 0x24636c60  addiu       $v1, $v1, 0x6C60
    ctx->pc = 0x4689c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27744));
    // 0x4689c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4689c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4689c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4689cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4689ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4689d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4689d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4689d4: 0xc11a250  jal         func_468940
    ctx->pc = 0x4689D4u;
    SET_GPR_U32(ctx, 31, 0x4689DCu);
    ctx->pc = 0x468940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468940u, 0x4689D4u, 0x4689DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4689DCu;
label_4689dc:
    // 0x4689dc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x4689dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4689e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4689e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4689e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4689e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4689e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4689E8u;
    {
        const bool branch_taken_0x4689e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4689e8) {
            ctx->pc = 0x4689FCu;
            goto label_4689fc;
        }
    }
    ctx->pc = 0x4689F0u;
    // 0x4689f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4689f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4689f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x4689F4u;
    SET_GPR_U32(ctx, 31, 0x4689FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4689F4u, 0x4689FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4689FCu;
label_4689fc:
    // 0x4689fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4689fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468a04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x468a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x468a08: 0x3e00008  jr          $ra
    ctx->pc = 0x468A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468A10u;
}
