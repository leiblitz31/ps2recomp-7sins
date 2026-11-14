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

// Function: sub_0042A110
// Address: 0x42a110 - 0x42a178
void sub_0042A110_0x42a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A110_0x42a110");
#endif

    switch (ctx->pc) {
        case 0x42a160u: goto label_42a160;
        case 0x42a168u: goto label_42a168;
        default: break;
    }

    ctx->pc = 0x42a110u;

    // 0x42a110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42a114: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x42a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x42a118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42a11c: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x42a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x42a120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42a124: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x42a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x42a128: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x42a128u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4)); // MMIO: 0x10003c10
    // 0x42a12c: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x42a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x42a130: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x42a130u;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 4)); // MMIO: 0x10003810
    // 0x42a134: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x42a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x42a138: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x42a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x42a13c: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x42a13cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_fbrst);
    // 0x42a140: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x42a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x42a144: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x42a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x42a148: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x42a148u;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x42a14c: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x42a14cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x42a150: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x42a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x42a154: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x42a154u;
    ctx->vu0_fbrst = GPR_U32(ctx, 2) & 0x00000C0Cu;
    // 0x42a158: 0xc0beff2  jal         func_2FBFC8
    ctx->pc = 0x42A158u;
    SET_GPR_U32(ctx, 31, 0x42A160u);
    ctx->pc = 0x2FBFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBFC8u, 0x42A158u, 0x42A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A160u;
label_42a160:
    // 0x42a160: 0xc0be306  jal         func_2F8C18
    ctx->pc = 0x42A160u;
    SET_GPR_U32(ctx, 31, 0x42A168u);
    ctx->pc = 0x42A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A160u;
    // 0x42a164: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8C18u, 0x42A160u, 0x42A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A168u;
label_42a168:
    // 0x42a168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a16c: 0x3e00008  jr          $ra
    ctx->pc = 0x42A16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A16Cu;
        // 0x42a170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A174u;
    // 0x42a174: 0x0  nop
    ctx->pc = 0x42a174u;
    // NOP
    ctx->pc = 0x42a178u;
}
