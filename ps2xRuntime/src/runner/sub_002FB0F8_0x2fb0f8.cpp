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

// Function: sub_002FB0F8
// Address: 0x2fb0f8 - 0x2fb138
void sub_002FB0F8_0x2fb0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB0F8_0x2fb0f8");
#endif

    switch (ctx->pc) {
        case 0x2fb110u: goto label_2fb110;
        case 0x2fb128u: goto label_2fb128;
        default: break;
    }

    ctx->pc = 0x2fb0f8u;

    // 0x2fb0f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb0fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fb100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fb100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fb104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fb108: 0xc0bec1a  jal         func_2FB068
    ctx->pc = 0x2FB108u;
    SET_GPR_U32(ctx, 31, 0x2FB110u);
    ctx->pc = 0x2FB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB108u;
    // 0x2fb10c: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB068u, 0x2FB108u, 0x2FB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB110u;
label_2fb110:
    // 0x2fb110: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x2fb110u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fb114: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fb114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb118: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2fb118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fb11c: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x2fb11cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x2fb120: 0xc0bef40  jal         func_2FBD00
    ctx->pc = 0x2FB120u;
    SET_GPR_U32(ctx, 31, 0x2FB128u);
    ctx->pc = 0x2FB124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB120u;
    // 0x2fb124: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD00u, 0x2FB120u, 0x2FB128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB128u;
label_2fb128:
    // 0x2fb128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb12c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB12Cu;
        // 0x2fb130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB134u;
    // 0x2fb134: 0x0  nop
    ctx->pc = 0x2fb134u;
    // NOP
    ctx->pc = 0x2fb138u;
}
