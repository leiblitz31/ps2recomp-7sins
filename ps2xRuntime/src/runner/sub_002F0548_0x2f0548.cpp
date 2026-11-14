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

// Function: sub_002F0548
// Address: 0x2f0548 - 0x2f0590
void sub_002F0548_0x2f0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0548_0x2f0548");
#endif

    ctx->pc = 0x2f0548u;

    // 0x2f0548: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f0548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f054c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f054cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f0550: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2f0550u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f0554: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f0554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2f0558: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x2f0558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
    // 0x2f055c: 0x32823  negu        $a1, $v1
    ctx->pc = 0x2f055cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2f0560: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f0564: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f0564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f0568: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2f0568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f056c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2f056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2f0570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0574: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f0574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f0578: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2f0578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f057c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2f057cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2f0580: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f0580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f0584: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2f0584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2f0588: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0588u;
        // 0x2f058c: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0590u;
}
