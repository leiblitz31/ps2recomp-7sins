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

// Function: sub_003B1FA0
// Address: 0x3b1fa0 - 0x3b1ff8
void sub_003B1FA0_0x3b1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1FA0_0x3b1fa0");
#endif

    switch (ctx->pc) {
        case 0x3b1fc4u: goto label_3b1fc4;
        case 0x3b1fd0u: goto label_3b1fd0;
        default: break;
    }

    ctx->pc = 0x3b1fa0u;

    // 0x3b1fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1fa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b1fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1fac: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3b1facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3b1fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b1fb4: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3b1fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3b1fb8: 0x8e110528  lw          $s1, 0x528($s0)
    ctx->pc = 0x3b1fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61D3A8u));
    // 0x3b1fbc: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3B1FBCu;
    SET_GPR_U32(ctx, 31, 0x3B1FC4u);
    ctx->pc = 0x3B1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FBCu;
    // 0x3b1fc0: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B1FBCu, 0x3B1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1FC4u;
label_3b1fc4:
    // 0x3b1fc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b1fc8: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B1FC8u;
    SET_GPR_U32(ctx, 31, 0x3B1FD0u);
    ctx->pc = 0x3B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FC8u;
    // 0x3b1fcc: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B1FC8u, 0x3B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1FD0u;
label_3b1fd0:
    // 0x3b1fd0: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x3b1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
    // 0x3b1fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1fd8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3b1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3b1fdc: 0x8e020528  lw          $v0, 0x528($s0)
    ctx->pc = 0x3b1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x3b1fe0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3b1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3b1fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b1fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b1fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FF0u;
        // 0x3b1ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1FF8u;
}
