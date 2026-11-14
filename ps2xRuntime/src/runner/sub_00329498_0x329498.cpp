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

// Function: sub_00329498
// Address: 0x329498 - 0x3294f0
void sub_00329498_0x329498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329498_0x329498");
#endif

    switch (ctx->pc) {
        case 0x3294c4u: goto label_3294c4;
        case 0x3294d4u: goto label_3294d4;
        default: break;
    }

    ctx->pc = 0x329498u;

    // 0x329498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32949c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32949cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3294a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3294a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3294a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3294a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3294a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3294a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3294ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3294acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294b0: 0x8c502320  lw          $s0, 0x2320($v0)
    ctx->pc = 0x3294b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4F2320u));
    // 0x3294b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3294b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3294b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3294bc: 0xc0ca558  jal         func_329560
    ctx->pc = 0x3294BCu;
    SET_GPR_U32(ctx, 31, 0x3294C4u);
    ctx->pc = 0x3294C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294BCu;
    // 0x3294c0: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329560u, 0x3294BCu, 0x3294C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294C4u;
label_3294c4:
    // 0x3294c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3294c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3294c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3294cc: 0xc0e3444  jal         func_38D110
    ctx->pc = 0x3294CCu;
    SET_GPR_U32(ctx, 31, 0x3294D4u);
    ctx->pc = 0x3294D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294CCu;
    // 0x3294d0: 0xac510054  sw          $s1, 0x54($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x3294CCu, 0x3294D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294D4u;
label_3294d4:
    // 0x3294d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3294d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3294d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3294dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3294dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3294e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3294e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3294e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3294e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3294e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3294E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3294ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294E8u;
        // 0x3294ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3294E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3294F0u;
}
