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

// Function: sub_00322E28
// Address: 0x322e28 - 0x322e80
void sub_00322E28_0x322e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E28_0x322e28");
#endif

    switch (ctx->pc) {
        case 0x322e5cu: goto label_322e5c;
        default: break;
    }

    ctx->pc = 0x322e28u;

    // 0x322e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322e2c: 0x8f85a5f8  lw          $a1, -0x5A08($gp)
    ctx->pc = 0x322e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944248)));
    // 0x322e30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x322e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x322e34: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x322e34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x322e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e3c: 0x8f87a5fc  lw          $a3, -0x5A04($gp)
    ctx->pc = 0x322e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944252)));
    // 0x322e40: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x322e40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x322e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322e48: 0x2508b1b8  addiu       $t0, $t0, -0x4E48
    ctx->pc = 0x322e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947256));
    // 0x322e4c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x322e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x322e50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x322e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322e54: 0xc10408c  jal         func_410230
    ctx->pc = 0x322E54u;
    SET_GPR_U32(ctx, 31, 0x322E5Cu);
    ctx->pc = 0x322E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E54u;
    // 0x322e58: 0x35290112  ori         $t1, $t1, 0x112 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)274);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x322E54u, 0x322E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E5Cu;
label_322e5c:
    // 0x322e5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x322e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e60: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x322e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x322e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322e6c: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x322e6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x322e70: 0xac83b1b4  sw          $v1, -0x4E4C($a0)
    ctx->pc = 0x322e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294947252), GPR_U32(ctx, 3));
    // 0x322e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x322e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e78: 0x3e00008  jr          $ra
    ctx->pc = 0x322E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E78u;
        // 0x322e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322E80u;
}
