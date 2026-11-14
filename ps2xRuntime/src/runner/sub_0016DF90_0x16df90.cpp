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

// Function: sub_0016DF90
// Address: 0x16df90 - 0x16e000
void sub_0016DF90_0x16df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DF90_0x16df90");
#endif

    switch (ctx->pc) {
        case 0x16dfccu: goto label_16dfcc;
        case 0x16dfecu: goto label_16dfec;
        default: break;
    }

    ctx->pc = 0x16df90u;

    // 0x16df90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16df94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16df98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16df98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16df9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x16dfa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dfa4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16DFA4u;
    {
        const bool branch_taken_0x16dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dfa4) {
            ctx->pc = 0x16DFECu;
            goto label_16dfec;
        }
    }
    ctx->pc = 0x16DFACu;
    // 0x16dfac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16dfb0: 0x24633d10  addiu       $v1, $v1, 0x3D10
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15632));
    // 0x16dfb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dfb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16dfbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dfc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfc4: 0xc055950  jal         func_156540
    ctx->pc = 0x16DFC4u;
    SET_GPR_U32(ctx, 31, 0x16DFCCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x16DFC4u, 0x16DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFCCu;
label_16dfcc:
    // 0x16dfcc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dfd0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dfd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16dfd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16dfd8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DFD8u;
    {
        const bool branch_taken_0x16dfd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16dfd8) {
            ctx->pc = 0x16DFECu;
            goto label_16dfec;
        }
    }
    ctx->pc = 0x16DFE0u;
    // 0x16dfe0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dfe4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16DFE4u;
    SET_GPR_U32(ctx, 31, 0x16DFECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16DFE4u, 0x16DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFECu;
label_16dfec:
    // 0x16dfec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dff4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16dff8: 0x3e00008  jr          $ra
    ctx->pc = 0x16DFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E000u;
}
