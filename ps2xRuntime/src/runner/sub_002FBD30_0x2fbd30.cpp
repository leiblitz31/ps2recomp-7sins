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

// Function: sub_002FBD30
// Address: 0x2fbd30 - 0x2fbd88
void sub_002FBD30_0x2fbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBD30_0x2fbd30");
#endif

    switch (ctx->pc) {
        case 0x2fbd48u: goto label_2fbd48;
        case 0x2fbd78u: goto label_2fbd78;
        default: break;
    }

    ctx->pc = 0x2fbd30u;

    // 0x2fbd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fbd34: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2fbd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2fbd38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbd3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fbd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fbd40: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FBD40u;
    SET_GPR_U32(ctx, 31, 0x2FBD48u);
    ctx->pc = 0x2FBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD40u;
    // 0x2fbd44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FBD40u, 0x2FBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD48u;
label_2fbd48:
    // 0x2fbd48: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x2fbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x2fbd4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fbd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fbd50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2fbd50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbd54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fbd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbd58: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x2fbd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x2fbd5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2fbd5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fbd60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2fbd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fbd64: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x2fbd64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fbd68: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2fbd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbd6c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2fbd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbd70: 0xc0bec32  jal         func_2FB0C8
    ctx->pc = 0x2FBD70u;
    SET_GPR_U32(ctx, 31, 0x2FBD78u);
    ctx->pc = 0x2FBD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD70u;
    // 0x2fbd74: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0C8u, 0x2FBD70u, 0x2FBD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD78u;
label_2fbd78:
    // 0x2fbd78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fbd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD7Cu;
        // 0x2fbd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBD84u;
    // 0x2fbd84: 0x0  nop
    ctx->pc = 0x2fbd84u;
    // NOP
    ctx->pc = 0x2fbd88u;
}
