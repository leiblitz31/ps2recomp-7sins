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

// Function: sub_00294580
// Address: 0x294580 - 0x2945e0
void sub_00294580_0x294580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294580_0x294580");
#endif

    switch (ctx->pc) {
        case 0x2945bcu: goto label_2945bc;
        default: break;
    }

    ctx->pc = 0x294580u;

    // 0x294580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29458c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x294590: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x294590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x294594: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294598: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x294598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29459c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29459Cu;
    {
        const bool branch_taken_0x29459c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29459c) {
            ctx->pc = 0x2945BCu;
            goto label_2945bc;
        }
    }
    ctx->pc = 0x2945A4u;
    // 0x2945a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2945a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945a8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2945a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2945ac: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x2945acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
    // 0x2945b0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2945b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2945b4: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x2945B4u;
    SET_GPR_U32(ctx, 31, 0x2945BCu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x2945B4u, 0x2945BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945BCu;
label_2945bc:
    // 0x2945bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2945bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2945c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2945c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2945c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2945c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2945c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2945c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2945cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2945CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2945D4u;
    // 0x2945d4: 0x0  nop
    ctx->pc = 0x2945d4u;
    // NOP
    // 0x2945d8: 0x0  nop
    ctx->pc = 0x2945d8u;
    // NOP
    // 0x2945dc: 0x0  nop
    ctx->pc = 0x2945dcu;
    // NOP
    ctx->pc = 0x2945e0u;
}
