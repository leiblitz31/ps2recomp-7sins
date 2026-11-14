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

// Function: sub_0047AB40
// Address: 0x47ab40 - 0x47abc0
void sub_0047AB40_0x47ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AB40_0x47ab40");
#endif

    switch (ctx->pc) {
        case 0x47ab74u: goto label_47ab74;
        case 0x47ab84u: goto label_47ab84;
        case 0x47aba4u: goto label_47aba4;
        default: break;
    }

    ctx->pc = 0x47ab40u;

    // 0x47ab40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47ab44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ab48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47ab4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x47ab4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x47ab50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ab54: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x47AB54u;
    {
        const bool branch_taken_0x47ab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ab54) {
            ctx->pc = 0x47ABA4u;
            goto label_47aba4;
        }
    }
    ctx->pc = 0x47AB5Cu;
    // 0x47ab5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ab60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ab64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47ab68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47ab6c: 0xc09e15c  jal         func_278570
    ctx->pc = 0x47AB6Cu;
    SET_GPR_U32(ctx, 31, 0x47AB74u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x47AB6Cu, 0x47AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AB74u;
label_47ab74:
    // 0x47ab74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ab78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab7c: 0xc11eaf0  jal         func_47ABC0
    ctx->pc = 0x47AB7Cu;
    SET_GPR_U32(ctx, 31, 0x47AB84u);
    ctx->pc = 0x47ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ABC0u, 0x47AB7Cu, 0x47AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AB84u;
label_47ab84:
    // 0x47ab84: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x47ab84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ab88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x47ab8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ab8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47ab90: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47AB90u;
    {
        const bool branch_taken_0x47ab90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47ab90) {
            ctx->pc = 0x47ABA4u;
            goto label_47aba4;
        }
    }
    ctx->pc = 0x47AB98u;
    // 0x47ab98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ab9c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x47AB9Cu;
    SET_GPR_U32(ctx, 31, 0x47ABA4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x47AB9Cu, 0x47ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ABA4u;
label_47aba4:
    // 0x47aba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47aba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47aba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47abac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47abacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x47ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47ABB8u;
    // 0x47abb8: 0x0  nop
    ctx->pc = 0x47abb8u;
    // NOP
    // 0x47abbc: 0x0  nop
    ctx->pc = 0x47abbcu;
    // NOP
    ctx->pc = 0x47abc0u;
}
