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

// Function: sub_00413710
// Address: 0x413710 - 0x413768
void sub_00413710_0x413710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413710_0x413710");
#endif

    ctx->pc = 0x413710u;

    // 0x413710: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x413710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x413714: 0x8f89bdec  lw          $t1, -0x4214($gp)
    ctx->pc = 0x413714u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950380)));
    // 0x413718: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x413718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x41371c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x41371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x413720: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x413720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x413724: 0x24423a88  addiu       $v0, $v0, 0x3A88
    ctx->pc = 0x413724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14984));
    // 0x413728: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x413728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x41372c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x41372cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x413730: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x413730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x413734: 0x24c639f0  addiu       $a2, $a2, 0x39F0
    ctx->pc = 0x413734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14832));
    // 0x413738: 0x24e737d8  addiu       $a3, $a3, 0x37D8
    ctx->pc = 0x413738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14296));
    // 0x41373c: 0x25083c58  addiu       $t0, $t0, 0x3C58
    ctx->pc = 0x41373cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15448));
    // 0x413740: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x413740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x413744: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x413744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x413748: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x413748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41374c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x41374cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x413750: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x413750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x413754: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x413754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x413758: 0xaf89bdec  sw          $t1, -0x4214($gp)
    ctx->pc = 0x413758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950380), GPR_U32(ctx, 9));
    // 0x41375c: 0x3e00008  jr          $ra
    ctx->pc = 0x41375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41375Cu;
        // 0x413760: 0xaf85bde8  sw          $a1, -0x4218($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413764u;
    // 0x413764: 0x0  nop
    ctx->pc = 0x413764u;
    // NOP
    ctx->pc = 0x413768u;
}
