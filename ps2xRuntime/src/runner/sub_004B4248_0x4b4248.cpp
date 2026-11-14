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

// Function: sub_004B4248
// Address: 0x4b4248 - 0x4b4290
void sub_004B4248_0x4b4248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4248_0x4b4248");
#endif

    ctx->pc = 0x4b4248u;

    // 0x4b4248: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4b4248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4b424c: 0x8c627c80  lw          $v0, 0x7C80($v1)
    ctx->pc = 0x4b424cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5F7C80u));
    // 0x4b4250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4250u;
    {
        const bool branch_taken_0x4b4250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4250u;
        // 0x4b4254: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4250) {
            ctx->pc = 0x4B4260u;
            goto label_4b4260;
        }
    }
    ctx->pc = 0x4B4258u;
    // 0x4b4258: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4258u;
        // 0x4b425c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4260u;
label_4b4260:
    // 0x4b4260: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b4260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b4264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4268: 0x2463ee50  addiu       $v1, $v1, -0x11B0
    ctx->pc = 0x4b4268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962768));
    // 0x4b426c: 0x90640008  lbu         $a0, 0x8($v1)
    ctx->pc = 0x4b426cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x65EE58u));
    // 0x4b4270: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x4b4270u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x65EE64u));
    // 0x4b4274: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4b4274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b4278: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x4b4278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b427c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b4280: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4b4280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b4284: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4b4284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b4288: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4288u;
        // 0x4b428c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4290u;
}
